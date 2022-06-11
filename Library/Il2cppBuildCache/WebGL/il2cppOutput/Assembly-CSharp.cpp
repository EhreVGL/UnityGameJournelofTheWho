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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// BossArenaTimerBar
struct BossArenaTimerBar_t8103634638809D801D7D8B77BC4D6E10D50F3758;
// BossProperties
struct BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B;
// BossShoot
struct BossShoot_t103CD54ED11393A138B10A2913FBC4D86155E904;
// Bullet_Collider
struct Bullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Death_Enemy
struct Death_Enemy_tCC4978ED49531A14A0EC74D3B9504B6556D1960F;
// End
struct End_tCAD9562D0381FD04310D8A496C18ABE9B9F198CB;
// EndScene
struct EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// LevelTimer
struct LevelTimer_tFBA966E1AE8F239C6FD453D251111817F9F3911C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuScript
struct MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// OgreProperties
struct OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF;
// OrcProperties
struct OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E;
// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09;
// PlayerProperties
struct PlayerProperties_t5DC57BE893F38D5373A34437858E05F7719FA47B;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// SahneAras?
struct SahneArasU131_tBC43EA8D0246EFDD13296F638F0A8575976037F2;
// SaveObject
struct SaveObject_t22688472458678E007AE2DF2C201E709617CC595;
// Shoot
struct Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E;
// Shop
struct Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6;
// SoldItemScript
struct SoldItemScript_tAC153315E03EF6F65324C14991241CFDA489E494;
// SpikeballProperties
struct SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TimerBar
struct TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// dropItems
struct dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaveObject_t22688472458678E007AE2DF2C201E709617CC595_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03AF4AAE45F0FD9CE9D36A119A4A931D2A7620AD;
IL2CPP_EXTERN_C String_t* _stringLiteral048A1271403F6D6C7C1A396A8F807A41143B9F2D;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral070381883D9F7B441E20194F3CFAE657B19841C6;
IL2CPP_EXTERN_C String_t* _stringLiteral0F969CD926BAB20DC503C0D99A24C2913FF3A335;
IL2CPP_EXTERN_C String_t* _stringLiteral1081ADAC6768F9F1C1F8ABEB4319C2FF0B04FDE3;
IL2CPP_EXTERN_C String_t* _stringLiteral14BCA561666D2426A091D2BD0D15792C00F96D17;
IL2CPP_EXTERN_C String_t* _stringLiteral21CE972A6DADF9A4A1CAB7B35378C1B0DA401003;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral29E6F925C9FC7409A67D0465D755FA5DF465D6F0;
IL2CPP_EXTERN_C String_t* _stringLiteral2D61429A77614470501E536C4B7A7CB204B9125B;
IL2CPP_EXTERN_C String_t* _stringLiteral2FD2E2EFFA0B7B79634661311AF3DBCFEBDBF381;
IL2CPP_EXTERN_C String_t* _stringLiteral3092156429B59FC0EE4780C2DBECFBD20BB07D1F;
IL2CPP_EXTERN_C String_t* _stringLiteral3494512138997BF8DF462A5A40B1567CECF39619;
IL2CPP_EXTERN_C String_t* _stringLiteral408FD152E37B2DFABBD2458C3820E9172197E7BB;
IL2CPP_EXTERN_C String_t* _stringLiteral479AED16322B9CCD3425CD667F4E2F9504B83DFC;
IL2CPP_EXTERN_C String_t* _stringLiteral49157E42C7ADCCF5578854B7DB94A89F102F9D70;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8;
IL2CPP_EXTERN_C String_t* _stringLiteral56111A3F8AB42C12DEA810213B0342F30534179B;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral61C62681061F21B2A91C3B169A1E4BCA1F4F1F6C;
IL2CPP_EXTERN_C String_t* _stringLiteral65B7AFDBA8EABD1B13AA4A654E67DFACCB98194A;
IL2CPP_EXTERN_C String_t* _stringLiteral6C75A7DCF1FE13F0A6F405A94C36613682F71468;
IL2CPP_EXTERN_C String_t* _stringLiteral740257E73184D370700381E7B1C75C2E3378564D;
IL2CPP_EXTERN_C String_t* _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287;
IL2CPP_EXTERN_C String_t* _stringLiteral792986023063458DB5220162B09A329A539E8E90;
IL2CPP_EXTERN_C String_t* _stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral9BE4CF8258BBFA2FBCB11902E5E2380F6DD7C31F;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA4EBC3A0CFE0E64E93D5DDC757B73F7A0396241E;
IL2CPP_EXTERN_C String_t* _stringLiteralA55A291D921570C6FFFEF8839245235DD09BF889;
IL2CPP_EXTERN_C String_t* _stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764;
IL2CPP_EXTERN_C String_t* _stringLiteralAA4DA1A93F07E2E4B09F8D5E2C45905E26A45E79;
IL2CPP_EXTERN_C String_t* _stringLiteralB16CF3324CA15FF0851B0F99DD86AC638C3E0CAE;
IL2CPP_EXTERN_C String_t* _stringLiteralB2E8186527521A7F0ED93B6A1E42CCDF19494C75;
IL2CPP_EXTERN_C String_t* _stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968;
IL2CPP_EXTERN_C String_t* _stringLiteralB6D5FDD0838C61F429215FB9FCEA42E4FDC27183;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58;
IL2CPP_EXTERN_C String_t* _stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2;
IL2CPP_EXTERN_C String_t* _stringLiteralBDB44C1072A4D452DC3C2A7619DCF44D3C6F8ABD;
IL2CPP_EXTERN_C String_t* _stringLiteralBDED340C5884BBB732AC28145E72590E1D9A3C88;
IL2CPP_EXTERN_C String_t* _stringLiteralC103069815D9A42A5F789873F9DFB18604B38E2A;
IL2CPP_EXTERN_C String_t* _stringLiteralC2C4A599ED4420069476AEBE4AAAD53A25D41124;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE27176AF921CA4E99F64464CFB61C751EE5A4E0B;
IL2CPP_EXTERN_C String_t* _stringLiteralE7B3C791729B4CD03D9C884797D0EF05551F67A4;
IL2CPP_EXTERN_C String_t* _stringLiteralE8B74C0D8361515C4A139B4F4C0830C23FBC8E7C;
IL2CPP_EXTERN_C String_t* _stringLiteralEA004A438B484F9894101B1981EA22089542B0C9;
IL2CPP_EXTERN_C String_t* _stringLiteralEA119087888E360430754CC08BC7B688A60D51DA;
IL2CPP_EXTERN_C String_t* _stringLiteralEF4D39B6BB75C0F4AD720ADEF73656DAE1084207;
IL2CPP_EXTERN_C String_t* _stringLiteralEF72385C2A0E9E4222E98950F050F065588EB3BD;
IL2CPP_EXTERN_C String_t* _stringLiteralF8591E019243177659D36C84E0F0DD536C62D029;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B_m96FC506E2C249513934BD686A464F9C1B53352B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A_m0A2DF8A7E3E419BE4FE5BEA69B495900DE1F520D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisOgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF_mEFCDF2FD5B26441DD210D88B9E0A10C22FA967ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisOrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E_m643AFA823BAC8B5B37281E2B6952204AB6A8FED0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisShoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E_mC9A8C28564E9F55F78B2E3FB8A3613DFE8032F4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD_m5111AAA678B9AFE9311C94E79AB808D879209EF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C_m289A840E325C3745B478D4C754127B6B4BB01415_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;

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

struct Il2CppArrayBounds;

// System.Array


// SaveObject
struct SaveObject_t22688472458678E007AE2DF2C201E709617CC595  : public RuntimeObject
{
public:

public:
};

struct SaveObject_t22688472458678E007AE2DF2C201E709617CC595_StaticFields
{
public:
	// SaveObject SaveObject::instance
	SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(SaveObject_t22688472458678E007AE2DF2C201E709617CC595_StaticFields, ___instance_0)); }
	inline SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * get_instance_0() const { return ___instance_0; }
	inline SaveObject_t22688472458678E007AE2DF2C201E709617CC595 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.ForceMode2D
struct ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4, ___value___2)); }
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

// UnityEngine.RigidbodyType2D
struct RigidbodyType2D_tEF016AC6D4D54AF47773D68E833159CC995DF1E9 
{
public:
	// System.Int32 UnityEngine.RigidbodyType2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyType2D_tEF016AC6D4D54AF47773D68E833159CC995DF1E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
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


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// BossArenaTimerBar
struct BossArenaTimerBar_t8103634638809D801D7D8B77BC4D6E10D50F3758  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject BossArenaTimerBar::Fector
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Fector_4;
	// System.Single BossArenaTimerBar::time_count
	float ___time_count_5;
	// System.Int32 BossArenaTimerBar::time
	int32_t ___time_6;

public:
	inline static int32_t get_offset_of_Fector_4() { return static_cast<int32_t>(offsetof(BossArenaTimerBar_t8103634638809D801D7D8B77BC4D6E10D50F3758, ___Fector_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Fector_4() const { return ___Fector_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Fector_4() { return &___Fector_4; }
	inline void set_Fector_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Fector_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Fector_4), (void*)value);
	}

	inline static int32_t get_offset_of_time_count_5() { return static_cast<int32_t>(offsetof(BossArenaTimerBar_t8103634638809D801D7D8B77BC4D6E10D50F3758, ___time_count_5)); }
	inline float get_time_count_5() const { return ___time_count_5; }
	inline float* get_address_of_time_count_5() { return &___time_count_5; }
	inline void set_time_count_5(float value)
	{
		___time_count_5 = value;
	}

	inline static int32_t get_offset_of_time_6() { return static_cast<int32_t>(offsetof(BossArenaTimerBar_t8103634638809D801D7D8B77BC4D6E10D50F3758, ___time_6)); }
	inline int32_t get_time_6() const { return ___time_6; }
	inline int32_t* get_address_of_time_6() { return &___time_6; }
	inline void set_time_6(int32_t value)
	{
		___time_6 = value;
	}
};


// BossProperties
struct BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject BossProperties::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_4;
	// UnityEngine.Rigidbody2D BossProperties::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_5;
	// UnityEngine.Animator BossProperties::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_6;
	// System.Int32 BossProperties::health
	int32_t ___health_7;
	// System.Int32 BossProperties::health_hafiza
	int32_t ___health_hafiza_8;
	// UnityEngine.GameObject BossProperties::deathPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deathPrefab_9;
	// UnityEngine.GameObject BossProperties::talk
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___talk_10;
	// UnityEngine.GameObject BossProperties::Items
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Items_11;
	// System.Int32 BossProperties::ItemRandom
	int32_t ___ItemRandom_12;
	// UnityEngine.GameObject BossProperties::bulletPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bulletPrefab_13;
	// System.Single BossProperties::bulletForce
	float ___bulletForce_14;
	// System.Single BossProperties::bulletForce_hafiza
	float ___bulletForce_hafiza_15;
	// System.Single BossProperties::bullet_rate_timer
	float ___bullet_rate_timer_16;
	// System.Single BossProperties::bullet_rate_timer_hafiza
	float ___bullet_rate_timer_hafiza_17;
	// System.Int32 BossProperties::mermi_modu_degisim_sayac
	int32_t ___mermi_modu_degisim_sayac_18;
	// System.Int32 BossProperties::mermi_modu_degisim_sayac2
	int32_t ___mermi_modu_degisim_sayac2_19;
	// UnityEngine.Vector3 BossProperties::bullet_movement2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bullet_movement2_20;
	// System.Single BossProperties::talking_timer
	float ___talking_timer_21;
	// UnityEngine.Vector2 BossProperties::duvar_hesap
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___duvar_hesap_22;
	// UnityEngine.Vector2 BossProperties::movement
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___movement_23;
	// UnityEngine.Vector3 BossProperties::bullet_movement
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bullet_movement_24;
	// System.Boolean BossProperties::duvar_hesap_bool
	bool ___duvar_hesap_bool_25;
	// System.Single BossProperties::moveSpeed
	float ___moveSpeed_26;
	// System.Boolean BossProperties::isSpawnEnemies
	bool ___isSpawnEnemies_27;
	// UnityEngine.Vector2 BossProperties::spawnNoktasi
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___spawnNoktasi_28;
	// UnityEngine.Vector2 BossProperties::movement2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___movement2_29;
	// UnityEngine.GameObject[] BossProperties::Enemies
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Enemies_30;
	// System.Int32 BossProperties::whichEnemies
	int32_t ___whichEnemies_31;
	// System.Boolean BossProperties::spawning
	bool ___spawning_32;
	// UnityEngine.Vector3 BossProperties::spawn_distance
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___spawn_distance_33;
	// System.Single BossProperties::timer_spawning
	float ___timer_spawning_34;
	// System.Int32 BossProperties::timer_spawning_hafiza
	int32_t ___timer_spawning_hafiza_35;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_4() const { return ___player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___rb_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_5), (void*)value);
	}

	inline static int32_t get_offset_of_animator_6() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___animator_6)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_6() const { return ___animator_6; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_6() { return &___animator_6; }
	inline void set_animator_6(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_6), (void*)value);
	}

	inline static int32_t get_offset_of_health_7() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___health_7)); }
	inline int32_t get_health_7() const { return ___health_7; }
	inline int32_t* get_address_of_health_7() { return &___health_7; }
	inline void set_health_7(int32_t value)
	{
		___health_7 = value;
	}

	inline static int32_t get_offset_of_health_hafiza_8() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___health_hafiza_8)); }
	inline int32_t get_health_hafiza_8() const { return ___health_hafiza_8; }
	inline int32_t* get_address_of_health_hafiza_8() { return &___health_hafiza_8; }
	inline void set_health_hafiza_8(int32_t value)
	{
		___health_hafiza_8 = value;
	}

	inline static int32_t get_offset_of_deathPrefab_9() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___deathPrefab_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deathPrefab_9() const { return ___deathPrefab_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deathPrefab_9() { return &___deathPrefab_9; }
	inline void set_deathPrefab_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deathPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathPrefab_9), (void*)value);
	}

	inline static int32_t get_offset_of_talk_10() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___talk_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_talk_10() const { return ___talk_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_talk_10() { return &___talk_10; }
	inline void set_talk_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___talk_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___talk_10), (void*)value);
	}

	inline static int32_t get_offset_of_Items_11() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___Items_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Items_11() const { return ___Items_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Items_11() { return &___Items_11; }
	inline void set_Items_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Items_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_11), (void*)value);
	}

	inline static int32_t get_offset_of_ItemRandom_12() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___ItemRandom_12)); }
	inline int32_t get_ItemRandom_12() const { return ___ItemRandom_12; }
	inline int32_t* get_address_of_ItemRandom_12() { return &___ItemRandom_12; }
	inline void set_ItemRandom_12(int32_t value)
	{
		___ItemRandom_12 = value;
	}

	inline static int32_t get_offset_of_bulletPrefab_13() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___bulletPrefab_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bulletPrefab_13() const { return ___bulletPrefab_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bulletPrefab_13() { return &___bulletPrefab_13; }
	inline void set_bulletPrefab_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bulletPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_13), (void*)value);
	}

	inline static int32_t get_offset_of_bulletForce_14() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___bulletForce_14)); }
	inline float get_bulletForce_14() const { return ___bulletForce_14; }
	inline float* get_address_of_bulletForce_14() { return &___bulletForce_14; }
	inline void set_bulletForce_14(float value)
	{
		___bulletForce_14 = value;
	}

	inline static int32_t get_offset_of_bulletForce_hafiza_15() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___bulletForce_hafiza_15)); }
	inline float get_bulletForce_hafiza_15() const { return ___bulletForce_hafiza_15; }
	inline float* get_address_of_bulletForce_hafiza_15() { return &___bulletForce_hafiza_15; }
	inline void set_bulletForce_hafiza_15(float value)
	{
		___bulletForce_hafiza_15 = value;
	}

	inline static int32_t get_offset_of_bullet_rate_timer_16() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___bullet_rate_timer_16)); }
	inline float get_bullet_rate_timer_16() const { return ___bullet_rate_timer_16; }
	inline float* get_address_of_bullet_rate_timer_16() { return &___bullet_rate_timer_16; }
	inline void set_bullet_rate_timer_16(float value)
	{
		___bullet_rate_timer_16 = value;
	}

	inline static int32_t get_offset_of_bullet_rate_timer_hafiza_17() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___bullet_rate_timer_hafiza_17)); }
	inline float get_bullet_rate_timer_hafiza_17() const { return ___bullet_rate_timer_hafiza_17; }
	inline float* get_address_of_bullet_rate_timer_hafiza_17() { return &___bullet_rate_timer_hafiza_17; }
	inline void set_bullet_rate_timer_hafiza_17(float value)
	{
		___bullet_rate_timer_hafiza_17 = value;
	}

	inline static int32_t get_offset_of_mermi_modu_degisim_sayac_18() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___mermi_modu_degisim_sayac_18)); }
	inline int32_t get_mermi_modu_degisim_sayac_18() const { return ___mermi_modu_degisim_sayac_18; }
	inline int32_t* get_address_of_mermi_modu_degisim_sayac_18() { return &___mermi_modu_degisim_sayac_18; }
	inline void set_mermi_modu_degisim_sayac_18(int32_t value)
	{
		___mermi_modu_degisim_sayac_18 = value;
	}

	inline static int32_t get_offset_of_mermi_modu_degisim_sayac2_19() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___mermi_modu_degisim_sayac2_19)); }
	inline int32_t get_mermi_modu_degisim_sayac2_19() const { return ___mermi_modu_degisim_sayac2_19; }
	inline int32_t* get_address_of_mermi_modu_degisim_sayac2_19() { return &___mermi_modu_degisim_sayac2_19; }
	inline void set_mermi_modu_degisim_sayac2_19(int32_t value)
	{
		___mermi_modu_degisim_sayac2_19 = value;
	}

	inline static int32_t get_offset_of_bullet_movement2_20() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___bullet_movement2_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bullet_movement2_20() const { return ___bullet_movement2_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bullet_movement2_20() { return &___bullet_movement2_20; }
	inline void set_bullet_movement2_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bullet_movement2_20 = value;
	}

	inline static int32_t get_offset_of_talking_timer_21() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___talking_timer_21)); }
	inline float get_talking_timer_21() const { return ___talking_timer_21; }
	inline float* get_address_of_talking_timer_21() { return &___talking_timer_21; }
	inline void set_talking_timer_21(float value)
	{
		___talking_timer_21 = value;
	}

	inline static int32_t get_offset_of_duvar_hesap_22() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___duvar_hesap_22)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_duvar_hesap_22() const { return ___duvar_hesap_22; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_duvar_hesap_22() { return &___duvar_hesap_22; }
	inline void set_duvar_hesap_22(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___duvar_hesap_22 = value;
	}

	inline static int32_t get_offset_of_movement_23() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___movement_23)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_movement_23() const { return ___movement_23; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_movement_23() { return &___movement_23; }
	inline void set_movement_23(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___movement_23 = value;
	}

	inline static int32_t get_offset_of_bullet_movement_24() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___bullet_movement_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bullet_movement_24() const { return ___bullet_movement_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bullet_movement_24() { return &___bullet_movement_24; }
	inline void set_bullet_movement_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bullet_movement_24 = value;
	}

	inline static int32_t get_offset_of_duvar_hesap_bool_25() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___duvar_hesap_bool_25)); }
	inline bool get_duvar_hesap_bool_25() const { return ___duvar_hesap_bool_25; }
	inline bool* get_address_of_duvar_hesap_bool_25() { return &___duvar_hesap_bool_25; }
	inline void set_duvar_hesap_bool_25(bool value)
	{
		___duvar_hesap_bool_25 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_26() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___moveSpeed_26)); }
	inline float get_moveSpeed_26() const { return ___moveSpeed_26; }
	inline float* get_address_of_moveSpeed_26() { return &___moveSpeed_26; }
	inline void set_moveSpeed_26(float value)
	{
		___moveSpeed_26 = value;
	}

	inline static int32_t get_offset_of_isSpawnEnemies_27() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___isSpawnEnemies_27)); }
	inline bool get_isSpawnEnemies_27() const { return ___isSpawnEnemies_27; }
	inline bool* get_address_of_isSpawnEnemies_27() { return &___isSpawnEnemies_27; }
	inline void set_isSpawnEnemies_27(bool value)
	{
		___isSpawnEnemies_27 = value;
	}

	inline static int32_t get_offset_of_spawnNoktasi_28() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___spawnNoktasi_28)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_spawnNoktasi_28() const { return ___spawnNoktasi_28; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_spawnNoktasi_28() { return &___spawnNoktasi_28; }
	inline void set_spawnNoktasi_28(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___spawnNoktasi_28 = value;
	}

	inline static int32_t get_offset_of_movement2_29() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___movement2_29)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_movement2_29() const { return ___movement2_29; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_movement2_29() { return &___movement2_29; }
	inline void set_movement2_29(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___movement2_29 = value;
	}

	inline static int32_t get_offset_of_Enemies_30() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___Enemies_30)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Enemies_30() const { return ___Enemies_30; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Enemies_30() { return &___Enemies_30; }
	inline void set_Enemies_30(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Enemies_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Enemies_30), (void*)value);
	}

	inline static int32_t get_offset_of_whichEnemies_31() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___whichEnemies_31)); }
	inline int32_t get_whichEnemies_31() const { return ___whichEnemies_31; }
	inline int32_t* get_address_of_whichEnemies_31() { return &___whichEnemies_31; }
	inline void set_whichEnemies_31(int32_t value)
	{
		___whichEnemies_31 = value;
	}

	inline static int32_t get_offset_of_spawning_32() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___spawning_32)); }
	inline bool get_spawning_32() const { return ___spawning_32; }
	inline bool* get_address_of_spawning_32() { return &___spawning_32; }
	inline void set_spawning_32(bool value)
	{
		___spawning_32 = value;
	}

	inline static int32_t get_offset_of_spawn_distance_33() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___spawn_distance_33)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_spawn_distance_33() const { return ___spawn_distance_33; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_spawn_distance_33() { return &___spawn_distance_33; }
	inline void set_spawn_distance_33(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___spawn_distance_33 = value;
	}

	inline static int32_t get_offset_of_timer_spawning_34() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___timer_spawning_34)); }
	inline float get_timer_spawning_34() const { return ___timer_spawning_34; }
	inline float* get_address_of_timer_spawning_34() { return &___timer_spawning_34; }
	inline void set_timer_spawning_34(float value)
	{
		___timer_spawning_34 = value;
	}

	inline static int32_t get_offset_of_timer_spawning_hafiza_35() { return static_cast<int32_t>(offsetof(BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B, ___timer_spawning_hafiza_35)); }
	inline int32_t get_timer_spawning_hafiza_35() const { return ___timer_spawning_hafiza_35; }
	inline int32_t* get_address_of_timer_spawning_hafiza_35() { return &___timer_spawning_hafiza_35; }
	inline void set_timer_spawning_hafiza_35(int32_t value)
	{
		___timer_spawning_hafiza_35 = value;
	}
};


// BossShoot
struct BossShoot_t103CD54ED11393A138B10A2913FBC4D86155E904  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Bullet_Collider
struct Bullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Bullet_Collider::bulletPower
	int32_t ___bulletPower_4;

public:
	inline static int32_t get_offset_of_bulletPower_4() { return static_cast<int32_t>(offsetof(Bullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A, ___bulletPower_4)); }
	inline int32_t get_bulletPower_4() const { return ___bulletPower_4; }
	inline int32_t* get_address_of_bulletPower_4() { return &___bulletPower_4; }
	inline void set_bulletPower_4(int32_t value)
	{
		___bulletPower_4 = value;
	}
};


// Death_Enemy
struct Death_Enemy_tCC4978ED49531A14A0EC74D3B9504B6556D1960F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Death_Enemy::deathTime
	float ___deathTime_4;

public:
	inline static int32_t get_offset_of_deathTime_4() { return static_cast<int32_t>(offsetof(Death_Enemy_tCC4978ED49531A14A0EC74D3B9504B6556D1960F, ___deathTime_4)); }
	inline float get_deathTime_4() const { return ___deathTime_4; }
	inline float* get_address_of_deathTime_4() { return &___deathTime_4; }
	inline void set_deathTime_4(float value)
	{
		___deathTime_4 = value;
	}
};


// End
struct End_tCAD9562D0381FD04310D8A496C18ABE9B9F198CB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject End::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_4;
	// UnityEngine.Color End::colorr
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___colorr_5;
	// UnityEngine.UI.Text[] End::texts
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___texts_6;
	// System.Single End::timer2
	float ___timer2_7;
	// System.Single End::timer
	float ___timer_8;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(End_tCAD9562D0381FD04310D8A496C18ABE9B9F198CB, ___player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_4() const { return ___player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_colorr_5() { return static_cast<int32_t>(offsetof(End_tCAD9562D0381FD04310D8A496C18ABE9B9F198CB, ___colorr_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_colorr_5() const { return ___colorr_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_colorr_5() { return &___colorr_5; }
	inline void set_colorr_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___colorr_5 = value;
	}

	inline static int32_t get_offset_of_texts_6() { return static_cast<int32_t>(offsetof(End_tCAD9562D0381FD04310D8A496C18ABE9B9F198CB, ___texts_6)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_texts_6() const { return ___texts_6; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_texts_6() { return &___texts_6; }
	inline void set_texts_6(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___texts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texts_6), (void*)value);
	}

	inline static int32_t get_offset_of_timer2_7() { return static_cast<int32_t>(offsetof(End_tCAD9562D0381FD04310D8A496C18ABE9B9F198CB, ___timer2_7)); }
	inline float get_timer2_7() const { return ___timer2_7; }
	inline float* get_address_of_timer2_7() { return &___timer2_7; }
	inline void set_timer2_7(float value)
	{
		___timer2_7 = value;
	}

	inline static int32_t get_offset_of_timer_8() { return static_cast<int32_t>(offsetof(End_tCAD9562D0381FD04310D8A496C18ABE9B9F198CB, ___timer_8)); }
	inline float get_timer_8() const { return ___timer_8; }
	inline float* get_address_of_timer_8() { return &___timer_8; }
	inline void set_timer_8(float value)
	{
		___timer_8 = value;
	}
};


// EndScene
struct EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject EndScene::kari
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___kari_4;
	// UnityEngine.GameObject EndScene::loveStory
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___loveStory_5;
	// UnityEngine.GameObject EndScene::square
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___square_6;
	// UnityEngine.UI.Text EndScene::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_7;
	// UnityEngine.Color EndScene::colorr
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___colorr_8;
	// UnityEngine.Color EndScene::colorr2
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___colorr2_9;
	// UnityEngine.Rigidbody2D EndScene::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_10;
	// UnityEngine.Vector2 EndScene::movement
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___movement_11;
	// System.Single EndScene::moveSpeed
	float ___moveSpeed_12;
	// UnityEngine.Animator EndScene::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_13;
	// System.Single EndScene::timer
	float ___timer_14;
	// System.Single EndScene::timer2
	float ___timer2_15;
	// System.Single EndScene::timer3
	float ___timer3_16;

public:
	inline static int32_t get_offset_of_kari_4() { return static_cast<int32_t>(offsetof(EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1, ___kari_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_kari_4() const { return ___kari_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_kari_4() { return &___kari_4; }
	inline void set_kari_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___kari_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kari_4), (void*)value);
	}

	inline static int32_t get_offset_of_loveStory_5() { return static_cast<int32_t>(offsetof(EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1, ___loveStory_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_loveStory_5() const { return ___loveStory_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_loveStory_5() { return &___loveStory_5; }
	inline void set_loveStory_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___loveStory_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loveStory_5), (void*)value);
	}

	inline static int32_t get_offset_of_square_6() { return static_cast<int32_t>(offsetof(EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1, ___square_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_square_6() const { return ___square_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_square_6() { return &___square_6; }
	inline void set_square_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___square_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___square_6), (void*)value);
	}

	inline static int32_t get_offset_of_text_7() { return static_cast<int32_t>(offsetof(EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1, ___text_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_7() const { return ___text_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_7() { return &___text_7; }
	inline void set_text_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_7), (void*)value);
	}

	inline static int32_t get_offset_of_colorr_8() { return static_cast<int32_t>(offsetof(EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1, ___colorr_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_colorr_8() const { return ___colorr_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_colorr_8() { return &___colorr_8; }
	inline void set_colorr_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___colorr_8 = value;
	}

	inline static int32_t get_offset_of_colorr2_9() { return static_cast<int32_t>(offsetof(EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1, ___colorr2_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_colorr2_9() const { return ___colorr2_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_colorr2_9() { return &___colorr2_9; }
	inline void set_colorr2_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___colorr2_9 = value;
	}

	inline static int32_t get_offset_of_rb_10() { return static_cast<int32_t>(offsetof(EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1, ___rb_10)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_10() const { return ___rb_10; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_10() { return &___rb_10; }
	inline void set_rb_10(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_10), (void*)value);
	}

	inline static int32_t get_offset_of_movement_11() { return static_cast<int32_t>(offsetof(EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1, ___movement_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_movement_11() const { return ___movement_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_movement_11() { return &___movement_11; }
	inline void set_movement_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___movement_11 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_12() { return static_cast<int32_t>(offsetof(EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1, ___moveSpeed_12)); }
	inline float get_moveSpeed_12() const { return ___moveSpeed_12; }
	inline float* get_address_of_moveSpeed_12() { return &___moveSpeed_12; }
	inline void set_moveSpeed_12(float value)
	{
		___moveSpeed_12 = value;
	}

	inline static int32_t get_offset_of_animator_13() { return static_cast<int32_t>(offsetof(EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1, ___animator_13)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_13() const { return ___animator_13; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_13() { return &___animator_13; }
	inline void set_animator_13(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_13), (void*)value);
	}

	inline static int32_t get_offset_of_timer_14() { return static_cast<int32_t>(offsetof(EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1, ___timer_14)); }
	inline float get_timer_14() const { return ___timer_14; }
	inline float* get_address_of_timer_14() { return &___timer_14; }
	inline void set_timer_14(float value)
	{
		___timer_14 = value;
	}

	inline static int32_t get_offset_of_timer2_15() { return static_cast<int32_t>(offsetof(EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1, ___timer2_15)); }
	inline float get_timer2_15() const { return ___timer2_15; }
	inline float* get_address_of_timer2_15() { return &___timer2_15; }
	inline void set_timer2_15(float value)
	{
		___timer2_15 = value;
	}

	inline static int32_t get_offset_of_timer3_16() { return static_cast<int32_t>(offsetof(EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1, ___timer3_16)); }
	inline float get_timer3_16() const { return ___timer3_16; }
	inline float* get_address_of_timer3_16() { return &___timer3_16; }
	inline void set_timer3_16(float value)
	{
		___timer3_16 = value;
	}
};


// LevelTimer
struct LevelTimer_tFBA966E1AE8F239C6FD453D251111817F9F3911C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single LevelTimer::geriSayim
	float ___geriSayim_4;
	// System.Int32 LevelTimer::geriSayimHafiza
	int32_t ___geriSayimHafiza_5;
	// UnityEngine.GameObject LevelTimer::SayacObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SayacObject_6;
	// UnityEngine.GameObject LevelTimer::Player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Player_7;
	// System.Boolean LevelTimer::PlayertakeDamage
	bool ___PlayertakeDamage_8;
	// UnityEngine.GameObject[] LevelTimer::Respawner
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Respawner_9;
	// UnityEngine.GameObject LevelTimer::enemyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyPrefab_10;
	// System.Int32 LevelTimer::random2
	int32_t ___random2_11;
	// System.Int32 LevelTimer::randomNumber
	int32_t ___randomNumber_12;
	// System.Int32[] LevelTimer::respawner_hafiza
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___respawner_hafiza_13;

public:
	inline static int32_t get_offset_of_geriSayim_4() { return static_cast<int32_t>(offsetof(LevelTimer_tFBA966E1AE8F239C6FD453D251111817F9F3911C, ___geriSayim_4)); }
	inline float get_geriSayim_4() const { return ___geriSayim_4; }
	inline float* get_address_of_geriSayim_4() { return &___geriSayim_4; }
	inline void set_geriSayim_4(float value)
	{
		___geriSayim_4 = value;
	}

	inline static int32_t get_offset_of_geriSayimHafiza_5() { return static_cast<int32_t>(offsetof(LevelTimer_tFBA966E1AE8F239C6FD453D251111817F9F3911C, ___geriSayimHafiza_5)); }
	inline int32_t get_geriSayimHafiza_5() const { return ___geriSayimHafiza_5; }
	inline int32_t* get_address_of_geriSayimHafiza_5() { return &___geriSayimHafiza_5; }
	inline void set_geriSayimHafiza_5(int32_t value)
	{
		___geriSayimHafiza_5 = value;
	}

	inline static int32_t get_offset_of_SayacObject_6() { return static_cast<int32_t>(offsetof(LevelTimer_tFBA966E1AE8F239C6FD453D251111817F9F3911C, ___SayacObject_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SayacObject_6() const { return ___SayacObject_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SayacObject_6() { return &___SayacObject_6; }
	inline void set_SayacObject_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SayacObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SayacObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_Player_7() { return static_cast<int32_t>(offsetof(LevelTimer_tFBA966E1AE8F239C6FD453D251111817F9F3911C, ___Player_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Player_7() const { return ___Player_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Player_7() { return &___Player_7; }
	inline void set_Player_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Player_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Player_7), (void*)value);
	}

	inline static int32_t get_offset_of_PlayertakeDamage_8() { return static_cast<int32_t>(offsetof(LevelTimer_tFBA966E1AE8F239C6FD453D251111817F9F3911C, ___PlayertakeDamage_8)); }
	inline bool get_PlayertakeDamage_8() const { return ___PlayertakeDamage_8; }
	inline bool* get_address_of_PlayertakeDamage_8() { return &___PlayertakeDamage_8; }
	inline void set_PlayertakeDamage_8(bool value)
	{
		___PlayertakeDamage_8 = value;
	}

	inline static int32_t get_offset_of_Respawner_9() { return static_cast<int32_t>(offsetof(LevelTimer_tFBA966E1AE8F239C6FD453D251111817F9F3911C, ___Respawner_9)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Respawner_9() const { return ___Respawner_9; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Respawner_9() { return &___Respawner_9; }
	inline void set_Respawner_9(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Respawner_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Respawner_9), (void*)value);
	}

	inline static int32_t get_offset_of_enemyPrefab_10() { return static_cast<int32_t>(offsetof(LevelTimer_tFBA966E1AE8F239C6FD453D251111817F9F3911C, ___enemyPrefab_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyPrefab_10() const { return ___enemyPrefab_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyPrefab_10() { return &___enemyPrefab_10; }
	inline void set_enemyPrefab_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyPrefab_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyPrefab_10), (void*)value);
	}

	inline static int32_t get_offset_of_random2_11() { return static_cast<int32_t>(offsetof(LevelTimer_tFBA966E1AE8F239C6FD453D251111817F9F3911C, ___random2_11)); }
	inline int32_t get_random2_11() const { return ___random2_11; }
	inline int32_t* get_address_of_random2_11() { return &___random2_11; }
	inline void set_random2_11(int32_t value)
	{
		___random2_11 = value;
	}

	inline static int32_t get_offset_of_randomNumber_12() { return static_cast<int32_t>(offsetof(LevelTimer_tFBA966E1AE8F239C6FD453D251111817F9F3911C, ___randomNumber_12)); }
	inline int32_t get_randomNumber_12() const { return ___randomNumber_12; }
	inline int32_t* get_address_of_randomNumber_12() { return &___randomNumber_12; }
	inline void set_randomNumber_12(int32_t value)
	{
		___randomNumber_12 = value;
	}

	inline static int32_t get_offset_of_respawner_hafiza_13() { return static_cast<int32_t>(offsetof(LevelTimer_tFBA966E1AE8F239C6FD453D251111817F9F3911C, ___respawner_hafiza_13)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_respawner_hafiza_13() const { return ___respawner_hafiza_13; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_respawner_hafiza_13() { return &___respawner_hafiza_13; }
	inline void set_respawner_hafiza_13(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___respawner_hafiza_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___respawner_hafiza_13), (void*)value);
	}
};


// MenuScript
struct MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// OgreProperties
struct OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject OgreProperties::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_4;
	// UnityEngine.Transform OgreProperties::playerTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___playerTransform_5;
	// System.Single OgreProperties::moveSpeed
	float ___moveSpeed_6;
	// UnityEngine.Rigidbody2D OgreProperties::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_7;
	// UnityEngine.Animator OgreProperties::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_8;
	// System.Int32 OgreProperties::health
	int32_t ___health_9;
	// System.Boolean OgreProperties::player_zombie
	bool ___player_zombie_10;
	// UnityEngine.GameObject OgreProperties::deathPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deathPrefab_11;
	// System.Boolean OgreProperties::smokebomb
	bool ___smokebomb_12;
	// UnityEngine.GameObject[] OgreProperties::Items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Items_13;
	// System.Int32 OgreProperties::ItemRandom
	int32_t ___ItemRandom_14;
	// UnityEngine.Vector2 OgreProperties::movement
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___movement_15;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF, ___player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_4() const { return ___player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_playerTransform_5() { return static_cast<int32_t>(offsetof(OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF, ___playerTransform_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_playerTransform_5() const { return ___playerTransform_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_playerTransform_5() { return &___playerTransform_5; }
	inline void set_playerTransform_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___playerTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerTransform_5), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_6() { return static_cast<int32_t>(offsetof(OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF, ___moveSpeed_6)); }
	inline float get_moveSpeed_6() const { return ___moveSpeed_6; }
	inline float* get_address_of_moveSpeed_6() { return &___moveSpeed_6; }
	inline void set_moveSpeed_6(float value)
	{
		___moveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_rb_7() { return static_cast<int32_t>(offsetof(OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF, ___rb_7)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_7() const { return ___rb_7; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_7() { return &___rb_7; }
	inline void set_rb_7(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_7), (void*)value);
	}

	inline static int32_t get_offset_of_animator_8() { return static_cast<int32_t>(offsetof(OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF, ___animator_8)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_8() const { return ___animator_8; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_8() { return &___animator_8; }
	inline void set_animator_8(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_8), (void*)value);
	}

	inline static int32_t get_offset_of_health_9() { return static_cast<int32_t>(offsetof(OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF, ___health_9)); }
	inline int32_t get_health_9() const { return ___health_9; }
	inline int32_t* get_address_of_health_9() { return &___health_9; }
	inline void set_health_9(int32_t value)
	{
		___health_9 = value;
	}

	inline static int32_t get_offset_of_player_zombie_10() { return static_cast<int32_t>(offsetof(OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF, ___player_zombie_10)); }
	inline bool get_player_zombie_10() const { return ___player_zombie_10; }
	inline bool* get_address_of_player_zombie_10() { return &___player_zombie_10; }
	inline void set_player_zombie_10(bool value)
	{
		___player_zombie_10 = value;
	}

	inline static int32_t get_offset_of_deathPrefab_11() { return static_cast<int32_t>(offsetof(OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF, ___deathPrefab_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deathPrefab_11() const { return ___deathPrefab_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deathPrefab_11() { return &___deathPrefab_11; }
	inline void set_deathPrefab_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deathPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathPrefab_11), (void*)value);
	}

	inline static int32_t get_offset_of_smokebomb_12() { return static_cast<int32_t>(offsetof(OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF, ___smokebomb_12)); }
	inline bool get_smokebomb_12() const { return ___smokebomb_12; }
	inline bool* get_address_of_smokebomb_12() { return &___smokebomb_12; }
	inline void set_smokebomb_12(bool value)
	{
		___smokebomb_12 = value;
	}

	inline static int32_t get_offset_of_Items_13() { return static_cast<int32_t>(offsetof(OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF, ___Items_13)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Items_13() const { return ___Items_13; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Items_13() { return &___Items_13; }
	inline void set_Items_13(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Items_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_13), (void*)value);
	}

	inline static int32_t get_offset_of_ItemRandom_14() { return static_cast<int32_t>(offsetof(OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF, ___ItemRandom_14)); }
	inline int32_t get_ItemRandom_14() const { return ___ItemRandom_14; }
	inline int32_t* get_address_of_ItemRandom_14() { return &___ItemRandom_14; }
	inline void set_ItemRandom_14(int32_t value)
	{
		___ItemRandom_14 = value;
	}

	inline static int32_t get_offset_of_movement_15() { return static_cast<int32_t>(offsetof(OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF, ___movement_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_movement_15() const { return ___movement_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_movement_15() { return &___movement_15; }
	inline void set_movement_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___movement_15 = value;
	}
};


// OrcProperties
struct OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject OrcProperties::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_4;
	// UnityEngine.Transform OrcProperties::playerTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___playerTransform_5;
	// System.Single OrcProperties::moveSpeed
	float ___moveSpeed_6;
	// UnityEngine.Rigidbody2D OrcProperties::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_7;
	// UnityEngine.Animator OrcProperties::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_8;
	// System.Int32 OrcProperties::health
	int32_t ___health_9;
	// System.Boolean OrcProperties::player_zombie
	bool ___player_zombie_10;
	// UnityEngine.GameObject OrcProperties::deathPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deathPrefab_11;
	// System.Boolean OrcProperties::smokebomb
	bool ___smokebomb_12;
	// UnityEngine.GameObject[] OrcProperties::Items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Items_13;
	// System.Int32 OrcProperties::ItemRandom
	int32_t ___ItemRandom_14;
	// UnityEngine.Vector2 OrcProperties::movement
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___movement_15;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E, ___player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_4() const { return ___player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_playerTransform_5() { return static_cast<int32_t>(offsetof(OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E, ___playerTransform_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_playerTransform_5() const { return ___playerTransform_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_playerTransform_5() { return &___playerTransform_5; }
	inline void set_playerTransform_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___playerTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerTransform_5), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_6() { return static_cast<int32_t>(offsetof(OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E, ___moveSpeed_6)); }
	inline float get_moveSpeed_6() const { return ___moveSpeed_6; }
	inline float* get_address_of_moveSpeed_6() { return &___moveSpeed_6; }
	inline void set_moveSpeed_6(float value)
	{
		___moveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_rb_7() { return static_cast<int32_t>(offsetof(OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E, ___rb_7)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_7() const { return ___rb_7; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_7() { return &___rb_7; }
	inline void set_rb_7(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_7), (void*)value);
	}

	inline static int32_t get_offset_of_animator_8() { return static_cast<int32_t>(offsetof(OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E, ___animator_8)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_8() const { return ___animator_8; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_8() { return &___animator_8; }
	inline void set_animator_8(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_8), (void*)value);
	}

	inline static int32_t get_offset_of_health_9() { return static_cast<int32_t>(offsetof(OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E, ___health_9)); }
	inline int32_t get_health_9() const { return ___health_9; }
	inline int32_t* get_address_of_health_9() { return &___health_9; }
	inline void set_health_9(int32_t value)
	{
		___health_9 = value;
	}

	inline static int32_t get_offset_of_player_zombie_10() { return static_cast<int32_t>(offsetof(OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E, ___player_zombie_10)); }
	inline bool get_player_zombie_10() const { return ___player_zombie_10; }
	inline bool* get_address_of_player_zombie_10() { return &___player_zombie_10; }
	inline void set_player_zombie_10(bool value)
	{
		___player_zombie_10 = value;
	}

	inline static int32_t get_offset_of_deathPrefab_11() { return static_cast<int32_t>(offsetof(OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E, ___deathPrefab_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deathPrefab_11() const { return ___deathPrefab_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deathPrefab_11() { return &___deathPrefab_11; }
	inline void set_deathPrefab_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deathPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathPrefab_11), (void*)value);
	}

	inline static int32_t get_offset_of_smokebomb_12() { return static_cast<int32_t>(offsetof(OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E, ___smokebomb_12)); }
	inline bool get_smokebomb_12() const { return ___smokebomb_12; }
	inline bool* get_address_of_smokebomb_12() { return &___smokebomb_12; }
	inline void set_smokebomb_12(bool value)
	{
		___smokebomb_12 = value;
	}

	inline static int32_t get_offset_of_Items_13() { return static_cast<int32_t>(offsetof(OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E, ___Items_13)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Items_13() const { return ___Items_13; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Items_13() { return &___Items_13; }
	inline void set_Items_13(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Items_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_13), (void*)value);
	}

	inline static int32_t get_offset_of_ItemRandom_14() { return static_cast<int32_t>(offsetof(OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E, ___ItemRandom_14)); }
	inline int32_t get_ItemRandom_14() const { return ___ItemRandom_14; }
	inline int32_t* get_address_of_ItemRandom_14() { return &___ItemRandom_14; }
	inline void set_ItemRandom_14(int32_t value)
	{
		___ItemRandom_14 = value;
	}

	inline static int32_t get_offset_of_movement_15() { return static_cast<int32_t>(offsetof(OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E, ___movement_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_movement_15() const { return ___movement_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_movement_15() { return &___movement_15; }
	inline void set_movement_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___movement_15 = value;
	}
};


// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text PlayerMovement::healthText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___healthText_4;
	// UnityEngine.UI.Text PlayerMovement::coinText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___coinText_5;
	// System.Single PlayerMovement::moveSpeed
	float ___moveSpeed_6;
	// System.Int32 PlayerMovement::health
	int32_t ___health_7;
	// System.Int32 PlayerMovement::coin
	int32_t ___coin_8;
	// UnityEngine.Rigidbody2D PlayerMovement::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_9;
	// UnityEngine.Animator PlayerMovement::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_10;
	// UnityEngine.Animator PlayerMovement::animator2
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator2_11;
	// UnityEngine.Sprite[] PlayerMovement::sprite
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___sprite_12;
	// System.Boolean PlayerMovement::isDamage
	bool ___isDamage_13;
	// UnityEngine.SpriteRenderer PlayerMovement::spriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spriteRenderer_14;
	// UnityEngine.GameObject PlayerMovement::deathPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deathPrefab_15;
	// System.Single PlayerMovement::damageTime
	float ___damageTime_16;
	// System.Int32 PlayerMovement::collusion_enemy_health
	int32_t ___collusion_enemy_health_17;
	// UnityEngine.Vector2 PlayerMovement::movement
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___movement_18;
	// System.Boolean PlayerMovement::scene_collide
	bool ___scene_collide_19;
	// System.String PlayerMovement::sellingItem
	String_t* ___sellingItem_20;
	// System.Single PlayerMovement::bootSpeed
	float ___bootSpeed_21;
	// UnityEngine.GameObject PlayerMovement::AlinanItems
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___AlinanItems_22;
	// UnityEngine.Vector2 PlayerMovement::AlinanItemPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___AlinanItemPosition_23;
	// System.Boolean PlayerMovement::theEnd
	bool ___theEnd_24;

public:
	inline static int32_t get_offset_of_healthText_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___healthText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_healthText_4() const { return ___healthText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_healthText_4() { return &___healthText_4; }
	inline void set_healthText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___healthText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthText_4), (void*)value);
	}

	inline static int32_t get_offset_of_coinText_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___coinText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_coinText_5() const { return ___coinText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_coinText_5() { return &___coinText_5; }
	inline void set_coinText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___coinText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coinText_5), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___moveSpeed_6)); }
	inline float get_moveSpeed_6() const { return ___moveSpeed_6; }
	inline float* get_address_of_moveSpeed_6() { return &___moveSpeed_6; }
	inline void set_moveSpeed_6(float value)
	{
		___moveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_health_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___health_7)); }
	inline int32_t get_health_7() const { return ___health_7; }
	inline int32_t* get_address_of_health_7() { return &___health_7; }
	inline void set_health_7(int32_t value)
	{
		___health_7 = value;
	}

	inline static int32_t get_offset_of_coin_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___coin_8)); }
	inline int32_t get_coin_8() const { return ___coin_8; }
	inline int32_t* get_address_of_coin_8() { return &___coin_8; }
	inline void set_coin_8(int32_t value)
	{
		___coin_8 = value;
	}

	inline static int32_t get_offset_of_rb_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___rb_9)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_9() const { return ___rb_9; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_9() { return &___rb_9; }
	inline void set_rb_9(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_9), (void*)value);
	}

	inline static int32_t get_offset_of_animator_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___animator_10)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_10() const { return ___animator_10; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_10() { return &___animator_10; }
	inline void set_animator_10(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_10), (void*)value);
	}

	inline static int32_t get_offset_of_animator2_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___animator2_11)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator2_11() const { return ___animator2_11; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator2_11() { return &___animator2_11; }
	inline void set_animator2_11(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator2_11), (void*)value);
	}

	inline static int32_t get_offset_of_sprite_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___sprite_12)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_sprite_12() const { return ___sprite_12; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_sprite_12() { return &___sprite_12; }
	inline void set_sprite_12(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___sprite_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_12), (void*)value);
	}

	inline static int32_t get_offset_of_isDamage_13() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___isDamage_13)); }
	inline bool get_isDamage_13() const { return ___isDamage_13; }
	inline bool* get_address_of_isDamage_13() { return &___isDamage_13; }
	inline void set_isDamage_13(bool value)
	{
		___isDamage_13 = value;
	}

	inline static int32_t get_offset_of_spriteRenderer_14() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___spriteRenderer_14)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spriteRenderer_14() const { return ___spriteRenderer_14; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spriteRenderer_14() { return &___spriteRenderer_14; }
	inline void set_spriteRenderer_14(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spriteRenderer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_14), (void*)value);
	}

	inline static int32_t get_offset_of_deathPrefab_15() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___deathPrefab_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deathPrefab_15() const { return ___deathPrefab_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deathPrefab_15() { return &___deathPrefab_15; }
	inline void set_deathPrefab_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deathPrefab_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathPrefab_15), (void*)value);
	}

	inline static int32_t get_offset_of_damageTime_16() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___damageTime_16)); }
	inline float get_damageTime_16() const { return ___damageTime_16; }
	inline float* get_address_of_damageTime_16() { return &___damageTime_16; }
	inline void set_damageTime_16(float value)
	{
		___damageTime_16 = value;
	}

	inline static int32_t get_offset_of_collusion_enemy_health_17() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___collusion_enemy_health_17)); }
	inline int32_t get_collusion_enemy_health_17() const { return ___collusion_enemy_health_17; }
	inline int32_t* get_address_of_collusion_enemy_health_17() { return &___collusion_enemy_health_17; }
	inline void set_collusion_enemy_health_17(int32_t value)
	{
		___collusion_enemy_health_17 = value;
	}

	inline static int32_t get_offset_of_movement_18() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___movement_18)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_movement_18() const { return ___movement_18; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_movement_18() { return &___movement_18; }
	inline void set_movement_18(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___movement_18 = value;
	}

	inline static int32_t get_offset_of_scene_collide_19() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___scene_collide_19)); }
	inline bool get_scene_collide_19() const { return ___scene_collide_19; }
	inline bool* get_address_of_scene_collide_19() { return &___scene_collide_19; }
	inline void set_scene_collide_19(bool value)
	{
		___scene_collide_19 = value;
	}

	inline static int32_t get_offset_of_sellingItem_20() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___sellingItem_20)); }
	inline String_t* get_sellingItem_20() const { return ___sellingItem_20; }
	inline String_t** get_address_of_sellingItem_20() { return &___sellingItem_20; }
	inline void set_sellingItem_20(String_t* value)
	{
		___sellingItem_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sellingItem_20), (void*)value);
	}

	inline static int32_t get_offset_of_bootSpeed_21() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___bootSpeed_21)); }
	inline float get_bootSpeed_21() const { return ___bootSpeed_21; }
	inline float* get_address_of_bootSpeed_21() { return &___bootSpeed_21; }
	inline void set_bootSpeed_21(float value)
	{
		___bootSpeed_21 = value;
	}

	inline static int32_t get_offset_of_AlinanItems_22() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___AlinanItems_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_AlinanItems_22() const { return ___AlinanItems_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_AlinanItems_22() { return &___AlinanItems_22; }
	inline void set_AlinanItems_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___AlinanItems_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AlinanItems_22), (void*)value);
	}

	inline static int32_t get_offset_of_AlinanItemPosition_23() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___AlinanItemPosition_23)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_AlinanItemPosition_23() const { return ___AlinanItemPosition_23; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_AlinanItemPosition_23() { return &___AlinanItemPosition_23; }
	inline void set_AlinanItemPosition_23(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___AlinanItemPosition_23 = value;
	}

	inline static int32_t get_offset_of_theEnd_24() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___theEnd_24)); }
	inline bool get_theEnd_24() const { return ___theEnd_24; }
	inline bool* get_address_of_theEnd_24() { return &___theEnd_24; }
	inline void set_theEnd_24(bool value)
	{
		___theEnd_24 = value;
	}
};


// PlayerProperties
struct PlayerProperties_t5DC57BE893F38D5373A34437858E05F7719FA47B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean PlayerProperties::zombie
	bool ___zombie_4;

public:
	inline static int32_t get_offset_of_zombie_4() { return static_cast<int32_t>(offsetof(PlayerProperties_t5DC57BE893F38D5373A34437858E05F7719FA47B, ___zombie_4)); }
	inline bool get_zombie_4() const { return ___zombie_4; }
	inline bool* get_address_of_zombie_4() { return &___zombie_4; }
	inline void set_zombie_4(bool value)
	{
		___zombie_4 = value;
	}
};


// SahneAras?
struct SahneArasU131_tBC43EA8D0246EFDD13296F638F0A8575976037F2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody2D SahneAras?::player
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___player_4;
	// UnityEngine.GameObject SahneAras?::Camera
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Camera_5;
	// UnityEngine.Animator SahneAras?::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_6;
	// System.Single SahneAras?::timer
	float ___timer_7;
	// System.Single SahneAras?::timer2
	float ___timer2_8;
	// System.Single SahneAras?::moveSpeed
	float ___moveSpeed_9;
	// System.Single SahneAras?::xxx
	float ___xxx_10;
	// UnityEngine.Vector2 SahneAras?::movement
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___movement_11;
	// UnityEngine.Vector3 SahneAras?::movement3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___movement3_12;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(SahneArasU131_tBC43EA8D0246EFDD13296F638F0A8575976037F2, ___player_4)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_player_4() const { return ___player_4; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_Camera_5() { return static_cast<int32_t>(offsetof(SahneArasU131_tBC43EA8D0246EFDD13296F638F0A8575976037F2, ___Camera_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Camera_5() const { return ___Camera_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Camera_5() { return &___Camera_5; }
	inline void set_Camera_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Camera_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Camera_5), (void*)value);
	}

	inline static int32_t get_offset_of_animator_6() { return static_cast<int32_t>(offsetof(SahneArasU131_tBC43EA8D0246EFDD13296F638F0A8575976037F2, ___animator_6)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_6() const { return ___animator_6; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_6() { return &___animator_6; }
	inline void set_animator_6(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_6), (void*)value);
	}

	inline static int32_t get_offset_of_timer_7() { return static_cast<int32_t>(offsetof(SahneArasU131_tBC43EA8D0246EFDD13296F638F0A8575976037F2, ___timer_7)); }
	inline float get_timer_7() const { return ___timer_7; }
	inline float* get_address_of_timer_7() { return &___timer_7; }
	inline void set_timer_7(float value)
	{
		___timer_7 = value;
	}

	inline static int32_t get_offset_of_timer2_8() { return static_cast<int32_t>(offsetof(SahneArasU131_tBC43EA8D0246EFDD13296F638F0A8575976037F2, ___timer2_8)); }
	inline float get_timer2_8() const { return ___timer2_8; }
	inline float* get_address_of_timer2_8() { return &___timer2_8; }
	inline void set_timer2_8(float value)
	{
		___timer2_8 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_9() { return static_cast<int32_t>(offsetof(SahneArasU131_tBC43EA8D0246EFDD13296F638F0A8575976037F2, ___moveSpeed_9)); }
	inline float get_moveSpeed_9() const { return ___moveSpeed_9; }
	inline float* get_address_of_moveSpeed_9() { return &___moveSpeed_9; }
	inline void set_moveSpeed_9(float value)
	{
		___moveSpeed_9 = value;
	}

	inline static int32_t get_offset_of_xxx_10() { return static_cast<int32_t>(offsetof(SahneArasU131_tBC43EA8D0246EFDD13296F638F0A8575976037F2, ___xxx_10)); }
	inline float get_xxx_10() const { return ___xxx_10; }
	inline float* get_address_of_xxx_10() { return &___xxx_10; }
	inline void set_xxx_10(float value)
	{
		___xxx_10 = value;
	}

	inline static int32_t get_offset_of_movement_11() { return static_cast<int32_t>(offsetof(SahneArasU131_tBC43EA8D0246EFDD13296F638F0A8575976037F2, ___movement_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_movement_11() const { return ___movement_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_movement_11() { return &___movement_11; }
	inline void set_movement_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___movement_11 = value;
	}

	inline static int32_t get_offset_of_movement3_12() { return static_cast<int32_t>(offsetof(SahneArasU131_tBC43EA8D0246EFDD13296F638F0A8575976037F2, ___movement3_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_movement3_12() const { return ___movement3_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_movement3_12() { return &___movement3_12; }
	inline void set_movement3_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___movement3_12 = value;
	}
};


// Shoot
struct Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Shoot::playerTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___playerTransform_4;
	// UnityEngine.Vector2 Shoot::player_position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___player_position_5;
	// UnityEngine.GameObject Shoot::bulletPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bulletPrefab_6;
	// UnityEngine.GameObject Shoot::barrel_distance
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___barrel_distance_7;
	// UnityEngine.Vector2 Shoot::barrel_distance_position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___barrel_distance_position_8;
	// System.Single Shoot::bulletForce
	float ___bulletForce_9;
	// System.Single Shoot::rate_time
	float ___rate_time_10;
	// System.Single Shoot::rate_time_hafiza
	float ___rate_time_hafiza_11;
	// System.Boolean Shoot::shotgun
	bool ___shotgun_12;
	// System.Boolean Shoot::wagonwheel
	bool ___wagonwheel_13;
	// System.Boolean Shoot::sheriffbadge
	bool ___sheriffbadge_14;
	// System.Single Shoot::gunShootingSpeed
	float ___gunShootingSpeed_15;
	// System.Int32 Shoot::bulletPower
	int32_t ___bulletPower_16;
	// UnityEngine.Vector2 Shoot::barrel_distance_position_hafiza
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___barrel_distance_position_hafiza_17;

public:
	inline static int32_t get_offset_of_playerTransform_4() { return static_cast<int32_t>(offsetof(Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E, ___playerTransform_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_playerTransform_4() const { return ___playerTransform_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_playerTransform_4() { return &___playerTransform_4; }
	inline void set_playerTransform_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___playerTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of_player_position_5() { return static_cast<int32_t>(offsetof(Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E, ___player_position_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_player_position_5() const { return ___player_position_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_player_position_5() { return &___player_position_5; }
	inline void set_player_position_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___player_position_5 = value;
	}

	inline static int32_t get_offset_of_bulletPrefab_6() { return static_cast<int32_t>(offsetof(Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E, ___bulletPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bulletPrefab_6() const { return ___bulletPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bulletPrefab_6() { return &___bulletPrefab_6; }
	inline void set_bulletPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bulletPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_barrel_distance_7() { return static_cast<int32_t>(offsetof(Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E, ___barrel_distance_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_barrel_distance_7() const { return ___barrel_distance_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_barrel_distance_7() { return &___barrel_distance_7; }
	inline void set_barrel_distance_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___barrel_distance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___barrel_distance_7), (void*)value);
	}

	inline static int32_t get_offset_of_barrel_distance_position_8() { return static_cast<int32_t>(offsetof(Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E, ___barrel_distance_position_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_barrel_distance_position_8() const { return ___barrel_distance_position_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_barrel_distance_position_8() { return &___barrel_distance_position_8; }
	inline void set_barrel_distance_position_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___barrel_distance_position_8 = value;
	}

	inline static int32_t get_offset_of_bulletForce_9() { return static_cast<int32_t>(offsetof(Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E, ___bulletForce_9)); }
	inline float get_bulletForce_9() const { return ___bulletForce_9; }
	inline float* get_address_of_bulletForce_9() { return &___bulletForce_9; }
	inline void set_bulletForce_9(float value)
	{
		___bulletForce_9 = value;
	}

	inline static int32_t get_offset_of_rate_time_10() { return static_cast<int32_t>(offsetof(Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E, ___rate_time_10)); }
	inline float get_rate_time_10() const { return ___rate_time_10; }
	inline float* get_address_of_rate_time_10() { return &___rate_time_10; }
	inline void set_rate_time_10(float value)
	{
		___rate_time_10 = value;
	}

	inline static int32_t get_offset_of_rate_time_hafiza_11() { return static_cast<int32_t>(offsetof(Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E, ___rate_time_hafiza_11)); }
	inline float get_rate_time_hafiza_11() const { return ___rate_time_hafiza_11; }
	inline float* get_address_of_rate_time_hafiza_11() { return &___rate_time_hafiza_11; }
	inline void set_rate_time_hafiza_11(float value)
	{
		___rate_time_hafiza_11 = value;
	}

	inline static int32_t get_offset_of_shotgun_12() { return static_cast<int32_t>(offsetof(Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E, ___shotgun_12)); }
	inline bool get_shotgun_12() const { return ___shotgun_12; }
	inline bool* get_address_of_shotgun_12() { return &___shotgun_12; }
	inline void set_shotgun_12(bool value)
	{
		___shotgun_12 = value;
	}

	inline static int32_t get_offset_of_wagonwheel_13() { return static_cast<int32_t>(offsetof(Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E, ___wagonwheel_13)); }
	inline bool get_wagonwheel_13() const { return ___wagonwheel_13; }
	inline bool* get_address_of_wagonwheel_13() { return &___wagonwheel_13; }
	inline void set_wagonwheel_13(bool value)
	{
		___wagonwheel_13 = value;
	}

	inline static int32_t get_offset_of_sheriffbadge_14() { return static_cast<int32_t>(offsetof(Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E, ___sheriffbadge_14)); }
	inline bool get_sheriffbadge_14() const { return ___sheriffbadge_14; }
	inline bool* get_address_of_sheriffbadge_14() { return &___sheriffbadge_14; }
	inline void set_sheriffbadge_14(bool value)
	{
		___sheriffbadge_14 = value;
	}

	inline static int32_t get_offset_of_gunShootingSpeed_15() { return static_cast<int32_t>(offsetof(Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E, ___gunShootingSpeed_15)); }
	inline float get_gunShootingSpeed_15() const { return ___gunShootingSpeed_15; }
	inline float* get_address_of_gunShootingSpeed_15() { return &___gunShootingSpeed_15; }
	inline void set_gunShootingSpeed_15(float value)
	{
		___gunShootingSpeed_15 = value;
	}

	inline static int32_t get_offset_of_bulletPower_16() { return static_cast<int32_t>(offsetof(Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E, ___bulletPower_16)); }
	inline int32_t get_bulletPower_16() const { return ___bulletPower_16; }
	inline int32_t* get_address_of_bulletPower_16() { return &___bulletPower_16; }
	inline void set_bulletPower_16(int32_t value)
	{
		___bulletPower_16 = value;
	}

	inline static int32_t get_offset_of_barrel_distance_position_hafiza_17() { return static_cast<int32_t>(offsetof(Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E, ___barrel_distance_position_hafiza_17)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_barrel_distance_position_hafiza_17() const { return ___barrel_distance_position_hafiza_17; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_barrel_distance_position_hafiza_17() { return &___barrel_distance_position_hafiza_17; }
	inline void set_barrel_distance_position_hafiza_17(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___barrel_distance_position_hafiza_17 = value;
	}
};


// Shop
struct Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Shop::tuccar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tuccar_4;
	// UnityEngine.GameObject Shop::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_5;
	// UnityEngine.Rigidbody2D Shop::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_6;
	// UnityEngine.Animator Shop::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_7;
	// UnityEngine.Vector2 Shop::movement
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___movement_8;
	// System.Single Shop::location
	float ___location_9;
	// UnityEngine.GameObject Shop::ShopWindow
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ShopWindow_10;
	// UnityEngine.GameObject[] Shop::sellingItemsSlot1
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___sellingItemsSlot1_11;
	// UnityEngine.GameObject[] Shop::sellingItemsSlot2
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___sellingItemsSlot2_12;
	// UnityEngine.GameObject[] Shop::sellingItemsSlot3
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___sellingItemsSlot3_13;
	// UnityEngine.GameObject Shop::sellingItemsSlotAll
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___sellingItemsSlotAll_14;
	// UnityEngine.GameObject Shop::soldItems
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___soldItems_15;
	// UnityEngine.UI.Text[] Shop::priceTexts
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___priceTexts_16;
	// System.Int32 Shop::i
	int32_t ___i_17;
	// System.Int32[] Shop::hafizaslot
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hafizaslot_18;
	// UnityEngine.Vector2 Shop::position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position_19;
	// System.Boolean Shop::itemlerEklendi
	bool ___itemlerEklendi_20;
	// System.String Shop::collision_name
	String_t* ___collision_name_21;
	// System.Double Shop::time
	double ___time_22;

public:
	inline static int32_t get_offset_of_tuccar_4() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___tuccar_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tuccar_4() const { return ___tuccar_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tuccar_4() { return &___tuccar_4; }
	inline void set_tuccar_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tuccar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tuccar_4), (void*)value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___player_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_5() const { return ___player_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}

	inline static int32_t get_offset_of_rb_6() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___rb_6)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_6() const { return ___rb_6; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_6() { return &___rb_6; }
	inline void set_rb_6(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_6), (void*)value);
	}

	inline static int32_t get_offset_of_animator_7() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___animator_7)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_7() const { return ___animator_7; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_7() { return &___animator_7; }
	inline void set_animator_7(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_7), (void*)value);
	}

	inline static int32_t get_offset_of_movement_8() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___movement_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_movement_8() const { return ___movement_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_movement_8() { return &___movement_8; }
	inline void set_movement_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___movement_8 = value;
	}

	inline static int32_t get_offset_of_location_9() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___location_9)); }
	inline float get_location_9() const { return ___location_9; }
	inline float* get_address_of_location_9() { return &___location_9; }
	inline void set_location_9(float value)
	{
		___location_9 = value;
	}

	inline static int32_t get_offset_of_ShopWindow_10() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___ShopWindow_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ShopWindow_10() const { return ___ShopWindow_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ShopWindow_10() { return &___ShopWindow_10; }
	inline void set_ShopWindow_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ShopWindow_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShopWindow_10), (void*)value);
	}

	inline static int32_t get_offset_of_sellingItemsSlot1_11() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___sellingItemsSlot1_11)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_sellingItemsSlot1_11() const { return ___sellingItemsSlot1_11; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_sellingItemsSlot1_11() { return &___sellingItemsSlot1_11; }
	inline void set_sellingItemsSlot1_11(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___sellingItemsSlot1_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sellingItemsSlot1_11), (void*)value);
	}

	inline static int32_t get_offset_of_sellingItemsSlot2_12() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___sellingItemsSlot2_12)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_sellingItemsSlot2_12() const { return ___sellingItemsSlot2_12; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_sellingItemsSlot2_12() { return &___sellingItemsSlot2_12; }
	inline void set_sellingItemsSlot2_12(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___sellingItemsSlot2_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sellingItemsSlot2_12), (void*)value);
	}

	inline static int32_t get_offset_of_sellingItemsSlot3_13() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___sellingItemsSlot3_13)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_sellingItemsSlot3_13() const { return ___sellingItemsSlot3_13; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_sellingItemsSlot3_13() { return &___sellingItemsSlot3_13; }
	inline void set_sellingItemsSlot3_13(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___sellingItemsSlot3_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sellingItemsSlot3_13), (void*)value);
	}

	inline static int32_t get_offset_of_sellingItemsSlotAll_14() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___sellingItemsSlotAll_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_sellingItemsSlotAll_14() const { return ___sellingItemsSlotAll_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_sellingItemsSlotAll_14() { return &___sellingItemsSlotAll_14; }
	inline void set_sellingItemsSlotAll_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___sellingItemsSlotAll_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sellingItemsSlotAll_14), (void*)value);
	}

	inline static int32_t get_offset_of_soldItems_15() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___soldItems_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_soldItems_15() const { return ___soldItems_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_soldItems_15() { return &___soldItems_15; }
	inline void set_soldItems_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___soldItems_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soldItems_15), (void*)value);
	}

	inline static int32_t get_offset_of_priceTexts_16() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___priceTexts_16)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_priceTexts_16() const { return ___priceTexts_16; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_priceTexts_16() { return &___priceTexts_16; }
	inline void set_priceTexts_16(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___priceTexts_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___priceTexts_16), (void*)value);
	}

	inline static int32_t get_offset_of_i_17() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___i_17)); }
	inline int32_t get_i_17() const { return ___i_17; }
	inline int32_t* get_address_of_i_17() { return &___i_17; }
	inline void set_i_17(int32_t value)
	{
		___i_17 = value;
	}

	inline static int32_t get_offset_of_hafizaslot_18() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___hafizaslot_18)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_hafizaslot_18() const { return ___hafizaslot_18; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_hafizaslot_18() { return &___hafizaslot_18; }
	inline void set_hafizaslot_18(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___hafizaslot_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hafizaslot_18), (void*)value);
	}

	inline static int32_t get_offset_of_position_19() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___position_19)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_position_19() const { return ___position_19; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_position_19() { return &___position_19; }
	inline void set_position_19(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___position_19 = value;
	}

	inline static int32_t get_offset_of_itemlerEklendi_20() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___itemlerEklendi_20)); }
	inline bool get_itemlerEklendi_20() const { return ___itemlerEklendi_20; }
	inline bool* get_address_of_itemlerEklendi_20() { return &___itemlerEklendi_20; }
	inline void set_itemlerEklendi_20(bool value)
	{
		___itemlerEklendi_20 = value;
	}

	inline static int32_t get_offset_of_collision_name_21() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___collision_name_21)); }
	inline String_t* get_collision_name_21() const { return ___collision_name_21; }
	inline String_t** get_address_of_collision_name_21() { return &___collision_name_21; }
	inline void set_collision_name_21(String_t* value)
	{
		___collision_name_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collision_name_21), (void*)value);
	}

	inline static int32_t get_offset_of_time_22() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___time_22)); }
	inline double get_time_22() const { return ___time_22; }
	inline double* get_address_of_time_22() { return &___time_22; }
	inline void set_time_22(double value)
	{
		___time_22 = value;
	}
};


// SoldItemScript
struct SoldItemScript_tAC153315E03EF6F65324C14991241CFDA489E494  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] SoldItemScript::boots
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___boots_4;
	// UnityEngine.GameObject[] SoldItemScript::guns
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___guns_5;
	// UnityEngine.GameObject[] SoldItemScript::ammos
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___ammos_6;
	// UnityEngine.GameObject[] SoldItemScript::dropItems
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___dropItems_7;
	// System.Int32 SoldItemScript::boot
	int32_t ___boot_8;
	// System.Int32 SoldItemScript::gun
	int32_t ___gun_9;
	// System.Int32 SoldItemScript::ammo
	int32_t ___ammo_10;
	// System.Boolean SoldItemScript::check
	bool ___check_11;
	// UnityEngine.Vector2 SoldItemScript::AlinanItemPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___AlinanItemPosition_12;
	// UnityEngine.Vector2 SoldItemScript::dropItemPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___dropItemPosition_13;
	// System.String SoldItemScript::dropItemName
	String_t* ___dropItemName_14;

public:
	inline static int32_t get_offset_of_boots_4() { return static_cast<int32_t>(offsetof(SoldItemScript_tAC153315E03EF6F65324C14991241CFDA489E494, ___boots_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_boots_4() const { return ___boots_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_boots_4() { return &___boots_4; }
	inline void set_boots_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___boots_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boots_4), (void*)value);
	}

	inline static int32_t get_offset_of_guns_5() { return static_cast<int32_t>(offsetof(SoldItemScript_tAC153315E03EF6F65324C14991241CFDA489E494, ___guns_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_guns_5() const { return ___guns_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_guns_5() { return &___guns_5; }
	inline void set_guns_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___guns_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___guns_5), (void*)value);
	}

	inline static int32_t get_offset_of_ammos_6() { return static_cast<int32_t>(offsetof(SoldItemScript_tAC153315E03EF6F65324C14991241CFDA489E494, ___ammos_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_ammos_6() const { return ___ammos_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_ammos_6() { return &___ammos_6; }
	inline void set_ammos_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___ammos_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ammos_6), (void*)value);
	}

	inline static int32_t get_offset_of_dropItems_7() { return static_cast<int32_t>(offsetof(SoldItemScript_tAC153315E03EF6F65324C14991241CFDA489E494, ___dropItems_7)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_dropItems_7() const { return ___dropItems_7; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_dropItems_7() { return &___dropItems_7; }
	inline void set_dropItems_7(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___dropItems_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dropItems_7), (void*)value);
	}

	inline static int32_t get_offset_of_boot_8() { return static_cast<int32_t>(offsetof(SoldItemScript_tAC153315E03EF6F65324C14991241CFDA489E494, ___boot_8)); }
	inline int32_t get_boot_8() const { return ___boot_8; }
	inline int32_t* get_address_of_boot_8() { return &___boot_8; }
	inline void set_boot_8(int32_t value)
	{
		___boot_8 = value;
	}

	inline static int32_t get_offset_of_gun_9() { return static_cast<int32_t>(offsetof(SoldItemScript_tAC153315E03EF6F65324C14991241CFDA489E494, ___gun_9)); }
	inline int32_t get_gun_9() const { return ___gun_9; }
	inline int32_t* get_address_of_gun_9() { return &___gun_9; }
	inline void set_gun_9(int32_t value)
	{
		___gun_9 = value;
	}

	inline static int32_t get_offset_of_ammo_10() { return static_cast<int32_t>(offsetof(SoldItemScript_tAC153315E03EF6F65324C14991241CFDA489E494, ___ammo_10)); }
	inline int32_t get_ammo_10() const { return ___ammo_10; }
	inline int32_t* get_address_of_ammo_10() { return &___ammo_10; }
	inline void set_ammo_10(int32_t value)
	{
		___ammo_10 = value;
	}

	inline static int32_t get_offset_of_check_11() { return static_cast<int32_t>(offsetof(SoldItemScript_tAC153315E03EF6F65324C14991241CFDA489E494, ___check_11)); }
	inline bool get_check_11() const { return ___check_11; }
	inline bool* get_address_of_check_11() { return &___check_11; }
	inline void set_check_11(bool value)
	{
		___check_11 = value;
	}

	inline static int32_t get_offset_of_AlinanItemPosition_12() { return static_cast<int32_t>(offsetof(SoldItemScript_tAC153315E03EF6F65324C14991241CFDA489E494, ___AlinanItemPosition_12)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_AlinanItemPosition_12() const { return ___AlinanItemPosition_12; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_AlinanItemPosition_12() { return &___AlinanItemPosition_12; }
	inline void set_AlinanItemPosition_12(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___AlinanItemPosition_12 = value;
	}

	inline static int32_t get_offset_of_dropItemPosition_13() { return static_cast<int32_t>(offsetof(SoldItemScript_tAC153315E03EF6F65324C14991241CFDA489E494, ___dropItemPosition_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_dropItemPosition_13() const { return ___dropItemPosition_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_dropItemPosition_13() { return &___dropItemPosition_13; }
	inline void set_dropItemPosition_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___dropItemPosition_13 = value;
	}

	inline static int32_t get_offset_of_dropItemName_14() { return static_cast<int32_t>(offsetof(SoldItemScript_tAC153315E03EF6F65324C14991241CFDA489E494, ___dropItemName_14)); }
	inline String_t* get_dropItemName_14() const { return ___dropItemName_14; }
	inline String_t** get_address_of_dropItemName_14() { return &___dropItemName_14; }
	inline void set_dropItemName_14(String_t* value)
	{
		___dropItemName_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dropItemName_14), (void*)value);
	}
};


// SpikeballProperties
struct SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single SpikeballProperties::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.Rigidbody2D SpikeballProperties::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_5;
	// UnityEngine.Animator SpikeballProperties::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_6;
	// System.Int32 SpikeballProperties::health
	int32_t ___health_7;
	// UnityEngine.GameObject SpikeballProperties::deathPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deathPrefab_8;
	// System.Boolean SpikeballProperties::smokebomb
	bool ___smokebomb_9;
	// System.Boolean SpikeballProperties::checkResult
	bool ___checkResult_10;
	// UnityEngine.Vector3 SpikeballProperties::new_position_loc
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___new_position_loc_11;
	// System.Boolean SpikeballProperties::health_buff
	bool ___health_buff_12;
	// UnityEngine.GameObject[] SpikeballProperties::Items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Items_13;
	// System.Int32 SpikeballProperties::ItemRandom
	int32_t ___ItemRandom_14;
	// System.Single SpikeballProperties::timeCounter
	float ___timeCounter_15;
	// System.Single SpikeballProperties::timeCounterStorage
	float ___timeCounterStorage_16;
	// UnityEngine.Vector2 SpikeballProperties::movementStorage
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___movementStorage_17;
	// UnityEngine.Vector2 SpikeballProperties::movement
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___movement_18;

public:
	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD, ___rb_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_5), (void*)value);
	}

	inline static int32_t get_offset_of_animator_6() { return static_cast<int32_t>(offsetof(SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD, ___animator_6)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_6() const { return ___animator_6; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_6() { return &___animator_6; }
	inline void set_animator_6(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_6), (void*)value);
	}

	inline static int32_t get_offset_of_health_7() { return static_cast<int32_t>(offsetof(SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD, ___health_7)); }
	inline int32_t get_health_7() const { return ___health_7; }
	inline int32_t* get_address_of_health_7() { return &___health_7; }
	inline void set_health_7(int32_t value)
	{
		___health_7 = value;
	}

	inline static int32_t get_offset_of_deathPrefab_8() { return static_cast<int32_t>(offsetof(SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD, ___deathPrefab_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deathPrefab_8() const { return ___deathPrefab_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deathPrefab_8() { return &___deathPrefab_8; }
	inline void set_deathPrefab_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deathPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathPrefab_8), (void*)value);
	}

	inline static int32_t get_offset_of_smokebomb_9() { return static_cast<int32_t>(offsetof(SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD, ___smokebomb_9)); }
	inline bool get_smokebomb_9() const { return ___smokebomb_9; }
	inline bool* get_address_of_smokebomb_9() { return &___smokebomb_9; }
	inline void set_smokebomb_9(bool value)
	{
		___smokebomb_9 = value;
	}

	inline static int32_t get_offset_of_checkResult_10() { return static_cast<int32_t>(offsetof(SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD, ___checkResult_10)); }
	inline bool get_checkResult_10() const { return ___checkResult_10; }
	inline bool* get_address_of_checkResult_10() { return &___checkResult_10; }
	inline void set_checkResult_10(bool value)
	{
		___checkResult_10 = value;
	}

	inline static int32_t get_offset_of_new_position_loc_11() { return static_cast<int32_t>(offsetof(SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD, ___new_position_loc_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_new_position_loc_11() const { return ___new_position_loc_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_new_position_loc_11() { return &___new_position_loc_11; }
	inline void set_new_position_loc_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___new_position_loc_11 = value;
	}

	inline static int32_t get_offset_of_health_buff_12() { return static_cast<int32_t>(offsetof(SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD, ___health_buff_12)); }
	inline bool get_health_buff_12() const { return ___health_buff_12; }
	inline bool* get_address_of_health_buff_12() { return &___health_buff_12; }
	inline void set_health_buff_12(bool value)
	{
		___health_buff_12 = value;
	}

	inline static int32_t get_offset_of_Items_13() { return static_cast<int32_t>(offsetof(SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD, ___Items_13)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Items_13() const { return ___Items_13; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Items_13() { return &___Items_13; }
	inline void set_Items_13(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Items_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_13), (void*)value);
	}

	inline static int32_t get_offset_of_ItemRandom_14() { return static_cast<int32_t>(offsetof(SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD, ___ItemRandom_14)); }
	inline int32_t get_ItemRandom_14() const { return ___ItemRandom_14; }
	inline int32_t* get_address_of_ItemRandom_14() { return &___ItemRandom_14; }
	inline void set_ItemRandom_14(int32_t value)
	{
		___ItemRandom_14 = value;
	}

	inline static int32_t get_offset_of_timeCounter_15() { return static_cast<int32_t>(offsetof(SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD, ___timeCounter_15)); }
	inline float get_timeCounter_15() const { return ___timeCounter_15; }
	inline float* get_address_of_timeCounter_15() { return &___timeCounter_15; }
	inline void set_timeCounter_15(float value)
	{
		___timeCounter_15 = value;
	}

	inline static int32_t get_offset_of_timeCounterStorage_16() { return static_cast<int32_t>(offsetof(SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD, ___timeCounterStorage_16)); }
	inline float get_timeCounterStorage_16() const { return ___timeCounterStorage_16; }
	inline float* get_address_of_timeCounterStorage_16() { return &___timeCounterStorage_16; }
	inline void set_timeCounterStorage_16(float value)
	{
		___timeCounterStorage_16 = value;
	}

	inline static int32_t get_offset_of_movementStorage_17() { return static_cast<int32_t>(offsetof(SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD, ___movementStorage_17)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_movementStorage_17() const { return ___movementStorage_17; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_movementStorage_17() { return &___movementStorage_17; }
	inline void set_movementStorage_17(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___movementStorage_17 = value;
	}

	inline static int32_t get_offset_of_movement_18() { return static_cast<int32_t>(offsetof(SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD, ___movement_18)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_movement_18() const { return ___movement_18; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_movement_18() { return &___movement_18; }
	inline void set_movement_18(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___movement_18 = value;
	}
};


// TimerBar
struct TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 TimerBar::time
	int32_t ___time_4;
	// System.Single TimerBar::time_count
	float ___time_count_5;
	// System.Int32 TimerBar::instant_time
	int32_t ___instant_time_6;
	// UnityEngine.Transform TimerBar::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_7;
	// UnityEngine.GameObject TimerBar::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_8;
	// System.Boolean TimerBar::isPlayerTakeDamage
	bool ___isPlayerTakeDamage_9;
	// System.Single TimerBar::countdownPlayerDamage
	float ___countdownPlayerDamage_10;
	// System.Int32 TimerBar::time_increment
	int32_t ___time_increment_11;
	// UnityEngine.GameObject[] TimerBar::Respawner
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Respawner_12;
	// UnityEngine.GameObject[] TimerBar::enemyPrefab
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___enemyPrefab_13;
	// System.Int32 TimerBar::random2
	int32_t ___random2_14;
	// System.Int32 TimerBar::randomNumber
	int32_t ___randomNumber_15;
	// System.Int32 TimerBar::randomEnemy
	int32_t ___randomEnemy_16;
	// System.Int32[] TimerBar::respawner_hafiza
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___respawner_hafiza_17;
	// UnityEngine.GameObject TimerBar::tilemapObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tilemapObject_18;
	// UnityEngine.GameObject TimerBar::nextSceneArrow
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___nextSceneArrow_19;
	// System.Single TimerBar::timer_nextSceneArrow
	float ___timer_nextSceneArrow_20;
	// System.Single TimerBar::timer2_nextSceneArrow
	float ___timer2_nextSceneArrow_21;
	// System.Boolean TimerBar::tuccar
	bool ___tuccar_22;
	// System.Single TimerBar::player_x_konum
	float ___player_x_konum_23;

public:
	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___time_4)); }
	inline int32_t get_time_4() const { return ___time_4; }
	inline int32_t* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(int32_t value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_time_count_5() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___time_count_5)); }
	inline float get_time_count_5() const { return ___time_count_5; }
	inline float* get_address_of_time_count_5() { return &___time_count_5; }
	inline void set_time_count_5(float value)
	{
		___time_count_5 = value;
	}

	inline static int32_t get_offset_of_instant_time_6() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___instant_time_6)); }
	inline int32_t get_instant_time_6() const { return ___instant_time_6; }
	inline int32_t* get_address_of_instant_time_6() { return &___instant_time_6; }
	inline void set_instant_time_6(int32_t value)
	{
		___instant_time_6 = value;
	}

	inline static int32_t get_offset_of_transform_7() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___transform_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_7() const { return ___transform_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_7() { return &___transform_7; }
	inline void set_transform_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_7), (void*)value);
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___player_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_8() const { return ___player_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_8), (void*)value);
	}

	inline static int32_t get_offset_of_isPlayerTakeDamage_9() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___isPlayerTakeDamage_9)); }
	inline bool get_isPlayerTakeDamage_9() const { return ___isPlayerTakeDamage_9; }
	inline bool* get_address_of_isPlayerTakeDamage_9() { return &___isPlayerTakeDamage_9; }
	inline void set_isPlayerTakeDamage_9(bool value)
	{
		___isPlayerTakeDamage_9 = value;
	}

	inline static int32_t get_offset_of_countdownPlayerDamage_10() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___countdownPlayerDamage_10)); }
	inline float get_countdownPlayerDamage_10() const { return ___countdownPlayerDamage_10; }
	inline float* get_address_of_countdownPlayerDamage_10() { return &___countdownPlayerDamage_10; }
	inline void set_countdownPlayerDamage_10(float value)
	{
		___countdownPlayerDamage_10 = value;
	}

	inline static int32_t get_offset_of_time_increment_11() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___time_increment_11)); }
	inline int32_t get_time_increment_11() const { return ___time_increment_11; }
	inline int32_t* get_address_of_time_increment_11() { return &___time_increment_11; }
	inline void set_time_increment_11(int32_t value)
	{
		___time_increment_11 = value;
	}

	inline static int32_t get_offset_of_Respawner_12() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___Respawner_12)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Respawner_12() const { return ___Respawner_12; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Respawner_12() { return &___Respawner_12; }
	inline void set_Respawner_12(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Respawner_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Respawner_12), (void*)value);
	}

	inline static int32_t get_offset_of_enemyPrefab_13() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___enemyPrefab_13)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_enemyPrefab_13() const { return ___enemyPrefab_13; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_enemyPrefab_13() { return &___enemyPrefab_13; }
	inline void set_enemyPrefab_13(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___enemyPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyPrefab_13), (void*)value);
	}

	inline static int32_t get_offset_of_random2_14() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___random2_14)); }
	inline int32_t get_random2_14() const { return ___random2_14; }
	inline int32_t* get_address_of_random2_14() { return &___random2_14; }
	inline void set_random2_14(int32_t value)
	{
		___random2_14 = value;
	}

	inline static int32_t get_offset_of_randomNumber_15() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___randomNumber_15)); }
	inline int32_t get_randomNumber_15() const { return ___randomNumber_15; }
	inline int32_t* get_address_of_randomNumber_15() { return &___randomNumber_15; }
	inline void set_randomNumber_15(int32_t value)
	{
		___randomNumber_15 = value;
	}

	inline static int32_t get_offset_of_randomEnemy_16() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___randomEnemy_16)); }
	inline int32_t get_randomEnemy_16() const { return ___randomEnemy_16; }
	inline int32_t* get_address_of_randomEnemy_16() { return &___randomEnemy_16; }
	inline void set_randomEnemy_16(int32_t value)
	{
		___randomEnemy_16 = value;
	}

	inline static int32_t get_offset_of_respawner_hafiza_17() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___respawner_hafiza_17)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_respawner_hafiza_17() const { return ___respawner_hafiza_17; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_respawner_hafiza_17() { return &___respawner_hafiza_17; }
	inline void set_respawner_hafiza_17(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___respawner_hafiza_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___respawner_hafiza_17), (void*)value);
	}

	inline static int32_t get_offset_of_tilemapObject_18() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___tilemapObject_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tilemapObject_18() const { return ___tilemapObject_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tilemapObject_18() { return &___tilemapObject_18; }
	inline void set_tilemapObject_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tilemapObject_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tilemapObject_18), (void*)value);
	}

	inline static int32_t get_offset_of_nextSceneArrow_19() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___nextSceneArrow_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_nextSceneArrow_19() const { return ___nextSceneArrow_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_nextSceneArrow_19() { return &___nextSceneArrow_19; }
	inline void set_nextSceneArrow_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___nextSceneArrow_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextSceneArrow_19), (void*)value);
	}

	inline static int32_t get_offset_of_timer_nextSceneArrow_20() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___timer_nextSceneArrow_20)); }
	inline float get_timer_nextSceneArrow_20() const { return ___timer_nextSceneArrow_20; }
	inline float* get_address_of_timer_nextSceneArrow_20() { return &___timer_nextSceneArrow_20; }
	inline void set_timer_nextSceneArrow_20(float value)
	{
		___timer_nextSceneArrow_20 = value;
	}

	inline static int32_t get_offset_of_timer2_nextSceneArrow_21() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___timer2_nextSceneArrow_21)); }
	inline float get_timer2_nextSceneArrow_21() const { return ___timer2_nextSceneArrow_21; }
	inline float* get_address_of_timer2_nextSceneArrow_21() { return &___timer2_nextSceneArrow_21; }
	inline void set_timer2_nextSceneArrow_21(float value)
	{
		___timer2_nextSceneArrow_21 = value;
	}

	inline static int32_t get_offset_of_tuccar_22() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___tuccar_22)); }
	inline bool get_tuccar_22() const { return ___tuccar_22; }
	inline bool* get_address_of_tuccar_22() { return &___tuccar_22; }
	inline void set_tuccar_22(bool value)
	{
		___tuccar_22 = value;
	}

	inline static int32_t get_offset_of_player_x_konum_23() { return static_cast<int32_t>(offsetof(TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C, ___player_x_konum_23)); }
	inline float get_player_x_konum_23() const { return ___player_x_konum_23; }
	inline float* get_address_of_player_x_konum_23() { return &___player_x_konum_23; }
	inline void set_player_x_konum_23(float value)
	{
		___player_x_konum_23 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// dropItems
struct dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject dropItems::collision_item
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___collision_item_4;
	// System.Boolean dropItems::envanter
	bool ___envanter_5;
	// UnityEngine.GameObject dropItems::null_inventory
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___null_inventory_6;
	// UnityEngine.GameObject dropItems::Inventory
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Inventory_7;
	// System.Boolean dropItems::UseInSlot
	bool ___UseInSlot_8;
	// System.Boolean dropItems::isCoffee
	bool ___isCoffee_9;
	// System.Single dropItems::timer_Coffee
	float ___timer_Coffee_10;
	// System.Int32 dropItems::timer_Coffee_Hafiza
	int32_t ___timer_Coffee_Hafiza_11;
	// System.Single dropItems::movement_speed_multiplier
	float ___movement_speed_multiplier_12;
	// System.Boolean dropItems::isHeavyMachineGun
	bool ___isHeavyMachineGun_13;
	// System.Single dropItems::timer_HeavyMachineGun
	float ___timer_HeavyMachineGun_14;
	// System.Int32 dropItems::timer_HeavyMachineGun_Hafiza
	int32_t ___timer_HeavyMachineGun_Hafiza_15;
	// System.Single dropItems::shooting_speed
	float ___shooting_speed_16;
	// System.Boolean dropItems::isShotgun
	bool ___isShotgun_17;
	// System.Single dropItems::timer_Shotgun
	float ___timer_Shotgun_18;
	// System.Int32 dropItems::timer_Shotgun_Hafiza
	int32_t ___timer_Shotgun_Hafiza_19;
	// System.Single dropItems::shotgun_Shooting_Speed
	float ___shotgun_Shooting_Speed_20;
	// System.Boolean dropItems::isWagonWheel
	bool ___isWagonWheel_21;
	// System.Single dropItems::timer_WagonWheel
	float ___timer_WagonWheel_22;
	// System.Int32 dropItems::timer_WagonWheel_Hafiza
	int32_t ___timer_WagonWheel_Hafiza_23;
	// System.Boolean dropItems::isSheriffBadge
	bool ___isSheriffBadge_24;
	// System.Single dropItems::timer_SheriffBadge
	float ___timer_SheriffBadge_25;
	// System.Int32 dropItems::timer_SheriffBadge_Hafiza
	int32_t ___timer_SheriffBadge_Hafiza_26;
	// System.Single dropItems::SheriffBadge_movement_speed_multiplier
	float ___SheriffBadge_movement_speed_multiplier_27;
	// System.Single dropItems::SheriffBadge_Shooting_Speed
	float ___SheriffBadge_Shooting_Speed_28;
	// System.Boolean dropItems::isScreenBomb
	bool ___isScreenBomb_29;
	// UnityEngine.GameObject dropItems::deathPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deathPrefab_30;
	// System.Boolean dropItems::isSmokeBomb
	bool ___isSmokeBomb_31;
	// System.Int32[] dropItems::new_position
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___new_position_32;
	// System.Single dropItems::timer_SmokeBomb
	float ___timer_SmokeBomb_33;
	// System.Int32 dropItems::timer_SmokeBomb_Hafiza
	int32_t ___timer_SmokeBomb_Hafiza_34;
	// UnityEngine.Vector3 dropItems::new_position_loc
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___new_position_loc_35;
	// System.Boolean dropItems::checkResult
	bool ___checkResult_36;
	// System.Boolean dropItems::checkTeleporting
	bool ___checkTeleporting_37;
	// System.Boolean dropItems::isTombstone
	bool ___isTombstone_38;
	// System.Single dropItems::timer_Tombstone
	float ___timer_Tombstone_39;
	// System.Int32 dropItems::timer_Tombstone_Hafiza
	int32_t ___timer_Tombstone_Hafiza_40;

public:
	inline static int32_t get_offset_of_collision_item_4() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___collision_item_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_collision_item_4() const { return ___collision_item_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_collision_item_4() { return &___collision_item_4; }
	inline void set_collision_item_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___collision_item_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collision_item_4), (void*)value);
	}

	inline static int32_t get_offset_of_envanter_5() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___envanter_5)); }
	inline bool get_envanter_5() const { return ___envanter_5; }
	inline bool* get_address_of_envanter_5() { return &___envanter_5; }
	inline void set_envanter_5(bool value)
	{
		___envanter_5 = value;
	}

	inline static int32_t get_offset_of_null_inventory_6() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___null_inventory_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_null_inventory_6() const { return ___null_inventory_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_null_inventory_6() { return &___null_inventory_6; }
	inline void set_null_inventory_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___null_inventory_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___null_inventory_6), (void*)value);
	}

	inline static int32_t get_offset_of_Inventory_7() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___Inventory_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Inventory_7() const { return ___Inventory_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Inventory_7() { return &___Inventory_7; }
	inline void set_Inventory_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Inventory_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Inventory_7), (void*)value);
	}

	inline static int32_t get_offset_of_UseInSlot_8() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___UseInSlot_8)); }
	inline bool get_UseInSlot_8() const { return ___UseInSlot_8; }
	inline bool* get_address_of_UseInSlot_8() { return &___UseInSlot_8; }
	inline void set_UseInSlot_8(bool value)
	{
		___UseInSlot_8 = value;
	}

	inline static int32_t get_offset_of_isCoffee_9() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___isCoffee_9)); }
	inline bool get_isCoffee_9() const { return ___isCoffee_9; }
	inline bool* get_address_of_isCoffee_9() { return &___isCoffee_9; }
	inline void set_isCoffee_9(bool value)
	{
		___isCoffee_9 = value;
	}

	inline static int32_t get_offset_of_timer_Coffee_10() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___timer_Coffee_10)); }
	inline float get_timer_Coffee_10() const { return ___timer_Coffee_10; }
	inline float* get_address_of_timer_Coffee_10() { return &___timer_Coffee_10; }
	inline void set_timer_Coffee_10(float value)
	{
		___timer_Coffee_10 = value;
	}

	inline static int32_t get_offset_of_timer_Coffee_Hafiza_11() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___timer_Coffee_Hafiza_11)); }
	inline int32_t get_timer_Coffee_Hafiza_11() const { return ___timer_Coffee_Hafiza_11; }
	inline int32_t* get_address_of_timer_Coffee_Hafiza_11() { return &___timer_Coffee_Hafiza_11; }
	inline void set_timer_Coffee_Hafiza_11(int32_t value)
	{
		___timer_Coffee_Hafiza_11 = value;
	}

	inline static int32_t get_offset_of_movement_speed_multiplier_12() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___movement_speed_multiplier_12)); }
	inline float get_movement_speed_multiplier_12() const { return ___movement_speed_multiplier_12; }
	inline float* get_address_of_movement_speed_multiplier_12() { return &___movement_speed_multiplier_12; }
	inline void set_movement_speed_multiplier_12(float value)
	{
		___movement_speed_multiplier_12 = value;
	}

	inline static int32_t get_offset_of_isHeavyMachineGun_13() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___isHeavyMachineGun_13)); }
	inline bool get_isHeavyMachineGun_13() const { return ___isHeavyMachineGun_13; }
	inline bool* get_address_of_isHeavyMachineGun_13() { return &___isHeavyMachineGun_13; }
	inline void set_isHeavyMachineGun_13(bool value)
	{
		___isHeavyMachineGun_13 = value;
	}

	inline static int32_t get_offset_of_timer_HeavyMachineGun_14() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___timer_HeavyMachineGun_14)); }
	inline float get_timer_HeavyMachineGun_14() const { return ___timer_HeavyMachineGun_14; }
	inline float* get_address_of_timer_HeavyMachineGun_14() { return &___timer_HeavyMachineGun_14; }
	inline void set_timer_HeavyMachineGun_14(float value)
	{
		___timer_HeavyMachineGun_14 = value;
	}

	inline static int32_t get_offset_of_timer_HeavyMachineGun_Hafiza_15() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___timer_HeavyMachineGun_Hafiza_15)); }
	inline int32_t get_timer_HeavyMachineGun_Hafiza_15() const { return ___timer_HeavyMachineGun_Hafiza_15; }
	inline int32_t* get_address_of_timer_HeavyMachineGun_Hafiza_15() { return &___timer_HeavyMachineGun_Hafiza_15; }
	inline void set_timer_HeavyMachineGun_Hafiza_15(int32_t value)
	{
		___timer_HeavyMachineGun_Hafiza_15 = value;
	}

	inline static int32_t get_offset_of_shooting_speed_16() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___shooting_speed_16)); }
	inline float get_shooting_speed_16() const { return ___shooting_speed_16; }
	inline float* get_address_of_shooting_speed_16() { return &___shooting_speed_16; }
	inline void set_shooting_speed_16(float value)
	{
		___shooting_speed_16 = value;
	}

	inline static int32_t get_offset_of_isShotgun_17() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___isShotgun_17)); }
	inline bool get_isShotgun_17() const { return ___isShotgun_17; }
	inline bool* get_address_of_isShotgun_17() { return &___isShotgun_17; }
	inline void set_isShotgun_17(bool value)
	{
		___isShotgun_17 = value;
	}

	inline static int32_t get_offset_of_timer_Shotgun_18() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___timer_Shotgun_18)); }
	inline float get_timer_Shotgun_18() const { return ___timer_Shotgun_18; }
	inline float* get_address_of_timer_Shotgun_18() { return &___timer_Shotgun_18; }
	inline void set_timer_Shotgun_18(float value)
	{
		___timer_Shotgun_18 = value;
	}

	inline static int32_t get_offset_of_timer_Shotgun_Hafiza_19() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___timer_Shotgun_Hafiza_19)); }
	inline int32_t get_timer_Shotgun_Hafiza_19() const { return ___timer_Shotgun_Hafiza_19; }
	inline int32_t* get_address_of_timer_Shotgun_Hafiza_19() { return &___timer_Shotgun_Hafiza_19; }
	inline void set_timer_Shotgun_Hafiza_19(int32_t value)
	{
		___timer_Shotgun_Hafiza_19 = value;
	}

	inline static int32_t get_offset_of_shotgun_Shooting_Speed_20() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___shotgun_Shooting_Speed_20)); }
	inline float get_shotgun_Shooting_Speed_20() const { return ___shotgun_Shooting_Speed_20; }
	inline float* get_address_of_shotgun_Shooting_Speed_20() { return &___shotgun_Shooting_Speed_20; }
	inline void set_shotgun_Shooting_Speed_20(float value)
	{
		___shotgun_Shooting_Speed_20 = value;
	}

	inline static int32_t get_offset_of_isWagonWheel_21() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___isWagonWheel_21)); }
	inline bool get_isWagonWheel_21() const { return ___isWagonWheel_21; }
	inline bool* get_address_of_isWagonWheel_21() { return &___isWagonWheel_21; }
	inline void set_isWagonWheel_21(bool value)
	{
		___isWagonWheel_21 = value;
	}

	inline static int32_t get_offset_of_timer_WagonWheel_22() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___timer_WagonWheel_22)); }
	inline float get_timer_WagonWheel_22() const { return ___timer_WagonWheel_22; }
	inline float* get_address_of_timer_WagonWheel_22() { return &___timer_WagonWheel_22; }
	inline void set_timer_WagonWheel_22(float value)
	{
		___timer_WagonWheel_22 = value;
	}

	inline static int32_t get_offset_of_timer_WagonWheel_Hafiza_23() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___timer_WagonWheel_Hafiza_23)); }
	inline int32_t get_timer_WagonWheel_Hafiza_23() const { return ___timer_WagonWheel_Hafiza_23; }
	inline int32_t* get_address_of_timer_WagonWheel_Hafiza_23() { return &___timer_WagonWheel_Hafiza_23; }
	inline void set_timer_WagonWheel_Hafiza_23(int32_t value)
	{
		___timer_WagonWheel_Hafiza_23 = value;
	}

	inline static int32_t get_offset_of_isSheriffBadge_24() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___isSheriffBadge_24)); }
	inline bool get_isSheriffBadge_24() const { return ___isSheriffBadge_24; }
	inline bool* get_address_of_isSheriffBadge_24() { return &___isSheriffBadge_24; }
	inline void set_isSheriffBadge_24(bool value)
	{
		___isSheriffBadge_24 = value;
	}

	inline static int32_t get_offset_of_timer_SheriffBadge_25() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___timer_SheriffBadge_25)); }
	inline float get_timer_SheriffBadge_25() const { return ___timer_SheriffBadge_25; }
	inline float* get_address_of_timer_SheriffBadge_25() { return &___timer_SheriffBadge_25; }
	inline void set_timer_SheriffBadge_25(float value)
	{
		___timer_SheriffBadge_25 = value;
	}

	inline static int32_t get_offset_of_timer_SheriffBadge_Hafiza_26() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___timer_SheriffBadge_Hafiza_26)); }
	inline int32_t get_timer_SheriffBadge_Hafiza_26() const { return ___timer_SheriffBadge_Hafiza_26; }
	inline int32_t* get_address_of_timer_SheriffBadge_Hafiza_26() { return &___timer_SheriffBadge_Hafiza_26; }
	inline void set_timer_SheriffBadge_Hafiza_26(int32_t value)
	{
		___timer_SheriffBadge_Hafiza_26 = value;
	}

	inline static int32_t get_offset_of_SheriffBadge_movement_speed_multiplier_27() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___SheriffBadge_movement_speed_multiplier_27)); }
	inline float get_SheriffBadge_movement_speed_multiplier_27() const { return ___SheriffBadge_movement_speed_multiplier_27; }
	inline float* get_address_of_SheriffBadge_movement_speed_multiplier_27() { return &___SheriffBadge_movement_speed_multiplier_27; }
	inline void set_SheriffBadge_movement_speed_multiplier_27(float value)
	{
		___SheriffBadge_movement_speed_multiplier_27 = value;
	}

	inline static int32_t get_offset_of_SheriffBadge_Shooting_Speed_28() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___SheriffBadge_Shooting_Speed_28)); }
	inline float get_SheriffBadge_Shooting_Speed_28() const { return ___SheriffBadge_Shooting_Speed_28; }
	inline float* get_address_of_SheriffBadge_Shooting_Speed_28() { return &___SheriffBadge_Shooting_Speed_28; }
	inline void set_SheriffBadge_Shooting_Speed_28(float value)
	{
		___SheriffBadge_Shooting_Speed_28 = value;
	}

	inline static int32_t get_offset_of_isScreenBomb_29() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___isScreenBomb_29)); }
	inline bool get_isScreenBomb_29() const { return ___isScreenBomb_29; }
	inline bool* get_address_of_isScreenBomb_29() { return &___isScreenBomb_29; }
	inline void set_isScreenBomb_29(bool value)
	{
		___isScreenBomb_29 = value;
	}

	inline static int32_t get_offset_of_deathPrefab_30() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___deathPrefab_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deathPrefab_30() const { return ___deathPrefab_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deathPrefab_30() { return &___deathPrefab_30; }
	inline void set_deathPrefab_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deathPrefab_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathPrefab_30), (void*)value);
	}

	inline static int32_t get_offset_of_isSmokeBomb_31() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___isSmokeBomb_31)); }
	inline bool get_isSmokeBomb_31() const { return ___isSmokeBomb_31; }
	inline bool* get_address_of_isSmokeBomb_31() { return &___isSmokeBomb_31; }
	inline void set_isSmokeBomb_31(bool value)
	{
		___isSmokeBomb_31 = value;
	}

	inline static int32_t get_offset_of_new_position_32() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___new_position_32)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_new_position_32() const { return ___new_position_32; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_new_position_32() { return &___new_position_32; }
	inline void set_new_position_32(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___new_position_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___new_position_32), (void*)value);
	}

	inline static int32_t get_offset_of_timer_SmokeBomb_33() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___timer_SmokeBomb_33)); }
	inline float get_timer_SmokeBomb_33() const { return ___timer_SmokeBomb_33; }
	inline float* get_address_of_timer_SmokeBomb_33() { return &___timer_SmokeBomb_33; }
	inline void set_timer_SmokeBomb_33(float value)
	{
		___timer_SmokeBomb_33 = value;
	}

	inline static int32_t get_offset_of_timer_SmokeBomb_Hafiza_34() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___timer_SmokeBomb_Hafiza_34)); }
	inline int32_t get_timer_SmokeBomb_Hafiza_34() const { return ___timer_SmokeBomb_Hafiza_34; }
	inline int32_t* get_address_of_timer_SmokeBomb_Hafiza_34() { return &___timer_SmokeBomb_Hafiza_34; }
	inline void set_timer_SmokeBomb_Hafiza_34(int32_t value)
	{
		___timer_SmokeBomb_Hafiza_34 = value;
	}

	inline static int32_t get_offset_of_new_position_loc_35() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___new_position_loc_35)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_new_position_loc_35() const { return ___new_position_loc_35; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_new_position_loc_35() { return &___new_position_loc_35; }
	inline void set_new_position_loc_35(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___new_position_loc_35 = value;
	}

	inline static int32_t get_offset_of_checkResult_36() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___checkResult_36)); }
	inline bool get_checkResult_36() const { return ___checkResult_36; }
	inline bool* get_address_of_checkResult_36() { return &___checkResult_36; }
	inline void set_checkResult_36(bool value)
	{
		___checkResult_36 = value;
	}

	inline static int32_t get_offset_of_checkTeleporting_37() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___checkTeleporting_37)); }
	inline bool get_checkTeleporting_37() const { return ___checkTeleporting_37; }
	inline bool* get_address_of_checkTeleporting_37() { return &___checkTeleporting_37; }
	inline void set_checkTeleporting_37(bool value)
	{
		___checkTeleporting_37 = value;
	}

	inline static int32_t get_offset_of_isTombstone_38() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___isTombstone_38)); }
	inline bool get_isTombstone_38() const { return ___isTombstone_38; }
	inline bool* get_address_of_isTombstone_38() { return &___isTombstone_38; }
	inline void set_isTombstone_38(bool value)
	{
		___isTombstone_38 = value;
	}

	inline static int32_t get_offset_of_timer_Tombstone_39() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___timer_Tombstone_39)); }
	inline float get_timer_Tombstone_39() const { return ___timer_Tombstone_39; }
	inline float* get_address_of_timer_Tombstone_39() { return &___timer_Tombstone_39; }
	inline void set_timer_Tombstone_39(float value)
	{
		___timer_Tombstone_39 = value;
	}

	inline static int32_t get_offset_of_timer_Tombstone_Hafiza_40() { return static_cast<int32_t>(offsetof(dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384, ___timer_Tombstone_Hafiza_40)); }
	inline int32_t get_timer_Tombstone_Hafiza_40() const { return ___timer_Tombstone_Hafiza_40; }
	inline int32_t* get_address_of_timer_Tombstone_Hafiza_40() { return &___timer_Tombstone_Hafiza_40; }
	inline void set_timer_Tombstone_Hafiza_40(int32_t value)
	{
		___timer_Tombstone_Hafiza_40 = value;
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
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * m_Items[1];

public:
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
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
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * m_Items[1];

public:
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);

// !!0 UnityEngine.GameObject::GetComponent<BossProperties>()
inline BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B * GameObject_GetComponent_TisBossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B_m96FC506E2C249513934BD686A464F9C1B53352B9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120 (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// System.Void BossProperties::SpawnEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossProperties_SpawnEnemies_m4D37D45C7B6498EE35702377C2FA8D6497715DB8 (BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void BossProperties::DuvaraGitme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossProperties_DuvaraGitme_mE4714E643483DDDA96B7E69F024D6BBF95F5423D (BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B * __this, const RuntimeMethod* method);
// System.Void BossProperties::Shooting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossProperties_Shooting_m0DBE0FB0FA116F04783C76E5D792AB2F9F2EB474 (BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Bullet_Collider>()
inline Bullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A * GameObject_GetComponent_TisBullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A_m0A2DF8A7E3E419BE4FE5BEA69B495900DE1F520D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Bullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void BossProperties::droppingItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossProperties_droppingItem_m45B103B487FE0516CDD2300F122F650080C8AC0A (BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B * __this, const RuntimeMethod* method);
// SaveObject SaveObject::get_singleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872 (const RuntimeMethod* method);
// System.Int32 SaveObject::GetCurrentAmmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveObject_GetCurrentAmmo_m0A00BBBE8FECC0500300447BA669743B0C40DDD6 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PlayerMovement>()
inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void LevelTimer::CreateEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelTimer_CreateEnemy_mC137B70A18B07A12E2822D71F460AA42FEAA56B4 (LevelTimer_tFBA966E1AE8F239C6FD453D251111817F9F3911C * __this, const RuntimeMethod* method);
// System.Void SaveObject::ResetAllItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject_ResetAllItem_mCF776F919C8A73768EBBE2C99AF3DA6963728B4F (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline (float ___d0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Void OgreProperties::droppingItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OgreProperties_droppingItem_m705EE296AF96D566445939D555837CCD3DDA3BA7 (OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void OrcProperties::droppingItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrcProperties_droppingItem_m4A7F4EDED780BA468CB1279EA29894B0A90B84B6 (OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E * __this, const RuntimeMethod* method);
// System.Int32 SaveObject::GetCurrentBoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveObject_GetCurrentBoot_m888D33ED023274D8F0A3428D183728F597825D2F (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method);
// System.Int32 SaveObject::GetCurrentHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveObject_GetCurrentHealth_m0EF07C224F5A7AC31F94B6241C70E1F7F433A78F (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method);
// System.Int32 SaveObject::GetCurrentCoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveObject_GetCurrentCoin_mCFAC430A537151AAE792D77E8C88B1AFD29BA8D8 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<dropItems>()
inline dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void PlayerMovement::BodyImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_BodyImage_mC8A0E2713289004D0920716C21CB6CA793A18967 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Void SaveObject::UsedCurrentEnvanter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject_UsedCurrentEnvanter_m7C835BA9879DA22A35AC704B1EE4173F836A7996 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<OrcProperties>()
inline OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E * GameObject_GetComponent_TisOrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E_m643AFA823BAC8B5B37281E2B6952204AB6A8FED0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Int32 SaveObject::TakeDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveObject_TakeDamage_m2F73F1B5209DB17AA635DFB80CDA414BB752E4D2 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<SpikeballProperties>()
inline SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD * GameObject_GetComponent_TisSpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD_m5111AAA678B9AFE9311C94E79AB808D879209EF4 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<OgreProperties>()
inline OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF * GameObject_GetComponent_TisOgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF_mEFCDF2FD5B26441DD210D88B9E0A10C22FA967ED (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Int32 SaveObject::payedCoin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveObject_payedCoin_mFD84EEC26276E45CD66A11332924D68777721D4A (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, int32_t ___price0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void SaveObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject__ctor_mF769DB3D10019C33EC96C0D99FC4E6BB455A9307 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_m5709C9DC233D10A7E9AF4BCC9639E3F18FE36831 (String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Int32 SaveObject::GetCurrentGun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveObject_GetCurrentGun_mC70DE54507B3996EA6DAAEF02F3FD1E299FB29B8 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Shoot::Shooting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shoot_Shooting_m393F71B7129C262694F597AD78A71432B8DABD02 (Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void Shop::Animasyon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Animasyon_mEC9BDDAA002614C6755E47D273AA54BE5DA9FD45 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method);
// System.Void Shop::ShopSistemi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_ShopSistemi_mEEACECB6BC79280114F60A674A60C7DA3763DEEB (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method);
// System.Void Shop::SatinAlim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_SatinAlim_mEBC9167DEB3AD2D7988304F5EA8E3BFB7600FF78 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<TimerBar>()
inline TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C * GameObject_GetComponent_TisTimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C_m289A840E325C3745B478D4C754127B6B4BB01415 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Void SaveObject::HealthUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject_HealthUp_m95187E836E506337476104A80E11F634FD87AD7E (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method);
// System.Void Shop::SatinAlindi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_SatinAlindi_m3E1F29B934DAF5CFD1123932C22EED27553A8BBC (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method);
// System.Void SaveObject::SetCurrentBoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject_SetCurrentBoot_mB3C9C14CA3D34F9853421FA48DF326DB3CFE4AF6 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method);
// System.Void SaveObject::SetCurrentGun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject_SetCurrentGun_mDF5656C31CEAC28FE53BBE9A6AB9DA5004750BA5 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Shoot>()
inline Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E * GameObject_GetComponent_TisShoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E_mC9A8C28564E9F55F78B2E3FB8A3613DFE8032F4A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void SaveObject::SetCurrentAmmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject_SetCurrentAmmo_m142005C059E5DC89B8223A4EDA21E395DC80F8E6 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method);
// System.String SaveObject::GetCurrentEnvanter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SaveObject_GetCurrentEnvanter_m81643E39FEE3CBC200D31EF443DDE2EB6CABD9FE (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void SpikeballProperties::buildBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpikeballProperties_buildBall_mD1D7264B72E0A7E690D0EC068C0EEDE6096C2F0E (SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// System.Void SpikeballProperties::droppingItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpikeballProperties_droppingItem_mDD31FAB03492EB8B81B30DE3D8AC9DFF1EE9B10C (SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_bodyType(UnityEngine.RigidbodyType2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void TimerBar::CreateEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerBar_CreateEnemy_m0F20DD859EB95A7A3F9C66F05FC347E4667D4639 (TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C * __this, const RuntimeMethod* method);
// System.Void TimerBar::SahneGecis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerBar_SahneGecis_m83947384511B81D60A1377621D9DA68785FC9965 (TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void dropItems::EnvantereEkleme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_EnvantereEkleme_mDB409745C716A8D7072B0B86D65014BDF14ECC2F (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method);
// System.Void dropItems::UseItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_UseItem_m38D10F5D053BB1217F43994EA66D0601520FF72B (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method);
// System.Void dropItems::UseItemInInventory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_UseItemInInventory_m1412B2B5F7107B66DFF4140B1DF1AA41E8342282 (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method);
// System.Void SaveObject::CoinUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject_CoinUp_mB4EDD13EC220E01276721B55BBDAE41A03F7AA56 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void SaveObject::SetCurrentEnvanter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject_SetCurrentEnvanter_m6EBC9152A01483B456EF6CAE6DE9300A7E2DA785 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, String_t* ___envanter0, const RuntimeMethod* method);
// System.Void dropItems::Coffee()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_Coffee_mF96E7854D92308D940A01D4F0519661082FFA00A (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method);
// System.Void dropItems::HeavyMachineGun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_HeavyMachineGun_mD41130504C628054348926C725232566A27C3642 (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method);
// System.Void dropItems::Shotgun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_Shotgun_m8D26DFE59EC4FEE675C8F709FB7A8A7167BEDBB9 (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method);
// System.Void dropItems::WagonWheel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_WagonWheel_m2764F0E6FF7494F11582888216EE4CB76AC49954 (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method);
// System.Void dropItems::SheriffBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_SheriffBadge_m9DDAA51BEA7C20D4E3E5A423E77470453C2B5FAF (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method);
// System.Void dropItems::ScreenBomb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_ScreenBomb_mDF5ED1DB4BF2BFED8A815E0CDE1E9B6C419565A9 (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method);
// System.Void dropItems::SmokeBomb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_SmokeBomb_m9A9D052C2607E9AC5228F080C19D8A848201FA47 (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method);
// System.Void dropItems::Tombstone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_Tombstone_mFE6922D69961F3E5ADD6861FBD59D66E637D5FC0 (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Physics2D_OverlapCircle_m91A4627AE9C1216CE037B24175384B6345976625 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, float ___radius1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
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
// System.Void BossArenaTimerBar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossArenaTimerBar_Start_m9CD0D20A41AD2D5DBFF63BB33CD2F94A914F1D25 (BossArenaTimerBar_t8103634638809D801D7D8B77BC4D6E10D50F3758 * __this, const RuntimeMethod* method)
{
	{
		// time_count = time;
		int32_t L_0 = __this->get_time_6();
		__this->set_time_count_5(((float)((float)L_0)));
		// }
		return;
	}
}
// System.Void BossArenaTimerBar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossArenaTimerBar_Update_mF6658E5008F62647C7BF548A5AEE2F78A5A5D5DF (BossArenaTimerBar_t8103634638809D801D7D8B77BC4D6E10D50F3758 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B_m96FC506E2C249513934BD686A464F9C1B53352B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// time_count = Fector.GetComponent<BossProperties>().health;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Fector_4();
		BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B * L_1;
		L_1 = GameObject_GetComponent_TisBossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B_m96FC506E2C249513934BD686A464F9C1B53352B9(L_0, /*hidden argument*/GameObject_GetComponent_TisBossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B_m96FC506E2C249513934BD686A464F9C1B53352B9_RuntimeMethod_var);
		int32_t L_2 = L_1->get_health_7();
		__this->set_time_count_5(((float)((float)L_2)));
		// transform.localScale = new Vector3(time_count * 17 / time, 0.5f, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_4 = __this->get_time_count_5();
		int32_t L_5 = __this->get_time_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((float)((float)((float)il2cpp_codegen_multiply((float)L_4, (float)(17.0f)))/(float)((float)((float)L_5)))), (0.5f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_3, L_6, /*hidden argument*/NULL);
		// transform.localPosition = new Vector3((time_count * 17 / time / 2) - 8.46f, -9.06f, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_8 = __this->get_time_count_5();
		int32_t L_9 = __this->get_time_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), ((float)il2cpp_codegen_subtract((float)((float)((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_8, (float)(17.0f)))/(float)((float)((float)L_9))))/(float)(2.0f))), (float)(8.46000004f))), (-9.06000042f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_7, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BossArenaTimerBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossArenaTimerBar__ctor_mC2E2EC3B36FF7E30FE0D7EE71F94DFF30403F2BE (BossArenaTimerBar_t8103634638809D801D7D8B77BC4D6E10D50F3758 * __this, const RuntimeMethod* method)
{
	{
		// private int time = 150;
		__this->set_time_6(((int32_t)150));
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
// System.Void BossProperties::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossProperties_Start_m6F2ADE0D15624540D06329E0E9FEDBFA197CF300 (BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deathPrefab = Resources.Load("Death") as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0;
		L_0 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8, /*hidden argument*/NULL);
		__this->set_deathPrefab_9(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)));
		// rb = gameObject.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2;
		L_2 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_1, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		__this->set_rb_5(L_2);
		// animator = gameObject.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4;
		L_4 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_3, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_animator_6(L_4);
		// health = health_hafiza;
		int32_t L_5 = __this->get_health_hafiza_8();
		__this->set_health_7(L_5);
		// bullet_rate_timer = bullet_rate_timer_hafiza;
		float L_6 = __this->get_bullet_rate_timer_hafiza_17();
		__this->set_bullet_rate_timer_16(L_6);
		// spawnNoktasi.x = 1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_7 = __this->get_address_of_spawnNoktasi_28();
		L_7->set_x_0((1.0f));
		// spawnNoktasi.y = -1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_8 = __this->get_address_of_spawnNoktasi_28();
		L_8->set_y_1((-1.0f));
		// timer_spawning = timer_spawning_hafiza;
		int32_t L_9 = __this->get_timer_spawning_hafiza_35();
		__this->set_timer_spawning_34(((float)((float)L_9)));
		// }
		return;
	}
}
// System.Void BossProperties::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossProperties_Update_m35269BF137896D9407F09335FD084203B31FC7FE (BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC103069815D9A42A5F789873F9DFB18604B38E2A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.Find("Oyuncu");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC103069815D9A42A5F789873F9DFB18604B38E2A, /*hidden argument*/NULL);
		__this->set_player_4(L_0);
		// }
		return;
	}
}
// System.Void BossProperties::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossProperties_FixedUpdate_m16BB30961F6135D7A219BD8A2189AF1FDE073412 (BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BE4CF8258BBFA2FBCB11902E5E2380F6DD7C31F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// talking_timer -= Time.fixedDeltaTime;
		float L_0 = __this->get_talking_timer_21();
		float L_1;
		L_1 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		__this->set_talking_timer_21(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// bullet_rate_timer -= Time.fixedDeltaTime;
		float L_2 = __this->get_bullet_rate_timer_16();
		float L_3;
		L_3 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		__this->set_bullet_rate_timer_16(((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)));
		// if (talking_timer > 0)
		float L_4 = __this->get_talking_timer_21();
		if ((((float)L_4) > ((float)(0.0f))))
		{
			goto IL_00a8;
		}
	}
	{
		// if(health % 30 == 0 || isSpawnEnemies==true)
		int32_t L_5 = __this->get_health_7();
		if (!((int32_t)((int32_t)L_5%(int32_t)((int32_t)30))))
		{
			goto IL_0044;
		}
	}
	{
		bool L_6 = __this->get_isSpawnEnemies_27();
		if (!L_6)
		{
			goto IL_0052;
		}
	}

IL_0044:
	{
		// isSpawnEnemies=true;
		__this->set_isSpawnEnemies_27((bool)1);
		// SpawnEnemies();
		BossProperties_SpawnEnemies_m4D37D45C7B6498EE35702377C2FA8D6497715DB8(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0052:
	{
		// talk.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_talk_10();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// this.gameObject.GetComponent<Renderer>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_9;
		L_9 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_8, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_9, (bool)1, /*hidden argument*/NULL);
		// spawning = false;
		__this->set_spawning_32((bool)0);
		// if(isSpawnEnemies == false)
		bool L_10 = __this->get_isSpawnEnemies_27();
		if (L_10)
		{
			goto IL_00a8;
		}
	}
	{
		// animator.SetBool("spawnEnemies", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_11 = __this->get_animator_6();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_11, _stringLiteral9BE4CF8258BBFA2FBCB11902E5E2380F6DD7C31F, (bool)0, /*hidden argument*/NULL);
		// DuvaraGitme();
		BossProperties_DuvaraGitme_mE4714E643483DDDA96B7E69F024D6BBF95F5423D(__this, /*hidden argument*/NULL);
		// if (bullet_rate_timer <= 0)
		float L_12 = __this->get_bullet_rate_timer_16();
		if ((!(((float)L_12) <= ((float)(0.0f)))))
		{
			goto IL_00a8;
		}
	}
	{
		// Shooting();
		BossProperties_Shooting_m0DBE0FB0FA116F04783C76E5D792AB2F9F2EB474(__this, /*hidden argument*/NULL);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Void BossProperties::DuvaraGitme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossProperties_DuvaraGitme_mE4714E643483DDDA96B7E69F024D6BBF95F5423D (BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B * __this, const RuntimeMethod* method)
{
	{
		// if(duvar_hesap_bool == false)
		bool L_0 = __this->get_duvar_hesap_bool_25();
		if (L_0)
		{
			goto IL_0207;
		}
	}
	{
		// duvar_hesap.x = this.gameObject.transform.position.x - player.transform.position.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of_duvar_hesap_22();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		L_1->set_x_0(((float)il2cpp_codegen_subtract((float)L_5, (float)L_9)));
		// duvar_hesap.y = this.gameObject.transform.position.y - player.transform.position.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_10 = __this->get_address_of_duvar_hesap_22();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_y_3();
		L_10->set_y_1(((float)il2cpp_codegen_subtract((float)L_14, (float)L_18)));
		// duvar_hesap_bool = true;
		__this->set_duvar_hesap_bool_25((bool)1);
		// if (Mathf.Abs(duvar_hesap.x) > Mathf.Abs(duvar_hesap.y))
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_19 = __this->get_address_of_duvar_hesap_22();
		float L_20 = L_19->get_x_0();
		float L_21;
		L_21 = fabsf(L_20);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_22 = __this->get_address_of_duvar_hesap_22();
		float L_23 = L_22->get_y_1();
		float L_24;
		L_24 = fabsf(L_23);
		if ((!(((float)L_21) > ((float)L_24))))
		{
			goto IL_0159;
		}
	}
	{
		// if (this.gameObject.transform.position.x > player.transform.position.x)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_x_2();
		if ((!(((float)L_28) > ((float)L_32))))
		{
			goto IL_0114;
		}
	}
	{
		// movement.x = 1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_33 = __this->get_address_of_movement_23();
		L_33->set_x_0((1.0f));
		// movement.y = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_34 = __this->get_address_of_movement_23();
		L_34->set_y_1((0.0f));
		// bullet_movement.x = -1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_35 = __this->get_address_of_bullet_movement_24();
		L_35->set_x_2((-1.0f));
		// bullet_movement.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_36 = __this->get_address_of_bullet_movement_24();
		L_36->set_y_3((0.0f));
		// }
		goto IL_0207;
	}

IL_0114:
	{
		// movement.x = -1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_37 = __this->get_address_of_movement_23();
		L_37->set_x_0((-1.0f));
		// movement.y = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_38 = __this->get_address_of_movement_23();
		L_38->set_y_1((0.0f));
		// bullet_movement.x = 1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_39 = __this->get_address_of_bullet_movement_24();
		L_39->set_x_2((1.0f));
		// bullet_movement.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_40 = __this->get_address_of_bullet_movement_24();
		L_40->set_y_3((0.0f));
		// }
		goto IL_0207;
	}

IL_0159:
	{
		// if (this.gameObject.transform.position.y > player.transform.position.y)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41;
		L_41 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_42, /*hidden argument*/NULL);
		float L_44 = L_43.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_45, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_46, /*hidden argument*/NULL);
		float L_48 = L_47.get_y_3();
		if ((!(((float)L_44) > ((float)L_48))))
		{
			goto IL_01c7;
		}
	}
	{
		// movement.x = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_49 = __this->get_address_of_movement_23();
		L_49->set_x_0((0.0f));
		// movement.y = 1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_50 = __this->get_address_of_movement_23();
		L_50->set_y_1((1.0f));
		// bullet_movement.x = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_51 = __this->get_address_of_bullet_movement_24();
		L_51->set_x_2((0.0f));
		// bullet_movement.y = -1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_52 = __this->get_address_of_bullet_movement_24();
		L_52->set_y_3((-1.0f));
		// }
		goto IL_0207;
	}

IL_01c7:
	{
		// movement.x = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_53 = __this->get_address_of_movement_23();
		L_53->set_x_0((0.0f));
		// movement.y = -1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_54 = __this->get_address_of_movement_23();
		L_54->set_y_1((-1.0f));
		// bullet_movement.x = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_55 = __this->get_address_of_bullet_movement_24();
		L_55->set_x_2((0.0f));
		// bullet_movement.y = 1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_56 = __this->get_address_of_bullet_movement_24();
		L_56->set_y_3((1.0f));
	}

IL_0207:
	{
		// rb.MovePosition(rb.position + movement * moveSpeed * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_57 = __this->get_rb_5();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_58 = __this->get_rb_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_59;
		L_59 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_58, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_60 = __this->get_movement_23();
		float L_61 = __this->get_moveSpeed_26();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_62;
		L_62 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_60, L_61, /*hidden argument*/NULL);
		float L_63;
		L_63 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_64;
		L_64 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_62, L_63, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_65;
		L_65 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_59, L_64, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_57, L_65, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BossProperties::Shooting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossProperties_Shooting_m0DBE0FB0FA116F04783C76E5D792AB2F9F2EB474 (BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mermi_modu_degisim_sayac--;
		int32_t L_0 = __this->get_mermi_modu_degisim_sayac_18();
		__this->set_mermi_modu_degisim_sayac_18(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// if(mermi_modu_degisim_sayac > 0)
		int32_t L_1 = __this->get_mermi_modu_degisim_sayac_18();
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_009e;
		}
	}
	{
		// bullet_rate_timer = bullet_rate_timer_hafiza;
		float L_2 = __this->get_bullet_rate_timer_hafiza_17();
		__this->set_bullet_rate_timer_16(L_2);
		// bulletForce = bulletForce_hafiza;
		float L_3 = __this->get_bulletForce_hafiza_15();
		__this->set_bulletForce_14(L_3);
		// GameObject bullet = Instantiate(bulletPrefab, (this.gameObject.transform.position + (bullet_movement * 1f)), (this.gameObject.transform.rotation));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_bulletPrefab_13();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_bullet_movement_24();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_8, (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_7, L_9, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_4, L_10, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_15;
		L_15 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_14, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rb.AddForce(bullet_movement * bulletForce * 0.88f, ForceMode2D.Impulse);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = __this->get_bullet_movement_24();
		float L_17 = __this->get_bulletForce_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_16, L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_18, (0.879999995f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_19, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_15, L_20, 1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_009e:
	{
		// else if (mermi_modu_degisim_sayac2 > 0)
		int32_t L_21 = __this->get_mermi_modu_degisim_sayac2_19();
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_01be;
		}
	}
	{
		// mermi_modu_degisim_sayac2--;
		int32_t L_22 = __this->get_mermi_modu_degisim_sayac2_19();
		__this->set_mermi_modu_degisim_sayac2_19(((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)));
		// bullet_rate_timer = Random.Range(bullet_rate_timer_hafiza + 0.1f, bullet_rate_timer_hafiza + 0.3f);
		float L_23 = __this->get_bullet_rate_timer_hafiza_17();
		float L_24 = __this->get_bullet_rate_timer_hafiza_17();
		float L_25;
		L_25 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)il2cpp_codegen_add((float)L_23, (float)(0.100000001f))), ((float)il2cpp_codegen_add((float)L_24, (float)(0.300000012f))), /*hidden argument*/NULL);
		__this->set_bullet_rate_timer_16(L_25);
		// bulletForce = Random.Range(bulletForce_hafiza - 2, bulletForce_hafiza + 2);
		float L_26 = __this->get_bulletForce_hafiza_15();
		float L_27 = __this->get_bulletForce_hafiza_15();
		float L_28;
		L_28 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)il2cpp_codegen_subtract((float)L_26, (float)(2.0f))), ((float)il2cpp_codegen_add((float)L_27, (float)(2.0f))), /*hidden argument*/NULL);
		__this->set_bulletForce_14(L_28);
		// bullet_movement2 = bullet_movement;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = __this->get_bullet_movement_24();
		__this->set_bullet_movement2_20(L_29);
		// if(bullet_movement2.x != 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_30 = __this->get_address_of_bullet_movement2_20();
		float L_31 = L_30->get_x_2();
		if ((((float)L_31) == ((float)(0.0f))))
		{
			goto IL_0138;
		}
	}
	{
		// bullet_movement2.y = Random.Range(-0.66f, 0.66f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_32 = __this->get_address_of_bullet_movement2_20();
		float L_33;
		L_33 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-0.660000026f), (0.660000026f), /*hidden argument*/NULL);
		L_32->set_y_3(L_33);
		// }
		goto IL_0152;
	}

IL_0138:
	{
		// bullet_movement2.x = Random.Range(-0.66f, 0.66f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_34 = __this->get_address_of_bullet_movement2_20();
		float L_35;
		L_35 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-0.660000026f), (0.660000026f), /*hidden argument*/NULL);
		L_34->set_x_2(L_35);
	}

IL_0152:
	{
		// GameObject bullet = Instantiate(bulletPrefab, (this.gameObject.transform.position + (bullet_movement2 * 1f)), (this.gameObject.transform.rotation));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_bulletPrefab_13();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_38, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = __this->get_bullet_movement2_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_40, (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_39, L_41, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_43, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_45;
		L_45 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46;
		L_46 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_36, L_42, L_45, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_47;
		L_47 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_46, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rb.AddForce(bullet_movement2 * bulletForce * 0.88f, ForceMode2D.Impulse);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = __this->get_bullet_movement2_20();
		float L_49 = __this->get_bulletForce_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_48, L_49, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_50, (0.879999995f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52;
		L_52 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_51, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_47, L_52, 1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01be:
	{
		// mermi_modu_degisim_sayac = 5;
		__this->set_mermi_modu_degisim_sayac_18(5);
		// mermi_modu_degisim_sayac2 = 5;
		__this->set_mermi_modu_degisim_sayac2_19(5);
		// }
		return;
	}
}
// System.Void BossProperties::SpawnEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossProperties_SpawnEnemies_m4D37D45C7B6498EE35702377C2FA8D6497715DB8 (BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movement2.x = spawnNoktasi.x - transform.position.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_movement2_29();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of_spawnNoktasi_28();
		float L_2 = L_1->get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		L_0->set_x_0(((float)il2cpp_codegen_subtract((float)L_2, (float)L_5)));
		// movement2.y = spawnNoktasi.y - transform.position.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = __this->get_address_of_movement2_29();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_7 = __this->get_address_of_spawnNoktasi_28();
		float L_8 = L_7->get_y_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		L_6->set_y_1(((float)il2cpp_codegen_subtract((float)L_8, (float)L_11)));
		// timer_spawning -= Time.fixedDeltaTime;
		float L_12 = __this->get_timer_spawning_34();
		float L_13;
		L_13 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		__this->set_timer_spawning_34(((float)il2cpp_codegen_subtract((float)L_12, (float)L_13)));
		// if (spawnNoktasi.x - transform.position.x == 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_14 = __this->get_address_of_spawnNoktasi_28();
		float L_15 = L_14->get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_2();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_15, (float)L_18))) == ((float)(0.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		// movement2.x = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_19 = __this->get_address_of_movement2_29();
		L_19->set_x_0((0.0f));
		// }
		goto IL_00bc;
	}

IL_0095:
	{
		// movement2.x = movement2.x / Mathf.Abs(movement2.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_20 = __this->get_address_of_movement2_29();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_21 = __this->get_address_of_movement2_29();
		float L_22 = L_21->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_23 = __this->get_address_of_movement2_29();
		float L_24 = L_23->get_x_0();
		float L_25;
		L_25 = fabsf(L_24);
		L_20->set_x_0(((float)((float)L_22/(float)L_25)));
	}

IL_00bc:
	{
		// if (spawnNoktasi.y - transform.position.y == 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_26 = __this->get_address_of_spawnNoktasi_28();
		float L_27 = L_26->get_y_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_y_3();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_27, (float)L_30))) == ((float)(0.0f)))))
		{
			goto IL_00f1;
		}
	}
	{
		// movement2.y = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_31 = __this->get_address_of_movement2_29();
		L_31->set_y_1((0.0f));
		// }
		goto IL_0118;
	}

IL_00f1:
	{
		// movement2.y = movement2.y / Mathf.Abs(movement2.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_32 = __this->get_address_of_movement2_29();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_33 = __this->get_address_of_movement2_29();
		float L_34 = L_33->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_35 = __this->get_address_of_movement2_29();
		float L_36 = L_35->get_y_1();
		float L_37;
		L_37 = fabsf(L_36);
		L_32->set_y_1(((float)((float)L_34/(float)L_37)));
	}

IL_0118:
	{
		// if ((int)(spawnNoktasi.x - transform.position.x) == 0 && (int)(spawnNoktasi.y - transform.position.y) == 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_38 = __this->get_address_of_spawnNoktasi_28();
		float L_39 = L_38->get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_40, /*hidden argument*/NULL);
		float L_42 = L_41.get_x_2();
		if (il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract((float)L_39, (float)L_42))))
		{
			goto IL_0851;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_43 = __this->get_address_of_spawnNoktasi_28();
		float L_44 = L_43->get_y_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_45, /*hidden argument*/NULL);
		float L_47 = L_46.get_y_3();
		if (il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract((float)L_44, (float)L_47))))
		{
			goto IL_0851;
		}
	}
	{
		// this.gameObject.GetComponent<Renderer>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48;
		L_48 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_49;
		L_49 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_48, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_49, (bool)0, /*hidden argument*/NULL);
		// if (timer_spawning <= 0)
		float L_50 = __this->get_timer_spawning_34();
		if ((!(((float)L_50) <= ((float)(0.0f)))))
		{
			goto IL_08e8;
		}
	}
	{
		// if (spawning == false)
		bool L_51 = __this->get_spawning_32();
		if (L_51)
		{
			goto IL_08e8;
		}
	}
	{
		// spawning = true;
		__this->set_spawning_32((bool)1);
		// if (whichEnemies == 0)
		int32_t L_52 = __this->get_whichEnemies_31();
		if (L_52)
		{
			goto IL_0339;
		}
	}
	{
		// spawn_distance.x = 1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_53 = __this->get_address_of_spawn_distance_33();
		L_53->set_x_2((1.0f));
		// spawn_distance.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_54 = __this->get_address_of_spawn_distance_33();
		L_54->set_y_3((0.0f));
		// GameObject enemy = Instantiate(Enemies[0], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_55 = __this->get_Enemies_30();
		int32_t L_56 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57 = (L_55)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58;
		L_58 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_58, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_59, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61 = __this->get_spawn_distance_33();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_61, (1.33000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_60, L_62, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64;
		L_64 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_64, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_66;
		L_66 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67;
		L_67 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_57, L_63, L_66, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// spawn_distance.x = -1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_68 = __this->get_address_of_spawn_distance_33();
		L_68->set_x_2((-1.0f));
		// spawn_distance.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_69 = __this->get_address_of_spawn_distance_33();
		L_69->set_y_3((0.0f));
		// GameObject enemy2 = Instantiate(Enemies[0], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_70 = __this->get_Enemies_30();
		int32_t L_71 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = (L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73;
		L_73 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74;
		L_74 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_73, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_74, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76 = __this->get_spawn_distance_33();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77;
		L_77 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_76, (1.33000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
		L_78 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_75, L_77, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79;
		L_79 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80;
		L_80 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_79, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_81;
		L_81 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_80, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_82;
		L_82 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_72, L_78, L_81, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// spawn_distance.x = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_83 = __this->get_address_of_spawn_distance_33();
		L_83->set_x_2((0.0f));
		// spawn_distance.y = 1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_84 = __this->get_address_of_spawn_distance_33();
		L_84->set_y_3((1.0f));
		// GameObject enemy3 = Instantiate(Enemies[0], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_85 = __this->get_Enemies_30();
		int32_t L_86 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_87 = (L_85)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_86));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88;
		L_88 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_88, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_89, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91 = __this->get_spawn_distance_33();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92;
		L_92 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_91, (1.33000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93;
		L_93 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_90, L_92, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_94;
		L_94 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_95;
		L_95 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_94, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_96;
		L_96 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_95, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_97;
		L_97 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_87, L_93, L_96, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// spawn_distance.x = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_98 = __this->get_address_of_spawn_distance_33();
		L_98->set_x_2((0.0f));
		// spawn_distance.y = -1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_99 = __this->get_address_of_spawn_distance_33();
		L_99->set_y_3((-1.0f));
		// GameObject enemy4 = Instantiate(Enemies[0], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_100 = __this->get_Enemies_30();
		int32_t L_101 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_102 = (L_100)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_101));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_103;
		L_103 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_104;
		L_104 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_103, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_105;
		L_105 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_104, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_106 = __this->get_spawn_distance_33();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107;
		L_107 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_106, (1.33000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_108;
		L_108 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_105, L_107, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_109;
		L_109 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_110;
		L_110 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_109, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_111;
		L_111 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_110, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_112;
		L_112 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_102, L_108, L_111, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// whichEnemies++;
		int32_t L_113 = __this->get_whichEnemies_31();
		__this->set_whichEnemies_31(((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1)));
		// }
		goto IL_0835;
	}

IL_0339:
	{
		// else if (whichEnemies == 1)
		int32_t L_114 = __this->get_whichEnemies_31();
		if ((!(((uint32_t)L_114) == ((uint32_t)1))))
		{
			goto IL_04e4;
		}
	}
	{
		// spawn_distance.x = 1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_115 = __this->get_address_of_spawn_distance_33();
		L_115->set_x_2((1.0f));
		// spawn_distance.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_116 = __this->get_address_of_spawn_distance_33();
		L_116->set_y_3((0.0f));
		// GameObject enemy = Instantiate(Enemies[0], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_117 = __this->get_Enemies_30();
		int32_t L_118 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_119 = (L_117)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_118));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_120;
		L_120 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_121;
		L_121 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_120, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_122;
		L_122 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_121, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123 = __this->get_spawn_distance_33();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_124;
		L_124 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_123, (1.33000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_125;
		L_125 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_122, L_124, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_126;
		L_126 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_127;
		L_127 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_126, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_128;
		L_128 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_127, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_129;
		L_129 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_119, L_125, L_128, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// spawn_distance.x = -1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_130 = __this->get_address_of_spawn_distance_33();
		L_130->set_x_2((-1.0f));
		// spawn_distance.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_131 = __this->get_address_of_spawn_distance_33();
		L_131->set_y_3((0.0f));
		// GameObject enemy2 = Instantiate(Enemies[0], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_132 = __this->get_Enemies_30();
		int32_t L_133 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_134 = (L_132)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_133));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_135;
		L_135 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_136;
		L_136 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_135, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_137;
		L_137 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_136, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_138 = __this->get_spawn_distance_33();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_139;
		L_139 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_138, (1.33000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_140;
		L_140 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_137, L_139, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_141;
		L_141 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_142;
		L_142 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_141, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_143;
		L_143 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_142, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_144;
		L_144 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_134, L_140, L_143, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// spawn_distance.x = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_145 = __this->get_address_of_spawn_distance_33();
		L_145->set_x_2((0.0f));
		// spawn_distance.y = 1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_146 = __this->get_address_of_spawn_distance_33();
		L_146->set_y_3((1.0f));
		// GameObject enemy3 = Instantiate(Enemies[1], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_147 = __this->get_Enemies_30();
		int32_t L_148 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_149 = (L_147)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_148));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_150;
		L_150 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_151;
		L_151 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_150, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_152;
		L_152 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_151, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_153 = __this->get_spawn_distance_33();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_154;
		L_154 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_153, (1.33000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_155;
		L_155 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_152, L_154, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_156;
		L_156 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_157;
		L_157 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_156, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_158;
		L_158 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_157, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_159;
		L_159 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_149, L_155, L_158, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// spawn_distance.x = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_160 = __this->get_address_of_spawn_distance_33();
		L_160->set_x_2((0.0f));
		// spawn_distance.y = -1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_161 = __this->get_address_of_spawn_distance_33();
		L_161->set_y_3((-1.0f));
		// GameObject enemy4 = Instantiate(Enemies[1], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_162 = __this->get_Enemies_30();
		int32_t L_163 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_164 = (L_162)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_163));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_165;
		L_165 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_166;
		L_166 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_165, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_167;
		L_167 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_166, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_168 = __this->get_spawn_distance_33();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_169;
		L_169 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_168, (1.33000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_170;
		L_170 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_167, L_169, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_171;
		L_171 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_172;
		L_172 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_171, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_173;
		L_173 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_172, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_174;
		L_174 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_164, L_170, L_173, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// whichEnemies++;
		int32_t L_175 = __this->get_whichEnemies_31();
		__this->set_whichEnemies_31(((int32_t)il2cpp_codegen_add((int32_t)L_175, (int32_t)1)));
		// }
		goto IL_0835;
	}

IL_04e4:
	{
		// else if (whichEnemies == 2)
		int32_t L_176 = __this->get_whichEnemies_31();
		if ((!(((uint32_t)L_176) == ((uint32_t)2))))
		{
			goto IL_068f;
		}
	}
	{
		// spawn_distance.x = 1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_177 = __this->get_address_of_spawn_distance_33();
		L_177->set_x_2((1.0f));
		// spawn_distance.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_178 = __this->get_address_of_spawn_distance_33();
		L_178->set_y_3((0.0f));
		// GameObject enemy = Instantiate(Enemies[0], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_179 = __this->get_Enemies_30();
		int32_t L_180 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_181 = (L_179)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_180));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_182;
		L_182 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_183;
		L_183 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_182, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_184;
		L_184 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_183, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_185 = __this->get_spawn_distance_33();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_186;
		L_186 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_185, (1.33000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_187;
		L_187 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_184, L_186, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_188;
		L_188 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_189;
		L_189 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_188, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_190;
		L_190 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_189, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_191;
		L_191 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_181, L_187, L_190, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// spawn_distance.x = -1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_192 = __this->get_address_of_spawn_distance_33();
		L_192->set_x_2((-1.0f));
		// spawn_distance.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_193 = __this->get_address_of_spawn_distance_33();
		L_193->set_y_3((0.0f));
		// GameObject enemy2 = Instantiate(Enemies[0], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_194 = __this->get_Enemies_30();
		int32_t L_195 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_196 = (L_194)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_195));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_197;
		L_197 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_198;
		L_198 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_197, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_199;
		L_199 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_198, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_200 = __this->get_spawn_distance_33();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_201;
		L_201 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_200, (1.33000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_202;
		L_202 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_199, L_201, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_203;
		L_203 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_204;
		L_204 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_203, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_205;
		L_205 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_204, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_206;
		L_206 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_196, L_202, L_205, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// spawn_distance.x = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_207 = __this->get_address_of_spawn_distance_33();
		L_207->set_x_2((0.0f));
		// spawn_distance.y = 1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_208 = __this->get_address_of_spawn_distance_33();
		L_208->set_y_3((1.0f));
		// GameObject enemy3 = Instantiate(Enemies[2], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_209 = __this->get_Enemies_30();
		int32_t L_210 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_211 = (L_209)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_210));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_212;
		L_212 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_213;
		L_213 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_212, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_214;
		L_214 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_213, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_215 = __this->get_spawn_distance_33();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_216;
		L_216 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_215, (1.33000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_217;
		L_217 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_214, L_216, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_218;
		L_218 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_219;
		L_219 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_218, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_220;
		L_220 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_219, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_221;
		L_221 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_211, L_217, L_220, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// spawn_distance.x = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_222 = __this->get_address_of_spawn_distance_33();
		L_222->set_x_2((0.0f));
		// spawn_distance.y = -1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_223 = __this->get_address_of_spawn_distance_33();
		L_223->set_y_3((-1.0f));
		// GameObject enemy4 = Instantiate(Enemies[2], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_224 = __this->get_Enemies_30();
		int32_t L_225 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_226 = (L_224)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_225));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_227;
		L_227 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_228;
		L_228 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_227, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_229;
		L_229 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_228, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_230 = __this->get_spawn_distance_33();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_231;
		L_231 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_230, (1.33000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_232;
		L_232 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_229, L_231, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_233;
		L_233 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_234;
		L_234 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_233, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_235;
		L_235 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_234, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_236;
		L_236 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_226, L_232, L_235, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// whichEnemies++;
		int32_t L_237 = __this->get_whichEnemies_31();
		__this->set_whichEnemies_31(((int32_t)il2cpp_codegen_add((int32_t)L_237, (int32_t)1)));
		// }
		goto IL_0835;
	}

IL_068f:
	{
		// else if (whichEnemies == 3)
		int32_t L_238 = __this->get_whichEnemies_31();
		if ((!(((uint32_t)L_238) == ((uint32_t)3))))
		{
			goto IL_0835;
		}
	}
	{
		// spawn_distance.x = 1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_239 = __this->get_address_of_spawn_distance_33();
		L_239->set_x_2((1.0f));
		// spawn_distance.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_240 = __this->get_address_of_spawn_distance_33();
		L_240->set_y_3((0.0f));
		// GameObject enemy = Instantiate(Enemies[2], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_241 = __this->get_Enemies_30();
		int32_t L_242 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_243 = (L_241)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_242));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_244;
		L_244 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_245;
		L_245 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_244, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_246;
		L_246 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_245, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_247 = __this->get_spawn_distance_33();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_248;
		L_248 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_247, (1.33000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_249;
		L_249 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_246, L_248, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_250;
		L_250 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_251;
		L_251 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_250, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_252;
		L_252 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_251, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_253;
		L_253 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_243, L_249, L_252, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// spawn_distance.x = -1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_254 = __this->get_address_of_spawn_distance_33();
		L_254->set_x_2((-1.0f));
		// spawn_distance.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_255 = __this->get_address_of_spawn_distance_33();
		L_255->set_y_3((0.0f));
		// GameObject enemy2 = Instantiate(Enemies[2], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_256 = __this->get_Enemies_30();
		int32_t L_257 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_258 = (L_256)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_257));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_259;
		L_259 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_260;
		L_260 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_259, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_261;
		L_261 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_260, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_262 = __this->get_spawn_distance_33();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_263;
		L_263 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_262, (1.33000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_264;
		L_264 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_261, L_263, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_265;
		L_265 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_266;
		L_266 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_265, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_267;
		L_267 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_266, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_268;
		L_268 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_258, L_264, L_267, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// spawn_distance.x = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_269 = __this->get_address_of_spawn_distance_33();
		L_269->set_x_2((0.0f));
		// spawn_distance.y = 1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_270 = __this->get_address_of_spawn_distance_33();
		L_270->set_y_3((1.0f));
		// GameObject enemy3 = Instantiate(Enemies[2], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_271 = __this->get_Enemies_30();
		int32_t L_272 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_273 = (L_271)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_272));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_274;
		L_274 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_275;
		L_275 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_274, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_276;
		L_276 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_275, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_277 = __this->get_spawn_distance_33();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_278;
		L_278 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_277, (1.33000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_279;
		L_279 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_276, L_278, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_280;
		L_280 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_281;
		L_281 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_280, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_282;
		L_282 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_281, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_283;
		L_283 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_273, L_279, L_282, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// spawn_distance.x = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_284 = __this->get_address_of_spawn_distance_33();
		L_284->set_x_2((0.0f));
		// spawn_distance.y = -1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_285 = __this->get_address_of_spawn_distance_33();
		L_285->set_y_3((-1.0f));
		// GameObject enemy4 = Instantiate(Enemies[2], (this.gameObject.transform.position + (spawn_distance * 1.33f)), (this.gameObject.transform.rotation));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_286 = __this->get_Enemies_30();
		int32_t L_287 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_288 = (L_286)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_287));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_289;
		L_289 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_290;
		L_290 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_289, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_291;
		L_291 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_290, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_292 = __this->get_spawn_distance_33();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_293;
		L_293 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_292, (1.33000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_294;
		L_294 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_291, L_293, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_295;
		L_295 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_296;
		L_296 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_295, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_297;
		L_297 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_296, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_298;
		L_298 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_288, L_294, L_297, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// whichEnemies++;
		int32_t L_299 = __this->get_whichEnemies_31();
		__this->set_whichEnemies_31(((int32_t)il2cpp_codegen_add((int32_t)L_299, (int32_t)1)));
	}

IL_0835:
	{
		// isSpawnEnemies = false;
		__this->set_isSpawnEnemies_27((bool)0);
		// timer_spawning = timer_spawning_hafiza;
		int32_t L_300 = __this->get_timer_spawning_hafiza_35();
		__this->set_timer_spawning_34(((float)((float)L_300)));
		// duvar_hesap_bool = false;
		__this->set_duvar_hesap_bool_25((bool)0);
		// }
		return;
	}

IL_0851:
	{
		// if (movement2.x != 0 && movement2.y != 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_301 = __this->get_address_of_movement2_29();
		float L_302 = L_301->get_x_0();
		if ((((float)L_302) == ((float)(0.0f))))
		{
			goto IL_08b2;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_303 = __this->get_address_of_movement2_29();
		float L_304 = L_303->get_y_1();
		if ((((float)L_304) == ((float)(0.0f))))
		{
			goto IL_08b2;
		}
	}
	{
		// rb.MovePosition(rb.position + movement2 * (moveSpeed / 0.835f) * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_305 = __this->get_rb_5();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_306 = __this->get_rb_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_307;
		L_307 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_306, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_308 = __this->get_movement2_29();
		float L_309 = __this->get_moveSpeed_26();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_310;
		L_310 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_308, ((float)((float)L_309/(float)(0.834999979f))), /*hidden argument*/NULL);
		float L_311;
		L_311 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_312;
		L_312 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_310, L_311, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_313;
		L_313 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_307, L_312, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_305, L_313, /*hidden argument*/NULL);
		// }
		return;
	}

IL_08b2:
	{
		// rb.MovePosition(rb.position + movement2 * moveSpeed * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_314 = __this->get_rb_5();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_315 = __this->get_rb_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_316;
		L_316 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_315, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_317 = __this->get_movement2_29();
		float L_318 = __this->get_moveSpeed_26();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_319;
		L_319 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_317, L_318, /*hidden argument*/NULL);
		float L_320;
		L_320 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_321;
		L_321 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_319, L_320, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_322;
		L_322 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_316, L_321, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_314, L_322, /*hidden argument*/NULL);
	}

IL_08e8:
	{
		// }
		return;
	}
}
// System.Void BossProperties::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossProperties_OnCollisionEnter2D_m29FB556EE3ED1A82493B380E6C58CF835C5204C0 (BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A_m0A2DF8A7E3E419BE4FE5BEA69B495900DE1F520D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral792986023063458DB5220162B09A329A539E8E90);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "bullet")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral792986023063458DB5220162B09A329A539E8E90, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// health -= collision.gameObject.GetComponent<Bullet_Collider>().bulletPower;
		int32_t L_4 = __this->get_health_7();
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_5 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_5, /*hidden argument*/NULL);
		Bullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A * L_7;
		L_7 = GameObject_GetComponent_TisBullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A_m0A2DF8A7E3E419BE4FE5BEA69B495900DE1F520D(L_6, /*hidden argument*/GameObject_GetComponent_TisBullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A_m0A2DF8A7E3E419BE4FE5BEA69B495900DE1F520D_RuntimeMethod_var);
		int32_t L_8 = L_7->get_bulletPower_4();
		__this->set_health_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_8)));
		// Destroy(collision.gameObject);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_9 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_10, /*hidden argument*/NULL);
		// if (health <= 0)
		int32_t L_11 = __this->get_health_7();
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		// GameObject death = Instantiate(deathPrefab, transform.position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_deathPrefab_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_12, L_14, L_16, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// this.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)0, /*hidden argument*/NULL);
		// droppingItem();
		BossProperties_droppingItem_m45B103B487FE0516CDD2300F122F650080C8AC0A(__this, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void BossProperties::droppingItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossProperties_droppingItem_m45B103B487FE0516CDD2300F122F650080C8AC0A (BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ItemRandom == 2)
		int32_t L_0 = __this->get_ItemRandom_12();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0035;
		}
	}
	{
		// GameObject Item = Instantiate(Items, this.gameObject.transform.position, this.gameObject.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_Items_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_1, L_4, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void BossProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossProperties__ctor_m5E8C1B49EDE3D85AF57DCCDE5C19EA0C9250E962 (BossProperties_t591214C5F4C03C2E76CB0EB9ED49F4D08CDA866B * __this, const RuntimeMethod* method)
{
	{
		// private int health_hafiza = 150;
		__this->set_health_hafiza_8(((int32_t)150));
		// [SerializeField] private int ItemRandom = 2;
		__this->set_ItemRandom_12(2);
		// private float bulletForce = 20f;
		__this->set_bulletForce_14((20.0f));
		// private float bulletForce_hafiza = 20f;
		__this->set_bulletForce_hafiza_15((20.0f));
		// private float bullet_rate_timer_hafiza = 0.25f;
		__this->set_bullet_rate_timer_hafiza_17((0.25f));
		// private int mermi_modu_degisim_sayac = 5;
		__this->set_mermi_modu_degisim_sayac_18(5);
		// private int mermi_modu_degisim_sayac2 = 5;
		__this->set_mermi_modu_degisim_sayac2_19(5);
		// private float talking_timer = 5;
		__this->set_talking_timer_21((5.0f));
		// private float moveSpeed = 2f;
		__this->set_moveSpeed_26((2.0f));
		// private int timer_spawning_hafiza = 5;
		__this->set_timer_spawning_hafiza_35(5);
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
// System.Void BossShoot::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossShoot_Start_m0E55EE075218EFD7AC02BDD9CC8694B45A25CFCC (BossShoot_t103CD54ED11393A138B10A2913FBC4D86155E904 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BossShoot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossShoot_Update_m1F48733A49EDBD1893B64E64DAC78FD1C1AFCA12 (BossShoot_t103CD54ED11393A138B10A2913FBC4D86155E904 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BossShoot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossShoot__ctor_m3115BBB1C20FB4CD4D2186BA44D20F2D4A279B7E (BossShoot_t103CD54ED11393A138B10A2913FBC4D86155E904 * __this, const RuntimeMethod* method)
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
// System.Void Bullet_Collider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Collider_Start_m0DCFFE1A5E600CCBC85041D80E3B5BE564333AE1 (Bullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A * __this, const RuntimeMethod* method)
{
	{
		// bulletPower = 1 * SaveObject.singleton.GetCurrentAmmo();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_0;
		L_0 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = SaveObject_GetCurrentAmmo_m0A00BBBE8FECC0500300447BA669743B0C40DDD6(L_0, /*hidden argument*/NULL);
		__this->set_bulletPower_4(L_1);
		// }
		return;
	}
}
// System.Void Bullet_Collider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Collider_Update_m3E0EF6A01743B75FD3D4120F867C187DDCA17E2C (Bullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Bullet_Collider::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Collider_OnCollisionEnter2D_m99043B62E0B71E301FFAB2C41CA49297DB89C6C2 (Bullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag == "Wall")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Bullet_Collider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Collider__ctor_m33446388512A06228D717AC30B6029C040178B14 (Bullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A * __this, const RuntimeMethod* method)
{
	{
		// [HideInInspector] public int bulletPower = 1;
		__this->set_bulletPower_4(1);
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
// System.Void Death_Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Death_Enemy_Update_mFDEC3138853B80C9DBF1CB6DD62987801FBDCB75 (Death_Enemy_tCC4978ED49531A14A0EC74D3B9504B6556D1960F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deathTime -= Time.deltaTime;
		float L_0 = __this->get_deathTime_4();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_deathTime_4(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if(deathTime <= 0)
		float L_2 = __this->get_deathTime_4();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_002a;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Death_Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Death_Enemy__ctor_m62D98D13881AD2BFCE8B4A91DA36D49ADA79E05E (Death_Enemy_tCC4978ED49531A14A0EC74D3B9504B6556D1960F * __this, const RuntimeMethod* method)
{
	{
		// private float deathTime = 2f;
		__this->set_deathTime_4((2.0f));
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
// System.Void End::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void End_Start_m8A828C72555228BD1421F31D02F9E8D271D0A9E3 (End_tCAD9562D0381FD04310D8A496C18ABE9B9F198CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// colorr = new Color(0, 0, 0, 0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_colorr_5(L_0);
		// this.gameObject.GetComponentInChildren<Renderer>().material.color = colorr;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_2;
		L_2 = GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18(L_1, /*hidden argument*/GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3;
		L_3 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_2, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = __this->get_colorr_5();
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void End::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void End_Update_mDDB28336222F411FF526AF0EF34C9527135571CC (End_tCAD9562D0381FD04310D8A496C18ABE9B9F198CB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void End::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void End_FixedUpdate_m182B6A866A4D0616D6A428AFB925F2171A8230B6 (End_tCAD9562D0381FD04310D8A496C18ABE9B9F198CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(player.GetComponent<PlayerMovement>().theEnd == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_4();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_1;
		L_1 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_0, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		bool L_2 = L_1->get_theEnd_24();
		if (!L_2)
		{
			goto IL_00bb;
		}
	}
	{
		// timer2 -= Time.fixedDeltaTime;
		float L_3 = __this->get_timer2_7();
		float L_4;
		L_4 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		__this->set_timer2_7(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
		// if (timer2 <= 0)
		float L_5 = __this->get_timer2_7();
		if ((!(((float)L_5) <= ((float)(0.0f)))))
		{
			goto IL_00bb;
		}
	}
	{
		// timer -= Time.fixedDeltaTime;
		float L_6 = __this->get_timer_8();
		float L_7;
		L_7 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		__this->set_timer_8(((float)il2cpp_codegen_subtract((float)L_6, (float)L_7)));
		// texts[0].enabled = false;
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_8 = __this->get_texts_6();
		int32_t L_9 = 0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_10, (bool)0, /*hidden argument*/NULL);
		// texts[1].enabled = false;
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_11 = __this->get_texts_6();
		int32_t L_12 = 1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_13, (bool)0, /*hidden argument*/NULL);
		// colorr.a += Time.fixedDeltaTime / 4;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_14 = __this->get_address_of_colorr_5();
		float* L_15 = L_14->get_address_of_a_3();
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		float L_18;
		L_18 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		*((float*)L_16) = (float)((float)il2cpp_codegen_add((float)L_17, (float)((float)((float)L_18/(float)(4.0f)))));
		// this.gameObject.GetComponentInChildren<Renderer>().material.color = colorr;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_20;
		L_20 = GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18(L_19, /*hidden argument*/GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21;
		L_21 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_20, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22 = __this->get_colorr_5();
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_21, L_22, /*hidden argument*/NULL);
		// if (timer <= 0)
		float L_23 = __this->get_timer_8();
		if ((!(((float)L_23) <= ((float)(0.0f)))))
		{
			goto IL_00bb;
		}
	}
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_24;
		L_24 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_24;
		int32_t L_25;
		L_25 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_00bb:
	{
		// }
		return;
	}
}
// System.Void End::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void End__ctor_m205CBA8A3445D0A0E1224ACFD8A032DF066876DF (End_tCAD9562D0381FD04310D8A496C18ABE9B9F198CB * __this, const RuntimeMethod* method)
{
	{
		// private float timer2 = 2;
		__this->set_timer2_7((2.0f));
		// private float timer = 6;
		__this->set_timer_8((6.0f));
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
// System.Void EndScene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndScene_Start_mA00864B06A154C5AB9682BDB156599127B458F60 (EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D61429A77614470501E536C4B7A7CB204B9125B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = gameObject.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1;
		L_1 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_0, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		__this->set_rb_10(L_1);
		// movement.x = 2.24f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_2 = __this->get_address_of_movement_11();
		L_2->set_x_0((2.24000001f));
		// movement.y = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = __this->get_address_of_movement_11();
		L_3->set_y_1((0.0f));
		// animator.SetFloat("speed", 1);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_animator_13();
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_4, _stringLiteral2D61429A77614470501E536C4B7A7CB204B9125B, (1.0f), /*hidden argument*/NULL);
		// colorr = new Color(0, 0, 0, 0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_5), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_colorr_8(L_5);
		// colorr2 = new Color(255,255,255, 0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_6), (255.0f), (255.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_colorr2_9(L_6);
		// square.GetComponentInChildren<Renderer>().material.color = colorr;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_square_6();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_8;
		L_8 = GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18(L_7, /*hidden argument*/GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9;
		L_9 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_8, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10 = __this->get_colorr_8();
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_9, L_10, /*hidden argument*/NULL);
		// text.GetComponentInChildren<Text>().material.color = colorr;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_text_7();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12;
		L_12 = Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3(L_11, /*hidden argument*/Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13;
		L_13 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_12);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = __this->get_colorr_8();
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EndScene::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndScene_Update_m929B387043C4CC3C10856567D3BFF5123611645B (EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void EndScene::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndScene_FixedUpdate_m59013A8492D34E4BED8C63D4ECDE70B7AAB99654 (EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D61429A77614470501E536C4B7A7CB204B9125B);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// timer -= Time.fixedDeltaTime;
		float L_0 = __this->get_timer_14();
		float L_1;
		L_1 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		__this->set_timer_14(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if(timer <= 0)
		float L_2 = __this->get_timer_14();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0074;
		}
	}
	{
		// this.gameObject.GetComponent<Renderer>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_4;
		L_4 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_3, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_4, (bool)1, /*hidden argument*/NULL);
		// foreach(Transform child in this.gameObject.transform)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		RuntimeObject* L_7;
		L_7 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0059;
		}

IL_0043:
		{
			// foreach(Transform child in this.gameObject.transform)
			RuntimeObject* L_8 = V_0;
			RuntimeObject * L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			// child.GetComponent<Renderer>().enabled = true;
			Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_10;
			L_10 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_9, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
			Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_10, (bool)1, /*hidden argument*/NULL);
		}

IL_0059:
		{
			// foreach(Transform child in this.gameObject.transform)
			RuntimeObject* L_11 = V_0;
			bool L_12;
			L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_0043;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_0073;
			}
		}

IL_006d:
		{
			RuntimeObject* L_15 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_15);
		}

IL_0073:
		{
			IL2CPP_END_FINALLY(99)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x74, IL_0074)
	}

IL_0074:
	{
		// if(this.gameObject.transform.position.x < 2.24f)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_x_2();
		if ((!(((float)L_19) < ((float)(2.24000001f)))))
		{
			goto IL_00c7;
		}
	}
	{
		// rb.MovePosition(rb.position + movement * moveSpeed * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_20 = __this->get_rb_10();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_21 = __this->get_rb_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_21, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = __this->get_movement_11();
		float L_24 = __this->get_moveSpeed_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		L_25 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_23, L_24, /*hidden argument*/NULL);
		float L_26;
		L_26 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		L_27 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_25, L_26, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		L_28 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_22, L_27, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_20, L_28, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00c7:
	{
		// animator.SetFloat("speed", -1);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_29 = __this->get_animator_13();
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_29, _stringLiteral2D61429A77614470501E536C4B7A7CB204B9125B, (-1.0f), /*hidden argument*/NULL);
		// timer2 -= Time.fixedDeltaTime;
		float L_30 = __this->get_timer2_15();
		float L_31;
		L_31 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		__this->set_timer2_15(((float)il2cpp_codegen_subtract((float)L_30, (float)L_31)));
		// if(timer2 <= 0)
		float L_32 = __this->get_timer2_15();
		if ((!(((float)L_32) <= ((float)(0.0f)))))
		{
			goto IL_01ed;
		}
	}
	{
		// colorr.a += Time.fixedDeltaTime / 5;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_33 = __this->get_address_of_colorr_8();
		float* L_34 = L_33->get_address_of_a_3();
		float* L_35 = L_34;
		float L_36 = *((float*)L_35);
		float L_37;
		L_37 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		*((float*)L_35) = (float)((float)il2cpp_codegen_add((float)L_36, (float)((float)((float)L_37/(float)(5.0f)))));
		// colorr2.a += Time.fixedDeltaTime / 5000;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_38 = __this->get_address_of_colorr2_9();
		float* L_39 = L_38->get_address_of_a_3();
		float* L_40 = L_39;
		float L_41 = *((float*)L_40);
		float L_42;
		L_42 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		*((float*)L_40) = (float)((float)il2cpp_codegen_add((float)L_41, (float)((float)((float)L_42/(float)(5000.0f)))));
		// square.GetComponentInChildren<Renderer>().material.color = colorr;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = __this->get_square_6();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_44;
		L_44 = GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18(L_43, /*hidden argument*/GameObject_GetComponentInChildren_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m7DC1BE81594810B37D0CFC219B1F417B43D60F18_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_45;
		L_45 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_44, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_46 = __this->get_colorr_8();
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_45, L_46, /*hidden argument*/NULL);
		// text.GetComponentInChildren<Text>().material.color = colorr2;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_47 = __this->get_text_7();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_48;
		L_48 = Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3(L_47, /*hidden argument*/Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_49;
		L_49 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_48);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_50 = __this->get_colorr2_9();
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_49, L_50, /*hidden argument*/NULL);
		// loveStory.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = __this->get_loveStory_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_51, (bool)1, /*hidden argument*/NULL);
		// kari.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = __this->get_kari_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_52, (bool)0, /*hidden argument*/NULL);
		// this.gameObject.GetComponent<Renderer>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53;
		L_53 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_54;
		L_54 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_53, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_54, (bool)0, /*hidden argument*/NULL);
		// foreach (Transform child in this.gameObject.transform)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55;
		L_55 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_55, /*hidden argument*/NULL);
		RuntimeObject* L_57;
		L_57 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_56, /*hidden argument*/NULL);
		V_0 = L_57;
	}

IL_01a2:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01ba;
		}

IL_01a4:
		{
			// foreach (Transform child in this.gameObject.transform)
			RuntimeObject* L_58 = V_0;
			RuntimeObject * L_59;
			L_59 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_58);
			// child.GetComponent<Renderer>().enabled = false;
			Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_60;
			L_60 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_59, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
			Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_60, (bool)0, /*hidden argument*/NULL);
		}

IL_01ba:
		{
			// foreach (Transform child in this.gameObject.transform)
			RuntimeObject* L_61 = V_0;
			bool L_62;
			L_62 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_61);
			if (L_62)
			{
				goto IL_01a4;
			}
		}

IL_01c2:
		{
			IL2CPP_LEAVE(0x1D5, FINALLY_01c4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01c4;
	}

FINALLY_01c4:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_63 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_63, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_64 = V_1;
			if (!L_64)
			{
				goto IL_01d4;
			}
		}

IL_01ce:
		{
			RuntimeObject* L_65 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_65);
		}

IL_01d4:
		{
			IL2CPP_END_FINALLY(452)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(452)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1D5, IL_01d5)
	}

IL_01d5:
	{
		// if(colorr2.a >= 0.0033f)
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_66 = __this->get_address_of_colorr2_9();
		float L_67 = L_66->get_a_3();
		if ((!(((float)L_67) >= ((float)(0.00329999998f)))))
		{
			goto IL_01ed;
		}
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
	}

IL_01ed:
	{
		// }
		return;
	}
}
// System.Void EndScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndScene__ctor_m5EA9E41FCCA199D9316B1162E524B9603FBAA2B9 (EndScene_tEBB964DE2A183A7B620B092AF830F333FA67C7C1 * __this, const RuntimeMethod* method)
{
	{
		// private float moveSpeed = 0.5f;
		__this->set_moveSpeed_12((0.5f));
		// private float timer = 3;
		__this->set_timer_14((3.0f));
		// private float timer2 = 3;
		__this->set_timer2_15((3.0f));
		// private float timer3 = 3;
		__this->set_timer3_16((3.0f));
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
// System.Void LevelTimer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelTimer_Update_mAB8EE2DF7C0B9D73BBA5E75F73BC7D9E28A4AA86 (LevelTimer_tFBA966E1AE8F239C6FD453D251111817F9F3911C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayertakeDamage = Player.GetComponent<PlayerMovement>().isDamage;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Player_7();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_1;
		L_1 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_0, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		bool L_2 = L_1->get_isDamage_13();
		__this->set_PlayertakeDamage_8(L_2);
		// if (PlayertakeDamage == true)
		bool L_3 = __this->get_PlayertakeDamage_8();
		if (!L_3)
		{
			goto IL_00a7;
		}
	}
	{
		// PlayertakeDamage = false;
		__this->set_PlayertakeDamage_8((bool)0);
		// geriSayim += 10;
		float L_4 = __this->get_geriSayim_4();
		__this->set_geriSayim_4(((float)il2cpp_codegen_add((float)L_4, (float)(10.0f))));
		// geriSayimHafiza += 10;
		int32_t L_5 = __this->get_geriSayimHafiza_5();
		__this->set_geriSayimHafiza_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)((int32_t)10))));
		// SayacObject.transform.localScale += new Vector3(0.2f, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_SayacObject_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), (0.200000003f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_10, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_8, L_11, /*hidden argument*/NULL);
		// SayacObject.transform.position += new Vector3(0.1f, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_SayacObject_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = L_13;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), (0.100000001f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_15, L_16, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_14, L_17, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		// if (geriSayim != 0)
		float L_18 = __this->get_geriSayim_4();
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_01ef;
		}
	}
	{
		// geriSayim -= Time.deltaTime;
		float L_19 = __this->get_geriSayim_4();
		float L_20;
		L_20 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_geriSayim_4(((float)il2cpp_codegen_subtract((float)L_19, (float)L_20)));
		// if (geriSayim < geriSayimHafiza)
		float L_21 = __this->get_geriSayim_4();
		int32_t L_22 = __this->get_geriSayimHafiza_5();
		if ((!(((float)L_21) < ((float)((float)((float)L_22))))))
		{
			goto IL_0163;
		}
	}
	{
		// geriSayimHafiza = (int)geriSayim;
		float L_23 = __this->get_geriSayim_4();
		__this->set_geriSayimHafiza_5(il2cpp_codegen_cast_double_to_int<int32_t>(L_23));
		// SayacObject.transform.localScale -= new Vector3(0.2f, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_SayacObject_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = L_25;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), (0.200000003f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_27, L_28, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_26, L_29, /*hidden argument*/NULL);
		// SayacObject.transform.position -= new Vector3(0.1f, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_SayacObject_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = L_31;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_34), (0.100000001f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_33, L_34, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_32, L_35, /*hidden argument*/NULL);
		// if (geriSayimHafiza % 5 == 0)
		int32_t L_36 = __this->get_geriSayimHafiza_5();
		if (((int32_t)((int32_t)L_36%(int32_t)5)))
		{
			goto IL_0163;
		}
	}
	{
		// random2 = Random.Range(3, 7);
		int32_t L_37;
		L_37 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(3, 7, /*hidden argument*/NULL);
		__this->set_random2_11(L_37);
		// CreateEnemy();
		LevelTimer_CreateEnemy_mC137B70A18B07A12E2822D71F460AA42FEAA56B4(__this, /*hidden argument*/NULL);
	}

IL_0163:
	{
		// if (SayacObject.transform.localScale.x <= 0)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = __this->get_SayacObject_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_38, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_39, /*hidden argument*/NULL);
		float L_41 = L_40.get_x_2();
		if ((!(((float)L_41) <= ((float)(0.0f)))))
		{
			goto IL_01ef;
		}
	}
	{
		// geriSayim = 0;
		__this->set_geriSayim_4((0.0f));
		// geriSayimHafiza = 0;
		__this->set_geriSayimHafiza_5(0);
		// SayacObject.transform.localScale += new Vector3(16, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = __this->get_SayacObject_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_42, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44 = L_43;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_46), (16.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_45, L_46, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_44, L_47, /*hidden argument*/NULL);
		// SayacObject.transform.position += new Vector3(8f, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = __this->get_SayacObject_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50 = L_49;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_50, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_52), (8.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_51, L_52, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_50, L_53, /*hidden argument*/NULL);
	}

IL_01ef:
	{
		// }
		return;
	}
}
// System.Void LevelTimer::CreateEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelTimer_CreateEnemy_mC137B70A18B07A12E2822D71F460AA42FEAA56B4 (LevelTimer_tFBA966E1AE8F239C6FD453D251111817F9F3911C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int j = 0; j < 12; j++) { respawner_hafiza[j] = 0; }
		V_0 = 0;
		goto IL_0011;
	}

IL_0004:
	{
		// for (int j = 0; j < 12; j++) { respawner_hafiza[j] = 0; }
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_respawner_hafiza_13();
		int32_t L_1 = V_0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (int32_t)0);
		// for (int j = 0; j < 12; j++) { respawner_hafiza[j] = 0; }
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0011:
	{
		// for (int j = 0; j < 12; j++) { respawner_hafiza[j] = 0; }
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)12))))
		{
			goto IL_0004;
		}
	}
	{
		// for(int i = 0; i < random2; i++)
		V_1 = 0;
		goto IL_008a;
	}

IL_001a:
	{
		// randomNumber = Random.Range(0, 12);
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)12), /*hidden argument*/NULL);
		__this->set_randomNumber_12(L_4);
		// if(respawner_hafiza[randomNumber] == 1)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = __this->get_respawner_hafiza_13();
		int32_t L_6 = __this->get_randomNumber_12();
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_003e;
		}
	}
	{
		// i--;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
		// continue;
		goto IL_0086;
	}

IL_003e:
	{
		// respawner_hafiza[randomNumber] = 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = __this->get_respawner_hafiza_13();
		int32_t L_11 = __this->get_randomNumber_12();
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (int32_t)1);
		// GameObject Enemy = Instantiate(enemyPrefab, Respawner[randomNumber].transform.position, Respawner[randomNumber].transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_enemyPrefab_10();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = __this->get_Respawner_9();
		int32_t L_14 = __this->get_randomNumber_12();
		int32_t L_15 = L_14;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_19 = __this->get_Respawner_9();
		int32_t L_20 = __this->get_randomNumber_12();
		int32_t L_21 = L_20;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_12, L_18, L_24, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_0086:
	{
		// for(int i = 0; i < random2; i++)
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_008a:
	{
		// for(int i = 0; i < random2; i++)
		int32_t L_27 = V_1;
		int32_t L_28 = __this->get_random2_11();
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LevelTimer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelTimer__ctor_m98EAB6A82E0A47B62BD3156C68FB2EAF3AD944F9 (LevelTimer_tFBA966E1AE8F239C6FD453D251111817F9F3911C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float geriSayim = 90f;
		__this->set_geriSayim_4((90.0f));
		// private int geriSayimHafiza = 90;
		__this->set_geriSayimHafiza_5(((int32_t)90));
		// int[] respawner_hafiza = new int[12];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		__this->set_respawner_hafiza_13(L_0);
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
// System.Void MenuScript::OpenButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_OpenButton_mDE524A32C8728821638BFC37FAA69BB89C47A67C (MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SaveObject.singleton.ResetAllItem();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_0;
		L_0 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		SaveObject_ResetAllItem_mCF776F919C8A73768EBBE2C99AF3DA6963728B4F(L_0, /*hidden argument*/NULL);
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuScript::QuitButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_QuitButton_mA969963BA3568E07629752C5655443C56D6620D8 (MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript__ctor_m5DE33EE74C32A13B9B00105C42F0E6FC738C3DF6 (MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716 * __this, const RuntimeMethod* method)
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
// System.Void OgreProperties::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OgreProperties_Start_m4DFD9F99AA5C8DBEF1374800D51950F226059B71 (OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deathPrefab = Resources.Load("Death") as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0;
		L_0 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8, /*hidden argument*/NULL);
		__this->set_deathPrefab_11(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)));
		// rb = gameObject.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2;
		L_2 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_1, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		__this->set_rb_7(L_2);
		// animator = gameObject.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4;
		L_4 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_3, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_animator_8(L_4);
		// health = 3;
		__this->set_health_9(3);
		// }
		return;
	}
}
// System.Void OgreProperties::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OgreProperties_Update_m1C19305BFECA20172C4F6A69663B93F69CE6B863 (OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC103069815D9A42A5F789873F9DFB18604B38E2A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.Find("Oyuncu");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC103069815D9A42A5F789873F9DFB18604B38E2A, /*hidden argument*/NULL);
		__this->set_player_4(L_0);
		// playerTransform = player.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		__this->set_playerTransform_5(L_2);
		// player_zombie = false;
		__this->set_player_zombie_10((bool)0);
		// movement.x = playerTransform.position.x - transform.position.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = __this->get_address_of_movement_15();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_playerTransform_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		L_3->set_x_0(((float)il2cpp_codegen_subtract((float)L_6, (float)L_9)));
		// if (playerTransform.position.x - transform.position.x == 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_playerTransform_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_x_2();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_15))) == ((float)(0.0f)))))
		{
			goto IL_008e;
		}
	}
	{
		// movement.x = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = __this->get_address_of_movement_15();
		L_16->set_x_0((0.0f));
		// }
		goto IL_00b5;
	}

IL_008e:
	{
		// movement.x = movement.x / Mathf.Abs(movement.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_17 = __this->get_address_of_movement_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_18 = __this->get_address_of_movement_15();
		float L_19 = L_18->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_20 = __this->get_address_of_movement_15();
		float L_21 = L_20->get_x_0();
		float L_22;
		L_22 = fabsf(L_21);
		L_17->set_x_0(((float)((float)L_19/(float)L_22)));
	}

IL_00b5:
	{
		// movement.y = playerTransform.position.y - transform.position.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_23 = __this->get_address_of_movement_15();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = __this->get_playerTransform_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_y_3();
		L_23->set_y_1(((float)il2cpp_codegen_subtract((float)L_26, (float)L_29)));
		// if (playerTransform.position.y - transform.position.y == 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = __this->get_playerTransform_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_y_3();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_32, (float)L_35))) == ((float)(0.0f)))))
		{
			goto IL_011a;
		}
	}
	{
		// movement.y = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_36 = __this->get_address_of_movement_15();
		L_36->set_y_1((0.0f));
		// }
		return;
	}

IL_011a:
	{
		// movement.y = movement.y / Mathf.Abs(movement.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_37 = __this->get_address_of_movement_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_38 = __this->get_address_of_movement_15();
		float L_39 = L_38->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_40 = __this->get_address_of_movement_15();
		float L_41 = L_40->get_y_1();
		float L_42;
		L_42 = fabsf(L_41);
		L_37->set_y_1(((float)((float)L_39/(float)L_42)));
		// }
		return;
	}
}
// System.Void OgreProperties::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OgreProperties_FixedUpdate_m452F3D0B17063781F2D84F73FF0CF123FE1D71E8 (OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4EBC3A0CFE0E64E93D5DDC757B73F7A0396241E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (player_zombie == true)
		bool L_0 = __this->get_player_zombie_10();
		if (!L_0)
		{
			goto IL_00bf;
		}
	}
	{
		// if (movement.x != 0 && movement.y != 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of_movement_15();
		float L_2 = L_1->get_x_0();
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_007a;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = __this->get_address_of_movement_15();
		float L_4 = L_3->get_y_1();
		if ((((float)L_4) == ((float)(0.0f))))
		{
			goto IL_007a;
		}
	}
	{
		// rb.MovePosition(rb.position + -1 * movement * (moveSpeed / 0.835f) * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_5 = __this->get_rb_7();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_6 = __this->get_rb_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = __this->get_movement_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline((-1.0f), L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_moveSpeed_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_9, ((float)((float)L_10/(float)(0.834999979f))), /*hidden argument*/NULL);
		float L_12;
		L_12 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_11, L_12, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_7, L_13, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_5, L_14, /*hidden argument*/NULL);
		// }
		goto IL_0162;
	}

IL_007a:
	{
		// rb.MovePosition(rb.position + -1 * movement * moveSpeed * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_15 = __this->get_rb_7();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_16 = __this->get_rb_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_16, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = __this->get_movement_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline((-1.0f), L_18, /*hidden argument*/NULL);
		float L_20 = __this->get_moveSpeed_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_19, L_20, /*hidden argument*/NULL);
		float L_22;
		L_22 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_21, L_22, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_17, L_23, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_15, L_24, /*hidden argument*/NULL);
		// }
		goto IL_0162;
	}

IL_00bf:
	{
		// else if (smokebomb == true)
		bool L_25 = __this->get_smokebomb_12();
		if (L_25)
		{
			goto IL_0162;
		}
	}
	{
		// if (movement.x != 0 && movement.y != 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_26 = __this->get_address_of_movement_15();
		float L_27 = L_26->get_x_0();
		if ((((float)L_27) == ((float)(0.0f))))
		{
			goto IL_012c;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_28 = __this->get_address_of_movement_15();
		float L_29 = L_28->get_y_1();
		if ((((float)L_29) == ((float)(0.0f))))
		{
			goto IL_012c;
		}
	}
	{
		// rb.MovePosition(rb.position + movement * (moveSpeed / 0.835f) * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_30 = __this->get_rb_7();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_31 = __this->get_rb_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		L_32 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_31, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = __this->get_movement_15();
		float L_34 = __this->get_moveSpeed_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_33, ((float)((float)L_34/(float)(0.834999979f))), /*hidden argument*/NULL);
		float L_36;
		L_36 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37;
		L_37 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_35, L_36, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		L_38 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_32, L_37, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_30, L_38, /*hidden argument*/NULL);
		// }
		goto IL_0162;
	}

IL_012c:
	{
		// rb.MovePosition(rb.position + movement * moveSpeed * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_39 = __this->get_rb_7();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_40 = __this->get_rb_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41;
		L_41 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_40, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42 = __this->get_movement_15();
		float L_43 = __this->get_moveSpeed_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_44;
		L_44 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_42, L_43, /*hidden argument*/NULL);
		float L_45;
		L_45 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46;
		L_46 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_44, L_45, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		L_47 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_41, L_46, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_39, L_47, /*hidden argument*/NULL);
	}

IL_0162:
	{
		// animator.SetBool("takeDamage", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_48 = __this->get_animator_8();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_48, _stringLiteralA4EBC3A0CFE0E64E93D5DDC757B73F7A0396241E, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OgreProperties::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OgreProperties_OnCollisionEnter2D_m05B31D892F0A50657F707E8056D396352CAD8C19 (OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A_m0A2DF8A7E3E419BE4FE5BEA69B495900DE1F520D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C75A7DCF1FE13F0A6F405A94C36613682F71468);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral792986023063458DB5220162B09A329A539E8E90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4EBC3A0CFE0E64E93D5DDC757B73F7A0396241E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "bullet")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral792986023063458DB5220162B09A329A539E8E90, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0095;
		}
	}
	{
		// health -= collision.gameObject.GetComponent<Bullet_Collider>().bulletPower;
		int32_t L_4 = __this->get_health_9();
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_5 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_5, /*hidden argument*/NULL);
		Bullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A * L_7;
		L_7 = GameObject_GetComponent_TisBullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A_m0A2DF8A7E3E419BE4FE5BEA69B495900DE1F520D(L_6, /*hidden argument*/GameObject_GetComponent_TisBullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A_m0A2DF8A7E3E419BE4FE5BEA69B495900DE1F520D_RuntimeMethod_var);
		int32_t L_8 = L_7->get_bulletPower_4();
		__this->set_health_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_8)));
		// animator.SetBool("takeDamage", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = __this->get_animator_8();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_9, _stringLiteralA4EBC3A0CFE0E64E93D5DDC757B73F7A0396241E, (bool)1, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_10 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
		// if (health <= 0)
		int32_t L_12 = __this->get_health_9();
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_011a;
		}
	}
	{
		// GameObject death = Instantiate(deathPrefab, transform.position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_deathPrefab_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_13, L_15, L_17, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(gameObject, 0.2f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_19, (0.200000003f), /*hidden argument*/NULL);
		// droppingItem();
		OgreProperties_droppingItem_m705EE296AF96D566445939D555837CCD3DDA3BA7(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0095:
	{
		// else if(collision.gameObject.tag == "Enemies")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_20 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_20, /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_21, /*hidden argument*/NULL);
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, _stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_011a;
		}
	}
	{
		// if (collision.gameObject.name.Substring(0, collision.gameObject.name.IndexOf("(")) == "Spikeball")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_24 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_24, /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_25, /*hidden argument*/NULL);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_27 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_27, /*hidden argument*/NULL);
		String_t* L_29;
		L_29 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_28, /*hidden argument*/NULL);
		int32_t L_30;
		L_30 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_29, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		String_t* L_31;
		L_31 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_26, 0, L_30, /*hidden argument*/NULL);
		bool L_32;
		L_32 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_31, _stringLiteral6C75A7DCF1FE13F0A6F405A94C36613682F71468, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_011a;
		}
	}
	{
		// GameObject death = Instantiate(deathPrefab, collision.gameObject.transform.position, collision.gameObject.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = __this->get_deathPrefab_11();
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_34 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_34, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_35, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_36, /*hidden argument*/NULL);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_38 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_38, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_41;
		L_41 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42;
		L_42 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_33, L_37, L_41, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(collision.gameObject, 0.2f);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_43 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_43, /*hidden argument*/NULL);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_44, (0.200000003f), /*hidden argument*/NULL);
	}

IL_011a:
	{
		// }
		return;
	}
}
// System.Void OgreProperties::droppingItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OgreProperties_droppingItem_m705EE296AF96D566445939D555837CCD3DDA3BA7 (OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ItemRandom == Random.Range(0, 3))
		int32_t L_0 = __this->get_ItemRandom_14();
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0044;
		}
	}
	{
		// GameObject Item = Instantiate(Items[Random.Range(0, 11)], this.gameObject.transform.position, this.gameObject.transform.rotation);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_Items_13();
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)11), /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_5, L_8, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void OgreProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OgreProperties__ctor_mB064F68EA51CE70F5965417C65CA0AA243678844 (OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF * __this, const RuntimeMethod* method)
{
	{
		// private float moveSpeed = 1f;
		__this->set_moveSpeed_6((1.0f));
		// [SerializeField] private int ItemRandom = 2;
		__this->set_ItemRandom_14(2);
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
// System.Void OrcProperties::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrcProperties_Start_mFC1D59F0EF6DDFFFA724D824E97D02EE3A87F7FC (OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deathPrefab = Resources.Load("Death") as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0;
		L_0 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8, /*hidden argument*/NULL);
		__this->set_deathPrefab_11(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)));
		// rb = gameObject.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2;
		L_2 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_1, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		__this->set_rb_7(L_2);
		// animator = gameObject.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4;
		L_4 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_3, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_animator_8(L_4);
		// health = 1;
		__this->set_health_9(1);
		// }
		return;
	}
}
// System.Void OrcProperties::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrcProperties_Update_mD7568DCB474FA1001D941A9A14AFAF93D616B32E (OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC103069815D9A42A5F789873F9DFB18604B38E2A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.Find("Oyuncu");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC103069815D9A42A5F789873F9DFB18604B38E2A, /*hidden argument*/NULL);
		__this->set_player_4(L_0);
		// playerTransform = player.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		__this->set_playerTransform_5(L_2);
		// player_zombie = false;
		__this->set_player_zombie_10((bool)0);
		// movement.x = playerTransform.position.x - transform.position.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = __this->get_address_of_movement_15();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_playerTransform_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		L_3->set_x_0(((float)il2cpp_codegen_subtract((float)L_6, (float)L_9)));
		// if(playerTransform.position.x - transform.position.x == 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_playerTransform_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_x_2();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_15))) == ((float)(0.0f)))))
		{
			goto IL_008e;
		}
	}
	{
		// movement.x = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = __this->get_address_of_movement_15();
		L_16->set_x_0((0.0f));
		// }
		goto IL_00b5;
	}

IL_008e:
	{
		// movement.x = movement.x / Mathf.Abs(movement.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_17 = __this->get_address_of_movement_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_18 = __this->get_address_of_movement_15();
		float L_19 = L_18->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_20 = __this->get_address_of_movement_15();
		float L_21 = L_20->get_x_0();
		float L_22;
		L_22 = fabsf(L_21);
		L_17->set_x_0(((float)((float)L_19/(float)L_22)));
	}

IL_00b5:
	{
		// movement.y = playerTransform.position.y - transform.position.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_23 = __this->get_address_of_movement_15();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = __this->get_playerTransform_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_y_3();
		L_23->set_y_1(((float)il2cpp_codegen_subtract((float)L_26, (float)L_29)));
		// if(playerTransform.position.y - transform.position.y == 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = __this->get_playerTransform_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_y_3();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_32, (float)L_35))) == ((float)(0.0f)))))
		{
			goto IL_011a;
		}
	}
	{
		// movement.y = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_36 = __this->get_address_of_movement_15();
		L_36->set_y_1((0.0f));
		// }
		return;
	}

IL_011a:
	{
		// movement.y = movement.y / Mathf.Abs(movement.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_37 = __this->get_address_of_movement_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_38 = __this->get_address_of_movement_15();
		float L_39 = L_38->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_40 = __this->get_address_of_movement_15();
		float L_41 = L_40->get_y_1();
		float L_42;
		L_42 = fabsf(L_41);
		L_37->set_y_1(((float)((float)L_39/(float)L_42)));
		// }
		return;
	}
}
// System.Void OrcProperties::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrcProperties_FixedUpdate_m412F8B7021E2613BDEB2C0AB332D036EBC6BADD3 (OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4EBC3A0CFE0E64E93D5DDC757B73F7A0396241E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (player_zombie == true)
		bool L_0 = __this->get_player_zombie_10();
		if (!L_0)
		{
			goto IL_00bf;
		}
	}
	{
		// if (movement.x != 0 && movement.y != 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of_movement_15();
		float L_2 = L_1->get_x_0();
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_007a;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = __this->get_address_of_movement_15();
		float L_4 = L_3->get_y_1();
		if ((((float)L_4) == ((float)(0.0f))))
		{
			goto IL_007a;
		}
	}
	{
		// rb.MovePosition(rb.position + -1 * movement * (moveSpeed / 0.835f) * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_5 = __this->get_rb_7();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_6 = __this->get_rb_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = __this->get_movement_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline((-1.0f), L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_moveSpeed_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_9, ((float)((float)L_10/(float)(0.834999979f))), /*hidden argument*/NULL);
		float L_12;
		L_12 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_11, L_12, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_7, L_13, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_5, L_14, /*hidden argument*/NULL);
		// }
		goto IL_0162;
	}

IL_007a:
	{
		// rb.MovePosition(rb.position + -1 * movement * moveSpeed * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_15 = __this->get_rb_7();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_16 = __this->get_rb_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_16, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = __this->get_movement_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline((-1.0f), L_18, /*hidden argument*/NULL);
		float L_20 = __this->get_moveSpeed_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_19, L_20, /*hidden argument*/NULL);
		float L_22;
		L_22 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_21, L_22, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_17, L_23, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_15, L_24, /*hidden argument*/NULL);
		// }
		goto IL_0162;
	}

IL_00bf:
	{
		// else if(smokebomb == true)
		bool L_25 = __this->get_smokebomb_12();
		if (L_25)
		{
			goto IL_0162;
		}
	}
	{
		// if(movement.x != 0 && movement.y != 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_26 = __this->get_address_of_movement_15();
		float L_27 = L_26->get_x_0();
		if ((((float)L_27) == ((float)(0.0f))))
		{
			goto IL_012c;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_28 = __this->get_address_of_movement_15();
		float L_29 = L_28->get_y_1();
		if ((((float)L_29) == ((float)(0.0f))))
		{
			goto IL_012c;
		}
	}
	{
		// rb.MovePosition(rb.position + movement * (moveSpeed / 0.835f) * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_30 = __this->get_rb_7();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_31 = __this->get_rb_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		L_32 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_31, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = __this->get_movement_15();
		float L_34 = __this->get_moveSpeed_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_33, ((float)((float)L_34/(float)(0.834999979f))), /*hidden argument*/NULL);
		float L_36;
		L_36 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37;
		L_37 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_35, L_36, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		L_38 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_32, L_37, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_30, L_38, /*hidden argument*/NULL);
		// }
		goto IL_0162;
	}

IL_012c:
	{
		// rb.MovePosition(rb.position + movement * moveSpeed * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_39 = __this->get_rb_7();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_40 = __this->get_rb_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41;
		L_41 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_40, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42 = __this->get_movement_15();
		float L_43 = __this->get_moveSpeed_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_44;
		L_44 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_42, L_43, /*hidden argument*/NULL);
		float L_45;
		L_45 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46;
		L_46 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_44, L_45, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		L_47 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_41, L_46, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_39, L_47, /*hidden argument*/NULL);
	}

IL_0162:
	{
		// animator.SetBool("takeDamage", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_48 = __this->get_animator_8();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_48, _stringLiteralA4EBC3A0CFE0E64E93D5DDC757B73F7A0396241E, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OrcProperties::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrcProperties_OnCollisionEnter2D_m089A908568819457D166554353240B2E8212B0BB (OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A_m0A2DF8A7E3E419BE4FE5BEA69B495900DE1F520D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral792986023063458DB5220162B09A329A539E8E90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4EBC3A0CFE0E64E93D5DDC757B73F7A0396241E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "bullet")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral792986023063458DB5220162B09A329A539E8E90, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0091;
		}
	}
	{
		// health -= collision.gameObject.GetComponent<Bullet_Collider>().bulletPower;
		int32_t L_4 = __this->get_health_9();
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_5 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_5, /*hidden argument*/NULL);
		Bullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A * L_7;
		L_7 = GameObject_GetComponent_TisBullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A_m0A2DF8A7E3E419BE4FE5BEA69B495900DE1F520D(L_6, /*hidden argument*/GameObject_GetComponent_TisBullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A_m0A2DF8A7E3E419BE4FE5BEA69B495900DE1F520D_RuntimeMethod_var);
		int32_t L_8 = L_7->get_bulletPower_4();
		__this->set_health_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_8)));
		// animator.SetBool("takeDamage", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = __this->get_animator_8();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_9, _stringLiteralA4EBC3A0CFE0E64E93D5DDC757B73F7A0396241E, (bool)1, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_10 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
		// if(health <= 0)
		int32_t L_12 = __this->get_health_9();
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		// GameObject death = Instantiate(deathPrefab, transform.position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_deathPrefab_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_13, L_15, L_17, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(gameObject,0.2f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_19, (0.200000003f), /*hidden argument*/NULL);
		// droppingItem();
		OrcProperties_droppingItem_m4A7F4EDED780BA468CB1279EA29894B0A90B84B6(__this, /*hidden argument*/NULL);
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void OrcProperties::droppingItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrcProperties_droppingItem_m4A7F4EDED780BA468CB1279EA29894B0A90B84B6 (OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(ItemRandom == Random.Range(0, 3))
		int32_t L_0 = __this->get_ItemRandom_14();
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0044;
		}
	}
	{
		// GameObject Item = Instantiate(Items[Random.Range(0, 11)], this.gameObject.transform.position, this.gameObject.transform.rotation);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_Items_13();
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)11), /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_5, L_8, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void OrcProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrcProperties__ctor_m031D00B10DCEBE80DCBB043E7F229A2977B82EFE (OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E * __this, const RuntimeMethod* method)
{
	{
		// private float moveSpeed = 2f;
		__this->set_moveSpeed_6((2.0f));
		// [SerializeField] private int ItemRandom = 2;
		__this->set_ItemRandom_14(2);
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
// System.Void PlayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Start_mB585552228B1908E44D3A69496598FB485F608B6 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA55A291D921570C6FFFEF8839245235DD09BF889);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AlinanItemPosition.x = -9.66f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_AlinanItemPosition_23();
		L_0->set_x_0((-9.65999985f));
		// AlinanItemPosition.y = -8.93f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of_AlinanItemPosition_23();
		L_1->set_y_1((-8.93000031f));
		// sellingItem = "null_1;";
		__this->set_sellingItem_20(_stringLiteralA55A291D921570C6FFFEF8839245235DD09BF889);
		// bootSpeed = 0.775f + (SaveObject.singleton.GetCurrentBoot()*0.225f);
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_2;
		L_2 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		int32_t L_3;
		L_3 = SaveObject_GetCurrentBoot_m888D33ED023274D8F0A3428D183728F597825D2F(L_2, /*hidden argument*/NULL);
		__this->set_bootSpeed_21(((float)il2cpp_codegen_add((float)(0.774999976f), (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_3)), (float)(0.224999994f))))));
		// health = SaveObject.singleton.GetCurrentHealth();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_4;
		L_4 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = SaveObject_GetCurrentHealth_m0EF07C224F5A7AC31F94B6241C70E1F7F433A78F(L_4, /*hidden argument*/NULL);
		__this->set_health_7(L_5);
		// coin = SaveObject.singleton.GetCurrentCoin();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_6;
		L_6 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		int32_t L_7;
		L_7 = SaveObject_GetCurrentCoin_mCFAC430A537151AAE792D77E8C88B1AFD29BA8D8(L_6, /*hidden argument*/NULL);
		__this->set_coin_8(L_7);
		// }
		return;
	}
}
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_mC3491BD6CDFF1FA543B16969144C939B2298052F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// health = SaveObject.singleton.GetCurrentHealth();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_0;
		L_0 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = SaveObject_GetCurrentHealth_m0EF07C224F5A7AC31F94B6241C70E1F7F433A78F(L_0, /*hidden argument*/NULL);
		__this->set_health_7(L_1);
		// coin = SaveObject.singleton.GetCurrentCoin();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_2;
		L_2 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		int32_t L_3;
		L_3 = SaveObject_GetCurrentCoin_mCFAC430A537151AAE792D77E8C88B1AFD29BA8D8(L_2, /*hidden argument*/NULL);
		__this->set_coin_8(L_3);
		// healthText.text = "x" + health.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_healthText_4();
		int32_t* L_5 = __this->get_address_of_health_7();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_6, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// coinText.text = "x" + coin.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_coinText_5();
		int32_t* L_9 = __this->get_address_of_coin_8();
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_10, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		// moveSpeed = 4f * this.gameObject.GetComponent<dropItems>().movement_speed_multiplier * this.gameObject.GetComponent<dropItems>().SheriffBadge_movement_speed_multiplier * bootSpeed;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * L_13;
		L_13 = GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994(L_12, /*hidden argument*/GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994_RuntimeMethod_var);
		float L_14 = L_13->get_movement_speed_multiplier_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * L_16;
		L_16 = GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994(L_15, /*hidden argument*/GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994_RuntimeMethod_var);
		float L_17 = L_16->get_SheriffBadge_movement_speed_multiplier_27();
		float L_18 = __this->get_bootSpeed_21();
		__this->set_moveSpeed_6(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(4.0f), (float)L_14)), (float)L_17)), (float)L_18)));
		// movement.x = Input.GetAxisRaw("Horizontal");
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_19 = __this->get_address_of_movement_18();
		float L_20;
		L_20 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		L_19->set_x_0(L_20);
		// movement.y = Input.GetAxisRaw("Vertical");
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_21 = __this->get_address_of_movement_18();
		float L_22;
		L_22 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		L_21->set_y_1(L_22);
		// BodyImage();
		PlayerMovement_BodyImage_mC8A0E2713289004D0920716C21CB6CA793A18967(__this, /*hidden argument*/NULL);
		// if (this.gameObject.GetComponent<dropItems>().isTombstone == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * L_24;
		L_24 = GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994(L_23, /*hidden argument*/GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994_RuntimeMethod_var);
		bool L_25 = L_24->get_isTombstone_38();
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		// this.gameObject.transform.GetChild(0).gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_27, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_28, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_29, (bool)0, /*hidden argument*/NULL);
		// animator2.enabled = true;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_30 = __this->get_animator2_11();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_30, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00ff:
	{
		// this.gameObject.transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_32, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_33, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_34, (bool)1, /*hidden argument*/NULL);
		// animator2.enabled = false;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_35 = __this->get_animator2_11();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_35, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_FixedUpdate_m774280268A537B6ED9D9171CEAE67E9A0C3A9499 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D61429A77614470501E536C4B7A7CB204B9125B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(movement.x != 0 && movement.y != 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_movement_18();
		float L_1 = L_0->get_x_0();
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_0062;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_2 = __this->get_address_of_movement_18();
		float L_3 = L_2->get_y_1();
		if ((((float)L_3) == ((float)(0.0f))))
		{
			goto IL_0062;
		}
	}
	{
		// rb.MovePosition(rb.position + movement * (moveSpeed * 0.835f) * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_4 = __this->get_rb_9();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_5 = __this->get_rb_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_5, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = __this->get_movement_18();
		float L_8 = __this->get_moveSpeed_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_7, ((float)il2cpp_codegen_multiply((float)L_8, (float)(0.834999979f))), /*hidden argument*/NULL);
		float L_10;
		L_10 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_9, L_10, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_6, L_11, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_4, L_12, /*hidden argument*/NULL);
		// }
		goto IL_0098;
	}

IL_0062:
	{
		// rb.MovePosition(rb.position + movement * moveSpeed * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_13 = __this->get_rb_9();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_14 = __this->get_rb_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_14, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = __this->get_movement_18();
		float L_17 = __this->get_moveSpeed_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_16, L_17, /*hidden argument*/NULL);
		float L_19;
		L_19 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_18, L_19, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_15, L_20, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_13, L_21, /*hidden argument*/NULL);
	}

IL_0098:
	{
		// animator.SetFloat("speed", Mathf.Abs(Input.GetAxisRaw("Horizontal")) + Mathf.Abs(Input.GetAxisRaw("Vertical")));
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_22 = __this->get_animator_10();
		float L_23;
		L_23 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_24;
		L_24 = fabsf(L_23);
		float L_25;
		L_25 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		float L_26;
		L_26 = fabsf(L_25);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_22, _stringLiteral2D61429A77614470501E536C4B7A7CB204B9125B, ((float)il2cpp_codegen_add((float)L_24, (float)L_26)), /*hidden argument*/NULL);
		// if(damageTime >= 0.5)
		float L_27 = __this->get_damageTime_16();
		if ((!(((double)((double)((double)L_27))) >= ((double)(0.5)))))
		{
			goto IL_0138;
		}
	}
	{
		// if (isDamage == true)
		bool L_28 = __this->get_isDamage_13();
		if (!L_28)
		{
			goto IL_014a;
		}
	}
	{
		// isDamage = false;
		__this->set_isDamage_13((bool)0);
		// damageTime = 0;
		__this->set_damageTime_16((0.0f));
		// if (damageTime <= 0)
		float L_29 = __this->get_damageTime_16();
		if ((!(((float)L_29) <= ((float)(0.0f)))))
		{
			goto IL_014a;
		}
	}
	{
		// movement.x = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_30 = __this->get_address_of_movement_18();
		L_30->set_x_0((0.0f));
		// movement.y = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_31 = __this->get_address_of_movement_18();
		L_31->set_y_1((0.0f));
		// transform.position = movement;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = __this->get_movement_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_33, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_32, L_34, /*hidden argument*/NULL);
		// }
		goto IL_014a;
	}

IL_0138:
	{
		// damageTime += Time.deltaTime;
		float L_35 = __this->get_damageTime_16();
		float L_36;
		L_36 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_damageTime_16(((float)il2cpp_codegen_add((float)L_35, (float)L_36)));
	}

IL_014a:
	{
		// if (Input.GetKey(KeyCode.Space))
		bool L_37;
		L_37 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)32), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_016e;
		}
	}
	{
		// this.gameObject.GetComponent<dropItems>().UseInSlot = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * L_39;
		L_39 = GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994(L_38, /*hidden argument*/GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994_RuntimeMethod_var);
		L_39->set_UseInSlot_8((bool)1);
		// SaveObject.singleton.UsedCurrentEnvanter();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_40;
		L_40 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		SaveObject_UsedCurrentEnvanter_m7C835BA9879DA22A35AC704B1EE4173F836A7996(L_40, /*hidden argument*/NULL);
	}

IL_016e:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::BodyImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_BodyImage_mC8A0E2713289004D0920716C21CB6CA793A18967 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_0;
		L_0 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)100), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// spriteRenderer.sprite = sprite[1];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1 = __this->get_spriteRenderer_14();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_2 = __this->get_sprite_12();
		int32_t L_3 = 1;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_1, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001d:
	{
		// else if (Input.GetKey(KeyCode.A))
		bool L_5;
		L_5 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)97), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// spriteRenderer.sprite = sprite[3];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_6 = __this->get_spriteRenderer_14();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_7 = __this->get_sprite_12();
		int32_t L_8 = 3;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_6, L_9, /*hidden argument*/NULL);
		// }
		return;
	}

IL_003a:
	{
		// else if (Input.GetKey(KeyCode.W))
		bool L_10;
		L_10 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)119), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0057;
		}
	}
	{
		// spriteRenderer.sprite = sprite[0];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_11 = __this->get_spriteRenderer_14();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_12 = __this->get_sprite_12();
		int32_t L_13 = 0;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_11, L_14, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0057:
	{
		// else if (Input.GetKey(KeyCode.S))
		bool L_15;
		L_15 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)115), /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		// spriteRenderer.sprite = sprite[2];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_16 = __this->get_spriteRenderer_14();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_17 = __this->get_sprite_12();
		int32_t L_18 = 2;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_16, L_19, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0074:
	{
		// spriteRenderer.sprite = sprite[4];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_20 = __this->get_spriteRenderer_14();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_21 = __this->get_sprite_12();
		int32_t L_22 = 4;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_20, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_OnCollisionEnter2D_mDC9D43936D485DEF8FE65C90E92042EDD2D1F2DD (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisOgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF_mEFCDF2FD5B26441DD210D88B9E0A10C22FA967ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisOrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E_m643AFA823BAC8B5B37281E2B6952204AB6A8FED0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD_m5111AAA678B9AFE9311C94E79AB808D879209EF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral048A1271403F6D6C7C1A396A8F807A41143B9F2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1081ADAC6768F9F1C1F8ABEB4319C2FF0B04FDE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14BCA561666D2426A091D2BD0D15792C00F96D17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CE972A6DADF9A4A1CAB7B35378C1B0DA401003);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3092156429B59FC0EE4780C2DBECFBD20BB07D1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C75A7DCF1FE13F0A6F405A94C36613682F71468);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDB44C1072A4D452DC3C2A7619DCF44D3C6F8ABD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDED340C5884BBB732AC28145E72590E1D9A3C88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE27176AF921CA4E99F64464CFB61C751EE5A4E0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA004A438B484F9894101B1981EA22089542B0C9);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_4 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_5 = NULL;
	{
		// if(collision.gameObject.tag == "Enemies")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_02aa;
		}
	}
	{
		// if(this.gameObject.GetComponent<dropItems>().isTombstone == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * L_5;
		L_5 = GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994(L_4, /*hidden argument*/GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994_RuntimeMethod_var);
		bool L_6 = L_5->get_isTombstone_38();
		if (!L_6)
		{
			goto IL_0068;
		}
	}
	{
		// GameObject death = Instantiate(deathPrefab, collision.gameObject.transform.position, collision.gameObject.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_deathPrefab_15();
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_8 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_8, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_12 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_7, L_11, L_15, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(collision.gameObject);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_17 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_17, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_18, /*hidden argument*/NULL);
		// }
		goto IL_02aa;
	}

IL_0068:
	{
		// if(collision.gameObject.name.Substring(0, collision.gameObject.name.IndexOf("(")) == "Orc")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_19 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_19, /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_20, /*hidden argument*/NULL);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_22 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_22, /*hidden argument*/NULL);
		String_t* L_24;
		L_24 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_23, /*hidden argument*/NULL);
		int32_t L_25;
		L_25 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_24, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_21, 0, L_25, /*hidden argument*/NULL);
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteral1081ADAC6768F9F1C1F8ABEB4319C2FF0B04FDE3, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0132;
		}
	}
	{
		// collusion_enemy_health = collision.gameObject.GetComponent<OrcProperties>().health;
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_28 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_28, /*hidden argument*/NULL);
		OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E * L_30;
		L_30 = GameObject_GetComponent_TisOrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E_m643AFA823BAC8B5B37281E2B6952204AB6A8FED0(L_29, /*hidden argument*/GameObject_GetComponent_TisOrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E_m643AFA823BAC8B5B37281E2B6952204AB6A8FED0_RuntimeMethod_var);
		int32_t L_31 = L_30->get_health_9();
		__this->set_collusion_enemy_health_17(L_31);
		// if (collusion_enemy_health > 0)
		int32_t L_32 = __this->get_collusion_enemy_health_17();
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_029b;
		}
	}
	{
		// health = SaveObject.singleton.TakeDamage();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_33;
		L_33 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		int32_t L_34;
		L_34 = SaveObject_TakeDamage_m2F73F1B5209DB17AA635DFB80CDA414BB752E4D2(L_33, /*hidden argument*/NULL);
		__this->set_health_7(L_34);
		// isDamage = true;
		__this->set_isDamage_13((bool)1);
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_35;
		L_35 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968, /*hidden argument*/NULL);
		V_0 = L_35;
		V_1 = 0;
		goto IL_0127;
	}

IL_00e5:
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_36 = V_0;
		int32_t L_37 = V_1;
		int32_t L_38 = L_37;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		V_2 = L_39;
		// if(enemy.name != "Fector")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = V_2;
		String_t* L_41;
		L_41 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_40, /*hidden argument*/NULL);
		bool L_42;
		L_42 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_41, _stringLiteralE27176AF921CA4E99F64464CFB61C751EE5A4E0B, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0123;
		}
	}
	{
		// GameObject death = Instantiate(deathPrefab, enemy.transform.position, enemy.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = __this->get_deathPrefab_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_45, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_47, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_49;
		L_49 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_48, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50;
		L_50 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_43, L_46, L_49, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(enemy);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = V_2;
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_51, /*hidden argument*/NULL);
	}

IL_0123:
	{
		int32_t L_52 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_0127:
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		int32_t L_53 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_54 = V_0;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))))
		{
			goto IL_00e5;
		}
	}
	{
		// }
		goto IL_029b;
	}

IL_0132:
	{
		// else if (collision.gameObject.name.Substring(0, collision.gameObject.name.IndexOf("(")) == "Spikeball")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_55 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56;
		L_56 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_55, /*hidden argument*/NULL);
		String_t* L_57;
		L_57 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_56, /*hidden argument*/NULL);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_58 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_58, /*hidden argument*/NULL);
		String_t* L_60;
		L_60 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_59, /*hidden argument*/NULL);
		int32_t L_61;
		L_61 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_60, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		String_t* L_62;
		L_62 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_57, 0, L_61, /*hidden argument*/NULL);
		bool L_63;
		L_63 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_62, _stringLiteral6C75A7DCF1FE13F0A6F405A94C36613682F71468, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_01ea;
		}
	}
	{
		// collusion_enemy_health = collision.gameObject.GetComponent<SpikeballProperties>().health;
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_64 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65;
		L_65 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_64, /*hidden argument*/NULL);
		SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD * L_66;
		L_66 = GameObject_GetComponent_TisSpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD_m5111AAA678B9AFE9311C94E79AB808D879209EF4(L_65, /*hidden argument*/GameObject_GetComponent_TisSpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD_m5111AAA678B9AFE9311C94E79AB808D879209EF4_RuntimeMethod_var);
		int32_t L_67 = L_66->get_health_7();
		__this->set_collusion_enemy_health_17(L_67);
		// if (collusion_enemy_health > 0)
		int32_t L_68 = __this->get_collusion_enemy_health_17();
		if ((((int32_t)L_68) <= ((int32_t)0)))
		{
			goto IL_029b;
		}
	}
	{
		// health = SaveObject.singleton.TakeDamage();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_69;
		L_69 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		int32_t L_70;
		L_70 = SaveObject_TakeDamage_m2F73F1B5209DB17AA635DFB80CDA414BB752E4D2(L_69, /*hidden argument*/NULL);
		__this->set_health_7(L_70);
		// isDamage = true;
		__this->set_isDamage_13((bool)1);
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_71;
		L_71 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968, /*hidden argument*/NULL);
		V_0 = L_71;
		V_1 = 0;
		goto IL_01df;
	}

IL_01af:
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_72 = V_0;
		int32_t L_73 = V_1;
		int32_t L_74 = L_73;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_75 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
		V_3 = L_75;
		// GameObject death = Instantiate(deathPrefab, enemy.transform.position, enemy.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76 = __this->get_deathPrefab_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78;
		L_78 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_77, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79;
		L_79 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_78, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_81;
		L_81 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_80, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_82;
		L_82 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_81, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_83;
		L_83 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_76, L_79, L_82, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(enemy);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84 = V_3;
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_84, /*hidden argument*/NULL);
		int32_t L_85 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
	}

IL_01df:
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		int32_t L_86 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_87 = V_0;
		if ((((int32_t)L_86) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_87)->max_length))))))
		{
			goto IL_01af;
		}
	}
	{
		// }
		goto IL_029b;
	}

IL_01ea:
	{
		// else if (collision.gameObject.name.Substring(0, collision.gameObject.name.IndexOf("(")) == "Ogre")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_88 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_89;
		L_89 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_88, /*hidden argument*/NULL);
		String_t* L_90;
		L_90 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_89, /*hidden argument*/NULL);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_91 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_92;
		L_92 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_91, /*hidden argument*/NULL);
		String_t* L_93;
		L_93 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_92, /*hidden argument*/NULL);
		int32_t L_94;
		L_94 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_93, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		String_t* L_95;
		L_95 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_90, 0, L_94, /*hidden argument*/NULL);
		bool L_96;
		L_96 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_95, _stringLiteralEA004A438B484F9894101B1981EA22089542B0C9, /*hidden argument*/NULL);
		if (!L_96)
		{
			goto IL_029b;
		}
	}
	{
		// collusion_enemy_health = collision.gameObject.GetComponent<OgreProperties>().health;
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_97 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_98;
		L_98 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_97, /*hidden argument*/NULL);
		OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF * L_99;
		L_99 = GameObject_GetComponent_TisOgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF_mEFCDF2FD5B26441DD210D88B9E0A10C22FA967ED(L_98, /*hidden argument*/GameObject_GetComponent_TisOgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF_mEFCDF2FD5B26441DD210D88B9E0A10C22FA967ED_RuntimeMethod_var);
		int32_t L_100 = L_99->get_health_9();
		__this->set_collusion_enemy_health_17(L_100);
		// if (collusion_enemy_health > 0)
		int32_t L_101 = __this->get_collusion_enemy_health_17();
		if ((((int32_t)L_101) <= ((int32_t)0)))
		{
			goto IL_029b;
		}
	}
	{
		// health = SaveObject.singleton.TakeDamage();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_102;
		L_102 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		int32_t L_103;
		L_103 = SaveObject_TakeDamage_m2F73F1B5209DB17AA635DFB80CDA414BB752E4D2(L_102, /*hidden argument*/NULL);
		__this->set_health_7(L_103);
		// isDamage = true;
		__this->set_isDamage_13((bool)1);
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_104;
		L_104 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968, /*hidden argument*/NULL);
		V_0 = L_104;
		V_1 = 0;
		goto IL_0295;
	}

IL_0261:
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_105 = V_0;
		int32_t L_106 = V_1;
		int32_t L_107 = L_106;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_108 = (L_105)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_107));
		V_4 = L_108;
		// GameObject death = Instantiate(deathPrefab, enemy.transform.position, enemy.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_109 = __this->get_deathPrefab_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_110 = V_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_111;
		L_111 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_110, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_112;
		L_112 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_111, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_113 = V_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_114;
		L_114 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_113, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_115;
		L_115 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_114, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_116;
		L_116 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_109, L_112, L_115, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(enemy);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_117 = V_4;
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_117, /*hidden argument*/NULL);
		int32_t L_118 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)1));
	}

IL_0295:
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		int32_t L_119 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_120 = V_0;
		if ((((int32_t)L_119) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_120)->max_length))))))
		{
			goto IL_0261;
		}
	}

IL_029b:
	{
		// if (health <= 0)
		int32_t L_121 = __this->get_health_7();
		if ((((int32_t)L_121) > ((int32_t)0)))
		{
			goto IL_02aa;
		}
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
	}

IL_02aa:
	{
		// if(collision.gameObject.tag == "Item")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_122 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_123;
		L_123 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_122, /*hidden argument*/NULL);
		String_t* L_124;
		L_124 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_123, /*hidden argument*/NULL);
		bool L_125;
		L_125 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_124, _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58, /*hidden argument*/NULL);
		if (!L_125)
		{
			goto IL_031d;
		}
	}
	{
		// if (collision.gameObject.name.Substring(0,collision.gameObject.name.IndexOf("_")) == "ThirdBossItem")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_126 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_127;
		L_127 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_126, /*hidden argument*/NULL);
		String_t* L_128;
		L_128 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_127, /*hidden argument*/NULL);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_129 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_130;
		L_130 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_129, /*hidden argument*/NULL);
		String_t* L_131;
		L_131 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_130, /*hidden argument*/NULL);
		int32_t L_132;
		L_132 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_131, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		String_t* L_133;
		L_133 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_128, 0, L_132, /*hidden argument*/NULL);
		bool L_134;
		L_134 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_133, _stringLiteral21CE972A6DADF9A4A1CAB7B35378C1B0DA401003, /*hidden argument*/NULL);
		if (!L_134)
		{
			goto IL_0307;
		}
	}
	{
		// theEnd = true;
		__this->set_theEnd_24((bool)1);
		// Destroy(collision.gameObject);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_135 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_136;
		L_136 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_135, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_136, /*hidden argument*/NULL);
		// }
		goto IL_031d;
	}

IL_0307:
	{
		// this.gameObject.GetComponent<dropItems>().collision_item = collision.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_137;
		L_137 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * L_138;
		L_138 = GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994(L_137, /*hidden argument*/GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994_RuntimeMethod_var);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_139 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_140;
		L_140 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_139, /*hidden argument*/NULL);
		L_138->set_collision_item_4(L_140);
	}

IL_031d:
	{
		// if(collision.gameObject.name == "SahneGecisiColide")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_141 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_142;
		L_142 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_141, /*hidden argument*/NULL);
		String_t* L_143;
		L_143 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_142, /*hidden argument*/NULL);
		bool L_144;
		L_144 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_143, _stringLiteral048A1271403F6D6C7C1A396A8F807A41143B9F2D, /*hidden argument*/NULL);
		if (!L_144)
		{
			goto IL_033b;
		}
	}
	{
		// scene_collide = true;
		__this->set_scene_collide_19((bool)1);
	}

IL_033b:
	{
		// if(collision.gameObject.tag == "shopItem")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_145 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_146;
		L_146 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_145, /*hidden argument*/NULL);
		String_t* L_147;
		L_147 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_146, /*hidden argument*/NULL);
		bool L_148;
		L_148 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_147, _stringLiteralBDB44C1072A4D452DC3C2A7619DCF44D3C6F8ABD, /*hidden argument*/NULL);
		if (!L_148)
		{
			goto IL_055e;
		}
	}
	{
		// if(collision.gameObject.name.Substring(0, collision.gameObject.name.IndexOf("_")) == "Boot")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_149 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_150;
		L_150 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_149, /*hidden argument*/NULL);
		String_t* L_151;
		L_151 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_150, /*hidden argument*/NULL);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_152 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_153;
		L_153 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_152, /*hidden argument*/NULL);
		String_t* L_154;
		L_154 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_153, /*hidden argument*/NULL);
		int32_t L_155;
		L_155 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_154, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		String_t* L_156;
		L_156 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_151, 0, L_155, /*hidden argument*/NULL);
		bool L_157;
		L_157 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_156, _stringLiteralBDED340C5884BBB732AC28145E72590E1D9A3C88, /*hidden argument*/NULL);
		if (!L_157)
		{
			goto IL_0404;
		}
	}
	{
		// if (coin >= 8)
		int32_t L_158 = __this->get_coin_8();
		if ((((int32_t)L_158) < ((int32_t)8)))
		{
			goto IL_055e;
		}
	}
	{
		// coin = SaveObject.singleton.payedCoin(8);
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_159;
		L_159 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		int32_t L_160;
		L_160 = SaveObject_payedCoin_mFD84EEC26276E45CD66A11332924D68777721D4A(L_159, 8, /*hidden argument*/NULL);
		__this->set_coin_8(L_160);
		// AlinanItemPosition.y += 1f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_161 = __this->get_address_of_AlinanItemPosition_23();
		float* L_162 = L_161->get_address_of_y_1();
		float* L_163 = L_162;
		float L_164 = *((float*)L_163);
		*((float*)L_163) = (float)((float)il2cpp_codegen_add((float)L_164, (float)(1.0f)));
		// sellingItem = collision.gameObject.name;
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_165 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_166;
		L_166 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_165, /*hidden argument*/NULL);
		String_t* L_167;
		L_167 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_166, /*hidden argument*/NULL);
		__this->set_sellingItem_20(L_167);
		// collision.gameObject.transform.parent = AlinanItems.transform;
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_168 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_169;
		L_169 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_168, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_170;
		L_170 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_169, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_171 = __this->get_AlinanItems_22();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_172;
		L_172 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_171, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_170, L_172, /*hidden argument*/NULL);
		// collision.gameObject.transform.position = AlinanItemPosition;
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_173 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_174;
		L_174 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_173, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_175;
		L_175 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_174, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_176 = __this->get_AlinanItemPosition_23();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_177;
		L_177 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_176, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_175, L_177, /*hidden argument*/NULL);
		// }
		goto IL_055e;
	}

IL_0404:
	{
		// else if (collision.gameObject.name.Substring(0, collision.gameObject.name.IndexOf("_")) == "Gun")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_178 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_179;
		L_179 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_178, /*hidden argument*/NULL);
		String_t* L_180;
		L_180 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_179, /*hidden argument*/NULL);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_181 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_182;
		L_182 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_181, /*hidden argument*/NULL);
		String_t* L_183;
		L_183 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_182, /*hidden argument*/NULL);
		int32_t L_184;
		L_184 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_183, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		String_t* L_185;
		L_185 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_180, 0, L_184, /*hidden argument*/NULL);
		bool L_186;
		L_186 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_185, _stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2, /*hidden argument*/NULL);
		if (!L_186)
		{
			goto IL_04b5;
		}
	}
	{
		// if (coin >= 10)
		int32_t L_187 = __this->get_coin_8();
		if ((((int32_t)L_187) < ((int32_t)((int32_t)10))))
		{
			goto IL_055e;
		}
	}
	{
		// coin = SaveObject.singleton.payedCoin(10);
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_188;
		L_188 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		int32_t L_189;
		L_189 = SaveObject_payedCoin_mFD84EEC26276E45CD66A11332924D68777721D4A(L_188, ((int32_t)10), /*hidden argument*/NULL);
		__this->set_coin_8(L_189);
		// AlinanItemPosition.y += 1f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_190 = __this->get_address_of_AlinanItemPosition_23();
		float* L_191 = L_190->get_address_of_y_1();
		float* L_192 = L_191;
		float L_193 = *((float*)L_192);
		*((float*)L_192) = (float)((float)il2cpp_codegen_add((float)L_193, (float)(1.0f)));
		// sellingItem = collision.gameObject.name;
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_194 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_195;
		L_195 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_194, /*hidden argument*/NULL);
		String_t* L_196;
		L_196 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_195, /*hidden argument*/NULL);
		__this->set_sellingItem_20(L_196);
		// collision.gameObject.transform.parent = AlinanItems.transform;
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_197 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_198;
		L_198 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_197, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_199;
		L_199 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_198, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_200 = __this->get_AlinanItems_22();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_201;
		L_201 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_200, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_199, L_201, /*hidden argument*/NULL);
		// collision.gameObject.transform.position = AlinanItemPosition;
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_202 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_203;
		L_203 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_202, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_204;
		L_204 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_203, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_205 = __this->get_AlinanItemPosition_23();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_206;
		L_206 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_205, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_204, L_206, /*hidden argument*/NULL);
		// }
		goto IL_055e;
	}

IL_04b5:
	{
		// else if (collision.gameObject.name.Substring(0, collision.gameObject.name.IndexOf("_")) == "Ammo")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_207 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_208;
		L_208 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_207, /*hidden argument*/NULL);
		String_t* L_209;
		L_209 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_208, /*hidden argument*/NULL);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_210 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_211;
		L_211 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_210, /*hidden argument*/NULL);
		String_t* L_212;
		L_212 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_211, /*hidden argument*/NULL);
		int32_t L_213;
		L_213 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_212, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		String_t* L_214;
		L_214 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_209, 0, L_213, /*hidden argument*/NULL);
		bool L_215;
		L_215 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_214, _stringLiteral3092156429B59FC0EE4780C2DBECFBD20BB07D1F, /*hidden argument*/NULL);
		if (!L_215)
		{
			goto IL_055e;
		}
	}
	{
		// if (coin >= 15)
		int32_t L_216 = __this->get_coin_8();
		if ((((int32_t)L_216) < ((int32_t)((int32_t)15))))
		{
			goto IL_055e;
		}
	}
	{
		// coin = SaveObject.singleton.payedCoin(15);
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_217;
		L_217 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		int32_t L_218;
		L_218 = SaveObject_payedCoin_mFD84EEC26276E45CD66A11332924D68777721D4A(L_217, ((int32_t)15), /*hidden argument*/NULL);
		__this->set_coin_8(L_218);
		// AlinanItemPosition.y += 1f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_219 = __this->get_address_of_AlinanItemPosition_23();
		float* L_220 = L_219->get_address_of_y_1();
		float* L_221 = L_220;
		float L_222 = *((float*)L_221);
		*((float*)L_221) = (float)((float)il2cpp_codegen_add((float)L_222, (float)(1.0f)));
		// sellingItem = collision.gameObject.name;
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_223 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_224;
		L_224 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_223, /*hidden argument*/NULL);
		String_t* L_225;
		L_225 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_224, /*hidden argument*/NULL);
		__this->set_sellingItem_20(L_225);
		// collision.gameObject.transform.parent = AlinanItems.transform;
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_226 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_227;
		L_227 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_226, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_228;
		L_228 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_227, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_229 = __this->get_AlinanItems_22();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_230;
		L_230 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_229, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_228, L_230, /*hidden argument*/NULL);
		// collision.gameObject.transform.position = AlinanItemPosition;
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_231 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_232;
		L_232 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_231, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_233;
		L_233 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_232, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_234 = __this->get_AlinanItemPosition_23();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_235;
		L_235 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_234, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_233, L_235, /*hidden argument*/NULL);
	}

IL_055e:
	{
		// if(collision.gameObject.tag == "bossBullet")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_236 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_237;
		L_237 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_236, /*hidden argument*/NULL);
		String_t* L_238;
		L_238 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_237, /*hidden argument*/NULL);
		bool L_239;
		L_239 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_238, _stringLiteral14BCA561666D2426A091D2BD0D15792C00F96D17, /*hidden argument*/NULL);
		if (!L_239)
		{
			goto IL_0605;
		}
	}
	{
		// health = SaveObject.singleton.TakeDamage();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_240;
		L_240 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		int32_t L_241;
		L_241 = SaveObject_TakeDamage_m2F73F1B5209DB17AA635DFB80CDA414BB752E4D2(L_240, /*hidden argument*/NULL);
		__this->set_health_7(L_241);
		// Destroy(collision.gameObject);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_242 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_243;
		L_243 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_242, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_243, /*hidden argument*/NULL);
		// isDamage = true;
		__this->set_isDamage_13((bool)1);
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_244;
		L_244 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968, /*hidden argument*/NULL);
		V_0 = L_244;
		V_1 = 0;
		goto IL_05f0;
	}

IL_05a9:
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_245 = V_0;
		int32_t L_246 = V_1;
		int32_t L_247 = L_246;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_248 = (L_245)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_247));
		V_5 = L_248;
		// if (enemy.name != "Fector")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_249 = V_5;
		String_t* L_250;
		L_250 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_249, /*hidden argument*/NULL);
		bool L_251;
		L_251 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_250, _stringLiteralE27176AF921CA4E99F64464CFB61C751EE5A4E0B, /*hidden argument*/NULL);
		if (!L_251)
		{
			goto IL_05ec;
		}
	}
	{
		// GameObject death = Instantiate(deathPrefab, enemy.transform.position, enemy.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_252 = __this->get_deathPrefab_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_253 = V_5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_254;
		L_254 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_253, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_255;
		L_255 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_254, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_256 = V_5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_257;
		L_257 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_256, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_258;
		L_258 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_257, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_259;
		L_259 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_252, L_255, L_258, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(enemy);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_260 = V_5;
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_260, /*hidden argument*/NULL);
	}

IL_05ec:
	{
		int32_t L_261 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_261, (int32_t)1));
	}

IL_05f0:
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		int32_t L_262 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_263 = V_0;
		if ((((int32_t)L_262) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_263)->max_length))))))
		{
			goto IL_05a9;
		}
	}
	{
		// if (health <= 0)
		int32_t L_264 = __this->get_health_7();
		if ((((int32_t)L_264) > ((int32_t)0)))
		{
			goto IL_0605;
		}
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
	}

IL_0605:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mBF9F632DD9929DD6FF092A968649A4406BFE397F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7B3C791729B4CD03D9C884797D0EF05551F67A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float moveSpeed = 4f;
		__this->set_moveSpeed_6((4.0f));
		// private float damageTime = 0.5f;
		__this->set_damageTime_16((0.5f));
		// [HideInInspector] public string sellingItem = "null_1";
		__this->set_sellingItem_20(_stringLiteralE7B3C791729B4CD03D9C884797D0EF05551F67A4);
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
// System.Void PlayerProperties::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProperties_Start_mF9F204485CBFE9D9FD165933CD089D2AFB58F1EA (PlayerProperties_t5DC57BE893F38D5373A34437858E05F7719FA47B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PlayerProperties::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProperties_Update_mD9FC4C8C17BFAAD56EA451E71F0CA06957682FD7 (PlayerProperties_t5DC57BE893F38D5373A34437858E05F7719FA47B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PlayerProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProperties__ctor_m1F069DA7EDD4A9369FEB851BC362AFB1D85EE399 (PlayerProperties_t5DC57BE893F38D5373A34437858E05F7719FA47B * __this, const RuntimeMethod* method)
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
// System.Void SahneAras?::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SahneArasU131_Start_mFD0B2B762D3A6E1B74F929F6143E10FB1072CF71 (SahneArasU131_tBC43EA8D0246EFDD13296F638F0A8575976037F2 * __this, const RuntimeMethod* method)
{
	{
		// movement.x = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_movement_11();
		L_0->set_x_0((0.0f));
		// movement.y = -1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of_movement_11();
		L_1->set_y_1((-1.0f));
		// movement3.x = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_movement3_12();
		L_2->set_x_2((0.0f));
		// movement3.y = -1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of_movement3_12();
		L_3->set_y_3((-1.0f));
		// movement3.z = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_movement3_12();
		L_4->set_z_4((0.0f));
		// }
		return;
	}
}
// System.Void SahneAras?::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SahneArasU131_Update_m6BDD4F7550BD82B23062BB8031A1840C2BAE9D2B (SahneArasU131_tBC43EA8D0246EFDD13296F638F0A8575976037F2 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SahneAras?::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SahneArasU131_FixedUpdate_m2F186BA3EA3DFED0A39FFD29E31B9727447A59FD (SahneArasU131_tBC43EA8D0246EFDD13296F638F0A8575976037F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D61429A77614470501E536C4B7A7CB204B9125B);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// timer2 += Time.fixedDeltaTime;
		float L_0 = __this->get_timer2_8();
		float L_1;
		L_1 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		__this->set_timer2_8(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (timer2 > 1)
		float L_2 = __this->get_timer2_8();
		if ((!(((float)L_2) > ((float)(1.0f)))))
		{
			goto IL_00e4;
		}
	}
	{
		// animator.SetFloat("speed", 1);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_animator_6();
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_3, _stringLiteral2D61429A77614470501E536C4B7A7CB204B9125B, (1.0f), /*hidden argument*/NULL);
		// timer -= Time.deltaTime;
		float L_4 = __this->get_timer_7();
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_7(((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)));
		// if (timer > 0)
		float L_6 = __this->get_timer_7();
		if ((!(((float)L_6) > ((float)(0.0f)))))
		{
			goto IL_00d0;
		}
	}
	{
		// player.MovePosition(player.position + movement * (moveSpeed * 1.8f) * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_7 = __this->get_player_4();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_8 = __this->get_player_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_8, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = __this->get_movement_11();
		float L_11 = __this->get_moveSpeed_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_10, ((float)il2cpp_codegen_multiply((float)L_11, (float)(1.79999995f))), /*hidden argument*/NULL);
		float L_13;
		L_13 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_12, L_13, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_9, L_14, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_7, L_15, /*hidden argument*/NULL);
		// Camera.transform.position += movement3 * (moveSpeed * xxx) * Time.fixedDeltaTime;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_Camera_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = L_17;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = __this->get_movement3_12();
		float L_21 = __this->get_moveSpeed_9();
		float L_22 = __this->get_xxx_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_20, ((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)), /*hidden argument*/NULL);
		float L_24;
		L_24 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_23, L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_19, L_25, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_18, L_26, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00d0:
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_27;
		L_27 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_27;
		int32_t L_28;
		L_28 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_00e4:
	{
		// }
		return;
	}
}
// System.Void SahneAras?::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SahneArasU131__ctor_m063AA978B7B545CF07652BBB0EA7564CE69A693C (SahneArasU131_tBC43EA8D0246EFDD13296F638F0A8575976037F2 * __this, const RuntimeMethod* method)
{
	{
		// private float timer = 5;
		__this->set_timer_7((5.0f));
		// private float moveSpeed = 1f;
		__this->set_moveSpeed_9((1.0f));
		// private float xxx = 3.4f;
		__this->set_xxx_10((3.4000001f));
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
// SaveObject SaveObject::get_singleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveObject_t22688472458678E007AE2DF2C201E709617CC595_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F969CD926BAB20DC503C0D99A24C2913FF3A335);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FD2E2EFFA0B7B79634661311AF3DBCFEBDBF381);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3092156429B59FC0EE4780C2DBECFBD20BB07D1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B7AFDBA8EABD1B13AA4A654E67DFACCB98194A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDED340C5884BBB732AC28145E72590E1D9A3C88);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_0 = ((SaveObject_t22688472458678E007AE2DF2C201E709617CC595_StaticFields*)il2cpp_codegen_static_fields_for(SaveObject_t22688472458678E007AE2DF2C201E709617CC595_il2cpp_TypeInfo_var))->get_instance_0();
		if (L_0)
		{
			goto IL_007d;
		}
	}
	{
		// instance = new SaveObject();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_1 = (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 *)il2cpp_codegen_object_new(SaveObject_t22688472458678E007AE2DF2C201E709617CC595_il2cpp_TypeInfo_var);
		SaveObject__ctor_mF769DB3D10019C33EC96C0D99FC4E6BB455A9307(L_1, /*hidden argument*/NULL);
		((SaveObject_t22688472458678E007AE2DF2C201E709617CC595_StaticFields*)il2cpp_codegen_static_fields_for(SaveObject_t22688472458678E007AE2DF2C201E709617CC595_il2cpp_TypeInfo_var))->set_instance_0(L_1);
		// PlayerPrefs.GetInt("Health", 1);
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1, 1, /*hidden argument*/NULL);
		// PlayerPrefs.GetInt("Coin", 0);
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764, 0, /*hidden argument*/NULL);
		// PlayerPrefs.GetString("SoldItem1", " ");
		String_t* L_4;
		L_4 = PlayerPrefs_GetString_m5709C9DC233D10A7E9AF4BCC9639E3F18FE36831(_stringLiteral2FD2E2EFFA0B7B79634661311AF3DBCFEBDBF381, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		// PlayerPrefs.GetString("SoldItem2", " ");
		String_t* L_5;
		L_5 = PlayerPrefs_GetString_m5709C9DC233D10A7E9AF4BCC9639E3F18FE36831(_stringLiteral65B7AFDBA8EABD1B13AA4A654E67DFACCB98194A, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		// PlayerPrefs.GetInt("Boot", 1);
		int32_t L_6;
		L_6 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralBDED340C5884BBB732AC28145E72590E1D9A3C88, 1, /*hidden argument*/NULL);
		// PlayerPrefs.GetInt("Ammo", 1);
		int32_t L_7;
		L_7 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral3092156429B59FC0EE4780C2DBECFBD20BB07D1F, 1, /*hidden argument*/NULL);
		// PlayerPrefs.GetInt("Gun", 1);
		int32_t L_8;
		L_8 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2, 1, /*hidden argument*/NULL);
		// PlayerPrefs.GetString("Envanter", " ");
		String_t* L_9;
		L_9 = PlayerPrefs_GetString_m5709C9DC233D10A7E9AF4BCC9639E3F18FE36831(_stringLiteral0F969CD926BAB20DC503C0D99A24C2913FF3A335, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// return instance;
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_10 = ((SaveObject_t22688472458678E007AE2DF2C201E709617CC595_StaticFields*)il2cpp_codegen_static_fields_for(SaveObject_t22688472458678E007AE2DF2C201E709617CC595_il2cpp_TypeInfo_var))->get_instance_0();
		return L_10;
	}
}
// System.Void SaveObject::ResetAllItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject_ResetAllItem_mCF776F919C8A73768EBBE2C99AF3DA6963728B4F (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F969CD926BAB20DC503C0D99A24C2913FF3A335);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FD2E2EFFA0B7B79634661311AF3DBCFEBDBF381);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3092156429B59FC0EE4780C2DBECFBD20BB07D1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65B7AFDBA8EABD1B13AA4A654E67DFACCB98194A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDED340C5884BBB732AC28145E72590E1D9A3C88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Health", 3);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1, 3, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Coin", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764, 0, /*hidden argument*/NULL);
		// PlayerPrefs.SetString("SoldItem1", "");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral2FD2E2EFFA0B7B79634661311AF3DBCFEBDBF381, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// PlayerPrefs.SetString("SoldItem2", "");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral65B7AFDBA8EABD1B13AA4A654E67DFACCB98194A, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Boot", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralBDED340C5884BBB732AC28145E72590E1D9A3C88, 1, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Ammo", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral3092156429B59FC0EE4780C2DBECFBD20BB07D1F, 1, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Gun", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2, 1, /*hidden argument*/NULL);
		// PlayerPrefs.SetString("Envanter", "");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral0F969CD926BAB20DC503C0D99A24C2913FF3A335, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SaveObject::ResetAmmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject_ResetAmmo_m4B27E024D4EFCE0AB7578F128F205EEAA304E0B0 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3092156429B59FC0EE4780C2DBECFBD20BB07D1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Ammo", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral3092156429B59FC0EE4780C2DBECFBD20BB07D1F, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 SaveObject::GetCurrentHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveObject_GetCurrentHealth_m0EF07C224F5A7AC31F94B6241C70E1F7F433A78F (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetInt("Health", 1);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1, 1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SaveObject::HealthUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject_HealthUp_m95187E836E506337476104A80E11F634FD87AD7E (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Health", GetCurrentHealth() + 1);
		int32_t L_0;
		L_0 = SaveObject_GetCurrentHealth_m0EF07C224F5A7AC31F94B6241C70E1F7F433A78F(__this, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 SaveObject::TakeDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveObject_TakeDamage_m2F73F1B5209DB17AA635DFB80CDA414BB752E4D2 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Health", GetCurrentHealth() - 1);
		int32_t L_0;
		L_0 = SaveObject_GetCurrentHealth_m0EF07C224F5A7AC31F94B6241C70E1F7F433A78F(__this, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		// return GetCurrentHealth();
		int32_t L_1;
		L_1 = SaveObject_GetCurrentHealth_m0EF07C224F5A7AC31F94B6241C70E1F7F433A78F(__this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 SaveObject::GetCurrentCoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveObject_GetCurrentCoin_mCFAC430A537151AAE792D77E8C88B1AFD29BA8D8 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetInt("Coin", 1);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764, 1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SaveObject::CoinUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject_CoinUp_mB4EDD13EC220E01276721B55BBDAE41A03F7AA56 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Coin", GetCurrentCoin() + value);
		int32_t L_0;
		L_0 = SaveObject_GetCurrentCoin_mCFAC430A537151AAE792D77E8C88B1AFD29BA8D8(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___value0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 SaveObject::payedCoin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveObject_payedCoin_mFD84EEC26276E45CD66A11332924D68777721D4A (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, int32_t ___price0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Coin", GetCurrentCoin() - price);
		int32_t L_0;
		L_0 = SaveObject_GetCurrentCoin_mCFAC430A537151AAE792D77E8C88B1AFD29BA8D8(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___price0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralA982A1BA4D18DFE3E66F126342126192B22DB764, ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		// return GetCurrentCoin();
		int32_t L_2;
		L_2 = SaveObject_GetCurrentCoin_mCFAC430A537151AAE792D77E8C88B1AFD29BA8D8(__this, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void SaveObject::SetCurrentEnvanter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject_SetCurrentEnvanter_m6EBC9152A01483B456EF6CAE6DE9300A7E2DA785 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, String_t* ___envanter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F969CD926BAB20DC503C0D99A24C2913FF3A335);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString("Envanter", envanter);
		String_t* L_0 = ___envanter0;
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral0F969CD926BAB20DC503C0D99A24C2913FF3A335, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String SaveObject::GetCurrentEnvanter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SaveObject_GetCurrentEnvanter_m81643E39FEE3CBC200D31EF443DDE2EB6CABD9FE (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F969CD926BAB20DC503C0D99A24C2913FF3A335);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetString("Envanter", "");
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_m5709C9DC233D10A7E9AF4BCC9639E3F18FE36831(_stringLiteral0F969CD926BAB20DC503C0D99A24C2913FF3A335, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SaveObject::UsedCurrentEnvanter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject_UsedCurrentEnvanter_m7C835BA9879DA22A35AC704B1EE4173F836A7996 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F969CD926BAB20DC503C0D99A24C2913FF3A335);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString("Envanter", "");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral0F969CD926BAB20DC503C0D99A24C2913FF3A335, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 SaveObject::GetCurrentBoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveObject_GetCurrentBoot_m888D33ED023274D8F0A3428D183728F597825D2F (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDED340C5884BBB732AC28145E72590E1D9A3C88);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetInt("Boot", 1);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralBDED340C5884BBB732AC28145E72590E1D9A3C88, 1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SaveObject::SetCurrentBoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject_SetCurrentBoot_mB3C9C14CA3D34F9853421FA48DF326DB3CFE4AF6 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDED340C5884BBB732AC28145E72590E1D9A3C88);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Boot", GetCurrentBoot() + 1);
		int32_t L_0;
		L_0 = SaveObject_GetCurrentBoot_m888D33ED023274D8F0A3428D183728F597825D2F(__this, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralBDED340C5884BBB732AC28145E72590E1D9A3C88, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 SaveObject::GetCurrentAmmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveObject_GetCurrentAmmo_m0A00BBBE8FECC0500300447BA669743B0C40DDD6 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3092156429B59FC0EE4780C2DBECFBD20BB07D1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetInt("Ammo", 1);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral3092156429B59FC0EE4780C2DBECFBD20BB07D1F, 1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SaveObject::SetCurrentAmmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject_SetCurrentAmmo_m142005C059E5DC89B8223A4EDA21E395DC80F8E6 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3092156429B59FC0EE4780C2DBECFBD20BB07D1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Ammo", GetCurrentAmmo() + 1);
		int32_t L_0;
		L_0 = SaveObject_GetCurrentAmmo_m0A00BBBE8FECC0500300447BA669743B0C40DDD6(__this, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral3092156429B59FC0EE4780C2DBECFBD20BB07D1F, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 SaveObject::GetCurrentGun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveObject_GetCurrentGun_mC70DE54507B3996EA6DAAEF02F3FD1E299FB29B8 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetInt("Gun", 1);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2, 1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SaveObject::SetCurrentGun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject_SetCurrentGun_mDF5656C31CEAC28FE53BBE9A6AB9DA5004750BA5 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("Gun", GetCurrentGun() + 1);
		int32_t L_0;
		L_0 = SaveObject_GetCurrentGun_mC70DE54507B3996EA6DAAEF02F3FD1E299FB29B8(__this, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SaveObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveObject__ctor_mF769DB3D10019C33EC96C0D99FC4E6BB455A9307 (SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * __this, const RuntimeMethod* method)
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
// System.Void Shoot::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shoot_Start_m682A5BD7EDD13F7702BD7FA4412009EE80819703 (Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E * __this, const RuntimeMethod* method)
{
	{
		// rate_time = rate_time_hafiza;
		float L_0 = __this->get_rate_time_hafiza_11();
		__this->set_rate_time_10(L_0);
		// shotgun = false;
		__this->set_shotgun_12((bool)0);
		// wagonwheel = false;
		__this->set_wagonwheel_13((bool)0);
		// sheriffbadge = false;
		__this->set_sheriffbadge_14((bool)0);
		// bulletPower = 1;
		__this->set_bulletPower_16(1);
		// gunShootingSpeed = 0.85f + (SaveObject.singleton.GetCurrentGun()*0.15f);
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_1;
		L_1 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		int32_t L_2;
		L_2 = SaveObject_GetCurrentGun_mC70DE54507B3996EA6DAAEF02F3FD1E299FB29B8(L_1, /*hidden argument*/NULL);
		__this->set_gunShootingSpeed_15(((float)il2cpp_codegen_add((float)(0.850000024f), (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_2)), (float)(0.150000006f))))));
		// }
		return;
	}
}
// System.Void Shoot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shoot_Update_m6683B871E78A531DF27176CEB3ABA45D19EAC518 (Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A_m0A2DF8A7E3E419BE4FE5BEA69B495900DE1F520D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29E6F925C9FC7409A67D0465D755FA5DF465D6F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8B74C0D8361515C4A139B4F4C0830C23FBC8E7C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bulletPrefab.GetComponent<Bullet_Collider>().bulletPower = bulletPower;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_bulletPrefab_6();
		Bullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A * L_1;
		L_1 = GameObject_GetComponent_TisBullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A_m0A2DF8A7E3E419BE4FE5BEA69B495900DE1F520D(L_0, /*hidden argument*/GameObject_GetComponent_TisBullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A_m0A2DF8A7E3E419BE4FE5BEA69B495900DE1F520D_RuntimeMethod_var);
		int32_t L_2 = __this->get_bulletPower_16();
		L_1->set_bulletPower_4(L_2);
		// shotgun = this.gameObject.GetComponent<dropItems>().isShotgun;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * L_4;
		L_4 = GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994(L_3, /*hidden argument*/GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994_RuntimeMethod_var);
		bool L_5 = L_4->get_isShotgun_17();
		__this->set_shotgun_12(L_5);
		// wagonwheel = this.gameObject.GetComponent<dropItems>().isWagonWheel;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * L_7;
		L_7 = GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994(L_6, /*hidden argument*/GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994_RuntimeMethod_var);
		bool L_8 = L_7->get_isWagonWheel_21();
		__this->set_wagonwheel_13(L_8);
		// sheriffbadge = this.gameObject.GetComponent<dropItems>().isSheriffBadge;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * L_10;
		L_10 = GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994(L_9, /*hidden argument*/GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994_RuntimeMethod_var);
		bool L_11 = L_10->get_isSheriffBadge_24();
		__this->set_sheriffbadge_14(L_11);
		// barrel_distance_position.x = Input.GetAxisRaw("Horizontal_Bullet");
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_barrel_distance_position_8();
		float L_13;
		L_13 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteralE8B74C0D8361515C4A139B4F4C0830C23FBC8E7C, /*hidden argument*/NULL);
		L_12->set_x_0(L_13);
		// barrel_distance_position.y = Input.GetAxisRaw("Vertical_Bullet");
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_14 = __this->get_address_of_barrel_distance_position_8();
		float L_15;
		L_15 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral29E6F925C9FC7409A67D0465D755FA5DF465D6F0, /*hidden argument*/NULL);
		L_14->set_y_1(L_15);
		// if (rate_time <= 0)
		float L_16 = __this->get_rate_time_10();
		if ((!(((float)L_16) <= ((float)(0.0f)))))
		{
			goto IL_009c;
		}
	}
	{
		// rate_time = 0;
		__this->set_rate_time_10((0.0f));
		// }
		goto IL_00ae;
	}

IL_009c:
	{
		// rate_time -= Time.deltaTime;
		float L_17 = __this->get_rate_time_10();
		float L_18;
		L_18 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_rate_time_10(((float)il2cpp_codegen_subtract((float)L_17, (float)L_18)));
	}

IL_00ae:
	{
		// if (Input.GetAxisRaw("Horizontal_Bullet") != 0 || Input.GetAxisRaw("Vertical_Bullet") != 0)
		float L_19;
		L_19 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteralE8B74C0D8361515C4A139B4F4C0830C23FBC8E7C, /*hidden argument*/NULL);
		if ((!(((float)L_19) == ((float)(0.0f)))))
		{
			goto IL_00d0;
		}
	}
	{
		float L_20;
		L_20 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral29E6F925C9FC7409A67D0465D755FA5DF465D6F0, /*hidden argument*/NULL);
		if ((((float)L_20) == ((float)(0.0f))))
		{
			goto IL_00e3;
		}
	}

IL_00d0:
	{
		// if (rate_time <= 0)
		float L_21 = __this->get_rate_time_10();
		if ((!(((float)L_21) <= ((float)(0.0f)))))
		{
			goto IL_00e3;
		}
	}
	{
		// Shooting();
		Shoot_Shooting_m393F71B7129C262694F597AD78A71432B8DABD02(__this, /*hidden argument*/NULL);
	}

IL_00e3:
	{
		// }
		return;
	}
}
// System.Void Shoot::Shooting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shoot_Shooting_m393F71B7129C262694F597AD78A71432B8DABD02 (Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29E6F925C9FC7409A67D0465D755FA5DF465D6F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8B74C0D8361515C4A139B4F4C0830C23FBC8E7C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player_position.x = playerTransform.position.x + barrel_distance_position.x * 0.6f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_player_position_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_4 = __this->get_address_of_barrel_distance_position_8();
		float L_5 = L_4->get_x_0();
		L_0->set_x_0(((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)L_5, (float)(0.600000024f))))));
		// player_position.y = playerTransform.position.y + barrel_distance_position.y * 0.6f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = __this->get_address_of_player_position_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_10 = __this->get_address_of_barrel_distance_position_8();
		float L_11 = L_10->get_y_1();
		L_6->set_y_1(((float)il2cpp_codegen_add((float)L_9, (float)((float)il2cpp_codegen_multiply((float)L_11, (float)(0.600000024f))))));
		// if((wagonwheel == true) || ((shotgun == true) && (sheriffbadge == true)))
		bool L_12 = __this->get_wagonwheel_13();
		if (L_12)
		{
			goto IL_0078;
		}
	}
	{
		bool L_13 = __this->get_shotgun_12();
		if (!L_13)
		{
			goto IL_0795;
		}
	}
	{
		bool L_14 = __this->get_sheriffbadge_14();
		if (!L_14)
		{
			goto IL_0795;
		}
	}

IL_0078:
	{
		// player_position.x = playerTransform.position.x + 1 * 0.6f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_15 = __this->get_address_of_player_position_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_2();
		L_15->set_x_0(((float)il2cpp_codegen_add((float)L_18, (float)(0.600000024f))));
		// player_position.y = playerTransform.position.y + 0 * 0.6f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_19 = __this->get_address_of_player_position_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_y_3();
		L_19->set_y_1(((float)il2cpp_codegen_add((float)L_22, (float)(0.0f))));
		// barrel_distance_position_hafiza.x = 1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_23 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_23->set_x_0((1.0f));
		// barrel_distance_position_hafiza.y = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_24 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_24->set_y_1((0.0f));
		// barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = __this->get_player_position_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = __this->get_barrel_distance_position_hafiza_17();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		L_29 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_28, (0.100000001f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		L_30 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_27, L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_30, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_26, L_31, /*hidden argument*/NULL);
		// GameObject bulletX = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_bulletPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38;
		L_38 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_32, L_35, L_38, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rbX = bulletX.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_40;
		L_40 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_39, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rbX.AddForce(barrel_distance_position_hafiza * bulletForce * 0.88f, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41 = __this->get_barrel_distance_position_hafiza_17();
		float L_42 = __this->get_bulletForce_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43;
		L_43 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_41, L_42, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_44;
		L_44 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_43, (0.879999995f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_40, L_44, 1, /*hidden argument*/NULL);
		// player_position.x = playerTransform.position.x + -1 * 0.6f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_45 = __this->get_address_of_player_position_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_46, /*hidden argument*/NULL);
		float L_48 = L_47.get_x_2();
		L_45->set_x_0(((float)il2cpp_codegen_add((float)L_48, (float)(-0.600000024f))));
		// player_position.y = playerTransform.position.y + 0 * 0.6f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_49 = __this->get_address_of_player_position_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_50, /*hidden argument*/NULL);
		float L_52 = L_51.get_y_3();
		L_49->set_y_1(((float)il2cpp_codegen_add((float)L_52, (float)(0.0f))));
		// barrel_distance_position_hafiza.x = -1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_53 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_53->set_x_0((-1.0f));
		// barrel_distance_position_hafiza.y = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_54 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_54->set_y_1((0.0f));
		// barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_55, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_57 = __this->get_player_position_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_58 = __this->get_barrel_distance_position_hafiza_17();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_59;
		L_59 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_58, (0.100000001f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_60;
		L_60 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_57, L_59, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_60, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_56, L_61, /*hidden argument*/NULL);
		// GameObject bulletNX = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = __this->get_bulletPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_63 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64;
		L_64 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_63, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		L_65 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_64, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67;
		L_67 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_66, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_68;
		L_68 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_67, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69;
		L_69 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_62, L_65, L_68, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rbNX = bulletNX.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_70;
		L_70 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_69, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rbNX.AddForce(barrel_distance_position_hafiza * bulletForce * 0.88f, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_71 = __this->get_barrel_distance_position_hafiza_17();
		float L_72 = __this->get_bulletForce_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_73;
		L_73 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_71, L_72, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_74;
		L_74 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_73, (0.879999995f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_70, L_74, 1, /*hidden argument*/NULL);
		// player_position.x = playerTransform.position.x + 0 * 0.6f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_75 = __this->get_address_of_player_position_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_76 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77;
		L_77 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_76, /*hidden argument*/NULL);
		float L_78 = L_77.get_x_2();
		L_75->set_x_0(((float)il2cpp_codegen_add((float)L_78, (float)(0.0f))));
		// player_position.y = playerTransform.position.y + 1 * 0.6f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_79 = __this->get_address_of_player_position_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		L_81 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_80, /*hidden argument*/NULL);
		float L_82 = L_81.get_y_3();
		L_79->set_y_1(((float)il2cpp_codegen_add((float)L_82, (float)(0.600000024f))));
		// barrel_distance_position_hafiza.x = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_83 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_83->set_x_0((0.0f));
		// barrel_distance_position_hafiza.y = 1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_84 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_84->set_y_1((1.0f));
		// barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_85 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_86;
		L_86 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_85, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_87 = __this->get_player_position_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_88 = __this->get_barrel_distance_position_hafiza_17();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_89;
		L_89 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_88, (0.100000001f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_90;
		L_90 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_87, L_89, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91;
		L_91 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_90, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_86, L_91, /*hidden argument*/NULL);
		// GameObject bulletY = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_92 = __this->get_bulletPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_93 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_94;
		L_94 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_93, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
		L_95 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_94, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_96 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_97;
		L_97 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_96, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_98;
		L_98 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_97, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_99;
		L_99 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_92, L_95, L_98, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rbY = bulletY.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_100;
		L_100 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_99, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rbY.AddForce(barrel_distance_position_hafiza * bulletForce * 0.88f, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_101 = __this->get_barrel_distance_position_hafiza_17();
		float L_102 = __this->get_bulletForce_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_103;
		L_103 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_101, L_102, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_104;
		L_104 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_103, (0.879999995f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_100, L_104, 1, /*hidden argument*/NULL);
		// player_position.x = playerTransform.position.x + 0 * 0.6f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_105 = __this->get_address_of_player_position_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_106 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107;
		L_107 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_106, /*hidden argument*/NULL);
		float L_108 = L_107.get_x_2();
		L_105->set_x_0(((float)il2cpp_codegen_add((float)L_108, (float)(0.0f))));
		// player_position.y = playerTransform.position.y + -1 * 0.6f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_109 = __this->get_address_of_player_position_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_110 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111;
		L_111 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_110, /*hidden argument*/NULL);
		float L_112 = L_111.get_y_3();
		L_109->set_y_1(((float)il2cpp_codegen_add((float)L_112, (float)(-0.600000024f))));
		// barrel_distance_position_hafiza.x = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_113 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_113->set_x_0((0.0f));
		// barrel_distance_position_hafiza.y = -1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_114 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_114->set_y_1((-1.0f));
		// barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_115 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_116;
		L_116 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_115, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_117 = __this->get_player_position_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_118 = __this->get_barrel_distance_position_hafiza_17();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_119;
		L_119 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_118, (0.100000001f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_120;
		L_120 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_117, L_119, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_121;
		L_121 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_120, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_116, L_121, /*hidden argument*/NULL);
		// GameObject bulletNY = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_122 = __this->get_bulletPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_123 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_124;
		L_124 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_123, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_125;
		L_125 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_124, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_126 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_127;
		L_127 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_126, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_128;
		L_128 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_127, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_129;
		L_129 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_122, L_125, L_128, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rbNY = bulletNY.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_130;
		L_130 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_129, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rbNY.AddForce(barrel_distance_position_hafiza * bulletForce * 0.88f, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_131 = __this->get_barrel_distance_position_hafiza_17();
		float L_132 = __this->get_bulletForce_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_133;
		L_133 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_131, L_132, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_134;
		L_134 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_133, (0.879999995f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_130, L_134, 1, /*hidden argument*/NULL);
		// player_position.x = playerTransform.position.x + 1 * 0.6f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_135 = __this->get_address_of_player_position_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_136 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_137;
		L_137 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_136, /*hidden argument*/NULL);
		float L_138 = L_137.get_x_2();
		L_135->set_x_0(((float)il2cpp_codegen_add((float)L_138, (float)(0.600000024f))));
		// player_position.y = playerTransform.position.y + 1 * 0.6f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_139 = __this->get_address_of_player_position_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_140 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_141;
		L_141 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_140, /*hidden argument*/NULL);
		float L_142 = L_141.get_y_3();
		L_139->set_y_1(((float)il2cpp_codegen_add((float)L_142, (float)(0.600000024f))));
		// barrel_distance_position_hafiza.x = 1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_143 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_143->set_x_0((1.0f));
		// barrel_distance_position_hafiza.y = 1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_144 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_144->set_y_1((1.0f));
		// barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.05f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_145 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_146;
		L_146 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_145, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_147 = __this->get_player_position_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_148 = __this->get_barrel_distance_position_hafiza_17();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_149;
		L_149 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_148, (0.0500000007f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_150;
		L_150 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_147, L_149, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_151;
		L_151 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_150, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_146, L_151, /*hidden argument*/NULL);
		// GameObject bulletXY = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_152 = __this->get_bulletPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_153 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_154;
		L_154 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_153, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_155;
		L_155 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_154, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_156 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_157;
		L_157 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_156, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_158;
		L_158 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_157, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_159;
		L_159 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_152, L_155, L_158, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rbXY = bulletXY.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_160;
		L_160 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_159, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rbXY.AddForce(barrel_distance_position_hafiza * bulletForce * 0.55f, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_161 = __this->get_barrel_distance_position_hafiza_17();
		float L_162 = __this->get_bulletForce_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_163;
		L_163 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_161, L_162, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_164;
		L_164 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_163, (0.550000012f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_160, L_164, 1, /*hidden argument*/NULL);
		// player_position.x = playerTransform.position.x + 1 * 0.6f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_165 = __this->get_address_of_player_position_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_166 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_167;
		L_167 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_166, /*hidden argument*/NULL);
		float L_168 = L_167.get_x_2();
		L_165->set_x_0(((float)il2cpp_codegen_add((float)L_168, (float)(0.600000024f))));
		// player_position.y = playerTransform.position.y + -1 * 0.6f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_169 = __this->get_address_of_player_position_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_170 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_171;
		L_171 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_170, /*hidden argument*/NULL);
		float L_172 = L_171.get_y_3();
		L_169->set_y_1(((float)il2cpp_codegen_add((float)L_172, (float)(-0.600000024f))));
		// barrel_distance_position_hafiza.x = 1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_173 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_173->set_x_0((1.0f));
		// barrel_distance_position_hafiza.y = -1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_174 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_174->set_y_1((-1.0f));
		// barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.05f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_175 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_176;
		L_176 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_175, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_177 = __this->get_player_position_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_178 = __this->get_barrel_distance_position_hafiza_17();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_179;
		L_179 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_178, (0.0500000007f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_180;
		L_180 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_177, L_179, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_181;
		L_181 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_180, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_176, L_181, /*hidden argument*/NULL);
		// GameObject bulletXNY = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_182 = __this->get_bulletPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_183 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_184;
		L_184 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_183, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_185;
		L_185 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_184, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_186 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_187;
		L_187 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_186, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_188;
		L_188 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_187, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_189;
		L_189 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_182, L_185, L_188, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rbXNY = bulletXNY.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_190;
		L_190 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_189, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rbXNY.AddForce(barrel_distance_position_hafiza * bulletForce * 0.55f, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_191 = __this->get_barrel_distance_position_hafiza_17();
		float L_192 = __this->get_bulletForce_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_193;
		L_193 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_191, L_192, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_194;
		L_194 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_193, (0.550000012f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_190, L_194, 1, /*hidden argument*/NULL);
		// player_position.x = playerTransform.position.x + -1 * 0.6f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_195 = __this->get_address_of_player_position_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_196 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_197;
		L_197 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_196, /*hidden argument*/NULL);
		float L_198 = L_197.get_x_2();
		L_195->set_x_0(((float)il2cpp_codegen_add((float)L_198, (float)(-0.600000024f))));
		// player_position.y = playerTransform.position.y + 1 * 0.6f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_199 = __this->get_address_of_player_position_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_200 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_201;
		L_201 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_200, /*hidden argument*/NULL);
		float L_202 = L_201.get_y_3();
		L_199->set_y_1(((float)il2cpp_codegen_add((float)L_202, (float)(0.600000024f))));
		// barrel_distance_position_hafiza.x = -1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_203 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_203->set_x_0((-1.0f));
		// barrel_distance_position_hafiza.y = 1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_204 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_204->set_y_1((1.0f));
		// barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.05f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_205 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_206;
		L_206 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_205, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_207 = __this->get_player_position_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_208 = __this->get_barrel_distance_position_hafiza_17();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_209;
		L_209 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_208, (0.0500000007f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_210;
		L_210 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_207, L_209, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_211;
		L_211 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_210, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_206, L_211, /*hidden argument*/NULL);
		// GameObject bulletNXY = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_212 = __this->get_bulletPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_213 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_214;
		L_214 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_213, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_215;
		L_215 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_214, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_216 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_217;
		L_217 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_216, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_218;
		L_218 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_217, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_219;
		L_219 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_212, L_215, L_218, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rbNXY = bulletNXY.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_220;
		L_220 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_219, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rbNXY.AddForce(barrel_distance_position_hafiza * bulletForce * 0.55f, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_221 = __this->get_barrel_distance_position_hafiza_17();
		float L_222 = __this->get_bulletForce_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_223;
		L_223 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_221, L_222, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_224;
		L_224 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_223, (0.550000012f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_220, L_224, 1, /*hidden argument*/NULL);
		// player_position.x = playerTransform.position.x + -1 * 0.6f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_225 = __this->get_address_of_player_position_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_226 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_227;
		L_227 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_226, /*hidden argument*/NULL);
		float L_228 = L_227.get_x_2();
		L_225->set_x_0(((float)il2cpp_codegen_add((float)L_228, (float)(-0.600000024f))));
		// player_position.y = playerTransform.position.y + -1 * 0.6f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_229 = __this->get_address_of_player_position_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_230 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_231;
		L_231 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_230, /*hidden argument*/NULL);
		float L_232 = L_231.get_y_3();
		L_229->set_y_1(((float)il2cpp_codegen_add((float)L_232, (float)(-0.600000024f))));
		// barrel_distance_position_hafiza.x = -1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_233 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_233->set_x_0((-1.0f));
		// barrel_distance_position_hafiza.y = -1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_234 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_234->set_y_1((-1.0f));
		// barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.05f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_235 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_236;
		L_236 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_235, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_237 = __this->get_player_position_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_238 = __this->get_barrel_distance_position_hafiza_17();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_239;
		L_239 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_238, (0.0500000007f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_240;
		L_240 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_237, L_239, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_241;
		L_241 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_240, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_236, L_241, /*hidden argument*/NULL);
		// GameObject bulletNXNY = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_242 = __this->get_bulletPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_243 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_244;
		L_244 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_243, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_245;
		L_245 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_244, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_246 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_247;
		L_247 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_246, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_248;
		L_248 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_247, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_249;
		L_249 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_242, L_245, L_248, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rbNXNY = bulletNXNY.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_250;
		L_250 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_249, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rbNXNY.AddForce(barrel_distance_position_hafiza * bulletForce * 0.55f, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_251 = __this->get_barrel_distance_position_hafiza_17();
		float L_252 = __this->get_bulletForce_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_253;
		L_253 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_251, L_252, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_254;
		L_254 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_253, (0.550000012f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_250, L_254, 1, /*hidden argument*/NULL);
		// }
		goto IL_0e00;
	}

IL_0795:
	{
		// else if((shotgun == true) || (sheriffbadge == true))
		bool L_255 = __this->get_shotgun_12();
		if (L_255)
		{
			goto IL_07a8;
		}
	}
	{
		bool L_256 = __this->get_sheriffbadge_14();
		if (!L_256)
		{
			goto IL_0cd1;
		}
	}

IL_07a8:
	{
		// if (Input.GetAxisRaw("Horizontal_Bullet") != 0 && Input.GetAxisRaw("Vertical_Bullet") != 0)
		float L_257;
		L_257 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteralE8B74C0D8361515C4A139B4F4C0830C23FBC8E7C, /*hidden argument*/NULL);
		if ((((float)L_257) == ((float)(0.0f))))
		{
			goto IL_09a8;
		}
	}
	{
		float L_258;
		L_258 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral29E6F925C9FC7409A67D0465D755FA5DF465D6F0, /*hidden argument*/NULL);
		if ((((float)L_258) == ((float)(0.0f))))
		{
			goto IL_09a8;
		}
	}
	{
		// barrel_distance.transform.position = player_position + barrel_distance_position * 0.05f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_259 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_260;
		L_260 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_259, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_261 = __this->get_player_position_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_262 = __this->get_barrel_distance_position_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_263;
		L_263 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_262, (0.0500000007f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_264;
		L_264 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_261, L_263, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_265;
		L_265 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_264, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_260, L_265, /*hidden argument*/NULL);
		// GameObject bullet = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_266 = __this->get_bulletPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_267 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_268;
		L_268 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_267, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_269;
		L_269 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_268, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_270 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_271;
		L_271 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_270, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_272;
		L_272 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_271, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_273;
		L_273 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_266, L_269, L_272, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_274;
		L_274 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_273, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rb.AddForce(barrel_distance_position * bulletForce * 0.55f, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_275 = __this->get_barrel_distance_position_8();
		float L_276 = __this->get_bulletForce_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_277;
		L_277 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_275, L_276, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_278;
		L_278 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_277, (0.550000012f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_274, L_278, 1, /*hidden argument*/NULL);
		// barrel_distance_position_hafiza = barrel_distance_position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_279 = __this->get_barrel_distance_position_8();
		__this->set_barrel_distance_position_hafiza_17(L_279);
		// barrel_distance_position_hafiza.x = barrel_distance_position.x * 0.33f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_280 = __this->get_address_of_barrel_distance_position_hafiza_17();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_281 = __this->get_address_of_barrel_distance_position_8();
		float L_282 = L_281->get_x_0();
		L_280->set_x_0(((float)il2cpp_codegen_multiply((float)L_282, (float)(0.330000013f))));
		// barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_283 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_284;
		L_284 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_283, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_285 = __this->get_player_position_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_286 = __this->get_barrel_distance_position_hafiza_17();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_287;
		L_287 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_286, (0.100000001f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_288;
		L_288 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_285, L_287, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_289;
		L_289 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_288, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_284, L_289, /*hidden argument*/NULL);
		// GameObject bulletX = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_290 = __this->get_bulletPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_291 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_292;
		L_292 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_291, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_293;
		L_293 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_292, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_294 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_295;
		L_295 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_294, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_296;
		L_296 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_295, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_297;
		L_297 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_290, L_293, L_296, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rbX = bulletX.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_298;
		L_298 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_297, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rbX.AddForce(barrel_distance_position_hafiza * bulletForce * 0.66f, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_299 = __this->get_barrel_distance_position_hafiza_17();
		float L_300 = __this->get_bulletForce_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_301;
		L_301 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_299, L_300, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_302;
		L_302 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_301, (0.660000026f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_298, L_302, 1, /*hidden argument*/NULL);
		// barrel_distance_position_hafiza = barrel_distance_position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_303 = __this->get_barrel_distance_position_8();
		__this->set_barrel_distance_position_hafiza_17(L_303);
		// barrel_distance_position_hafiza.y = barrel_distance_position.y * 0.33f; ;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_304 = __this->get_address_of_barrel_distance_position_hafiza_17();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_305 = __this->get_address_of_barrel_distance_position_8();
		float L_306 = L_305->get_y_1();
		L_304->set_y_1(((float)il2cpp_codegen_multiply((float)L_306, (float)(0.330000013f))));
		// barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_307 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_308;
		L_308 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_307, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_309 = __this->get_player_position_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_310 = __this->get_barrel_distance_position_hafiza_17();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_311;
		L_311 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_310, (0.100000001f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_312;
		L_312 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_309, L_311, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_313;
		L_313 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_312, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_308, L_313, /*hidden argument*/NULL);
		// GameObject bulletY = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_314 = __this->get_bulletPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_315 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_316;
		L_316 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_315, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_317;
		L_317 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_316, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_318 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_319;
		L_319 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_318, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_320;
		L_320 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_319, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_321;
		L_321 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_314, L_317, L_320, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rbY = bulletY.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_322;
		L_322 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_321, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rbY.AddForce(barrel_distance_position_hafiza * bulletForce * 0.66f, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_323 = __this->get_barrel_distance_position_hafiza_17();
		float L_324 = __this->get_bulletForce_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_325;
		L_325 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_323, L_324, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_326;
		L_326 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_325, (0.660000026f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_322, L_326, 1, /*hidden argument*/NULL);
		// }
		goto IL_0e00;
	}

IL_09a8:
	{
		// barrel_distance.transform.position = player_position + barrel_distance_position * 0.1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_327 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_328;
		L_328 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_327, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_329 = __this->get_player_position_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_330 = __this->get_barrel_distance_position_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_331;
		L_331 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_330, (0.100000001f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_332;
		L_332 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_329, L_331, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_333;
		L_333 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_332, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_328, L_333, /*hidden argument*/NULL);
		// GameObject bullet = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_334 = __this->get_bulletPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_335 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_336;
		L_336 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_335, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_337;
		L_337 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_336, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_338 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_339;
		L_339 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_338, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_340;
		L_340 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_339, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_341;
		L_341 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_334, L_337, L_340, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_342;
		L_342 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_341, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rb.AddForce(barrel_distance_position * bulletForce * 0.88f, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_343 = __this->get_barrel_distance_position_8();
		float L_344 = __this->get_bulletForce_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_345;
		L_345 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_343, L_344, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_346;
		L_346 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_345, (0.879999995f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_342, L_346, 1, /*hidden argument*/NULL);
		// if ( barrel_distance_position.x != 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_347 = __this->get_address_of_barrel_distance_position_8();
		float L_348 = L_347->get_x_0();
		if ((((float)L_348) == ((float)(0.0f))))
		{
			goto IL_0b7d;
		}
	}
	{
		// barrel_distance_position_hafiza = barrel_distance_position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_349 = __this->get_barrel_distance_position_8();
		__this->set_barrel_distance_position_hafiza_17(L_349);
		// barrel_distance_position_hafiza.y = 0.33f ;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_350 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_350->set_y_1((0.330000013f));
		// barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.08f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_351 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_352;
		L_352 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_351, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_353 = __this->get_player_position_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_354 = __this->get_barrel_distance_position_hafiza_17();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_355;
		L_355 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_354, (0.0799999982f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_356;
		L_356 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_353, L_355, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_357;
		L_357 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_356, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_352, L_357, /*hidden argument*/NULL);
		// GameObject bulletX = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_358 = __this->get_bulletPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_359 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_360;
		L_360 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_359, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_361;
		L_361 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_360, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_362 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_363;
		L_363 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_362, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_364;
		L_364 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_363, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_365;
		L_365 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_358, L_361, L_364, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rbX = bulletX.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_366;
		L_366 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_365, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rbX.AddForce(barrel_distance_position_hafiza * bulletForce * 0.77f, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_367 = __this->get_barrel_distance_position_hafiza_17();
		float L_368 = __this->get_bulletForce_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_369;
		L_369 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_367, L_368, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_370;
		L_370 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_369, (0.769999981f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_366, L_370, 1, /*hidden argument*/NULL);
		// barrel_distance_position_hafiza = barrel_distance_position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_371 = __this->get_barrel_distance_position_8();
		__this->set_barrel_distance_position_hafiza_17(L_371);
		// barrel_distance_position_hafiza.y = -0.33f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_372 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_372->set_y_1((-0.330000013f));
		// barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.08f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_373 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_374;
		L_374 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_373, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_375 = __this->get_player_position_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_376 = __this->get_barrel_distance_position_hafiza_17();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_377;
		L_377 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_376, (0.0799999982f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_378;
		L_378 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_375, L_377, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_379;
		L_379 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_378, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_374, L_379, /*hidden argument*/NULL);
		// GameObject bulletY = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_380 = __this->get_bulletPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_381 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_382;
		L_382 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_381, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_383;
		L_383 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_382, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_384 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_385;
		L_385 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_384, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_386;
		L_386 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_385, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_387;
		L_387 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_380, L_383, L_386, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rbY = bulletY.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_388;
		L_388 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_387, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rbY.AddForce(barrel_distance_position_hafiza * bulletForce * 0.77f, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_389 = __this->get_barrel_distance_position_hafiza_17();
		float L_390 = __this->get_bulletForce_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_391;
		L_391 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_389, L_390, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_392;
		L_392 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_391, (0.769999981f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_388, L_392, 1, /*hidden argument*/NULL);
		// }
		goto IL_0e00;
	}

IL_0b7d:
	{
		// else if (barrel_distance_position.y != 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_393 = __this->get_address_of_barrel_distance_position_8();
		float L_394 = L_393->get_y_1();
		if ((((float)L_394) == ((float)(0.0f))))
		{
			goto IL_0e00;
		}
	}
	{
		// barrel_distance_position_hafiza = barrel_distance_position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_395 = __this->get_barrel_distance_position_8();
		__this->set_barrel_distance_position_hafiza_17(L_395);
		// barrel_distance_position_hafiza.x = 0.33f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_396 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_396->set_x_0((0.330000013f));
		// barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.08f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_397 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_398;
		L_398 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_397, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_399 = __this->get_player_position_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_400 = __this->get_barrel_distance_position_hafiza_17();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_401;
		L_401 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_400, (0.0799999982f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_402;
		L_402 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_399, L_401, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_403;
		L_403 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_402, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_398, L_403, /*hidden argument*/NULL);
		// GameObject bulletX = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_404 = __this->get_bulletPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_405 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_406;
		L_406 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_405, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_407;
		L_407 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_406, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_408 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_409;
		L_409 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_408, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_410;
		L_410 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_409, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_411;
		L_411 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_404, L_407, L_410, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rbX = bulletX.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_412;
		L_412 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_411, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rbX.AddForce(barrel_distance_position_hafiza * bulletForce * 0.77f, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_413 = __this->get_barrel_distance_position_hafiza_17();
		float L_414 = __this->get_bulletForce_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_415;
		L_415 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_413, L_414, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_416;
		L_416 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_415, (0.769999981f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_412, L_416, 1, /*hidden argument*/NULL);
		// barrel_distance_position_hafiza = barrel_distance_position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_417 = __this->get_barrel_distance_position_8();
		__this->set_barrel_distance_position_hafiza_17(L_417);
		// barrel_distance_position_hafiza.x = -0.33f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_418 = __this->get_address_of_barrel_distance_position_hafiza_17();
		L_418->set_x_0((-0.330000013f));
		// barrel_distance.transform.position = player_position + barrel_distance_position_hafiza * 0.08f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_419 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_420;
		L_420 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_419, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_421 = __this->get_player_position_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_422 = __this->get_barrel_distance_position_hafiza_17();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_423;
		L_423 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_422, (0.0799999982f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_424;
		L_424 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_421, L_423, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_425;
		L_425 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_424, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_420, L_425, /*hidden argument*/NULL);
		// GameObject bulletY = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_426 = __this->get_bulletPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_427 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_428;
		L_428 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_427, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_429;
		L_429 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_428, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_430 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_431;
		L_431 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_430, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_432;
		L_432 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_431, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_433;
		L_433 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_426, L_429, L_432, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rbY = bulletY.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_434;
		L_434 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_433, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rbY.AddForce(barrel_distance_position_hafiza * bulletForce * 0.77f, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_435 = __this->get_barrel_distance_position_hafiza_17();
		float L_436 = __this->get_bulletForce_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_437;
		L_437 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_435, L_436, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_438;
		L_438 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_437, (0.769999981f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_434, L_438, 1, /*hidden argument*/NULL);
		// }
		goto IL_0e00;
	}

IL_0cd1:
	{
		// if (Input.GetAxisRaw("Horizontal_Bullet") != 0 && Input.GetAxisRaw("Vertical_Bullet") != 0)
		float L_439;
		L_439 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteralE8B74C0D8361515C4A139B4F4C0830C23FBC8E7C, /*hidden argument*/NULL);
		if ((((float)L_439) == ((float)(0.0f))))
		{
			goto IL_0d7f;
		}
	}
	{
		float L_440;
		L_440 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral29E6F925C9FC7409A67D0465D755FA5DF465D6F0, /*hidden argument*/NULL);
		if ((((float)L_440) == ((float)(0.0f))))
		{
			goto IL_0d7f;
		}
	}
	{
		// barrel_distance.transform.position = player_position + barrel_distance_position * 0.05f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_441 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_442;
		L_442 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_441, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_443 = __this->get_player_position_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_444 = __this->get_barrel_distance_position_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_445;
		L_445 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_444, (0.0500000007f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_446;
		L_446 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_443, L_445, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_447;
		L_447 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_446, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_442, L_447, /*hidden argument*/NULL);
		// GameObject bullet = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_448 = __this->get_bulletPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_449 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_450;
		L_450 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_449, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_451;
		L_451 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_450, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_452 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_453;
		L_453 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_452, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_454;
		L_454 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_453, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_455;
		L_455 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_448, L_451, L_454, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_456;
		L_456 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_455, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rb.AddForce(barrel_distance_position * bulletForce * 0.55f, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_457 = __this->get_barrel_distance_position_8();
		float L_458 = __this->get_bulletForce_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_459;
		L_459 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_457, L_458, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_460;
		L_460 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_459, (0.550000012f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_456, L_460, 1, /*hidden argument*/NULL);
		// }
		goto IL_0e00;
	}

IL_0d7f:
	{
		// barrel_distance.transform.position = player_position + barrel_distance_position * 0.1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_461 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_462;
		L_462 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_461, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_463 = __this->get_player_position_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_464 = __this->get_barrel_distance_position_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_465;
		L_465 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_464, (0.100000001f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_466;
		L_466 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_463, L_465, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_467;
		L_467 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_466, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_462, L_467, /*hidden argument*/NULL);
		// GameObject bullet = Instantiate(bulletPrefab, barrel_distance.transform.position, barrel_distance.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_468 = __this->get_bulletPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_469 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_470;
		L_470 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_469, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_471;
		L_471 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_470, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_472 = __this->get_barrel_distance_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_473;
		L_473 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_472, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_474;
		L_474 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_473, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_475;
		L_475 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_468, L_471, L_474, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_476;
		L_476 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_475, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		// rb.AddForce(barrel_distance_position * bulletForce * 0.88f, ForceMode2D.Impulse);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_477 = __this->get_barrel_distance_position_8();
		float L_478 = __this->get_bulletForce_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_479;
		L_479 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_477, L_478, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_480;
		L_480 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_479, (0.879999995f), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_476, L_480, 1, /*hidden argument*/NULL);
	}

IL_0e00:
	{
		// rate_time = rate_time_hafiza * this.gameObject.GetComponent<dropItems>().shooting_speed * this.gameObject.GetComponent<dropItems>().shotgun_Shooting_Speed * this.gameObject.GetComponent<dropItems>().SheriffBadge_Shooting_Speed * gunShootingSpeed;
		float L_481 = __this->get_rate_time_hafiza_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_482;
		L_482 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * L_483;
		L_483 = GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994(L_482, /*hidden argument*/GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994_RuntimeMethod_var);
		float L_484 = L_483->get_shooting_speed_16();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_485;
		L_485 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * L_486;
		L_486 = GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994(L_485, /*hidden argument*/GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994_RuntimeMethod_var);
		float L_487 = L_486->get_shotgun_Shooting_Speed_20();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_488;
		L_488 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * L_489;
		L_489 = GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994(L_488, /*hidden argument*/GameObject_GetComponent_TisdropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384_m72C8D58EDD97C139DC7DE351601D14C4B68E5994_RuntimeMethod_var);
		float L_490 = L_489->get_SheriffBadge_Shooting_Speed_28();
		float L_491 = __this->get_gunShootingSpeed_15();
		__this->set_rate_time_10(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_481, (float)L_484)), (float)L_487)), (float)L_490)), (float)L_491)));
		// }
		return;
	}
}
// System.Void Shoot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shoot__ctor_mF3726D8F4CF9CACD5F4A1B5CF58B9FB5A4F4DDC4 (Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float bulletForce = 20f;
		__this->set_bulletForce_9((20.0f));
		// private float rate_time_hafiza = 0.375f;
		__this->set_rate_time_hafiza_11((0.375f));
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
// System.Void Shop::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Start_m511166AF24B2A3289A51FD338BFB6E39CD1B1A46 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = tuccar.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_tuccar_4();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1;
		L_1 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_0, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		__this->set_rb_6(L_1);
		// animator = tuccar.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_tuccar_4();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3;
		L_3 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_2, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_animator_7(L_3);
		// location = 3;
		__this->set_location_9((3.0f));
		// movement.x = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_4 = __this->get_address_of_movement_8();
		L_4->set_x_0((0.0f));
		// movement.y = -1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_5 = __this->get_address_of_movement_8();
		L_5->set_y_1((-1.0f));
		// hafizaslot[0] = 5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = __this->get_hafizaslot_18();
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)5);
		// hafizaslot[1] = 5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = __this->get_hafizaslot_18();
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)5);
		// hafizaslot[2] = 5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = __this->get_hafizaslot_18();
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)5);
		// time = Time.time;
		float L_9;
		L_9 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_time_22(((double)((double)L_9)));
		// }
		return;
	}
}
// System.Void Shop::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Update_m0BAB0F4160017513DD4CFDA2FEE96BFE06358DB0 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6D5FDD0838C61F429215FB9FCEA42E4FDC27183);
		s_Il2CppMethodInitialized = true;
	}
	{
		// time += Time.deltaTime;
		double L_0 = __this->get_time_22();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_time_22(((double)il2cpp_codegen_add((double)L_0, (double)((double)((double)L_1)))));
		// if (tuccar.transform.position.y <= 3.5)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_tuccar_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		if ((!(((double)((double)((double)L_5))) <= ((double)(3.5)))))
		{
			goto IL_0072;
		}
	}
	{
		// animator.SetBool("waiting", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = __this->get_animator_7();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_6, _stringLiteralB6D5FDD0838C61F429215FB9FCEA42E4FDC27183, (bool)1, /*hidden argument*/NULL);
		// Animasyon();
		Shop_Animasyon_mEC9BDDAA002614C6755E47D273AA54BE5DA9FD45(__this, /*hidden argument*/NULL);
		// if (itemlerEklendi == false)
		bool L_7 = __this->get_itemlerEklendi_20();
		if (L_7)
		{
			goto IL_006c;
		}
	}
	{
		// ShopWindow.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_ShopWindow_10();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
		// ShopSistemi();
		Shop_ShopSistemi_mEEACECB6BC79280114F60A674A60C7DA3763DEEB(__this, /*hidden argument*/NULL);
		// itemlerEklendi = true;
		__this->set_itemlerEklendi_20((bool)1);
	}

IL_006c:
	{
		// SatinAlim();
		Shop_SatinAlim_mEBC9167DEB3AD2D7988304F5EA8E3BFB7600FF78(__this, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Shop::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_FixedUpdate_mEF7E119B5C02047A97F81AF21E756125203BE2E9 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C_m289A840E325C3745B478D4C754127B6B4BB01415_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.gameObject.GetComponent<TimerBar>().tuccar == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C * L_1;
		L_1 = GameObject_GetComponent_TisTimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C_m289A840E325C3745B478D4C754127B6B4BB01415(L_0, /*hidden argument*/GameObject_GetComponent_TisTimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C_m289A840E325C3745B478D4C754127B6B4BB01415_RuntimeMethod_var);
		bool L_2 = L_1->get_tuccar_22();
		if (!L_2)
		{
			goto IL_0074;
		}
	}
	{
		// tuccar.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_tuccar_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// if (tuccar.transform.position.y > 3.5)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_tuccar_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		if ((!(((double)((double)((double)L_7))) > ((double)(3.5)))))
		{
			goto IL_0074;
		}
	}
	{
		// rb.MovePosition(rb.position + movement * 2f * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_8 = __this->get_rb_6();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_9 = __this->get_rb_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_9, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = __this->get_movement_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_11, (2.0f), /*hidden argument*/NULL);
		float L_13;
		L_13 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_12, L_13, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_10, L_14, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_8, L_15, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// SatinAlim();
		Shop_SatinAlim_mEBC9167DEB3AD2D7988304F5EA8E3BFB7600FF78(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Shop::Animasyon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Animasyon_mEC9BDDAA002614C6755E47D273AA54BE5DA9FD45 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C_m289A840E325C3745B478D4C754127B6B4BB01415_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03AF4AAE45F0FD9CE9D36A119A4A931D2A7620AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// location = this.gameObject.GetComponent<TimerBar>().player_x_konum;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C * L_1;
		L_1 = GameObject_GetComponent_TisTimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C_m289A840E325C3745B478D4C754127B6B4BB01415(L_0, /*hidden argument*/GameObject_GetComponent_TisTimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C_m289A840E325C3745B478D4C754127B6B4BB01415_RuntimeMethod_var);
		float L_2 = L_1->get_player_x_konum_23();
		__this->set_location_9(L_2);
		// if (tuccar.transform.position.x - location > 1.5)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_tuccar_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		float L_7 = __this->get_location_9();
		if ((!(((double)((double)((double)((float)il2cpp_codegen_subtract((float)L_6, (float)L_7))))) > ((double)(1.5)))))
		{
			goto IL_0050;
		}
	}
	{
		// animator.SetInteger("location", 0);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = __this->get_animator_7();
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_8, _stringLiteral03AF4AAE45F0FD9CE9D36A119A4A931D2A7620AD, 0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0050:
	{
		// else if (tuccar.transform.position.x - location < -1.5)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_tuccar_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		float L_13 = __this->get_location_9();
		if ((!(((double)((double)((double)((float)il2cpp_codegen_subtract((float)L_12, (float)L_13))))) < ((double)(-1.5)))))
		{
			goto IL_008a;
		}
	}
	{
		// animator.SetInteger("location", 2);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_14 = __this->get_animator_7();
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_14, _stringLiteral03AF4AAE45F0FD9CE9D36A119A4A931D2A7620AD, 2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_008a:
	{
		// animator.SetInteger("location", 1);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_15 = __this->get_animator_7();
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_15, _stringLiteral03AF4AAE45F0FD9CE9D36A119A4A931D2A7620AD, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Shop::ShopSistemi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_ShopSistemi_mEEACECB6BC79280114F60A674A60C7DA3763DEEB (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA4DA1A93F07E2E4B09F8D5E2C45905E26A45E79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB16CF3324CA15FF0851B0F99DD86AC638C3E0CAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8591E019243177659D36C84E0F0DD536C62D029);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach(Transform child in soldItems.transform)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_soldItems_15();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_2;
		L_2 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_010f;
		}

IL_0016:
		{
			// foreach(Transform child in soldItems.transform)
			RuntimeObject* L_3 = V_0;
			RuntimeObject * L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_3);
			V_1 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_4, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			// for (i = 0; i < 2; i++)
			__this->set_i_17(0);
			goto IL_0068;
		}

IL_002b:
		{
			// if (child.name == sellingItemsSlot1[i].name)
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_1;
			String_t* L_6;
			L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
			GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_sellingItemsSlot1_11();
			int32_t L_8 = __this->get_i_17();
			int32_t L_9 = L_8;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
			String_t* L_11;
			L_11 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_10, /*hidden argument*/NULL);
			bool L_12;
			L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_005a;
			}
		}

IL_004a:
		{
			// hafizaslot[0] = i;
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = __this->get_hafizaslot_18();
			int32_t L_14 = __this->get_i_17();
			(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_14);
			// break;
			goto IL_0071;
		}

IL_005a:
		{
			// for (i = 0; i < 2; i++)
			int32_t L_15 = __this->get_i_17();
			__this->set_i_17(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)));
		}

IL_0068:
		{
			// for (i = 0; i < 2; i++)
			int32_t L_16 = __this->get_i_17();
			if ((((int32_t)L_16) < ((int32_t)2)))
			{
				goto IL_002b;
			}
		}

IL_0071:
		{
			// for(i = 0; i < 3; i++)
			__this->set_i_17(0);
			goto IL_00b7;
		}

IL_007a:
		{
			// if (child.name == sellingItemsSlot2[i].name)
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = V_1;
			String_t* L_18;
			L_18 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_17, /*hidden argument*/NULL);
			GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_19 = __this->get_sellingItemsSlot2_12();
			int32_t L_20 = __this->get_i_17();
			int32_t L_21 = L_20;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
			String_t* L_23;
			L_23 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_22, /*hidden argument*/NULL);
			bool L_24;
			L_24 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00a9;
			}
		}

IL_0099:
		{
			// hafizaslot[1] = i;
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = __this->get_hafizaslot_18();
			int32_t L_26 = __this->get_i_17();
			(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)L_26);
			// break;
			goto IL_00c0;
		}

IL_00a9:
		{
			// for(i = 0; i < 3; i++)
			int32_t L_27 = __this->get_i_17();
			__this->set_i_17(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
		}

IL_00b7:
		{
			// for(i = 0; i < 3; i++)
			int32_t L_28 = __this->get_i_17();
			if ((((int32_t)L_28) < ((int32_t)3)))
			{
				goto IL_007a;
			}
		}

IL_00c0:
		{
			// for (i = 0; i < 3; i++)
			__this->set_i_17(0);
			goto IL_0106;
		}

IL_00c9:
		{
			// if (child.name == sellingItemsSlot3[i].name)
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = V_1;
			String_t* L_30;
			L_30 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_29, /*hidden argument*/NULL);
			GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_31 = __this->get_sellingItemsSlot3_13();
			int32_t L_32 = __this->get_i_17();
			int32_t L_33 = L_32;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
			String_t* L_35;
			L_35 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_34, /*hidden argument*/NULL);
			bool L_36;
			L_36 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_30, L_35, /*hidden argument*/NULL);
			if (!L_36)
			{
				goto IL_00f8;
			}
		}

IL_00e8:
		{
			// hafizaslot[2] = i;
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_37 = __this->get_hafizaslot_18();
			int32_t L_38 = __this->get_i_17();
			(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)L_38);
			// break;
			goto IL_010f;
		}

IL_00f8:
		{
			// for (i = 0; i < 3; i++)
			int32_t L_39 = __this->get_i_17();
			__this->set_i_17(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)));
		}

IL_0106:
		{
			// for (i = 0; i < 3; i++)
			int32_t L_40 = __this->get_i_17();
			if ((((int32_t)L_40) < ((int32_t)3)))
			{
				goto IL_00c9;
			}
		}

IL_010f:
		{
			// foreach(Transform child in soldItems.transform)
			RuntimeObject* L_41 = V_0;
			bool L_42;
			L_42 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_41);
			if (L_42)
			{
				goto IL_0016;
			}
		}

IL_011a:
		{
			IL2CPP_LEAVE(0x12D, FINALLY_011c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_011c;
	}

FINALLY_011c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_43 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_43, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_44 = V_2;
			if (!L_44)
			{
				goto IL_012c;
			}
		}

IL_0126:
		{
			RuntimeObject* L_45 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_45);
		}

IL_012c:
		{
			IL2CPP_END_FINALLY(284)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(284)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12D, IL_012d)
	}

IL_012d:
	{
		// position.x = -0.43f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_46 = __this->get_address_of_position_19();
		L_46->set_x_0((-0.430000007f));
		// position.y = 2.29f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_47 = __this->get_address_of_position_19();
		L_47->set_y_1((2.28999996f));
		// if( hafizaslot[0] == 1)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_48 = __this->get_hafizaslot_18();
		int32_t L_49 = 0;
		int32_t L_50 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		if ((!(((uint32_t)L_50) == ((uint32_t)1))))
		{
			goto IL_019a;
		}
	}
	{
		// GameObject Slot1 = Instantiate(sellingItemsSlotAll, ShopWindow.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = __this->get_sellingItemsSlotAll_14();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = __this->get_ShopWindow_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_52, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54;
		L_54 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_51, L_53, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// Slot1.transform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_54, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_56 = __this->get_position_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_56, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_55, L_57, /*hidden argument*/NULL);
		// priceTexts[0].text = "10";
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_58 = __this->get_priceTexts_16();
		int32_t L_59 = 0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_60 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_60, _stringLiteralAA4DA1A93F07E2E4B09F8D5E2C45905E26A45E79);
		// }
		goto IL_022e;
	}

IL_019a:
	{
		// else if (hafizaslot[0] == 5)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_61 = __this->get_hafizaslot_18();
		int32_t L_62 = 0;
		int32_t L_63 = (L_61)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		if ((!(((uint32_t)L_63) == ((uint32_t)5))))
		{
			goto IL_01e6;
		}
	}
	{
		// GameObject Slot1 = Instantiate(sellingItemsSlot1[0], ShopWindow.transform);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_64 = __this->get_sellingItemsSlot1_11();
		int32_t L_65 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67 = __this->get_ShopWindow_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_68;
		L_68 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_67, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69;
		L_69 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_66, L_68, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// Slot1.transform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70;
		L_70 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_69, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_71 = __this->get_position_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_71, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_70, L_72, /*hidden argument*/NULL);
		// priceTexts[0].text = "8";
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_73 = __this->get_priceTexts_16();
		int32_t L_74 = 0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_75 = (L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_75, _stringLiteralB16CF3324CA15FF0851B0F99DD86AC638C3E0CAE);
		// }
		goto IL_022e;
	}

IL_01e6:
	{
		// GameObject Slot1 = Instantiate(sellingItemsSlot1[hafizaslot[0] + 1], ShopWindow.transform);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_76 = __this->get_sellingItemsSlot1_11();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_77 = __this->get_hafizaslot_18();
		int32_t L_78 = 0;
		int32_t L_79 = (L_77)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
		int32_t L_80 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_81 = (L_76)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_82 = __this->get_ShopWindow_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_83;
		L_83 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_82, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84;
		L_84 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_81, L_83, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// Slot1.transform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_85;
		L_85 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_84, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_86 = __this->get_position_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87;
		L_87 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_86, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_85, L_87, /*hidden argument*/NULL);
		// priceTexts[0].text = "8";
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_88 = __this->get_priceTexts_16();
		int32_t L_89 = 0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_90 = (L_88)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_89));
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_90, _stringLiteralB16CF3324CA15FF0851B0F99DD86AC638C3E0CAE);
	}

IL_022e:
	{
		// position.x = 0.77f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_91 = __this->get_address_of_position_19();
		L_91->set_x_0((0.769999981f));
		// position.y = 2.29f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_92 = __this->get_address_of_position_19();
		L_92->set_y_1((2.28999996f));
		// transform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_93;
		L_93 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_94 = __this->get_position_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
		L_95 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_94, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_93, L_95, /*hidden argument*/NULL);
		// if (hafizaslot[1] == 2)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_96 = __this->get_hafizaslot_18();
		int32_t L_97 = 1;
		int32_t L_98 = (L_96)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_97));
		if ((!(((uint32_t)L_98) == ((uint32_t)2))))
		{
			goto IL_02b1;
		}
	}
	{
		// GameObject Slot2 = Instantiate(sellingItemsSlotAll, ShopWindow.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_99 = __this->get_sellingItemsSlotAll_14();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_100 = __this->get_ShopWindow_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_101;
		L_101 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_100, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_102;
		L_102 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_99, L_101, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// Slot2.transform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_103;
		L_103 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_102, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_104 = __this->get_position_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_105;
		L_105 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_104, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_103, L_105, /*hidden argument*/NULL);
		// priceTexts[1].text = "10";
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_106 = __this->get_priceTexts_16();
		int32_t L_107 = 1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_108 = (L_106)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_107));
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_108, _stringLiteralAA4DA1A93F07E2E4B09F8D5E2C45905E26A45E79);
		// }
		goto IL_0345;
	}

IL_02b1:
	{
		// else if (hafizaslot[1] == 5)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_109 = __this->get_hafizaslot_18();
		int32_t L_110 = 1;
		int32_t L_111 = (L_109)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_110));
		if ((!(((uint32_t)L_111) == ((uint32_t)5))))
		{
			goto IL_02fd;
		}
	}
	{
		// GameObject Slot2 = Instantiate(sellingItemsSlot2[0], ShopWindow.transform);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_112 = __this->get_sellingItemsSlot2_12();
		int32_t L_113 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_114 = (L_112)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_113));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_115 = __this->get_ShopWindow_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_116;
		L_116 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_115, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_117;
		L_117 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_114, L_116, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// Slot2.transform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_118;
		L_118 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_117, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_119 = __this->get_position_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_120;
		L_120 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_119, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_118, L_120, /*hidden argument*/NULL);
		// priceTexts[1].text = "10";
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_121 = __this->get_priceTexts_16();
		int32_t L_122 = 1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_123 = (L_121)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_122));
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_123, _stringLiteralAA4DA1A93F07E2E4B09F8D5E2C45905E26A45E79);
		// }
		goto IL_0345;
	}

IL_02fd:
	{
		// GameObject Slot2 = Instantiate(sellingItemsSlot2[hafizaslot[1] + 1], ShopWindow.transform);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_124 = __this->get_sellingItemsSlot2_12();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_125 = __this->get_hafizaslot_18();
		int32_t L_126 = 1;
		int32_t L_127 = (L_125)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_126));
		int32_t L_128 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)1));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_129 = (L_124)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_128));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_130 = __this->get_ShopWindow_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_131;
		L_131 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_130, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_132;
		L_132 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_129, L_131, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// Slot2.transform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_133;
		L_133 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_132, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_134 = __this->get_position_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_135;
		L_135 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_134, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_133, L_135, /*hidden argument*/NULL);
		// priceTexts[1].text = "10";
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_136 = __this->get_priceTexts_16();
		int32_t L_137 = 1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_138 = (L_136)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_137));
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_138, _stringLiteralAA4DA1A93F07E2E4B09F8D5E2C45905E26A45E79);
	}

IL_0345:
	{
		// position.x = 1.87f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_139 = __this->get_address_of_position_19();
		L_139->set_x_0((1.87f));
		// position.y = 2.29f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_140 = __this->get_address_of_position_19();
		L_140->set_y_1((2.28999996f));
		// transform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_141;
		L_141 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_142 = __this->get_position_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_143;
		L_143 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_142, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_141, L_143, /*hidden argument*/NULL);
		// if (hafizaslot[2] == 2)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_144 = __this->get_hafizaslot_18();
		int32_t L_145 = 2;
		int32_t L_146 = (L_144)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_145));
		if ((!(((uint32_t)L_146) == ((uint32_t)2))))
		{
			goto IL_03c4;
		}
	}
	{
		// GameObject Slot3 = Instantiate(sellingItemsSlotAll, ShopWindow.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_147 = __this->get_sellingItemsSlotAll_14();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_148 = __this->get_ShopWindow_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_149;
		L_149 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_148, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_150;
		L_150 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_147, L_149, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// Slot3.transform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_151;
		L_151 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_150, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_152 = __this->get_position_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_153;
		L_153 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_152, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_151, L_153, /*hidden argument*/NULL);
		// priceTexts[2].text = "10";
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_154 = __this->get_priceTexts_16();
		int32_t L_155 = 2;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_156 = (L_154)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_155));
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_156, _stringLiteralAA4DA1A93F07E2E4B09F8D5E2C45905E26A45E79);
		// }
		return;
	}

IL_03c4:
	{
		// else if (hafizaslot[2] == 5)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_157 = __this->get_hafizaslot_18();
		int32_t L_158 = 2;
		int32_t L_159 = (L_157)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_158));
		if ((!(((uint32_t)L_159) == ((uint32_t)5))))
		{
			goto IL_040f;
		}
	}
	{
		// GameObject Slot3 = Instantiate(sellingItemsSlot3[0], ShopWindow.transform);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_160 = __this->get_sellingItemsSlot3_13();
		int32_t L_161 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_162 = (L_160)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_161));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_163 = __this->get_ShopWindow_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_164;
		L_164 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_163, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_165;
		L_165 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_162, L_164, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// Slot3.transform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_166;
		L_166 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_165, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_167 = __this->get_position_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_168;
		L_168 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_167, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_166, L_168, /*hidden argument*/NULL);
		// priceTexts[2].text = "15";
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_169 = __this->get_priceTexts_16();
		int32_t L_170 = 2;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_171 = (L_169)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_170));
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_171, _stringLiteralF8591E019243177659D36C84E0F0DD536C62D029);
		// }
		return;
	}

IL_040f:
	{
		// GameObject Slot3 = Instantiate(sellingItemsSlot3[hafizaslot[2] + 1], ShopWindow.transform);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_172 = __this->get_sellingItemsSlot3_13();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_173 = __this->get_hafizaslot_18();
		int32_t L_174 = 2;
		int32_t L_175 = (L_173)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_174));
		int32_t L_176 = ((int32_t)il2cpp_codegen_add((int32_t)L_175, (int32_t)1));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_177 = (L_172)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_176));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_178 = __this->get_ShopWindow_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_179;
		L_179 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_178, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_180;
		L_180 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_177, L_179, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// Slot3.transform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_181;
		L_181 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_180, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_182 = __this->get_position_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_183;
		L_183 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_182, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_181, L_183, /*hidden argument*/NULL);
		// priceTexts[2].text = "15";
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_184 = __this->get_priceTexts_16();
		int32_t L_185 = 2;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_186 = (L_184)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_185));
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_186, _stringLiteralF8591E019243177659D36C84E0F0DD536C62D029);
		// }
		return;
	}
}
// System.Void Shop::SatinAlim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_SatinAlim_mEBC9167DEB3AD2D7988304F5EA8E3BFB7600FF78 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisShoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E_mC9A8C28564E9F55F78B2E3FB8A3613DFE8032F4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3092156429B59FC0EE4780C2DBECFBD20BB07D1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDED340C5884BBB732AC28145E72590E1D9A3C88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7B3C791729B4CD03D9C884797D0EF05551F67A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// collision_name = player.GetComponent<PlayerMovement>().sellingItem.Substring(0, player.GetComponent<PlayerMovement>().sellingItem.IndexOf("_"));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_5();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_1;
		L_1 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_0, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		String_t* L_2 = L_1->get_sellingItem_20();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_player_5();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_4;
		L_4 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_3, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		String_t* L_5 = L_4->get_sellingItem_20();
		int32_t L_6;
		L_6 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_5, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_2, 0, L_6, /*hidden argument*/NULL);
		__this->set_collision_name_21(L_7);
		// if (collision_name == "Health")
		String_t* L_8 = __this->get_collision_name_21();
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0079;
		}
	}
	{
		// collision_name = "null_1";
		__this->set_collision_name_21(_stringLiteralE7B3C791729B4CD03D9C884797D0EF05551F67A4);
		// SaveObject.singleton.HealthUp();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_10;
		L_10 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		SaveObject_HealthUp_m95187E836E506337476104A80E11F634FD87AD7E(L_10, /*hidden argument*/NULL);
		// SatinAlindi();
		Shop_SatinAlindi_m3E1F29B934DAF5CFD1123932C22EED27553A8BBC(__this, /*hidden argument*/NULL);
		// player.GetComponent<PlayerMovement>().sellingItem = "null_1";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_player_5();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_12;
		L_12 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_11, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		L_12->set_sellingItem_20(_stringLiteralE7B3C791729B4CD03D9C884797D0EF05551F67A4);
		// }
		return;
	}

IL_0079:
	{
		// else if(collision_name == "Boot")
		String_t* L_13 = __this->get_collision_name_21();
		bool L_14;
		L_14 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_13, _stringLiteralBDED340C5884BBB732AC28145E72590E1D9A3C88, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00d8;
		}
	}
	{
		// collision_name = "null_1";
		__this->set_collision_name_21(_stringLiteralE7B3C791729B4CD03D9C884797D0EF05551F67A4);
		// SaveObject.singleton.SetCurrentBoot();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_15;
		L_15 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		SaveObject_SetCurrentBoot_mB3C9C14CA3D34F9853421FA48DF326DB3CFE4AF6(L_15, /*hidden argument*/NULL);
		// player.GetComponent<PlayerMovement>().bootSpeed += 0.225f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_player_5();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_17;
		L_17 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_16, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_18 = L_17;
		float L_19 = L_18->get_bootSpeed_21();
		L_18->set_bootSpeed_21(((float)il2cpp_codegen_add((float)L_19, (float)(0.224999994f))));
		// SatinAlindi();
		Shop_SatinAlindi_m3E1F29B934DAF5CFD1123932C22EED27553A8BBC(__this, /*hidden argument*/NULL);
		// player.GetComponent<PlayerMovement>().sellingItem = "null_1";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_player_5();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_21;
		L_21 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_20, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		L_21->set_sellingItem_20(_stringLiteralE7B3C791729B4CD03D9C884797D0EF05551F67A4);
		// }
		return;
	}

IL_00d8:
	{
		// else if (collision_name == "Gun")
		String_t* L_22 = __this->get_collision_name_21();
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, _stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0137;
		}
	}
	{
		// collision_name = "null_1";
		__this->set_collision_name_21(_stringLiteralE7B3C791729B4CD03D9C884797D0EF05551F67A4);
		// SaveObject.singleton.SetCurrentGun();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_24;
		L_24 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		SaveObject_SetCurrentGun_mDF5656C31CEAC28FE53BBE9A6AB9DA5004750BA5(L_24, /*hidden argument*/NULL);
		// player.GetComponent<Shoot>().gunShootingSpeed -= 0.15f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_player_5();
		Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E * L_26;
		L_26 = GameObject_GetComponent_TisShoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E_mC9A8C28564E9F55F78B2E3FB8A3613DFE8032F4A(L_25, /*hidden argument*/GameObject_GetComponent_TisShoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E_mC9A8C28564E9F55F78B2E3FB8A3613DFE8032F4A_RuntimeMethod_var);
		Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E * L_27 = L_26;
		float L_28 = L_27->get_gunShootingSpeed_15();
		L_27->set_gunShootingSpeed_15(((float)il2cpp_codegen_subtract((float)L_28, (float)(0.150000006f))));
		// SatinAlindi();
		Shop_SatinAlindi_m3E1F29B934DAF5CFD1123932C22EED27553A8BBC(__this, /*hidden argument*/NULL);
		// player.GetComponent<PlayerMovement>().sellingItem = "null_1";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_player_5();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_30;
		L_30 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_29, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		L_30->set_sellingItem_20(_stringLiteralE7B3C791729B4CD03D9C884797D0EF05551F67A4);
		// }
		return;
	}

IL_0137:
	{
		// else if (collision_name == "Ammo")
		String_t* L_31 = __this->get_collision_name_21();
		bool L_32;
		L_32 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_31, _stringLiteral3092156429B59FC0EE4780C2DBECFBD20BB07D1F, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0191;
		}
	}
	{
		// collision_name = "null_1";
		__this->set_collision_name_21(_stringLiteralE7B3C791729B4CD03D9C884797D0EF05551F67A4);
		// SaveObject.singleton.SetCurrentAmmo();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_33;
		L_33 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		SaveObject_SetCurrentAmmo_m142005C059E5DC89B8223A4EDA21E395DC80F8E6(L_33, /*hidden argument*/NULL);
		// player.GetComponent<Shoot>().bulletPower += 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_player_5();
		Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E * L_35;
		L_35 = GameObject_GetComponent_TisShoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E_mC9A8C28564E9F55F78B2E3FB8A3613DFE8032F4A(L_34, /*hidden argument*/GameObject_GetComponent_TisShoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E_mC9A8C28564E9F55F78B2E3FB8A3613DFE8032F4A_RuntimeMethod_var);
		Shoot_tBAE16103134DCF976B15B7DB3F10B41F0DCFA70E * L_36 = L_35;
		int32_t L_37 = L_36->get_bulletPower_16();
		L_36->set_bulletPower_16(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)));
		// SatinAlindi();
		Shop_SatinAlindi_m3E1F29B934DAF5CFD1123932C22EED27553A8BBC(__this, /*hidden argument*/NULL);
		// player.GetComponent<PlayerMovement>().sellingItem = "null_1";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = __this->get_player_5();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_39;
		L_39 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_38, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		L_39->set_sellingItem_20(_stringLiteralE7B3C791729B4CD03D9C884797D0EF05551F67A4);
	}

IL_0191:
	{
		// }
		return;
	}
}
// System.Void Shop::SatinAlindi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_SatinAlindi_m3E1F29B934DAF5CFD1123932C22EED27553A8BBC (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	{
		// ShopWindow.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_ShopWindow_10();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// for(i = 0; i < 3; i++)
		__this->set_i_17(0);
		goto IL_0036;
	}

IL_0015:
	{
		// priceTexts[i].enabled = false;
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_1 = __this->get_priceTexts_16();
		int32_t L_2 = __this->get_i_17();
		int32_t L_3 = L_2;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, (bool)0, /*hidden argument*/NULL);
		// for(i = 0; i < 3; i++)
		int32_t L_5 = __this->get_i_17();
		__this->set_i_17(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
	}

IL_0036:
	{
		// for(i = 0; i < 3; i++)
		int32_t L_6 = __this->get_i_17();
		if ((((int32_t)L_6) < ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Shop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop__ctor_m9321F06993F85B2AE2C6F4E443276AC9D48E738C (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int[] hafizaslot = new int[3];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_hafizaslot_18(L_0);
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
// System.Void SoldItemScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoldItemScript_Start_mE3527264769CFCD2F59813C1EE9DE6D20969F9F5 (SoldItemScript_tAC153315E03EF6F65324C14991241CFDA489E494 * __this, const RuntimeMethod* method)
{
	{
		// dropItemName = SaveObject.singleton.GetCurrentEnvanter();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_0;
		L_0 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = SaveObject_GetCurrentEnvanter_m81643E39FEE3CBC200D31EF443DDE2EB6CABD9FE(L_0, /*hidden argument*/NULL);
		__this->set_dropItemName_14(L_1);
		// boot = SaveObject.singleton.GetCurrentBoot();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_2;
		L_2 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		int32_t L_3;
		L_3 = SaveObject_GetCurrentBoot_m888D33ED023274D8F0A3428D183728F597825D2F(L_2, /*hidden argument*/NULL);
		__this->set_boot_8(L_3);
		// gun = SaveObject.singleton.GetCurrentGun();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_4;
		L_4 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = SaveObject_GetCurrentGun_mC70DE54507B3996EA6DAAEF02F3FD1E299FB29B8(L_4, /*hidden argument*/NULL);
		__this->set_gun_9(L_5);
		// ammo = SaveObject.singleton.GetCurrentAmmo();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_6;
		L_6 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		int32_t L_7;
		L_7 = SaveObject_GetCurrentAmmo_m0A00BBBE8FECC0500300447BA669743B0C40DDD6(L_6, /*hidden argument*/NULL);
		__this->set_ammo_10(L_7);
		// AlinanItemPosition.x = -9.66f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_8 = __this->get_address_of_AlinanItemPosition_12();
		L_8->set_x_0((-9.65999985f));
		// AlinanItemPosition.y = -8.93f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_9 = __this->get_address_of_AlinanItemPosition_12();
		L_9->set_y_1((-8.93000031f));
		// }
		return;
	}
}
// System.Void SoldItemScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoldItemScript_Update_m08A1A73FBB7A7E0BB2F19ABC0FA348CEE1D3BB3A (SoldItemScript_tAC153315E03EF6F65324C14991241CFDA489E494 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		// if (check == false)
		bool L_0 = __this->get_check_11();
		if (L_0)
		{
			goto IL_02d7;
		}
	}
	{
		// check = true;
		__this->set_check_11((bool)1);
		// if(boot == 2)
		int32_t L_1 = __this->get_boot_8();
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_00b7;
		}
	}
	{
		// GameObject soldItem = Instantiate(boots[0],AlinanItemPosition, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_boots_4();
		int32_t L_3 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = __this->get_AlinanItemPosition_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_4, L_6, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// if(gun == 2)
		int32_t L_9 = __this->get_gun_9();
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0078;
		}
	}
	{
		// AlinanItemPosition.y = -7.93f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_10 = __this->get_address_of_AlinanItemPosition_12();
		L_10->set_y_1((-7.92999983f));
		// GameObject soldItem2 = Instantiate(guns[0], AlinanItemPosition, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get_guns_5();
		int32_t L_12 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = __this->get_AlinanItemPosition_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_14, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_13, L_15, L_16, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		goto IL_024c;
	}

IL_0078:
	{
		// else if (ammo == 2)
		int32_t L_18 = __this->get_ammo_10();
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_024c;
		}
	}
	{
		// AlinanItemPosition.y = -7.93f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_19 = __this->get_address_of_AlinanItemPosition_12();
		L_19->set_y_1((-7.92999983f));
		// GameObject soldItem2 = Instantiate(ammos[0], AlinanItemPosition, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_20 = __this->get_ammos_6();
		int32_t L_21 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = __this->get_AlinanItemPosition_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_23, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
		L_25 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_22, L_24, L_25, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		goto IL_024c;
	}

IL_00b7:
	{
		// else if (boot == 3)
		int32_t L_27 = __this->get_boot_8();
		if ((!(((uint32_t)L_27) == ((uint32_t)3))))
		{
			goto IL_0111;
		}
	}
	{
		// GameObject soldItem = Instantiate(boots[0], AlinanItemPosition, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_28 = __this->get_boots_4();
		int32_t L_29 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31 = __this->get_AlinanItemPosition_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_31, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33;
		L_33 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_30, L_32, L_33, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// AlinanItemPosition.y = -7.93f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_35 = __this->get_address_of_AlinanItemPosition_12();
		L_35->set_y_1((-7.92999983f));
		// GameObject soldItem2 = Instantiate(boots[1], AlinanItemPosition, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_36 = __this->get_boots_4();
		int32_t L_37 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39 = __this->get_AlinanItemPosition_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_39, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_41;
		L_41 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42;
		L_42 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_38, L_40, L_41, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		goto IL_024c;
	}

IL_0111:
	{
		// else if (gun == 2)
		int32_t L_43 = __this->get_gun_9();
		if ((!(((uint32_t)L_43) == ((uint32_t)2))))
		{
			goto IL_0177;
		}
	}
	{
		// GameObject soldItem = Instantiate(guns[0], AlinanItemPosition, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_44 = __this->get_guns_5();
		int32_t L_45 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = (L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47 = __this->get_AlinanItemPosition_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_47, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_49;
		L_49 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50;
		L_50 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_46, L_48, L_49, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// if (ammo == 2)
		int32_t L_51 = __this->get_ammo_10();
		if ((!(((uint32_t)L_51) == ((uint32_t)2))))
		{
			goto IL_024c;
		}
	}
	{
		// AlinanItemPosition.y = -7.93f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_52 = __this->get_address_of_AlinanItemPosition_12();
		L_52->set_y_1((-7.92999983f));
		// GameObject soldItem2 = Instantiate(ammos[0], AlinanItemPosition, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_53 = __this->get_ammos_6();
		int32_t L_54 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_56 = __this->get_AlinanItemPosition_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_56, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_58;
		L_58 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_55, L_57, L_58, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		goto IL_024c;
	}

IL_0177:
	{
		// else if (gun == 3)
		int32_t L_60 = __this->get_gun_9();
		if ((!(((uint32_t)L_60) == ((uint32_t)3))))
		{
			goto IL_01ce;
		}
	}
	{
		// GameObject soldItem = Instantiate(guns[0], AlinanItemPosition, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_61 = __this->get_guns_5();
		int32_t L_62 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_63 = (L_61)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_64 = __this->get_AlinanItemPosition_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		L_65 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_64, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_66;
		L_66 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67;
		L_67 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_63, L_65, L_66, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// AlinanItemPosition.y = -7.93f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_68 = __this->get_address_of_AlinanItemPosition_12();
		L_68->set_y_1((-7.92999983f));
		// GameObject soldItem2 = Instantiate(guns[1], AlinanItemPosition, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_69 = __this->get_guns_5();
		int32_t L_70 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71 = (L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_72 = __this->get_AlinanItemPosition_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
		L_73 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_72, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_74;
		L_74 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_75;
		L_75 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_71, L_73, L_74, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		goto IL_024c;
	}

IL_01ce:
	{
		// else if (ammo == 2)
		int32_t L_76 = __this->get_ammo_10();
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_01f7;
		}
	}
	{
		// GameObject soldItem = Instantiate(ammos[0], AlinanItemPosition, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_77 = __this->get_ammos_6();
		int32_t L_78 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79 = (L_77)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_80 = __this->get_AlinanItemPosition_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		L_81 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_80, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_82;
		L_82 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_83;
		L_83 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_79, L_81, L_82, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		goto IL_024c;
	}

IL_01f7:
	{
		// else if (ammo == 3)
		int32_t L_84 = __this->get_ammo_10();
		if ((!(((uint32_t)L_84) == ((uint32_t)3))))
		{
			goto IL_024c;
		}
	}
	{
		// GameObject soldItem = Instantiate(ammos[0], AlinanItemPosition, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_85 = __this->get_ammos_6();
		int32_t L_86 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_87 = (L_85)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_86));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_88 = __this->get_AlinanItemPosition_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		L_89 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_88, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_90;
		L_90 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_91;
		L_91 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_87, L_89, L_90, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// AlinanItemPosition.y = -7.93f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_92 = __this->get_address_of_AlinanItemPosition_12();
		L_92->set_y_1((-7.92999983f));
		// GameObject soldItem2 = Instantiate(ammos[1], AlinanItemPosition, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_93 = __this->get_ammos_6();
		int32_t L_94 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_95 = (L_93)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_94));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_96 = __this->get_AlinanItemPosition_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97;
		L_97 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_96, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_98;
		L_98 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_99;
		L_99 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_95, L_97, L_98, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_024c:
	{
		// if (dropItemName != "")
		String_t* L_100 = __this->get_dropItemName_14();
		bool L_101;
		L_101 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_100, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_101)
		{
			goto IL_02d7;
		}
	}
	{
		// foreach (GameObject dropItem in dropItems)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_102 = __this->get_dropItems_7();
		V_0 = L_102;
		V_1 = 0;
		goto IL_02d1;
	}

IL_0269:
	{
		// foreach (GameObject dropItem in dropItems)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_103 = V_0;
		int32_t L_104 = V_1;
		int32_t L_105 = L_104;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_106 = (L_103)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_105));
		V_2 = L_106;
		// if (dropItemName.Substring(0, dropItemName.IndexOf("(")) == dropItem.name)
		String_t* L_107 = __this->get_dropItemName_14();
		String_t* L_108 = __this->get_dropItemName_14();
		int32_t L_109;
		L_109 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_108, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		String_t* L_110;
		L_110 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_107, 0, L_109, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_111 = V_2;
		String_t* L_112;
		L_112 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_111, /*hidden argument*/NULL);
		bool L_113;
		L_113 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_110, L_112, /*hidden argument*/NULL);
		if (!L_113)
		{
			goto IL_02cd;
		}
	}
	{
		// dropItemPosition.x = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_114 = __this->get_address_of_dropItemPosition_13();
		L_114->set_x_0((0.0f));
		// dropItemPosition.y = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_115 = __this->get_address_of_dropItemPosition_13();
		L_115->set_y_1((0.0f));
		// GameObject dropItemAdd = Instantiate(dropItem, dropItemPosition, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_116 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_117 = __this->get_dropItemPosition_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_118;
		L_118 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_117, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_119;
		L_119 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_120;
		L_120 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_116, L_118, L_119, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_02cd:
	{
		int32_t L_121 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)1));
	}

IL_02d1:
	{
		// foreach (GameObject dropItem in dropItems)
		int32_t L_122 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_123 = V_0;
		if ((((int32_t)L_122) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_123)->max_length))))))
		{
			goto IL_0269;
		}
	}

IL_02d7:
	{
		// }
		return;
	}
}
// System.Void SoldItemScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoldItemScript__ctor_mC654776232BE4BADC410080AF2BF82EB760A76B2 (SoldItemScript_tAC153315E03EF6F65324C14991241CFDA489E494 * __this, const RuntimeMethod* method)
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
// System.Void SpikeballProperties::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpikeballProperties_Start_m3062E7C74F60E753D9F3C6C3915DA16E57B0145B (SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deathPrefab = Resources.Load("Death") as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0;
		L_0 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral54BCA388B1C4035019F447FBBE662C6BFC12F7E8, /*hidden argument*/NULL);
		__this->set_deathPrefab_8(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)));
		// rb = gameObject.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2;
		L_2 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_1, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		__this->set_rb_5(L_2);
		// animator = gameObject.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4;
		L_4 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_3, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_animator_6(L_4);
		// health = 2;
		__this->set_health_7(2);
		// }
		return;
	}
}
// System.Void SpikeballProperties::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpikeballProperties_Update_m15199A72C934D4C05637E5DAFEBF8CE29D729CBA (SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SpikeballProperties::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpikeballProperties_FixedUpdate_m7E5AB59075973643C040D5BC1250B8AB9BCD86D9 (SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4EBC3A0CFE0E64E93D5DDC757B73F7A0396241E);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0041;
	}

IL_0002:
	{
		// new_position_loc.x = Random.Range(-2, 2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_new_position_loc_11();
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-2), 2, /*hidden argument*/NULL);
		L_0->set_x_2(((float)((float)L_1)));
		// new_position_loc.y = Random.Range(-2, 2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_new_position_loc_11();
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-2), 2, /*hidden argument*/NULL);
		L_2->set_y_3(((float)((float)L_3)));
		// new_position_loc.z = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_new_position_loc_11();
		L_4->set_z_4((0.0f));
		// checkResult = false;
		__this->set_checkResult_10((bool)0);
	}

IL_0041:
	{
		// while (checkResult == true)
		bool L_5 = __this->get_checkResult_10();
		if (L_5)
		{
			goto IL_0002;
		}
	}
	{
		// movement.x = new_position_loc.x - transform.position.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = __this->get_address_of_movement_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = __this->get_address_of_new_position_loc_11();
		float L_8 = L_7->get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		L_6->set_x_0(((float)il2cpp_codegen_subtract((float)L_8, (float)L_11)));
		// movement.y = new_position_loc.y - transform.position.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_movement_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = __this->get_address_of_new_position_loc_11();
		float L_14 = L_13->get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		L_12->set_y_1(((float)il2cpp_codegen_subtract((float)L_14, (float)L_17)));
		// if (new_position_loc.x - transform.position.x == 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = __this->get_address_of_new_position_loc_11();
		float L_19 = L_18->get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_x_2();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_22))) == ((float)(0.0f)))))
		{
			goto IL_00cc;
		}
	}
	{
		// movement.x = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_23 = __this->get_address_of_movement_18();
		L_23->set_x_0((0.0f));
		// }
		goto IL_00f3;
	}

IL_00cc:
	{
		// movement.x = movement.x / Mathf.Abs(movement.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_24 = __this->get_address_of_movement_18();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_25 = __this->get_address_of_movement_18();
		float L_26 = L_25->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_27 = __this->get_address_of_movement_18();
		float L_28 = L_27->get_x_0();
		float L_29;
		L_29 = fabsf(L_28);
		L_24->set_x_0(((float)((float)L_26/(float)L_29)));
	}

IL_00f3:
	{
		// if (new_position_loc.y - transform.position.y == 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_30 = __this->get_address_of_new_position_loc_11();
		float L_31 = L_30->get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_y_3();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_31, (float)L_34))) == ((float)(0.0f)))))
		{
			goto IL_0128;
		}
	}
	{
		// movement.y = 0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_35 = __this->get_address_of_movement_18();
		L_35->set_y_1((0.0f));
		// }
		goto IL_014f;
	}

IL_0128:
	{
		// movement.y = movement.y / Mathf.Abs(movement.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_36 = __this->get_address_of_movement_18();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_37 = __this->get_address_of_movement_18();
		float L_38 = L_37->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_39 = __this->get_address_of_movement_18();
		float L_40 = L_39->get_y_1();
		float L_41;
		L_41 = fabsf(L_40);
		L_36->set_y_1(((float)((float)L_38/(float)L_41)));
	}

IL_014f:
	{
		// if ((int)(new_position_loc.x - transform.position.x) == 0 && (int)(new_position_loc.y - transform.position.y) == 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_42 = __this->get_address_of_new_position_loc_11();
		float L_43 = L_42->get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
		float L_46 = L_45.get_x_2();
		if (il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract((float)L_43, (float)L_46))))
		{
			goto IL_0198;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_47 = __this->get_address_of_new_position_loc_11();
		float L_48 = L_47->get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
		float L_51 = L_50.get_y_3();
		if (il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract((float)L_48, (float)L_51))))
		{
			goto IL_0198;
		}
	}
	{
		// buildBall();
		SpikeballProperties_buildBall_mD1D7264B72E0A7E690D0EC068C0EEDE6096C2F0E(__this, /*hidden argument*/NULL);
		// }
		goto IL_02c0;
	}

IL_0198:
	{
		// if (smokebomb == true)
		bool L_52 = __this->get_smokebomb_9();
		if (L_52)
		{
			goto IL_02c0;
		}
	}
	{
		// if (movement.x != 0 && movement.y != 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_53 = __this->get_address_of_movement_18();
		float L_54 = L_53->get_x_0();
		if ((((float)L_54) == ((float)(0.0f))))
		{
			goto IL_0205;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_55 = __this->get_address_of_movement_18();
		float L_56 = L_55->get_y_1();
		if ((((float)L_56) == ((float)(0.0f))))
		{
			goto IL_0205;
		}
	}
	{
		// rb.MovePosition(rb.position + movement * (moveSpeed / 0.835f) * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_57 = __this->get_rb_5();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_58 = __this->get_rb_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_59;
		L_59 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_58, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_60 = __this->get_movement_18();
		float L_61 = __this->get_moveSpeed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_62;
		L_62 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_60, ((float)((float)L_61/(float)(0.834999979f))), /*hidden argument*/NULL);
		float L_63;
		L_63 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_64;
		L_64 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_62, L_63, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_65;
		L_65 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_59, L_64, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_57, L_65, /*hidden argument*/NULL);
		// }
		goto IL_023b;
	}

IL_0205:
	{
		// rb.MovePosition(rb.position + movement * moveSpeed * Time.fixedDeltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_66 = __this->get_rb_5();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_67 = __this->get_rb_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_68;
		L_68 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_67, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_69 = __this->get_movement_18();
		float L_70 = __this->get_moveSpeed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_71;
		L_71 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_69, L_70, /*hidden argument*/NULL);
		float L_72;
		L_72 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_73;
		L_73 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_71, L_72, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_74;
		L_74 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_68, L_73, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_66, L_74, /*hidden argument*/NULL);
	}

IL_023b:
	{
		// timeCounterStorage -= Time.fixedDeltaTime;
		float L_75 = __this->get_timeCounterStorage_16();
		float L_76;
		L_76 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		__this->set_timeCounterStorage_16(((float)il2cpp_codegen_subtract((float)L_75, (float)L_76)));
		// timeCounter -= Time.fixedDeltaTime;
		float L_77 = __this->get_timeCounter_15();
		float L_78;
		L_78 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		__this->set_timeCounter_15(((float)il2cpp_codegen_subtract((float)L_77, (float)L_78)));
		// if (timeCounterStorage <= 0)
		float L_79 = __this->get_timeCounterStorage_16();
		if ((!(((float)L_79) <= ((float)(0.0f)))))
		{
			goto IL_0283;
		}
	}
	{
		// movementStorage = movement;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_80 = __this->get_movement_18();
		__this->set_movementStorage_17(L_80);
		// timeCounterStorage = 99999f;
		__this->set_timeCounterStorage_16((99999.0f));
	}

IL_0283:
	{
		// if (timeCounter <= 0)
		float L_81 = __this->get_timeCounter_15();
		if ((!(((float)L_81) <= ((float)(0.0f)))))
		{
			goto IL_02c0;
		}
	}
	{
		// if (movementStorage == movement)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_82 = __this->get_movementStorage_17();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_83 = __this->get_movement_18();
		bool L_84;
		L_84 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_82, L_83, /*hidden argument*/NULL);
		if (!L_84)
		{
			goto IL_02aa;
		}
	}
	{
		// checkResult = true;
		__this->set_checkResult_10((bool)1);
	}

IL_02aa:
	{
		// timeCounter = 2f;
		__this->set_timeCounter_15((2.0f));
		// timeCounterStorage = 0.5f;
		__this->set_timeCounterStorage_16((0.5f));
	}

IL_02c0:
	{
		// animator.SetBool("takeDamage", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_85 = __this->get_animator_6();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_85, _stringLiteralA4EBC3A0CFE0E64E93D5DDC757B73F7A0396241E, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpikeballProperties::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpikeballProperties_OnCollisionEnter2D_mC16ADC716082F3ED0F41E221C355EE6B57E1A6CB (SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A_m0A2DF8A7E3E419BE4FE5BEA69B495900DE1F520D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral792986023063458DB5220162B09A329A539E8E90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4EBC3A0CFE0E64E93D5DDC757B73F7A0396241E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "bullet")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral792986023063458DB5220162B09A329A539E8E90, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0091;
		}
	}
	{
		// health -= collision.gameObject.GetComponent<Bullet_Collider>().bulletPower;
		int32_t L_4 = __this->get_health_7();
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_5 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_5, /*hidden argument*/NULL);
		Bullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A * L_7;
		L_7 = GameObject_GetComponent_TisBullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A_m0A2DF8A7E3E419BE4FE5BEA69B495900DE1F520D(L_6, /*hidden argument*/GameObject_GetComponent_TisBullet_Collider_t26C8E1DFAE534ACBB5F6F717202D5E4E0CACCC5A_m0A2DF8A7E3E419BE4FE5BEA69B495900DE1F520D_RuntimeMethod_var);
		int32_t L_8 = L_7->get_bulletPower_4();
		__this->set_health_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_8)));
		// animator.SetBool("takeDamage", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = __this->get_animator_6();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_9, _stringLiteralA4EBC3A0CFE0E64E93D5DDC757B73F7A0396241E, (bool)1, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_10 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
		// if (health <= 0)
		int32_t L_12 = __this->get_health_7();
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		// GameObject death = Instantiate(deathPrefab, transform.position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_deathPrefab_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_13, L_15, L_17, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(gameObject, 0.2f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_19, (0.200000003f), /*hidden argument*/NULL);
		// droppingItem();
		SpikeballProperties_droppingItem_mDD31FAB03492EB8B81B30DE3D8AC9DFF1EE9B10C(__this, /*hidden argument*/NULL);
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void SpikeballProperties::droppingItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpikeballProperties_droppingItem_mDD31FAB03492EB8B81B30DE3D8AC9DFF1EE9B10C (SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ItemRandom == Random.Range(0, 3))
		int32_t L_0 = __this->get_ItemRandom_14();
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0044;
		}
	}
	{
		// GameObject Item = Instantiate(Items[Random.Range(0, 11)], this.gameObject.transform.position, this.gameObject.transform.rotation);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_Items_13();
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)11), /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_5, L_8, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void SpikeballProperties::buildBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpikeballProperties_buildBall_mD1D7264B72E0A7E690D0EC068C0EEDE6096C2F0E (SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral479AED16322B9CCD3425CD667F4E2F9504B83DFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(health_buff == false)
		bool L_0 = __this->get_health_buff_12();
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// health += 5;
		int32_t L_1 = __this->get_health_7();
		__this->set_health_7(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)5)));
		// health_buff = true;
		__this->set_health_buff_12((bool)1);
	}

IL_001d:
	{
		// animator.SetBool("isThere", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_animator_6();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_2, _stringLiteral479AED16322B9CCD3425CD667F4E2F9504B83DFC, (bool)1, /*hidden argument*/NULL);
		// rb.bodyType = RigidbodyType2D.Static;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3 = __this->get_rb_5();
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_3, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpikeballProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpikeballProperties__ctor_m31F5CC91C4CC16DB419C984B9D0F8BCA6BC2B54D (SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD * __this, const RuntimeMethod* method)
{
	{
		// private float moveSpeed = 2f;
		__this->set_moveSpeed_4((2.0f));
		// private bool checkResult = true;
		__this->set_checkResult_10((bool)1);
		// [SerializeField] private int ItemRandom = 2;
		__this->set_ItemRandom_14(2);
		// private float timeCounter = 2;
		__this->set_timeCounter_15((2.0f));
		// private float timeCounterStorage = 0.5f;
		__this->set_timeCounterStorage_16((0.5f));
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
// System.Void TimerBar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerBar_Start_m5166511EBB4F2A505F261AE44E58EE904D058849 (TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C * __this, const RuntimeMethod* method)
{
	{
		// time_count = time;
		int32_t L_0 = __this->get_time_4();
		__this->set_time_count_5(((float)((float)L_0)));
		// instant_time = time;
		int32_t L_1 = __this->get_time_4();
		__this->set_instant_time_6(L_1);
		// }
		return;
	}
}
// System.Void TimerBar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerBar_Update_m4E7EA4B452184E702F437E5842FA81A49DB99BB1 (TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TimerBar::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerBar_FixedUpdate_m9396D01BBB6EE3F8C1B73D7DE9613951332D443B (TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (countdownPlayerDamage <= 0)
		float L_0 = __this->get_countdownPlayerDamage_10();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0025;
		}
	}
	{
		// isPlayerTakeDamage = player.GetComponent<PlayerMovement>().isDamage;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_player_8();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_2;
		L_2 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_1, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		bool L_3 = L_2->get_isDamage_13();
		__this->set_isPlayerTakeDamage_9(L_3);
		// }
		goto IL_0037;
	}

IL_0025:
	{
		// countdownPlayerDamage -= Time.fixedDeltaTime;
		float L_4 = __this->get_countdownPlayerDamage_10();
		float L_5;
		L_5 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		__this->set_countdownPlayerDamage_10(((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)));
	}

IL_0037:
	{
		// if (isPlayerTakeDamage == true)
		bool L_6 = __this->get_isPlayerTakeDamage_9();
		if (!L_6)
		{
			goto IL_0115;
		}
	}
	{
		// countdownPlayerDamage = 1;
		__this->set_countdownPlayerDamage_10((1.0f));
		// isPlayerTakeDamage = false;
		__this->set_isPlayerTakeDamage_9((bool)0);
		// if (time_count + time_increment >= time)
		float L_7 = __this->get_time_count_5();
		int32_t L_8 = __this->get_time_increment_11();
		int32_t L_9 = __this->get_time_4();
		if ((!(((float)((float)il2cpp_codegen_add((float)L_7, (float)((float)((float)L_8))))) >= ((float)((float)((float)L_9))))))
		{
			goto IL_0086;
		}
	}
	{
		// time_count = time;
		int32_t L_10 = __this->get_time_4();
		__this->set_time_count_5(((float)((float)L_10)));
		// instant_time = time;
		int32_t L_11 = __this->get_time_4();
		__this->set_instant_time_6(L_11);
		// }
		goto IL_00ad;
	}

IL_0086:
	{
		// time_count += time_increment;
		float L_12 = __this->get_time_count_5();
		int32_t L_13 = __this->get_time_increment_11();
		__this->set_time_count_5(((float)il2cpp_codegen_add((float)L_12, (float)((float)((float)L_13)))));
		// instant_time += time_increment;
		int32_t L_14 = __this->get_instant_time_6();
		int32_t L_15 = __this->get_time_increment_11();
		__this->set_instant_time_6(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15)));
	}

IL_00ad:
	{
		// transform.localScale = new Vector3(time_count * 17 / time, 0.34f, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = __this->get_transform_7();
		float L_17 = __this->get_time_count_5();
		int32_t L_18 = __this->get_time_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), ((float)((float)((float)il2cpp_codegen_multiply((float)L_17, (float)(17.0f)))/(float)((float)((float)L_18)))), (0.340000004f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_16, L_19, /*hidden argument*/NULL);
		// transform.localPosition = new Vector3((time_count * 17 / time / 2) - 8.46f, 9.11f, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = __this->get_transform_7();
		float L_21 = __this->get_time_count_5();
		int32_t L_22 = __this->get_time_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_subtract((float)((float)((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_21, (float)(17.0f)))/(float)((float)((float)L_22))))/(float)(2.0f))), (float)(8.46000004f))), (9.10999966f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_20, L_23, /*hidden argument*/NULL);
	}

IL_0115:
	{
		// if (time_count > 0)
		float L_24 = __this->get_time_count_5();
		if ((!(((float)L_24) > ((float)(0.0f)))))
		{
			goto IL_01eb;
		}
	}
	{
		// time_count -= Time.fixedDeltaTime;
		float L_25 = __this->get_time_count_5();
		float L_26;
		L_26 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		__this->set_time_count_5(((float)il2cpp_codegen_subtract((float)L_25, (float)L_26)));
		// transform.localScale = new Vector3(time_count * 17 / time, 0.34f, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = __this->get_transform_7();
		float L_28 = __this->get_time_count_5();
		int32_t L_29 = __this->get_time_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_30), ((float)((float)((float)il2cpp_codegen_multiply((float)L_28, (float)(17.0f)))/(float)((float)((float)L_29)))), (0.340000004f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_27, L_30, /*hidden argument*/NULL);
		// transform.localPosition = new Vector3((time_count * 17 / time / 2) - 8.46f, 9.11f, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31 = __this->get_transform_7();
		float L_32 = __this->get_time_count_5();
		int32_t L_33 = __this->get_time_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_34), ((float)il2cpp_codegen_subtract((float)((float)((float)((float)((float)((float)il2cpp_codegen_multiply((float)L_32, (float)(17.0f)))/(float)((float)((float)L_33))))/(float)(2.0f))), (float)(8.46000004f))), (9.10999966f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_31, L_34, /*hidden argument*/NULL);
		// if ((int)time_count < instant_time)
		float L_35 = __this->get_time_count_5();
		int32_t L_36 = __this->get_instant_time_6();
		if ((((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_35)) >= ((int32_t)L_36)))
		{
			goto IL_01d9;
		}
	}
	{
		// instant_time = (int)time_count;
		float L_37 = __this->get_time_count_5();
		__this->set_instant_time_6(il2cpp_codegen_cast_double_to_int<int32_t>(L_37));
		// if (instant_time % 5 == 0)
		int32_t L_38 = __this->get_instant_time_6();
		if (((int32_t)((int32_t)L_38%(int32_t)5)))
		{
			goto IL_01d9;
		}
	}
	{
		// random2 = Random.Range(4, 9);
		int32_t L_39;
		L_39 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(4, ((int32_t)9), /*hidden argument*/NULL);
		__this->set_random2_14(L_39);
		// CreateEnemy();
		TimerBar_CreateEnemy_m0F20DD859EB95A7A3F9C66F05FC347E4667D4639(__this, /*hidden argument*/NULL);
	}

IL_01d9:
	{
		// player.GetComponent<PlayerMovement>().scene_collide = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = __this->get_player_8();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_41;
		L_41 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_40, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		L_41->set_scene_collide_19((bool)0);
		// }
		return;
	}

IL_01eb:
	{
		// transform.localScale = new Vector3(17, 0.34f, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42 = __this->get_transform_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_43), (17.0f), (0.340000004f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_42, L_43, /*hidden argument*/NULL);
		// transform.localPosition = new Vector3((17 / 2) - 8f, 9.11f, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44 = __this->get_transform_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_45), (0.0f), (9.10999966f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_44, L_45, /*hidden argument*/NULL);
		// if (GameObject.FindGameObjectsWithTag("Enemies").Length == 0)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_46;
		L_46 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968, /*hidden argument*/NULL);
		if ((((RuntimeArray*)L_46)->max_length))
		{
			goto IL_0263;
		}
	}
	{
		// tuccar = true;
		__this->set_tuccar_22((bool)1);
		// player_x_konum = player.transform.transform.position.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = __this->get_player_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_47, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_48, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
		float L_51 = L_50.get_x_2();
		__this->set_player_x_konum_23(L_51);
		// SahneGecis();
		TimerBar_SahneGecis_m83947384511B81D60A1377621D9DA68785FC9965(__this, /*hidden argument*/NULL);
	}

IL_0263:
	{
		// }
		return;
	}
}
// System.Void TimerBar::CreateEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerBar_CreateEnemy_m0F20DD859EB95A7A3F9C66F05FC347E4667D4639 (TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int j = 0; j < 12; j++) { respawner_hafiza[j] = 0; }
		V_0 = 0;
		goto IL_0011;
	}

IL_0004:
	{
		// for (int j = 0; j < 12; j++) { respawner_hafiza[j] = 0; }
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_respawner_hafiza_17();
		int32_t L_1 = V_0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (int32_t)0);
		// for (int j = 0; j < 12; j++) { respawner_hafiza[j] = 0; }
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0011:
	{
		// for (int j = 0; j < 12; j++) { respawner_hafiza[j] = 0; }
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)12))))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < random2; i++)
		V_1 = 0;
		goto IL_00a1;
	}

IL_001d:
	{
		// randomNumber = Random.Range(0, 12);
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)12), /*hidden argument*/NULL);
		__this->set_randomNumber_15(L_4);
		// randomEnemy = Random.Range(0, 5);
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 5, /*hidden argument*/NULL);
		__this->set_randomEnemy_16(L_5);
		// if (respawner_hafiza[randomNumber] == 1)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = __this->get_respawner_hafiza_17();
		int32_t L_7 = __this->get_randomNumber_15();
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_004e;
		}
	}
	{
		// i--;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		// continue;
		goto IL_009d;
	}

IL_004e:
	{
		// respawner_hafiza[randomNumber] = 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = __this->get_respawner_hafiza_17();
		int32_t L_12 = __this->get_randomNumber_15();
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (int32_t)1);
		// GameObject Enemy = Instantiate(enemyPrefab[randomEnemy], Respawner[randomNumber].transform.position, Respawner[randomNumber].transform.rotation);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = __this->get_enemyPrefab_13();
		int32_t L_14 = __this->get_randomEnemy_16();
		int32_t L_15 = L_14;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_17 = __this->get_Respawner_12();
		int32_t L_18 = __this->get_randomNumber_15();
		int32_t L_19 = L_18;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_23 = __this->get_Respawner_12();
		int32_t L_24 = __this->get_randomNumber_15();
		int32_t L_25 = L_24;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_28;
		L_28 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_16, L_22, L_28, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_009d:
	{
		// for (int i = 0; i < random2; i++)
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00a1:
	{
		// for (int i = 0; i < random2; i++)
		int32_t L_31 = V_1;
		int32_t L_32 = __this->get_random2_14();
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TimerBar::SahneGecis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerBar_SahneGecis_m83947384511B81D60A1377621D9DA68785FC9965 (TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// tilemapObject.transform.GetChild(3).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_tilemapObject_18();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, 3, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// if (timer_nextSceneArrow > 0)
		float L_4 = __this->get_timer_nextSceneArrow_20();
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		// timer_nextSceneArrow -= Time.fixedDeltaTime;
		float L_5 = __this->get_timer_nextSceneArrow_20();
		float L_6;
		L_6 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		__this->set_timer_nextSceneArrow_20(((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)));
		// nextSceneArrow.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_nextSceneArrow_19();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_008c;
	}

IL_0049:
	{
		// else if (timer2_nextSceneArrow > 0)
		float L_8 = __this->get_timer2_nextSceneArrow_21();
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_0076;
		}
	}
	{
		// timer2_nextSceneArrow -= Time.fixedDeltaTime;
		float L_9 = __this->get_timer2_nextSceneArrow_21();
		float L_10;
		L_10 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		__this->set_timer2_nextSceneArrow_21(((float)il2cpp_codegen_subtract((float)L_9, (float)L_10)));
		// nextSceneArrow.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_nextSceneArrow_19();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_008c;
	}

IL_0076:
	{
		// timer_nextSceneArrow = 1;
		__this->set_timer_nextSceneArrow_20((1.0f));
		// timer2_nextSceneArrow = 0.5f;
		__this->set_timer2_nextSceneArrow_21((0.5f));
	}

IL_008c:
	{
		// if(player.GetComponent<PlayerMovement>().scene_collide == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_player_8();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_13;
		L_13 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_12, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		bool L_14 = L_13->get_scene_collide_19();
		if (!L_14)
		{
			goto IL_00b2;
		}
	}
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_15;
		L_15 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_15;
		int32_t L_16;
		L_16 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void TimerBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerBar__ctor_m3E491A1836B08CD7183446D9EDD71DF72DBBD45A (TimerBar_t8CAEE040493011C7A76F1FCFC6C7DD09E0EB046C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int time = 30;
		__this->set_time_4(((int32_t)30));
		// private int time_increment = 15;
		__this->set_time_increment_11(((int32_t)15));
		// int[] respawner_hafiza = new int[12];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		__this->set_respawner_hafiza_17(L_0);
		// private float timer_nextSceneArrow = 1;
		__this->set_timer_nextSceneArrow_20((1.0f));
		// private float timer2_nextSceneArrow = 1;
		__this->set_timer2_nextSceneArrow_21((1.0f));
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
// System.Void dropItems::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_Start_m40058F553E2B652D6616293A18F7B1FF5DEDCE41 (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral740257E73184D370700381E7B1C75C2E3378564D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timer_Coffee = timer_Coffee_Hafiza;
		int32_t L_0 = __this->get_timer_Coffee_Hafiza_11();
		__this->set_timer_Coffee_10(((float)((float)L_0)));
		// timer_HeavyMachineGun = timer_HeavyMachineGun_Hafiza;
		int32_t L_1 = __this->get_timer_HeavyMachineGun_Hafiza_15();
		__this->set_timer_HeavyMachineGun_14(((float)((float)L_1)));
		// timer_Shotgun = timer_Shotgun_Hafiza;
		int32_t L_2 = __this->get_timer_Shotgun_Hafiza_19();
		__this->set_timer_Shotgun_18(((float)((float)L_2)));
		// timer_WagonWheel = timer_WagonWheel_Hafiza;
		int32_t L_3 = __this->get_timer_WagonWheel_Hafiza_23();
		__this->set_timer_WagonWheel_22(((float)((float)L_3)));
		// timer_SheriffBadge = timer_SheriffBadge_Hafiza;
		int32_t L_4 = __this->get_timer_SheriffBadge_Hafiza_26();
		__this->set_timer_SheriffBadge_25(((float)((float)L_4)));
		// timer_SmokeBomb = timer_SmokeBomb_Hafiza;
		int32_t L_5 = __this->get_timer_SmokeBomb_Hafiza_34();
		__this->set_timer_SmokeBomb_33(((float)((float)L_5)));
		// timer_Tombstone = timer_Tombstone_Hafiza;
		int32_t L_6 = __this->get_timer_Tombstone_Hafiza_40();
		__this->set_timer_Tombstone_39(((float)((float)L_6)));
		// null_inventory = new GameObject("null_Inventory");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_7, _stringLiteral740257E73184D370700381E7B1C75C2E3378564D, /*hidden argument*/NULL);
		__this->set_null_inventory_6(L_7);
		// null_inventory.transform.parent = Inventory.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_null_inventory_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_9, L_11, /*hidden argument*/NULL);
		// null_inventory.transform.position = Inventory.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_null_inventory_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_13, L_16, /*hidden argument*/NULL);
		// collision_item = null_inventory;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_null_inventory_6();
		__this->set_collision_item_4(L_17);
		// }
		return;
	}
}
// System.Void dropItems::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_Update_m1F93F06BEB86A2ACA30F8C1F33CEF05370755168 (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3494512138997BF8DF462A5A40B1567CECF39619);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral408FD152E37B2DFABBD2458C3820E9172197E7BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49157E42C7ADCCF5578854B7DB94A89F102F9D70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61C62681061F21B2A91C3B169A1E4BCA1F4F1F6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral740257E73184D370700381E7B1C75C2E3378564D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2C4A599ED4420069476AEBE4AAAD53A25D41124);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA119087888E360430754CC08BC7B688A60D51DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF4D39B6BB75C0F4AD720ADEF73656DAE1084207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF72385C2A0E9E4222E98950F050F065588EB3BD);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if(collision_item.name != "null_Inventory" && envanter == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_collision_item_4();
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_1, _stringLiteral740257E73184D370700381E7B1C75C2E3378564D, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		bool L_3 = __this->get_envanter_5();
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		// envanter = true;
		__this->set_envanter_5((bool)1);
		// EnvantereEkleme();
		dropItems_EnvantereEkleme_mDB409745C716A8D7072B0B86D65014BDF14ECC2F(__this, /*hidden argument*/NULL);
		// }
		goto IL_0098;
	}

IL_002e:
	{
		// foreach (Transform child in Inventory.transform)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		RuntimeObject* L_6;
		L_6 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_003f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007d;
		}

IL_0041:
		{
			// foreach (Transform child in Inventory.transform)
			RuntimeObject* L_7 = V_0;
			RuntimeObject * L_8;
			L_8 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_7);
			V_1 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_8, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			// if (child.name != "null_Inventory")
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = V_1;
			String_t* L_10;
			L_10 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_9, /*hidden argument*/NULL);
			bool L_11;
			L_11 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_10, _stringLiteral740257E73184D370700381E7B1C75C2E3378564D, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_007d;
			}
		}

IL_005f:
		{
			// if (collision_item.name != child.name)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_collision_item_4();
			String_t* L_13;
			L_13 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_12, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = V_1;
			String_t* L_15;
			L_15 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_14, /*hidden argument*/NULL);
			bool L_16;
			L_16 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_13, L_15, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_007d;
			}
		}

IL_0077:
		{
			// UseItem();
			dropItems_UseItem_m38D10F5D053BB1217F43994EA66D0601520FF72B(__this, /*hidden argument*/NULL);
		}

IL_007d:
		{
			// foreach (Transform child in Inventory.transform)
			RuntimeObject* L_17 = V_0;
			bool L_18;
			L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_0041;
			}
		}

IL_0085:
		{
			IL2CPP_LEAVE(0x98, FINALLY_0087);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0087;
	}

FINALLY_0087:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_19 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_19, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_20 = V_2;
			if (!L_20)
			{
				goto IL_0097;
			}
		}

IL_0091:
		{
			RuntimeObject* L_21 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_21);
		}

IL_0097:
		{
			IL2CPP_END_FINALLY(135)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(135)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x98, IL_0098)
	}

IL_0098:
	{
		// if (UseInSlot == true)
		bool L_22 = __this->get_UseInSlot_8();
		if (!L_22)
		{
			goto IL_0295;
		}
	}
	{
		// UseInSlot = false;
		__this->set_UseInSlot_8((bool)0);
		// foreach (Transform child in Inventory.transform)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		RuntimeObject* L_25;
		L_25 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
	}

IL_00bb:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0264;
		}

IL_00c0:
		{
			// foreach (Transform child in Inventory.transform)
			RuntimeObject* L_26 = V_0;
			RuntimeObject * L_27;
			L_27 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_26);
			V_3 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_27, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			// if (child.name != "null_Inventory")
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = V_3;
			String_t* L_29;
			L_29 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_28, /*hidden argument*/NULL);
			bool L_30;
			L_30 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_29, _stringLiteral740257E73184D370700381E7B1C75C2E3378564D, /*hidden argument*/NULL);
			if (!L_30)
			{
				goto IL_0264;
			}
		}

IL_00e1:
		{
			// if (child.name.Substring(0, child.name.IndexOf("_")) == "Coffee")
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31 = V_3;
			String_t* L_32;
			L_32 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_31, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = V_3;
			String_t* L_34;
			L_34 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_33, /*hidden argument*/NULL);
			int32_t L_35;
			L_35 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_34, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
			String_t* L_36;
			L_36 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_32, 0, L_35, /*hidden argument*/NULL);
			bool L_37;
			L_37 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_36, _stringLiteral61C62681061F21B2A91C3B169A1E4BCA1F4F1F6C, /*hidden argument*/NULL);
			if (!L_37)
			{
				goto IL_0110;
			}
		}

IL_0109:
		{
			// isCoffee = true;
			__this->set_isCoffee_9((bool)1);
		}

IL_0110:
		{
			// if (child.name.Substring(0, child.name.IndexOf("_")) == "HeavyMachineGun")
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38 = V_3;
			String_t* L_39;
			L_39 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_38, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40 = V_3;
			String_t* L_41;
			L_41 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_40, /*hidden argument*/NULL);
			int32_t L_42;
			L_42 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_41, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
			String_t* L_43;
			L_43 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_39, 0, L_42, /*hidden argument*/NULL);
			bool L_44;
			L_44 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_43, _stringLiteral408FD152E37B2DFABBD2458C3820E9172197E7BB, /*hidden argument*/NULL);
			if (!L_44)
			{
				goto IL_013f;
			}
		}

IL_0138:
		{
			// isHeavyMachineGun = true;
			__this->set_isHeavyMachineGun_13((bool)1);
		}

IL_013f:
		{
			// if (child.name.Substring(0, child.name.IndexOf("_")) == "Shotgun")
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45 = V_3;
			String_t* L_46;
			L_46 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_45, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47 = V_3;
			String_t* L_48;
			L_48 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_47, /*hidden argument*/NULL);
			int32_t L_49;
			L_49 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_48, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
			String_t* L_50;
			L_50 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_46, 0, L_49, /*hidden argument*/NULL);
			bool L_51;
			L_51 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_50, _stringLiteral3494512138997BF8DF462A5A40B1567CECF39619, /*hidden argument*/NULL);
			if (!L_51)
			{
				goto IL_016e;
			}
		}

IL_0167:
		{
			// isShotgun = true;
			__this->set_isShotgun_17((bool)1);
		}

IL_016e:
		{
			// if (child.name.Substring(0, child.name.IndexOf("_")) == "WagonWheel")
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52 = V_3;
			String_t* L_53;
			L_53 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_52, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54 = V_3;
			String_t* L_55;
			L_55 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_54, /*hidden argument*/NULL);
			int32_t L_56;
			L_56 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_55, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
			String_t* L_57;
			L_57 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_53, 0, L_56, /*hidden argument*/NULL);
			bool L_58;
			L_58 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_57, _stringLiteralEF72385C2A0E9E4222E98950F050F065588EB3BD, /*hidden argument*/NULL);
			if (!L_58)
			{
				goto IL_019d;
			}
		}

IL_0196:
		{
			// isWagonWheel = true;
			__this->set_isWagonWheel_21((bool)1);
		}

IL_019d:
		{
			// if (child.name.Substring(0, child.name.IndexOf("_")) == "SheriffBadge")
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59 = V_3;
			String_t* L_60;
			L_60 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_59, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61 = V_3;
			String_t* L_62;
			L_62 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_61, /*hidden argument*/NULL);
			int32_t L_63;
			L_63 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_62, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
			String_t* L_64;
			L_64 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_60, 0, L_63, /*hidden argument*/NULL);
			bool L_65;
			L_65 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_64, _stringLiteralEF4D39B6BB75C0F4AD720ADEF73656DAE1084207, /*hidden argument*/NULL);
			if (!L_65)
			{
				goto IL_01cc;
			}
		}

IL_01c5:
		{
			// isSheriffBadge = true;
			__this->set_isSheriffBadge_24((bool)1);
		}

IL_01cc:
		{
			// if (child.name.Substring(0, child.name.IndexOf("_")) == "ScreenBomb")
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66 = V_3;
			String_t* L_67;
			L_67 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_66, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_68 = V_3;
			String_t* L_69;
			L_69 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_68, /*hidden argument*/NULL);
			int32_t L_70;
			L_70 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_69, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
			String_t* L_71;
			L_71 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_67, 0, L_70, /*hidden argument*/NULL);
			bool L_72;
			L_72 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_71, _stringLiteralEA119087888E360430754CC08BC7B688A60D51DA, /*hidden argument*/NULL);
			if (!L_72)
			{
				goto IL_01fb;
			}
		}

IL_01f4:
		{
			// isScreenBomb = true;
			__this->set_isScreenBomb_29((bool)1);
		}

IL_01fb:
		{
			// if (child.name.Substring(0, child.name.IndexOf("_")) == "SmokeBomb")
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73 = V_3;
			String_t* L_74;
			L_74 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_73, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_75 = V_3;
			String_t* L_76;
			L_76 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_75, /*hidden argument*/NULL);
			int32_t L_77;
			L_77 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_76, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
			String_t* L_78;
			L_78 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_74, 0, L_77, /*hidden argument*/NULL);
			bool L_79;
			L_79 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_78, _stringLiteralC2C4A599ED4420069476AEBE4AAAD53A25D41124, /*hidden argument*/NULL);
			if (!L_79)
			{
				goto IL_022a;
			}
		}

IL_0223:
		{
			// isSmokeBomb = true;
			__this->set_isSmokeBomb_31((bool)1);
		}

IL_022a:
		{
			// if (child.name.Substring(0, child.name.IndexOf("_")) == "Tombstone")
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80 = V_3;
			String_t* L_81;
			L_81 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_80, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82 = V_3;
			String_t* L_83;
			L_83 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_82, /*hidden argument*/NULL);
			int32_t L_84;
			L_84 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_83, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
			String_t* L_85;
			L_85 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_81, 0, L_84, /*hidden argument*/NULL);
			bool L_86;
			L_86 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_85, _stringLiteral49157E42C7ADCCF5578854B7DB94A89F102F9D70, /*hidden argument*/NULL);
			if (!L_86)
			{
				goto IL_0259;
			}
		}

IL_0252:
		{
			// isTombstone = true;
			__this->set_isTombstone_38((bool)1);
		}

IL_0259:
		{
			// Destroy(child.gameObject);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_87 = V_3;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88;
			L_88 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_87, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_88, /*hidden argument*/NULL);
		}

IL_0264:
		{
			// foreach (Transform child in Inventory.transform)
			RuntimeObject* L_89 = V_0;
			bool L_90;
			L_90 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_89);
			if (L_90)
			{
				goto IL_00c0;
			}
		}

IL_026f:
		{
			IL2CPP_LEAVE(0x282, FINALLY_0271);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0271;
	}

FINALLY_0271:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_91 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_91, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_92 = V_2;
			if (!L_92)
			{
				goto IL_0281;
			}
		}

IL_027b:
		{
			RuntimeObject* L_93 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_93);
		}

IL_0281:
		{
			IL2CPP_END_FINALLY(625)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(625)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x282, IL_0282)
	}

IL_0282:
	{
		// collision_item = null_inventory;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_94 = __this->get_null_inventory_6();
		__this->set_collision_item_4(L_94);
		// envanter = false;
		__this->set_envanter_5((bool)0);
	}

IL_0295:
	{
		// UseItemInInventory();
		dropItems_UseItemInInventory_m1412B2B5F7107B66DFF4140B1DF1AA41E8342282(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void dropItems::EnvantereEkleme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_EnvantereEkleme_mDB409745C716A8D7072B0B86D65014BDF14ECC2F (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral070381883D9F7B441E20194F3CFAE657B19841C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56111A3F8AB42C12DEA810213B0342F30534179B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2E8186527521A7F0ED93B6A1E42CCDF19494C75);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// collision_item.transform.parent = Inventory.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_collision_item_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_1, L_3, /*hidden argument*/NULL);
		// collision_item.transform.position = Inventory.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_collision_item_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_8, /*hidden argument*/NULL);
		// collision_item = null_inventory;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_null_inventory_6();
		__this->set_collision_item_4(L_9);
		// foreach (Transform child in Inventory.transform)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		RuntimeObject* L_12;
		L_12 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			goto IL_017b;
		}

IL_005d:
		{
			// foreach (Transform child in Inventory.transform)
			RuntimeObject* L_13 = V_0;
			RuntimeObject * L_14;
			L_14 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			V_1 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_14, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			// if(child.name.Substring(0,child.name.IndexOf("_")) != "null")
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = V_1;
			String_t* L_16;
			L_16 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_15, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = V_1;
			String_t* L_18;
			L_18 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_17, /*hidden argument*/NULL);
			int32_t L_19;
			L_19 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_18, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
			String_t* L_20;
			L_20 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_16, 0, L_19, /*hidden argument*/NULL);
			bool L_21;
			L_21 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_20, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_017b;
			}
		}

IL_0094:
		{
			// if (child.name.Substring(0, child.name.IndexOf("_")) == "1-Up")
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = V_1;
			String_t* L_23;
			L_23 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_22, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = V_1;
			String_t* L_25;
			L_25 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_24, /*hidden argument*/NULL);
			int32_t L_26;
			L_26 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_25, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
			String_t* L_27;
			L_27 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_23, 0, L_26, /*hidden argument*/NULL);
			bool L_28;
			L_28 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_27, _stringLiteralB2E8186527521A7F0ED93B6A1E42CCDF19494C75, /*hidden argument*/NULL);
			if (!L_28)
			{
				goto IL_00dd;
			}
		}

IL_00bc:
		{
			// Destroy(child.gameObject);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
			L_30 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_29, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_30, /*hidden argument*/NULL);
			// envanter = false;
			__this->set_envanter_5((bool)0);
			// SaveObject.singleton.HealthUp();
			SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_31;
			L_31 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
			SaveObject_HealthUp_m95187E836E506337476104A80E11F634FD87AD7E(L_31, /*hidden argument*/NULL);
			// }
			goto IL_017b;
		}

IL_00dd:
		{
			// else if (child.name.Substring(0, child.name.IndexOf("_")) == "1Coin")
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = V_1;
			String_t* L_33;
			L_33 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_32, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34 = V_1;
			String_t* L_35;
			L_35 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_34, /*hidden argument*/NULL);
			int32_t L_36;
			L_36 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_35, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
			String_t* L_37;
			L_37 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_33, 0, L_36, /*hidden argument*/NULL);
			bool L_38;
			L_38 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_37, _stringLiteral56111A3F8AB42C12DEA810213B0342F30534179B, /*hidden argument*/NULL);
			if (!L_38)
			{
				goto IL_0124;
			}
		}

IL_0105:
		{
			// Destroy(child.gameObject);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
			L_40 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_39, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_40, /*hidden argument*/NULL);
			// envanter = false;
			__this->set_envanter_5((bool)0);
			// SaveObject.singleton.CoinUp(1);
			SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_41;
			L_41 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
			SaveObject_CoinUp_mB4EDD13EC220E01276721B55BBDAE41A03F7AA56(L_41, 1, /*hidden argument*/NULL);
			// }
			goto IL_017b;
		}

IL_0124:
		{
			// else if (child.name.Substring(0, child.name.IndexOf("_")) == "5Coin")
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42 = V_1;
			String_t* L_43;
			L_43 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_42, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44 = V_1;
			String_t* L_45;
			L_45 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_44, /*hidden argument*/NULL);
			int32_t L_46;
			L_46 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_45, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
			String_t* L_47;
			L_47 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_43, 0, L_46, /*hidden argument*/NULL);
			bool L_48;
			L_48 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_47, _stringLiteral070381883D9F7B441E20194F3CFAE657B19841C6, /*hidden argument*/NULL);
			if (!L_48)
			{
				goto IL_016b;
			}
		}

IL_014c:
		{
			// Destroy(child.gameObject);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50;
			L_50 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_49, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_50, /*hidden argument*/NULL);
			// envanter = false;
			__this->set_envanter_5((bool)0);
			// SaveObject.singleton.CoinUp(5);
			SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_51;
			L_51 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
			SaveObject_CoinUp_mB4EDD13EC220E01276721B55BBDAE41A03F7AA56(L_51, 5, /*hidden argument*/NULL);
			// }
			goto IL_017b;
		}

IL_016b:
		{
			// SaveObject.singleton.SetCurrentEnvanter(child.name);
			SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_52;
			L_52 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53 = V_1;
			String_t* L_54;
			L_54 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_53, /*hidden argument*/NULL);
			SaveObject_SetCurrentEnvanter_m6EBC9152A01483B456EF6CAE6DE9300A7E2DA785(L_52, L_54, /*hidden argument*/NULL);
		}

IL_017b:
		{
			// foreach (Transform child in Inventory.transform)
			RuntimeObject* L_55 = V_0;
			bool L_56;
			L_56 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_55);
			if (L_56)
			{
				goto IL_005d;
			}
		}

IL_0186:
		{
			IL2CPP_LEAVE(0x199, FINALLY_0188);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0188;
	}

FINALLY_0188:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_57 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_57, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_58 = V_2;
			if (!L_58)
			{
				goto IL_0198;
			}
		}

IL_0192:
		{
			RuntimeObject* L_59 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_59);
		}

IL_0198:
		{
			IL2CPP_END_FINALLY(392)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(392)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x199, IL_0199)
	}

IL_0199:
	{
		// }
		return;
	}
}
// System.Void dropItems::UseItemInInventory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_UseItemInInventory_m1412B2B5F7107B66DFF4140B1DF1AA41E8342282 (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method)
{
	{
		// if (isCoffee == true)
		bool L_0 = __this->get_isCoffee_9();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Coffee();
		dropItems_Coffee_mF96E7854D92308D940A01D4F0519661082FFA00A(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// if(isHeavyMachineGun == true)
		bool L_1 = __this->get_isHeavyMachineGun_13();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// HeavyMachineGun();
		dropItems_HeavyMachineGun_mD41130504C628054348926C725232566A27C3642(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// if (isShotgun == true)
		bool L_2 = __this->get_isShotgun_17();
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// Shotgun();
		dropItems_Shotgun_m8D26DFE59EC4FEE675C8F709FB7A8A7167BEDBB9(__this, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// if (isWagonWheel == true)
		bool L_3 = __this->get_isWagonWheel_21();
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// WagonWheel();
		dropItems_WagonWheel_m2764F0E6FF7494F11582888216EE4CB76AC49954(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// if (isSheriffBadge == true)
		bool L_4 = __this->get_isSheriffBadge_24();
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		// SheriffBadge();
		dropItems_SheriffBadge_m9DDAA51BEA7C20D4E3E5A423E77470453C2B5FAF(__this, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// if (isScreenBomb == true)
		bool L_5 = __this->get_isScreenBomb_29();
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		// ScreenBomb();
		dropItems_ScreenBomb_mDF5ED1DB4BF2BFED8A815E0CDE1E9B6C419565A9(__this, /*hidden argument*/NULL);
	}

IL_0054:
	{
		// if (isSmokeBomb == true)
		bool L_6 = __this->get_isSmokeBomb_31();
		if (!L_6)
		{
			goto IL_0062;
		}
	}
	{
		// SmokeBomb();
		dropItems_SmokeBomb_m9A9D052C2607E9AC5228F080C19D8A848201FA47(__this, /*hidden argument*/NULL);
	}

IL_0062:
	{
		// if (isTombstone == true)
		bool L_7 = __this->get_isTombstone_38();
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		// Tombstone();
		dropItems_Tombstone_mFE6922D69961F3E5ADD6861FBD59D66E637D5FC0(__this, /*hidden argument*/NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void dropItems::UseItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_UseItem_m38D10F5D053BB1217F43994EA66D0601520FF72B (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral070381883D9F7B441E20194F3CFAE657B19841C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3494512138997BF8DF462A5A40B1567CECF39619);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral408FD152E37B2DFABBD2458C3820E9172197E7BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49157E42C7ADCCF5578854B7DB94A89F102F9D70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56111A3F8AB42C12DEA810213B0342F30534179B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61C62681061F21B2A91C3B169A1E4BCA1F4F1F6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2E8186527521A7F0ED93B6A1E42CCDF19494C75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2C4A599ED4420069476AEBE4AAAD53A25D41124);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA119087888E360430754CC08BC7B688A60D51DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF4D39B6BB75C0F4AD720ADEF73656DAE1084207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF72385C2A0E9E4222E98950F050F065588EB3BD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// collision_item.transform.parent = Inventory.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_collision_item_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_1, L_3, /*hidden argument*/NULL);
		// collision_item.transform.position = Inventory.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_collision_item_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_8, /*hidden argument*/NULL);
		// collision_item = null_inventory;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_null_inventory_6();
		__this->set_collision_item_4(L_9);
		// if(Inventory.transform.childCount > 2)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		int32_t L_12;
		L_12 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_12) <= ((int32_t)2)))
		{
			goto IL_03e8;
		}
	}
	{
		// if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "Coffee")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_14, 2, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_15, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_18, 2, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_19, /*hidden argument*/NULL);
		int32_t L_21;
		L_21 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_20, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_16, 0, L_21, /*hidden argument*/NULL);
		bool L_23;
		L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_22, _stringLiteral61C62681061F21B2A91C3B169A1E4BCA1F4F1F6C, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00ac;
		}
	}
	{
		// isCoffee = true;
		__this->set_isCoffee_9((bool)1);
	}

IL_00ac:
	{
		// if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "HeavyMachineGun")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_25, 2, /*hidden argument*/NULL);
		String_t* L_27;
		L_27 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_26, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_29, 2, /*hidden argument*/NULL);
		String_t* L_31;
		L_31 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_30, /*hidden argument*/NULL);
		int32_t L_32;
		L_32 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_31, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		String_t* L_33;
		L_33 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_27, 0, L_32, /*hidden argument*/NULL);
		bool L_34;
		L_34 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_33, _stringLiteral408FD152E37B2DFABBD2458C3820E9172197E7BB, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00fb;
		}
	}
	{
		// isHeavyMachineGun = true;
		__this->set_isHeavyMachineGun_13((bool)1);
	}

IL_00fb:
	{
		// if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "Shotgun")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_35, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_36, 2, /*hidden argument*/NULL);
		String_t* L_38;
		L_38 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_37, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_40, 2, /*hidden argument*/NULL);
		String_t* L_42;
		L_42 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_41, /*hidden argument*/NULL);
		int32_t L_43;
		L_43 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_42, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		String_t* L_44;
		L_44 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_38, 0, L_43, /*hidden argument*/NULL);
		bool L_45;
		L_45 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_44, _stringLiteral3494512138997BF8DF462A5A40B1567CECF39619, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_014a;
		}
	}
	{
		// isShotgun = true;
		__this->set_isShotgun_17((bool)1);
	}

IL_014a:
	{
		// if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "WagonWheel")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_46, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_47, 2, /*hidden argument*/NULL);
		String_t* L_49;
		L_49 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_48, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_50, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_51, 2, /*hidden argument*/NULL);
		String_t* L_53;
		L_53 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_52, /*hidden argument*/NULL);
		int32_t L_54;
		L_54 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_53, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		String_t* L_55;
		L_55 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_49, 0, L_54, /*hidden argument*/NULL);
		bool L_56;
		L_56 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_55, _stringLiteralEF72385C2A0E9E4222E98950F050F065588EB3BD, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0199;
		}
	}
	{
		// isWagonWheel = true;
		__this->set_isWagonWheel_21((bool)1);
	}

IL_0199:
	{
		// if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "SheriffBadge")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_57, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_58, 2, /*hidden argument*/NULL);
		String_t* L_60;
		L_60 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_59, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
		L_62 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_61, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_62, 2, /*hidden argument*/NULL);
		String_t* L_64;
		L_64 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_63, /*hidden argument*/NULL);
		int32_t L_65;
		L_65 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_64, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		String_t* L_66;
		L_66 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_60, 0, L_65, /*hidden argument*/NULL);
		bool L_67;
		L_67 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_66, _stringLiteralEF4D39B6BB75C0F4AD720ADEF73656DAE1084207, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_01e8;
		}
	}
	{
		// isSheriffBadge = true;
		__this->set_isSheriffBadge_24((bool)1);
	}

IL_01e8:
	{
		// if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "ScreenBomb")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_69;
		L_69 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_68, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70;
		L_70 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_69, 2, /*hidden argument*/NULL);
		String_t* L_71;
		L_71 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_70, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
		L_73 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_72, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74;
		L_74 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_73, 2, /*hidden argument*/NULL);
		String_t* L_75;
		L_75 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_74, /*hidden argument*/NULL);
		int32_t L_76;
		L_76 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_75, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		String_t* L_77;
		L_77 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_71, 0, L_76, /*hidden argument*/NULL);
		bool L_78;
		L_78 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_77, _stringLiteralEA119087888E360430754CC08BC7B688A60D51DA, /*hidden argument*/NULL);
		if (!L_78)
		{
			goto IL_0237;
		}
	}
	{
		// isScreenBomb = true;
		__this->set_isScreenBomb_29((bool)1);
	}

IL_0237:
	{
		// if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "SmokeBomb")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80;
		L_80 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_79, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_81;
		L_81 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_80, 2, /*hidden argument*/NULL);
		String_t* L_82;
		L_82 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_81, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_83 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_84;
		L_84 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_83, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_85;
		L_85 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_84, 2, /*hidden argument*/NULL);
		String_t* L_86;
		L_86 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_85, /*hidden argument*/NULL);
		int32_t L_87;
		L_87 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_86, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		String_t* L_88;
		L_88 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_82, 0, L_87, /*hidden argument*/NULL);
		bool L_89;
		L_89 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_88, _stringLiteralC2C4A599ED4420069476AEBE4AAAD53A25D41124, /*hidden argument*/NULL);
		if (!L_89)
		{
			goto IL_0286;
		}
	}
	{
		// isSmokeBomb = true;
		__this->set_isSmokeBomb_31((bool)1);
	}

IL_0286:
	{
		// if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "Tombstone")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_90 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_91;
		L_91 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_90, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_92;
		L_92 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_91, 2, /*hidden argument*/NULL);
		String_t* L_93;
		L_93 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_92, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_94 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_95;
		L_95 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_94, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_96;
		L_96 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_95, 2, /*hidden argument*/NULL);
		String_t* L_97;
		L_97 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_96, /*hidden argument*/NULL);
		int32_t L_98;
		L_98 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_97, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		String_t* L_99;
		L_99 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_93, 0, L_98, /*hidden argument*/NULL);
		bool L_100;
		L_100 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_99, _stringLiteral49157E42C7ADCCF5578854B7DB94A89F102F9D70, /*hidden argument*/NULL);
		if (!L_100)
		{
			goto IL_02d5;
		}
	}
	{
		// isTombstone = true;
		__this->set_isTombstone_38((bool)1);
	}

IL_02d5:
	{
		// if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "1-Up")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_101 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_102;
		L_102 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_101, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_103;
		L_103 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_102, 2, /*hidden argument*/NULL);
		String_t* L_104;
		L_104 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_103, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_105 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_106;
		L_106 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_105, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_107;
		L_107 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_106, 2, /*hidden argument*/NULL);
		String_t* L_108;
		L_108 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_107, /*hidden argument*/NULL);
		int32_t L_109;
		L_109 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_108, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		String_t* L_110;
		L_110 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_104, 0, L_109, /*hidden argument*/NULL);
		bool L_111;
		L_111 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_110, _stringLiteralB2E8186527521A7F0ED93B6A1E42CCDF19494C75, /*hidden argument*/NULL);
		if (!L_111)
		{
			goto IL_0327;
		}
	}
	{
		// SaveObject.singleton.HealthUp();
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_112;
		L_112 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		SaveObject_HealthUp_m95187E836E506337476104A80E11F634FD87AD7E(L_112, /*hidden argument*/NULL);
	}

IL_0327:
	{
		// if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "1Coin")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_113 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_114;
		L_114 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_113, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_115;
		L_115 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_114, 2, /*hidden argument*/NULL);
		String_t* L_116;
		L_116 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_115, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_117 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_118;
		L_118 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_117, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_119;
		L_119 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_118, 2, /*hidden argument*/NULL);
		String_t* L_120;
		L_120 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_119, /*hidden argument*/NULL);
		int32_t L_121;
		L_121 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_120, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		String_t* L_122;
		L_122 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_116, 0, L_121, /*hidden argument*/NULL);
		bool L_123;
		L_123 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_122, _stringLiteral56111A3F8AB42C12DEA810213B0342F30534179B, /*hidden argument*/NULL);
		if (!L_123)
		{
			goto IL_037a;
		}
	}
	{
		// SaveObject.singleton.CoinUp(1);
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_124;
		L_124 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		SaveObject_CoinUp_mB4EDD13EC220E01276721B55BBDAE41A03F7AA56(L_124, 1, /*hidden argument*/NULL);
	}

IL_037a:
	{
		// if (Inventory.transform.GetChild(2).name.Substring(0, Inventory.transform.GetChild(2).name.IndexOf("_")) == "5Coin")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_125 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_126;
		L_126 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_125, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_127;
		L_127 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_126, 2, /*hidden argument*/NULL);
		String_t* L_128;
		L_128 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_127, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_129 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_130;
		L_130 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_129, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_131;
		L_131 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_130, 2, /*hidden argument*/NULL);
		String_t* L_132;
		L_132 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_131, /*hidden argument*/NULL);
		int32_t L_133;
		L_133 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_132, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		String_t* L_134;
		L_134 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_128, 0, L_133, /*hidden argument*/NULL);
		bool L_135;
		L_135 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_134, _stringLiteral070381883D9F7B441E20194F3CFAE657B19841C6, /*hidden argument*/NULL);
		if (!L_135)
		{
			goto IL_03cd;
		}
	}
	{
		// SaveObject.singleton.CoinUp(5);
		SaveObject_t22688472458678E007AE2DF2C201E709617CC595 * L_136;
		L_136 = SaveObject_get_singleton_mC8118798A29C1E350F781B894E39E95E36EE7872(/*hidden argument*/NULL);
		SaveObject_CoinUp_mB4EDD13EC220E01276721B55BBDAE41A03F7AA56(L_136, 5, /*hidden argument*/NULL);
	}

IL_03cd:
	{
		// DestroyImmediate(Inventory.transform.GetChild(2).gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_137 = __this->get_Inventory_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_138;
		L_138 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_137, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_139;
		L_139 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_138, 2, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_140;
		L_140 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_139, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_140, /*hidden argument*/NULL);
	}

IL_03e8:
	{
		// }
		return;
	}
}
// System.Void dropItems::Coffee()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_Coffee_mF96E7854D92308D940A01D4F0519661082FFA00A (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method)
{
	{
		// timer_Coffee -= Time.deltaTime;
		float L_0 = __this->get_timer_Coffee_10();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_Coffee_10(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// movement_speed_multiplier = 1.5f;
		__this->set_movement_speed_multiplier_12((1.5f));
		// if (timer_Coffee <= 0)
		float L_2 = __this->get_timer_Coffee_10();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		// isCoffee = false;
		__this->set_isCoffee_9((bool)0);
		// timer_Coffee = timer_Coffee_Hafiza;
		int32_t L_3 = __this->get_timer_Coffee_Hafiza_11();
		__this->set_timer_Coffee_10(((float)((float)L_3)));
		// movement_speed_multiplier = 1;
		__this->set_movement_speed_multiplier_12((1.0f));
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void dropItems::HeavyMachineGun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_HeavyMachineGun_mD41130504C628054348926C725232566A27C3642 (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method)
{
	{
		// timer_HeavyMachineGun -= Time.deltaTime;
		float L_0 = __this->get_timer_HeavyMachineGun_14();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_HeavyMachineGun_14(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// shooting_speed = 0.5f;
		__this->set_shooting_speed_16((0.5f));
		// if (timer_HeavyMachineGun <= 0)
		float L_2 = __this->get_timer_HeavyMachineGun_14();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		// isHeavyMachineGun = false;
		__this->set_isHeavyMachineGun_13((bool)0);
		// timer_HeavyMachineGun = timer_HeavyMachineGun_Hafiza;
		int32_t L_3 = __this->get_timer_HeavyMachineGun_Hafiza_15();
		__this->set_timer_HeavyMachineGun_14(((float)((float)L_3)));
		// shooting_speed = 1f;
		__this->set_shooting_speed_16((1.0f));
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void dropItems::Shotgun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_Shotgun_m8D26DFE59EC4FEE675C8F709FB7A8A7167BEDBB9 (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method)
{
	{
		// timer_Shotgun -= Time.deltaTime;
		float L_0 = __this->get_timer_Shotgun_18();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_Shotgun_18(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// shotgun_Shooting_Speed = 1.33f;
		__this->set_shotgun_Shooting_Speed_20((1.33000004f));
		// if (timer_Shotgun <= 0)
		float L_2 = __this->get_timer_Shotgun_18();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		// isShotgun = false;
		__this->set_isShotgun_17((bool)0);
		// timer_Shotgun = timer_Shotgun_Hafiza;
		int32_t L_3 = __this->get_timer_Shotgun_Hafiza_19();
		__this->set_timer_Shotgun_18(((float)((float)L_3)));
		// shotgun_Shooting_Speed = 1f;
		__this->set_shotgun_Shooting_Speed_20((1.0f));
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void dropItems::WagonWheel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_WagonWheel_m2764F0E6FF7494F11582888216EE4CB76AC49954 (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method)
{
	{
		// timer_WagonWheel -= Time.deltaTime;
		float L_0 = __this->get_timer_WagonWheel_22();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_WagonWheel_22(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if (timer_WagonWheel <= 0)
		float L_2 = __this->get_timer_WagonWheel_22();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0033;
		}
	}
	{
		// isWagonWheel = false;
		__this->set_isWagonWheel_21((bool)0);
		// timer_WagonWheel = timer_WagonWheel_Hafiza;
		int32_t L_3 = __this->get_timer_WagonWheel_Hafiza_23();
		__this->set_timer_WagonWheel_22(((float)((float)L_3)));
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void dropItems::SheriffBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_SheriffBadge_m9DDAA51BEA7C20D4E3E5A423E77470453C2B5FAF (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method)
{
	{
		// timer_SheriffBadge -= Time.deltaTime;
		float L_0 = __this->get_timer_SheriffBadge_25();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_SheriffBadge_25(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if (isCoffee == true)
		bool L_2 = __this->get_isCoffee_9();
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// SheriffBadge_movement_speed_multiplier = 1.1725f;
		__this->set_SheriffBadge_movement_speed_multiplier_27((1.17250001f));
		// }
		goto IL_0032;
	}

IL_0027:
	{
		// SheriffBadge_movement_speed_multiplier = 1.5f;
		__this->set_SheriffBadge_movement_speed_multiplier_27((1.5f));
	}

IL_0032:
	{
		// if (isHeavyMachineGun == true)
		bool L_3 = __this->get_isHeavyMachineGun_13();
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		// SheriffBadge_Shooting_Speed = 0.8775f;
		__this->set_SheriffBadge_Shooting_Speed_28((0.877499998f));
		// }
		goto IL_0052;
	}

IL_0047:
	{
		// SheriffBadge_Shooting_Speed = 0.5f;
		__this->set_SheriffBadge_Shooting_Speed_28((0.5f));
	}

IL_0052:
	{
		// if (timer_SheriffBadge <= 0)
		float L_4 = __this->get_timer_SheriffBadge_25();
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_0089;
		}
	}
	{
		// isSheriffBadge = false;
		__this->set_isSheriffBadge_24((bool)0);
		// timer_SheriffBadge = timer_SheriffBadge_Hafiza;
		int32_t L_5 = __this->get_timer_SheriffBadge_Hafiza_26();
		__this->set_timer_SheriffBadge_25(((float)((float)L_5)));
		// SheriffBadge_movement_speed_multiplier = 1f;
		__this->set_SheriffBadge_movement_speed_multiplier_27((1.0f));
		// SheriffBadge_Shooting_Speed = 1f;
		__this->set_SheriffBadge_Shooting_Speed_28((1.0f));
	}

IL_0089:
	{
		// }
		return;
	}
}
// System.Void dropItems::ScreenBomb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_ScreenBomb_mDF5ED1DB4BF2BFED8A815E0CDE1E9B6C419565A9 (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003f;
	}

IL_000f:
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// GameObject death = Instantiate(deathPrefab, enemy.transform.position, enemy.transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_deathPrefab_30();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_5, L_8, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(enemy);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_2;
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_003f:
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		int32_t L_15 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_000f;
		}
	}
	{
		// isScreenBomb = false;
		__this->set_isScreenBomb_29((bool)0);
		// }
		return;
	}
}
// System.Void dropItems::SmokeBomb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_SmokeBomb_m9A9D052C2607E9AC5228F080C19D8A848201FA47 (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisOgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF_mEFCDF2FD5B26441DD210D88B9E0A10C22FA967ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisOrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E_m643AFA823BAC8B5B37281E2B6952204AB6A8FED0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD_m5111AAA678B9AFE9311C94E79AB808D879209EF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1081ADAC6768F9F1C1F8ABEB4319C2FF0B04FDE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C75A7DCF1FE13F0A6F405A94C36613682F71468);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA004A438B484F9894101B1981EA22089542B0C9);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	{
		// timer_SmokeBomb -= Time.deltaTime;
		float L_0 = __this->get_timer_SmokeBomb_33();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_SmokeBomb_33(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2;
		L_2 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00cc;
	}

IL_0024:
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if(enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Orc")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_2;
		String_t* L_8;
		L_8 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_7, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_2;
		String_t* L_10;
		L_10 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_9, /*hidden argument*/NULL);
		int32_t L_11;
		L_11 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_10, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_8, 0, L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteral1081ADAC6768F9F1C1F8ABEB4319C2FF0B04FDE3, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		// enemy.GetComponent<OrcProperties>().smokebomb = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_2;
		OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E * L_15;
		L_15 = GameObject_GetComponent_TisOrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E_m643AFA823BAC8B5B37281E2B6952204AB6A8FED0(L_14, /*hidden argument*/GameObject_GetComponent_TisOrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E_m643AFA823BAC8B5B37281E2B6952204AB6A8FED0_RuntimeMethod_var);
		L_15->set_smokebomb_12((bool)1);
		// }
		goto IL_00c8;
	}

IL_005e:
	{
		// else if (enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Spikeball")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_2;
		String_t* L_17;
		L_17 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_16, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_2;
		String_t* L_19;
		L_19 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_18, /*hidden argument*/NULL);
		int32_t L_20;
		L_20 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_19, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_17, 0, L_20, /*hidden argument*/NULL);
		bool L_22;
		L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_21, _stringLiteral6C75A7DCF1FE13F0A6F405A94C36613682F71468, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0094;
		}
	}
	{
		// enemy.GetComponent<SpikeballProperties>().smokebomb = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = V_2;
		SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD * L_24;
		L_24 = GameObject_GetComponent_TisSpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD_m5111AAA678B9AFE9311C94E79AB808D879209EF4(L_23, /*hidden argument*/GameObject_GetComponent_TisSpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD_m5111AAA678B9AFE9311C94E79AB808D879209EF4_RuntimeMethod_var);
		L_24->set_smokebomb_9((bool)1);
		// }
		goto IL_00c8;
	}

IL_0094:
	{
		// else if (enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Ogre")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = V_2;
		String_t* L_26;
		L_26 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_25, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = V_2;
		String_t* L_28;
		L_28 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_27, /*hidden argument*/NULL);
		int32_t L_29;
		L_29 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_28, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_26, 0, L_29, /*hidden argument*/NULL);
		bool L_31;
		L_31 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_30, _stringLiteralEA004A438B484F9894101B1981EA22089542B0C9, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00c8;
		}
	}
	{
		// enemy.GetComponent<OgreProperties>().smokebomb = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = V_2;
		OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF * L_33;
		L_33 = GameObject_GetComponent_TisOgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF_mEFCDF2FD5B26441DD210D88B9E0A10C22FA967ED(L_32, /*hidden argument*/GameObject_GetComponent_TisOgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF_mEFCDF2FD5B26441DD210D88B9E0A10C22FA967ED_RuntimeMethod_var);
		L_33->set_smokebomb_12((bool)1);
	}

IL_00c8:
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00cc:
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		int32_t L_35 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_36 = V_0;
		if ((((int32_t)L_35) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		// if (checkTeleporting == false)
		bool L_37 = __this->get_checkTeleporting_37();
		if (L_37)
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0137;
	}

IL_00df:
	{
		// new_position_loc.x = Random.Range(-6, 6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_38 = __this->get_address_of_new_position_loc_35();
		int32_t L_39;
		L_39 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-6), 6, /*hidden argument*/NULL);
		L_38->set_x_2(((float)((float)L_39)));
		// new_position_loc.y = Random.Range(-6, 6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_40 = __this->get_address_of_new_position_loc_35();
		int32_t L_41;
		L_41 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-6), 6, /*hidden argument*/NULL);
		L_40->set_y_3(((float)((float)L_41)));
		// new_position_loc.z = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_42 = __this->get_address_of_new_position_loc_35();
		L_42->set_z_4((0.0f));
		// checkResult = Physics2D.OverlapCircle(new_position_loc, 1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = __this->get_new_position_loc_35();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_44;
		L_44 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_45;
		L_45 = Physics2D_OverlapCircle_m91A4627AE9C1216CE037B24175384B6345976625(L_44, (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_45, /*hidden argument*/NULL);
		__this->set_checkResult_36(L_46);
	}

IL_0137:
	{
		// while (checkResult == true)
		bool L_47 = __this->get_checkResult_36();
		if (L_47)
		{
			goto IL_00df;
		}
	}
	{
		// this.gameObject.GetComponent<Transform>().position = new_position_loc;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48;
		L_48 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_48, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = __this->get_new_position_loc_35();
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_49, L_50, /*hidden argument*/NULL);
		// checkTeleporting = true;
		__this->set_checkTeleporting_37((bool)1);
	}

IL_015c:
	{
		// if (timer_SmokeBomb <= 0)
		float L_51 = __this->get_timer_SmokeBomb_33();
		if ((!(((float)L_51) <= ((float)(0.0f)))))
		{
			goto IL_0251;
		}
	}
	{
		// isSmokeBomb = false;
		__this->set_isSmokeBomb_31((bool)0);
		// timer_SmokeBomb = timer_SmokeBomb_Hafiza;
		int32_t L_52 = __this->get_timer_SmokeBomb_Hafiza_34();
		__this->set_timer_SmokeBomb_33(((float)((float)L_52)));
		// checkTeleporting = false;
		__this->set_checkTeleporting_37((bool)0);
		// checkResult = true;
		__this->set_checkResult_36((bool)1);
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_53;
		L_53 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968, /*hidden argument*/NULL);
		V_0 = L_53;
		V_1 = 0;
		goto IL_0248;
	}

IL_01a0:
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_54 = V_0;
		int32_t L_55 = V_1;
		int32_t L_56 = L_55;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_3 = L_57;
		// if (enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Orc")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = V_3;
		String_t* L_59;
		L_59 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_58, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60 = V_3;
		String_t* L_61;
		L_61 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_60, /*hidden argument*/NULL);
		int32_t L_62;
		L_62 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_61, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		String_t* L_63;
		L_63 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_59, 0, L_62, /*hidden argument*/NULL);
		bool L_64;
		L_64 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_63, _stringLiteral1081ADAC6768F9F1C1F8ABEB4319C2FF0B04FDE3, /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_01da;
		}
	}
	{
		// enemy.GetComponent<OrcProperties>().smokebomb = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65 = V_3;
		OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E * L_66;
		L_66 = GameObject_GetComponent_TisOrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E_m643AFA823BAC8B5B37281E2B6952204AB6A8FED0(L_65, /*hidden argument*/GameObject_GetComponent_TisOrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E_m643AFA823BAC8B5B37281E2B6952204AB6A8FED0_RuntimeMethod_var);
		L_66->set_smokebomb_12((bool)0);
		// }
		goto IL_0244;
	}

IL_01da:
	{
		// else if (enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Spikeball")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67 = V_3;
		String_t* L_68;
		L_68 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_67, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69 = V_3;
		String_t* L_70;
		L_70 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_69, /*hidden argument*/NULL);
		int32_t L_71;
		L_71 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_70, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		String_t* L_72;
		L_72 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_68, 0, L_71, /*hidden argument*/NULL);
		bool L_73;
		L_73 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_72, _stringLiteral6C75A7DCF1FE13F0A6F405A94C36613682F71468, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_0210;
		}
	}
	{
		// enemy.GetComponent<SpikeballProperties>().smokebomb = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_74 = V_3;
		SpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD * L_75;
		L_75 = GameObject_GetComponent_TisSpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD_m5111AAA678B9AFE9311C94E79AB808D879209EF4(L_74, /*hidden argument*/GameObject_GetComponent_TisSpikeballProperties_t2C3A00821518004626C1B9B31D76C7840C3B7CBD_m5111AAA678B9AFE9311C94E79AB808D879209EF4_RuntimeMethod_var);
		L_75->set_smokebomb_9((bool)0);
		// }
		goto IL_0244;
	}

IL_0210:
	{
		// else if (enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Ogre")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76 = V_3;
		String_t* L_77;
		L_77 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_76, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_78 = V_3;
		String_t* L_79;
		L_79 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_78, /*hidden argument*/NULL);
		int32_t L_80;
		L_80 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_79, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		String_t* L_81;
		L_81 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_77, 0, L_80, /*hidden argument*/NULL);
		bool L_82;
		L_82 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_81, _stringLiteralEA004A438B484F9894101B1981EA22089542B0C9, /*hidden argument*/NULL);
		if (!L_82)
		{
			goto IL_0244;
		}
	}
	{
		// enemy.GetComponent<OgreProperties>().smokebomb = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_83 = V_3;
		OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF * L_84;
		L_84 = GameObject_GetComponent_TisOgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF_mEFCDF2FD5B26441DD210D88B9E0A10C22FA967ED(L_83, /*hidden argument*/GameObject_GetComponent_TisOgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF_mEFCDF2FD5B26441DD210D88B9E0A10C22FA967ED_RuntimeMethod_var);
		L_84->set_smokebomb_12((bool)0);
	}

IL_0244:
	{
		int32_t L_85 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
	}

IL_0248:
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		int32_t L_86 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_87 = V_0;
		if ((((int32_t)L_86) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_87)->max_length))))))
		{
			goto IL_01a0;
		}
	}

IL_0251:
	{
		// }
		return;
	}
}
// System.Void dropItems::Tombstone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems_Tombstone_mFE6922D69961F3E5ADD6861FBD59D66E637D5FC0 (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisOgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF_mEFCDF2FD5B26441DD210D88B9E0A10C22FA967ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisOrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E_m643AFA823BAC8B5B37281E2B6952204AB6A8FED0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1081ADAC6768F9F1C1F8ABEB4319C2FF0B04FDE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE27176AF921CA4E99F64464CFB61C751EE5A4E0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA004A438B484F9894101B1981EA22089542B0C9);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	{
		// timer_Tombstone -= Time.deltaTime;
		float L_0 = __this->get_timer_Tombstone_39();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_Tombstone_39(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// movement_speed_multiplier = 1.5f;
		__this->set_movement_speed_multiplier_12((1.5f));
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2;
		L_2 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00b4;
	}

IL_002f:
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Orc")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_2;
		String_t* L_8;
		L_8 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_7, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_2;
		String_t* L_10;
		L_10 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_9, /*hidden argument*/NULL);
		int32_t L_11;
		L_11 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_10, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_8, 0, L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteral1081ADAC6768F9F1C1F8ABEB4319C2FF0B04FDE3, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0069;
		}
	}
	{
		// enemy.GetComponent<OrcProperties>().player_zombie = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_2;
		OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E * L_15;
		L_15 = GameObject_GetComponent_TisOrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E_m643AFA823BAC8B5B37281E2B6952204AB6A8FED0(L_14, /*hidden argument*/GameObject_GetComponent_TisOrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E_m643AFA823BAC8B5B37281E2B6952204AB6A8FED0_RuntimeMethod_var);
		L_15->set_player_zombie_10((bool)1);
		// }
		goto IL_00b0;
	}

IL_0069:
	{
		// else if (enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Ogre")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_2;
		String_t* L_17;
		L_17 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_16, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_2;
		String_t* L_19;
		L_19 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_18, /*hidden argument*/NULL);
		int32_t L_20;
		L_20 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_19, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_17, 0, L_20, /*hidden argument*/NULL);
		bool L_22;
		L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_21, _stringLiteralEA004A438B484F9894101B1981EA22089542B0C9, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_009f;
		}
	}
	{
		// enemy.GetComponent<OgreProperties>().player_zombie = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = V_2;
		OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF * L_24;
		L_24 = GameObject_GetComponent_TisOgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF_mEFCDF2FD5B26441DD210D88B9E0A10C22FA967ED(L_23, /*hidden argument*/GameObject_GetComponent_TisOgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF_mEFCDF2FD5B26441DD210D88B9E0A10C22FA967ED_RuntimeMethod_var);
		L_24->set_player_zombie_10((bool)1);
		// }
		goto IL_00b0;
	}

IL_009f:
	{
		// else if (enemy.name == "Fector")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = V_2;
		String_t* L_26;
		L_26 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_25, /*hidden argument*/NULL);
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteralE27176AF921CA4E99F64464CFB61C751EE5A4E0B, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00b4:
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		int32_t L_29 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		// if (timer_Tombstone <= 0)
		float L_31 = __this->get_timer_Tombstone_39();
		if ((!(((float)L_31) <= ((float)(0.0f)))))
		{
			goto IL_0173;
		}
	}
	{
		// isTombstone = false;
		__this->set_isTombstone_38((bool)0);
		// timer_Tombstone = timer_Tombstone_Hafiza;
		int32_t L_32 = __this->get_timer_Tombstone_Hafiza_40();
		__this->set_timer_Tombstone_39(((float)((float)L_32)));
		// movement_speed_multiplier = 1;
		__this->set_movement_speed_multiplier_12((1.0f));
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_33;
		L_33 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralB3E1E62B5049FA46C73912F3C9DE97FA6690C968, /*hidden argument*/NULL);
		V_0 = L_33;
		V_1 = 0;
		goto IL_016d;
	}

IL_00fb:
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_34 = V_0;
		int32_t L_35 = V_1;
		int32_t L_36 = L_35;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		V_3 = L_37;
		// if (enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Orc")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = V_3;
		String_t* L_39;
		L_39 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_38, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = V_3;
		String_t* L_41;
		L_41 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_40, /*hidden argument*/NULL);
		int32_t L_42;
		L_42 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_41, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		String_t* L_43;
		L_43 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_39, 0, L_42, /*hidden argument*/NULL);
		bool L_44;
		L_44 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_43, _stringLiteral1081ADAC6768F9F1C1F8ABEB4319C2FF0B04FDE3, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0135;
		}
	}
	{
		// enemy.GetComponent<OrcProperties>().player_zombie = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = V_3;
		OrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E * L_46;
		L_46 = GameObject_GetComponent_TisOrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E_m643AFA823BAC8B5B37281E2B6952204AB6A8FED0(L_45, /*hidden argument*/GameObject_GetComponent_TisOrcProperties_t016FC7170ED6F9687AD903A277379F1E848E8F0E_m643AFA823BAC8B5B37281E2B6952204AB6A8FED0_RuntimeMethod_var);
		L_46->set_player_zombie_10((bool)0);
		// }
		goto IL_0169;
	}

IL_0135:
	{
		// else if (enemy.name.Substring(0, enemy.name.IndexOf("(")) == "Ogre")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = V_3;
		String_t* L_48;
		L_48 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_47, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = V_3;
		String_t* L_50;
		L_50 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_49, /*hidden argument*/NULL);
		int32_t L_51;
		L_51 = String_IndexOf_m90616B2D8ACC645F389750FAE4F9A75BC5D82454(L_50, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		String_t* L_52;
		L_52 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_48, 0, L_51, /*hidden argument*/NULL);
		bool L_53;
		L_53 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_52, _stringLiteralEA004A438B484F9894101B1981EA22089542B0C9, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0169;
		}
	}
	{
		// enemy.GetComponent<OgreProperties>().player_zombie = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54 = V_3;
		OgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF * L_55;
		L_55 = GameObject_GetComponent_TisOgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF_mEFCDF2FD5B26441DD210D88B9E0A10C22FA967ED(L_54, /*hidden argument*/GameObject_GetComponent_TisOgreProperties_t1814CEDA4D66D442D85E02692CB22BC2A2A639EF_mEFCDF2FD5B26441DD210D88B9E0A10C22FA967ED_RuntimeMethod_var);
		L_55->set_player_zombie_10((bool)0);
	}

IL_0169:
	{
		int32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_016d:
	{
		// foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemies"))
		int32_t L_57 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_58 = V_0;
		if ((((int32_t)L_57) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length))))))
		{
			goto IL_00fb;
		}
	}

IL_0173:
	{
		// }
		return;
	}
}
// System.Void dropItems::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dropItems__ctor_mB3F0F2B12B0E37FD87276E9C81D9E27696A72B19 (dropItems_t72EBDEC524F156C9F60B1CA4563AB83333551384 * __this, const RuntimeMethod* method)
{
	{
		// private int timer_Coffee_Hafiza = 8;
		__this->set_timer_Coffee_Hafiza_11(8);
		// [HideInInspector] public float movement_speed_multiplier = 1;
		__this->set_movement_speed_multiplier_12((1.0f));
		// private int timer_HeavyMachineGun_Hafiza = 6;
		__this->set_timer_HeavyMachineGun_Hafiza_15(6);
		// [HideInInspector] public float shooting_speed = 1;
		__this->set_shooting_speed_16((1.0f));
		// private int timer_Shotgun_Hafiza = 6;
		__this->set_timer_Shotgun_Hafiza_19(6);
		// [HideInInspector] public float shotgun_Shooting_Speed = 1;
		__this->set_shotgun_Shooting_Speed_20((1.0f));
		// private int timer_WagonWheel_Hafiza = 6;
		__this->set_timer_WagonWheel_Hafiza_23(6);
		// private int timer_SheriffBadge_Hafiza = 8;
		__this->set_timer_SheriffBadge_Hafiza_26(8);
		// [HideInInspector] public float SheriffBadge_movement_speed_multiplier = 1;
		__this->set_SheriffBadge_movement_speed_multiplier_27((1.0f));
		// [HideInInspector] public float SheriffBadge_Shooting_Speed = 1;
		__this->set_SheriffBadge_Shooting_Speed_28((1.0f));
		// private int timer_SmokeBomb_Hafiza = 2;
		__this->set_timer_SmokeBomb_Hafiza_34(2);
		// private bool checkResult = true;
		__this->set_checkResult_36((bool)1);
		// private int timer_Tombstone_Hafiza = 4;
		__this->set_timer_Tombstone_Hafiza_40(4);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline (float ___d0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a1;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a1;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
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
