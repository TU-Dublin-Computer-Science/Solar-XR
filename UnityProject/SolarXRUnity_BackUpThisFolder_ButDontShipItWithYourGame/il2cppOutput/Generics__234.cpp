#include "pch-cpp.hpp"





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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};

struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct IXRInputValueReader_1_t247E136B8E885FC4E01A4405F0524F47214F4A5B;
struct IXRInputValueReader_1_tE6C56CC3831F86463CF271FFFFAEA88A1AFFC425;
struct IXRInputValueReader_1_t3B292CF89AD3EFA514AD2640799BAD4A06619677;
struct IXRInputValueReader_1_tC86C12DB1216B425E7880781CAFFE046A4E03898;
struct InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD;
struct InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE;
struct InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71;
struct InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5;
struct InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408;
struct InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693;
struct InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB;
struct KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
struct UnityObjectReferenceCache_1_t5037B37A78F59591F798651810A820937FB97158;
struct UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32;
struct UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D;
struct UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A;
struct UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D;
struct UnityObjectReferenceCache_2_tDDA23E8D68929712BE24F100B89ED0291001D0DB;
struct ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81;
struct WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3;
struct WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1;
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234;
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1;
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D;
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7;
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789;
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0;
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8;
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7;
struct XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506;
struct XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2;
struct XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF;
struct XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE;
struct XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C;
struct XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1;
struct XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1;
struct XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35;
struct XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5;
struct XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0;
struct XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F;
struct fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50;
struct fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C;
struct fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108;
struct fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95;
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539;
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388;
struct fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A;
struct fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD;
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
struct EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;
struct RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A;
struct XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59;
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04;
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23;
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668;
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC;
struct Instance_t19B5337286453F132930C383475C4C2BEEDFDE76;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5* ____keys;
	ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81* ____values;
	RuntimeObject* ____syncRoot;
};
struct InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB  : public RuntimeObject
{
	String_t* ___m_Name;
};
struct UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32  : public RuntimeObject
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_CapturedObject;
	RuntimeObject* ___m_Interface;
};
struct UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D  : public RuntimeObject
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_CapturedObject;
	RuntimeObject* ___m_Interface;
};
struct UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A  : public RuntimeObject
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_CapturedObject;
	RuntimeObject* ___m_Interface;
};
struct UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D  : public RuntimeObject
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_CapturedObject;
	RuntimeObject* ___m_Interface;
};
struct WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3  : public RuntimeObject
{
	int32_t ____headIndex;
	int32_t ____tailIndex;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____mask;
	int32_t ____addTakeCount;
	int32_t ____stealCount;
	int32_t ____currentOp;
	bool ____frozen;
	WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* ____nextQueue;
	int32_t ____ownerThreadId;
};
struct WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1  : public RuntimeObject
{
	int32_t ____headIndex;
	int32_t ____tailIndex;
	RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* ____array;
	int32_t ____mask;
	int32_t ____addTakeCount;
	int32_t ____stealCount;
	int32_t ____currentOp;
	bool ____frozen;
	WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* ____nextQueue;
	int32_t ____ownerThreadId;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04  : public RuntimeObject
{
	fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* ___Serializer;
};
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23  : public RuntimeObject
{
	RuntimeObject* ____value;
};
struct BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A 
{
	XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* ___m_Reader;
};
struct BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9 
{
	XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* ___m_Reader;
};
struct BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE 
{
	XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___m_Reader;
};
struct BypassScope_t801793A02437762F196198D282A1980396D8B968 
{
	XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* ___m_Reader;
};
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	int32_t ___length;
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue;
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues;
};
struct InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_t26D677E09A2D69C099167C381EE1EBFD5E8BDD48 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
#define InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com_define
struct InputFeatureUsage_1_t66EDAF8AFFA2E9DDC0248C48B76ADAB8E2728858_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
typedef Il2CppFullySharedGenericStruct fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
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
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	uint64_t ___m_DeviceId;
	bool ___m_Initialized;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId;
	int32_t ___m_Initialized;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId;
	int32_t ___m_Initialized;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	float ___m_Time;
	float ___m_Value;
	float ___m_InTangent;
	float ___m_OutTangent;
	int32_t ___m_WeightedMode;
	float ___m_InWeight;
	float ___m_OutWeight;
};
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	int32_t ___m_Mask;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668  : public fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04
{
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 
{
	bool ____success;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_pinvoke
{
	int32_t ____success;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_com
{
	int32_t ____success;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___Ancestors;
	String_t* ___VersionString;
	Type_t* ___ModelType;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke* ___Ancestors;
	char* ___VersionString;
	Type_t* ___ModelType;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com* ___Ancestors;
	Il2CppChar* ___VersionString;
	Type_t* ___ModelType;
};
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove;
};
struct fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A 
{
	bool ____hasValue;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ____value;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct InputActionType_t7E3615BDDF3C84F39712E5889559D3AD8E773108 
{
	int32_t ___value__;
};
struct InputDeviceCharacteristics_t7BD1A06C6AE9FBD26F4FC105269861694217BD82 
{
	uint32_t ___value__;
};
struct InputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D 
{
	uint32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction;
};
struct Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Origin;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Direction;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct fsDataType_t4DDBD7DB585B530CF852D23D5FF4D9801DDE4A16 
{
	int32_t ___value__;
};
struct ActionFlags_t639BD2944E073F8DD263CE2CA581FC62C401AB1E 
{
	int32_t ___value__;
};
struct Flags_t2ED4EFE461994B03533B3B524C8C2EA71315AAE6 
{
	int32_t ___value__;
};
struct InputSourceMode_tC6F86938AEFC93650B200F13CB1CDF660E091A6C 
{
	int32_t ___value__;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	String_t* ___m_Name;
	String_t* ___m_Id;
	String_t* ___m_Path;
	String_t* ___m_Interactions;
	String_t* ___m_Processors;
	String_t* ___m_Groups;
	String_t* ___m_Action;
	int32_t ___m_Flags;
	String_t* ___m_OverridePath;
	String_t* ___m_OverrideInteractions;
	String_t* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_Id;
	char* ___m_Path;
	char* ___m_Interactions;
	char* ___m_Processors;
	char* ___m_Groups;
	char* ___m_Action;
	int32_t ___m_Flags;
	char* ___m_OverridePath;
	char* ___m_OverrideInteractions;
	char* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_Id;
	Il2CppChar* ___m_Path;
	Il2CppChar* ___m_Interactions;
	Il2CppChar* ___m_Processors;
	Il2CppChar* ___m_Groups;
	Il2CppChar* ___m_Action;
	int32_t ___m_Flags;
	Il2CppChar* ___m_OverridePath;
	Il2CppChar* ___m_OverrideInteractions;
	Il2CppChar* ___m_OverrideProcessors;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59  : public RuntimeObject
{
	int32_t ___m_InputSourceMode;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_InputAction;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_InputActionReference;
	UnityObjectReferenceCache_1_t5037B37A78F59591F798651810A820937FB97158* ___m_InputActionReferenceCache;
};
struct RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 
{
	Instance_t19B5337286453F132930C383475C4C2BEEDFDE76* ___Instance;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Normal;
	float ___Distance;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___Ray;
};
struct RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3_marshaled_pinvoke
{
	Instance_t19B5337286453F132930C383475C4C2BEEDFDE76* ___Instance;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Normal;
	float ___Distance;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___Ray;
};
struct RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3_marshaled_com
{
	Instance_t19B5337286453F132930C383475C4C2BEEDFDE76* ___Instance;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Point;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Normal;
	float ___Distance;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___Ray;
};
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	bool ___hasValue;
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value;
};
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234  : public MulticastDelegate_t
{
};
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1  : public MulticastDelegate_t
{
};
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D  : public MulticastDelegate_t
{
};
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7  : public MulticastDelegate_t
{
};
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789  : public MulticastDelegate_t
{
};
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0  : public MulticastDelegate_t
{
};
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8  : public MulticastDelegate_t
{
};
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7  : public MulticastDelegate_t
{
};
struct XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35  : public XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceObject;
	int32_t ___m_ManualValue;
	RuntimeObject* ___U3CbypassU3Ek__BackingField;
	bool ___m_CallingBypass;
	UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* ___m_ObjectReference;
};
struct XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5  : public XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceObject;
	float ___m_ManualValue;
	RuntimeObject* ___U3CbypassU3Ek__BackingField;
	bool ___m_CallingBypass;
	UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* ___m_ObjectReference;
};
struct XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0  : public XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceObject;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ManualValue;
	RuntimeObject* ___U3CbypassU3Ek__BackingField;
	bool ___m_CallingBypass;
	UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* ___m_ObjectReference;
};
struct XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F : public XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59 {};
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	String_t* ___m_ActionId;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	uint32_t ___m_Characteristics;
};
struct XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1  : public XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A
{
	InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* ___m_Usage;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice;
};
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	String_t* ___m_Name;
	int32_t ___m_Type;
	String_t* ___m_ExpectedControlType;
	String_t* ___m_Id;
	String_t* ___m_Processors;
	String_t* ___m_Interactions;
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings;
	int32_t ___m_Flags;
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask;
	int32_t ___m_BindingsStartIndex;
	int32_t ___m_BindingsCount;
	int32_t ___m_ControlStartIndex;
	int32_t ___m_ControlCount;
	int32_t ___m_ActionIndexInState;
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_StaticFields
{
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___True;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___False;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___Null;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyStringArray;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___Success;
};
struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A_StaticFields
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A ___Empty;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputActionEnableProfilerMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputActionDisableProfilerMarker;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 m_Items[1];

	inline RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Instance), (void*)NULL);
	}
	inline RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Instance), (void*)NULL);
	}
};
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_get_DangerousCount_m6CFF0C24696F92520405A031CCDC09D51322172C_gshared (WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_gshared_inline (InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_gshared (InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_gshared (InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_gshared (InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_gshared (InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_gshared (InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_gshared (InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m328744E659539C22CA4AE68536AB2C68C2D7EA1C_gshared (InputFeatureUsage_1_t26D677E09A2D69C099167C381EE1EBFD5E8BDD48* __this, String_t* ___0_usageName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_gshared_inline (InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_gshared_inline (InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_gshared_inline (InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_gshared_inline (InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_gshared_inline (InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectReferenceCache_2__ctor_mC730139AB089ECA2FDF57B0ED0F5787D3A645A76_gshared (UnityObjectReferenceCache_2_tDDA23E8D68929712BE24F100B89ED0291001D0DB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityObjectReferenceCache_2_Get_mD207A47F306631DFF54E2DB96937C2CB8C268B89_gshared (UnityObjectReferenceCache_2_tDDA23E8D68929712BE24F100B89ED0291001D0DB* __this, RuntimeObject* ___0_field, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectReferenceCache_2_Set_mD396221283F2C35D820D096F1D1B74C1D3ACB36D_gshared (UnityObjectReferenceCache_2_tDDA23E8D68929712BE24F100B89ED0291001D0DB* __this, RuntimeObject** ___0_field, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_gshared_inline (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope__ctor_m4C69A76D4AC77A2B9614EE057AF15FE52C0DE38A_gshared (BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A* __this, XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_m5CD3B43095C61AFF9874DDD86DB1293A28EEAFDE_gshared (BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputValueReader_1_ReadValue_m69F588B9F23BE20A2F69B2E6C97BE921C393621D_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_mF793A106D82436FDD5CBE61E6BF37664A724A6FB_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m200FF50062D6428E69A621FA999E32B2D3B70FD6_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, int32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputAction_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE5E9DB38576465AB81987CCC701100CC64849541_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_gshared_inline (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0_gshared (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9* __this, XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4_gshared (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, float* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_gshared_inline (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4_gshared (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE* __this, XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___0_reader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70_gshared (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40_gshared (BypassScope_t801793A02437762F196198D282A1980396D8B968* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF (int32_t* ___0_location1, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Interlocked_Increment_m12CD643CCD5FCDE95DBC0AB07D09AF696E26F9C0 (int64_t* ___0_location, const RuntimeMethod* method) ;
inline int32_t WorkStealingQueue_get_DangerousCount_m6CFF0C24696F92520405A031CCDC09D51322172C (WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1*, const RuntimeMethod*))WorkStealingQueue_get_DangerousCount_m6CFF0C24696F92520405A031CCDC09D51322172C_gshared)(__this, method);
}
inline bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81 (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506*, const RuntimeMethod*))XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81_gshared)(__this, method);
}
inline String_t* InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline (InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD*, const RuntimeMethod*))InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_gshared_inline)(__this, method);
}
inline void InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7 (InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637* __this, String_t* ___0_usageName, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_gshared)(__this, ___0_usageName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 ___0_usage, bool* ___1_value, const RuntimeMethod* method) ;
inline void InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0 (InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE* __this, String_t* ___0_usageName, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_gshared)(__this, ___0_usageName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE ___0_usage, uint32_t* ___1_value, const RuntimeMethod* method) ;
inline void InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989 (InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848* __this, String_t* ___0_usageName, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_gshared)(__this, ___0_usageName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 ___0_usage, float* ___1_value, const RuntimeMethod* method) ;
inline void InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A (InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C* __this, String_t* ___0_usageName, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_gshared)(__this, ___0_usageName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C ___0_usage, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_value, const RuntimeMethod* method) ;
inline void InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA (InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58* __this, String_t* ___0_usageName, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_gshared)(__this, ___0_usageName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 ___0_usage, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_value, const RuntimeMethod* method) ;
inline void InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08 (InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D* __this, String_t* ___0_usageName, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_gshared)(__this, ___0_usageName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D ___0_usage, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_value, const RuntimeMethod* method) ;
inline void InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55 (InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9* __this, String_t* ___0_usageName, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9*, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m328744E659539C22CA4AE68536AB2C68C2D7EA1C_gshared)(__this, ___0_usageName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 ___0_usage, uint32_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948 (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A (uint32_t ___0_desiredCharacteristics, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___1_inputDevice, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader__ctor_m5F34B83F8DA1BD97773ED8301A966D2E2891F757 (XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A* __this, const RuntimeMethod* method) ;
inline bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419 (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2*, const RuntimeMethod*))XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419_gshared)(__this, method);
}
inline String_t* InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline (InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE*, const RuntimeMethod*))InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_gshared_inline)(__this, method);
}
inline bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98 (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF*, const RuntimeMethod*))XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98_gshared)(__this, method);
}
inline String_t* InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline (InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71*, const RuntimeMethod*))InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_gshared_inline)(__this, method);
}
inline bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9 (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE*, const RuntimeMethod*))XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9_gshared)(__this, method);
}
inline String_t* InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline (InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5*, const RuntimeMethod*))InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_gshared_inline)(__this, method);
}
inline bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932 (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C*, const RuntimeMethod*))XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932_gshared)(__this, method);
}
inline String_t* InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline (InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408*, const RuntimeMethod*))InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_gshared_inline)(__this, method);
}
inline bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1*, const RuntimeMethod*))XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B_gshared)(__this, method);
}
inline String_t* InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline (InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693*, const RuntimeMethod*))InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_gshared_inline)(__this, method);
}
inline void UnityObjectReferenceCache_2__ctor_mFC34A00A55B01C497AD043B6A61F3B7107C6B867 (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32*, const RuntimeMethod*))UnityObjectReferenceCache_2__ctor_mC730139AB089ECA2FDF57B0ED0F5787D3A645A76_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296 (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032 (Type_t* ___0_valueType, String_t* ___1_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_inputAction, int32_t ___1_inputSourceMode, const RuntimeMethod* method) ;
inline RuntimeObject* UnityObjectReferenceCache_2_Get_m93904A06D8A8D4DDBE09F1534B2FA036A5458AE4 (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_field, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))UnityObjectReferenceCache_2_Get_mD207A47F306631DFF54E2DB96937C2CB8C268B89_gshared)(__this, ___0_field, method);
}
inline void UnityObjectReferenceCache_2_Set_m14A85ED1105C25F3BF5BEB85F10E2C8B01D829C1 (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___0_field, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, RuntimeObject*, const RuntimeMethod*))UnityObjectReferenceCache_2_Set_mD396221283F2C35D820D096F1D1B74C1D3ACB36D_gshared)(__this, ___0_field, ___1_value, method);
}
inline RuntimeObject* XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_inline (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35*, const RuntimeMethod*))XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_gshared_inline)(__this, method);
}
inline void BypassScope__ctor_m4C69A76D4AC77A2B9614EE057AF15FE52C0DE38A (BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A* __this, XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* ___0_reader, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A*, XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35*, const RuntimeMethod*))BypassScope__ctor_m4C69A76D4AC77A2B9614EE057AF15FE52C0DE38A_gshared)(__this, ___0_reader, method);
}
inline void BypassScope_Dispose_m5CD3B43095C61AFF9874DDD86DB1293A28EEAFDE (BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A* __this, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A*, const RuntimeMethod*))BypassScope_Dispose_m5CD3B43095C61AFF9874DDD86DB1293A28EEAFDE_gshared)(__this, method);
}
inline int32_t XRInputValueReader_1_ReadValue_m69F588B9F23BE20A2F69B2E6C97BE921C393621D (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))XRInputValueReader_1_ReadValue_m69F588B9F23BE20A2F69B2E6C97BE921C393621D_gshared)(___0_action, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806 (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1** ___0_reference, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
inline RuntimeObject* XRInputValueReader_1_GetObjectReference_mF793A106D82436FDD5CBE61E6BF37664A724A6FB (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35*, const RuntimeMethod*))XRInputValueReader_1_GetObjectReference_mF793A106D82436FDD5CBE61E6BF37664A724A6FB_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, const RuntimeMethod* method) ;
inline bool XRInputValueReader_1_TryReadValue_m200FF50062D6428E69A621FA999E32B2D3B70FD6 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, int32_t*, const RuntimeMethod*))XRInputValueReader_1_TryReadValue_m200FF50062D6428E69A621FA999E32B2D3B70FD6_gshared)(___0_action, ___1_value, method);
}
inline int32_t InputAction_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE5E9DB38576465AB81987CCC701100CC64849541 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE5E9DB38576465AB81987CCC701100CC64849541_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
inline void UnityObjectReferenceCache_2__ctor_m2EDFEE2809AA3F7C399BB70520017AE60837C6C0 (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*, const RuntimeMethod*))UnityObjectReferenceCache_2__ctor_mC730139AB089ECA2FDF57B0ED0F5787D3A645A76_gshared)(__this, method);
}
inline RuntimeObject* UnityObjectReferenceCache_2_Get_m99CF6D170B41DABEAF641BF1B69DA3CDB57C0241 (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_field, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))UnityObjectReferenceCache_2_Get_mD207A47F306631DFF54E2DB96937C2CB8C268B89_gshared)(__this, ___0_field, method);
}
inline void UnityObjectReferenceCache_2_Set_m8C0EC3C498F45A3866B00A2177E77C4E89CDF80C (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___0_field, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, RuntimeObject*, const RuntimeMethod*))UnityObjectReferenceCache_2_Set_mD396221283F2C35D820D096F1D1B74C1D3ACB36D_gshared)(__this, ___0_field, ___1_value, method);
}
inline RuntimeObject* XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5*, const RuntimeMethod*))XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_gshared_inline)(__this, method);
}
inline void BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0 (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9* __this, XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* ___0_reader, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9*, XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5*, const RuntimeMethod*))BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0_gshared)(__this, ___0_reader, method);
}
inline void BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4 (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9* __this, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9*, const RuntimeMethod*))BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4_gshared)(__this, method);
}
inline float XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1_gshared)(___0_action, method);
}
inline RuntimeObject* XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5*, const RuntimeMethod*))XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE_gshared)(__this, method);
}
inline bool XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, float* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, float*, const RuntimeMethod*))XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A_gshared)(___0_action, ___1_value, method);
}
inline float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared)(__this, method);
}
inline void UnityObjectReferenceCache_2__ctor_m98710579A55696E09E2140BF1470555A98299FE7 (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*, const RuntimeMethod*))UnityObjectReferenceCache_2__ctor_mC730139AB089ECA2FDF57B0ED0F5787D3A645A76_gshared)(__this, method);
}
inline RuntimeObject* UnityObjectReferenceCache_2_Get_mDFBF27054C7DCD19C3F6304A19B3D58B2AE3C460 (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_field, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))UnityObjectReferenceCache_2_Get_mD207A47F306631DFF54E2DB96937C2CB8C268B89_gshared)(__this, ___0_field, method);
}
inline void UnityObjectReferenceCache_2_Set_m355C3094DD9F9C03A7435749218114D5C3EC7B0C (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___0_field, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, RuntimeObject*, const RuntimeMethod*))UnityObjectReferenceCache_2_Set_mD396221283F2C35D820D096F1D1B74C1D3ACB36D_gshared)(__this, ___0_field, ___1_value, method);
}
inline RuntimeObject* XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0*, const RuntimeMethod*))XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_gshared_inline)(__this, method);
}
inline void BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4 (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE* __this, XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* ___0_reader, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE*, XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0*, const RuntimeMethod*))BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4_gshared)(__this, ___0_reader, method);
}
inline void BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70 (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE* __this, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE*, const RuntimeMethod*))BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70_gshared)(__this, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D_gshared)(___0_action, method);
}
inline RuntimeObject* XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350 (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0*, const RuntimeMethod*))XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350_gshared)(__this, method);
}
inline bool XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, const RuntimeMethod*))XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D_gshared)(___0_action, ___1_value, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared)(__this, method);
}
inline void BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40 (BypassScope_t801793A02437762F196198D282A1980396D8B968* __this, const RuntimeMethod* method)
{
	((  void (*) (BypassScope_t801793A02437762F196198D282A1980396D8B968*, const RuntimeMethod*))BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40_gshared)(__this, method);
}
inline void Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04 (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___0_dict, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32 (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___0_a, fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1 (fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668* __this, const RuntimeMethod* method) ;
inline bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline)(__this, method);
}
inline bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767 (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, il2cppRetVal, method);
}
inline void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516 (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, Il2CppFullySharedGenericAny, const RuntimeMethod*))fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, ___0_value, method);
}
inline bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline)(__this, method);
}
inline bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared)(__this, method);
}
inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared)(__this, method);
}
inline void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8, const RuntimeMethod*))fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared)(__this, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 86789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue__ctor_mE0C0D6BEE2FB579DFAB968AEDB4BF1373A811EF1_gshared (WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* __this, WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* ___0_nextQueue, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)((int32_t)32));
		il2cpp_codegen_memory_barrier();
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		il2cpp_codegen_memory_barrier();
		__this->____mask = ((int32_t)31);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->____ownerThreadId = L_1;
		WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* L_2 = ___0_nextQueue;
		__this->____nextQueue = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nextQueue), (void*)L_2);
		return;
	}
}
// Method Definition Index: 86790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue_LocalPush_m3DD3B524B0B5334F07A5826E44963BBA0FD6ABAD_gshared (WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* __this, Il2CppFullySharedGenericAny ___0_item, int64_t* ___1_emptyToNonEmptyListTransitionCount, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
	const Il2CppFullySharedGenericAny L_57 = L_25;
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_6 = NULL;
	int32_t V_7 = 0;
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0203:
			{
				{
					il2cpp_codegen_memory_barrier();
					__this->____currentOp = 0;
					bool L_0 = V_0;
					if (!L_0)
					{
						goto IL_0215;
					}
				}
				{
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
				}

IL_0215:
				{
					return;
				}
			}
		});
		try
		{
			{
				int32_t* L_1 = (int32_t*)(&__this->____currentOp);
				il2cpp_codegen_memory_barrier();
				int32_t L_2;
				L_2 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_1, 1, NULL);
				int32_t L_3 = __this->____tailIndex;
				il2cpp_codegen_memory_barrier();
				V_1 = L_3;
				int32_t L_4 = V_1;
				if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)2147483647LL)))))
				{
					goto IL_007d_1;
				}
			}
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp = 0;
				V_3 = __this;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0072_1:
					{
						{
							bool L_5 = V_4;
							if (!L_5)
							{
								goto IL_007c_1;
							}
						}
						{
							WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* L_6 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_6, NULL);
						}

IL_007c_1:
						{
							return;
						}
					}
				});
				try
				{
					WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* L_7 = V_3;
					Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_7, (&V_4), NULL);
					int32_t L_8 = __this->____headIndex;
					il2cpp_codegen_memory_barrier();
					int32_t L_9 = __this->____mask;
					il2cpp_codegen_memory_barrier();
					il2cpp_codegen_memory_barrier();
					__this->____headIndex = ((int32_t)(L_8&L_9));
					int32_t L_10 = V_1;
					int32_t L_11 = __this->____mask;
					il2cpp_codegen_memory_barrier();
					int32_t L_12 = ((int32_t)(L_10&L_11));
					V_1 = L_12;
					il2cpp_codegen_memory_barrier();
					__this->____tailIndex = L_12;
					int32_t* L_13 = (int32_t*)(&__this->____currentOp);
					il2cpp_codegen_memory_barrier();
					int32_t L_14;
					L_14 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_13, 1, NULL);
					goto IL_007d_1;
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_007d_1:
			{
				int32_t L_15 = __this->____headIndex;
				il2cpp_codegen_memory_barrier();
				V_2 = L_15;
				bool L_16 = __this->____frozen;
				if (L_16)
				{
					goto IL_00cc_1;
				}
			}
			{
				int32_t L_17 = V_2;
				int32_t L_18 = V_1;
				int32_t L_19 = V_1;
				int32_t L_20 = V_2;
				int32_t L_21 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				if (!((int32_t)(((((int32_t)L_17) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, 1))))? 1 : 0)&((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_add(L_20, L_21))))? 1 : 0))))
				{
					goto IL_00cc_1;
				}
			}
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = __this->____array;
				il2cpp_codegen_memory_barrier();
				int32_t L_23 = V_1;
				int32_t L_24 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_memcpy(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_item : &___0_item), SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
				NullCheck(L_22);
				il2cpp_codegen_memcpy((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&L_24)))), L_25, SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (void**)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&L_24)))), (void*)L_25);
				int32_t L_26 = V_1;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex = ((int32_t)il2cpp_codegen_add(L_26, 1));
				goto IL_01f3_1;
			}

IL_00cc_1:
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp = 0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)__this, (&V_0), NULL);
				int32_t L_27 = __this->____headIndex;
				il2cpp_codegen_memory_barrier();
				V_2 = L_27;
				int32_t L_28 = V_1;
				int32_t L_29 = V_2;
				V_5 = ((int32_t)il2cpp_codegen_subtract(L_28, L_29));
				int32_t L_30 = V_5;
				int32_t L_31 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				if ((((int32_t)L_30) < ((int32_t)L_31)))
				{
					goto IL_01ab_1;
				}
			}
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_32);
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_32)->max_length))<<1)));
				V_6 = L_33;
				int32_t L_34 = V_2;
				int32_t L_35 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				V_7 = ((int32_t)(L_34&L_35));
				int32_t L_36 = V_7;
				if (L_36)
				{
					goto IL_013a_1;
				}
			}
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_37 = __this->____array;
				il2cpp_codegen_memory_barrier();
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = V_6;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_39 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_39);
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, 0, ((int32_t)(((RuntimeArray*)L_39)->max_length)), NULL);
				goto IL_0178_1;
			}

IL_013a_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_40 = __this->____array;
				il2cpp_codegen_memory_barrier();
				int32_t L_41 = V_7;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42 = V_6;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_43 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_43);
				int32_t L_44 = V_7;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_40, L_41, (RuntimeArray*)L_42, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_43)->max_length)), L_44)), NULL);
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_45 = __this->____array;
				il2cpp_codegen_memory_barrier();
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_46 = V_6;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_47 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_47);
				int32_t L_48 = V_7;
				int32_t L_49 = V_7;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_45, 0, (RuntimeArray*)L_46, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_47)->max_length)), L_48)), L_49, NULL);
			}

IL_0178_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_50 = V_6;
				il2cpp_codegen_memory_barrier();
				__this->____array = L_50;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_50);
				il2cpp_codegen_memory_barrier();
				__this->____headIndex = 0;
				int32_t L_51 = V_5;
				int32_t L_52 = L_51;
				V_1 = L_52;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex = L_52;
				int32_t L_53 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_memory_barrier();
				__this->____mask = ((int32_t)(((int32_t)(L_53<<1))|1));
			}

IL_01ab_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_54 = __this->____array;
				il2cpp_codegen_memory_barrier();
				int32_t L_55 = V_1;
				int32_t L_56 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_memcpy(L_57, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_item : &___0_item), SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
				NullCheck(L_54);
				il2cpp_codegen_memcpy((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_55&L_56)))), L_57, SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (void**)(L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_55&L_56)))), (void*)L_57);
				int32_t L_58 = V_1;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex = ((int32_t)il2cpp_codegen_add(L_58, 1));
				int32_t L_59 = V_5;
				if (L_59)
				{
					goto IL_01d9_1;
				}
			}
			{
				int64_t* L_60 = ___1_emptyToNonEmptyListTransitionCount;
				int64_t L_61;
				L_61 = Interlocked_Increment_m12CD643CCD5FCDE95DBC0AB07D09AF696E26F9C0(L_60, NULL);
			}

IL_01d9_1:
			{
				int32_t L_62 = __this->____addTakeCount;
				int32_t L_63 = __this->____stealCount;
				__this->____addTakeCount = ((int32_t)il2cpp_codegen_subtract(L_62, L_63));
				__this->____stealCount = 0;
			}

IL_01f3_1:
			{
				int32_t L_64 = __this->____addTakeCount;
				if (((int64_t)L_64 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_64 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->____addTakeCount = ((int32_t)il2cpp_codegen_add(L_64, 1));
				goto IL_0216;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0216:
	{
		return;
	}
}
// Method Definition Index: 86791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_DangerousCopyTo_m45F80B1FF0D38F1BE0A0315B1F48501D81284F06_gshared (WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____headIndex;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_1 = L_1;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_2, L_3)), 1));
		goto IL_003e;
	}

IL_0018:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		int32_t L_5 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____array;
		il2cpp_codegen_memory_barrier();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = __this->____mask;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)(L_8&L_9));
		il2cpp_codegen_memcpy(L_11, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_11, SizeOf_T_t17EBD739EED235CAB9EDAFF648A720C8D45BCBF1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_003e:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___1_arrayIndex;
		if ((((int32_t)L_13) >= ((int32_t)L_14)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
// Method Definition Index: 86792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_get_DangerousCount_m1BC6D29975BB205B49F508FF41A9C4AE59E0F6FA_gshared (WorkStealingQueue_t22AD7C39FB7ED4674B33265814255B725DA76AC3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____addTakeCount;
		int32_t L_1 = __this->____stealCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
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
// Method Definition Index: 86789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue__ctor_m59EAE8C0FE22C80EFF4DB52C31640ABC932E9710_gshared (WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* __this, WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* ___0_nextQueue, const RuntimeMethod* method) 
{
	{
		RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_0 = (RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8*)(RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)((int32_t)32));
		il2cpp_codegen_memory_barrier();
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		il2cpp_codegen_memory_barrier();
		__this->____mask = ((int32_t)31);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->____ownerThreadId = L_1;
		WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* L_2 = ___0_nextQueue;
		__this->____nextQueue = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nextQueue), (void*)L_2);
		return;
	}
}
// Method Definition Index: 86790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue_LocalPush_m18AC418E10A17B97D8A79C8EC1230E54CAB92410_gshared (WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* __this, RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 ___0_item, int64_t* ___1_emptyToNonEmptyListTransitionCount, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* V_6 = NULL;
	int32_t V_7 = 0;
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0203:
			{
				{
					il2cpp_codegen_memory_barrier();
					__this->____currentOp = 0;
					bool L_0 = V_0;
					if (!L_0)
					{
						goto IL_0215;
					}
				}
				{
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
				}

IL_0215:
				{
					return;
				}
			}
		});
		try
		{
			{
				int32_t* L_1 = (int32_t*)(&__this->____currentOp);
				il2cpp_codegen_memory_barrier();
				int32_t L_2;
				L_2 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_1, 1, NULL);
				int32_t L_3 = __this->____tailIndex;
				il2cpp_codegen_memory_barrier();
				V_1 = L_3;
				int32_t L_4 = V_1;
				if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)2147483647LL)))))
				{
					goto IL_007d_1;
				}
			}
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp = 0;
				V_3 = __this;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0072_1:
					{
						{
							bool L_5 = V_4;
							if (!L_5)
							{
								goto IL_007c_1;
							}
						}
						{
							WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* L_6 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_6, NULL);
						}

IL_007c_1:
						{
							return;
						}
					}
				});
				try
				{
					WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* L_7 = V_3;
					Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_7, (&V_4), NULL);
					int32_t L_8 = __this->____headIndex;
					il2cpp_codegen_memory_barrier();
					int32_t L_9 = __this->____mask;
					il2cpp_codegen_memory_barrier();
					il2cpp_codegen_memory_barrier();
					__this->____headIndex = ((int32_t)(L_8&L_9));
					int32_t L_10 = V_1;
					int32_t L_11 = __this->____mask;
					il2cpp_codegen_memory_barrier();
					int32_t L_12 = ((int32_t)(L_10&L_11));
					V_1 = L_12;
					il2cpp_codegen_memory_barrier();
					__this->____tailIndex = L_12;
					int32_t* L_13 = (int32_t*)(&__this->____currentOp);
					il2cpp_codegen_memory_barrier();
					int32_t L_14;
					L_14 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_13, 1, NULL);
					goto IL_007d_1;
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_007d_1:
			{
				int32_t L_15 = __this->____headIndex;
				il2cpp_codegen_memory_barrier();
				V_2 = L_15;
				bool L_16 = __this->____frozen;
				if (L_16)
				{
					goto IL_00cc_1;
				}
			}
			{
				int32_t L_17 = V_2;
				int32_t L_18 = V_1;
				int32_t L_19 = V_1;
				int32_t L_20 = V_2;
				int32_t L_21 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				if (!((int32_t)(((((int32_t)L_17) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, 1))))? 1 : 0)&((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_add(L_20, L_21))))? 1 : 0))))
				{
					goto IL_00cc_1;
				}
			}
			{
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_22 = __this->____array;
				il2cpp_codegen_memory_barrier();
				int32_t L_23 = V_1;
				int32_t L_24 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 L_25 = ___0_item;
				NullCheck(L_22);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&L_24))), (RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3)L_25);
				int32_t L_26 = V_1;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex = ((int32_t)il2cpp_codegen_add(L_26, 1));
				goto IL_01f3_1;
			}

IL_00cc_1:
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp = 0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)__this, (&V_0), NULL);
				int32_t L_27 = __this->____headIndex;
				il2cpp_codegen_memory_barrier();
				V_2 = L_27;
				int32_t L_28 = V_1;
				int32_t L_29 = V_2;
				V_5 = ((int32_t)il2cpp_codegen_subtract(L_28, L_29));
				int32_t L_30 = V_5;
				int32_t L_31 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				if ((((int32_t)L_30) < ((int32_t)L_31)))
				{
					goto IL_01ab_1;
				}
			}
			{
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_32 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_32);
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_33 = (RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8*)(RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_32)->max_length))<<1)));
				V_6 = L_33;
				int32_t L_34 = V_2;
				int32_t L_35 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				V_7 = ((int32_t)(L_34&L_35));
				int32_t L_36 = V_7;
				if (L_36)
				{
					goto IL_013a_1;
				}
			}
			{
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_37 = __this->____array;
				il2cpp_codegen_memory_barrier();
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_38 = V_6;
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_39 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_39);
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, 0, ((int32_t)(((RuntimeArray*)L_39)->max_length)), NULL);
				goto IL_0178_1;
			}

IL_013a_1:
			{
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_40 = __this->____array;
				il2cpp_codegen_memory_barrier();
				int32_t L_41 = V_7;
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_42 = V_6;
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_43 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_43);
				int32_t L_44 = V_7;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_40, L_41, (RuntimeArray*)L_42, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_43)->max_length)), L_44)), NULL);
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_45 = __this->____array;
				il2cpp_codegen_memory_barrier();
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_46 = V_6;
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_47 = __this->____array;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_47);
				int32_t L_48 = V_7;
				int32_t L_49 = V_7;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_45, 0, (RuntimeArray*)L_46, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_47)->max_length)), L_48)), L_49, NULL);
			}

IL_0178_1:
			{
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_50 = V_6;
				il2cpp_codegen_memory_barrier();
				__this->____array = L_50;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_50);
				il2cpp_codegen_memory_barrier();
				__this->____headIndex = 0;
				int32_t L_51 = V_5;
				int32_t L_52 = L_51;
				V_1 = L_52;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex = L_52;
				int32_t L_53 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_memory_barrier();
				__this->____mask = ((int32_t)(((int32_t)(L_53<<1))|1));
			}

IL_01ab_1:
			{
				RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_54 = __this->____array;
				il2cpp_codegen_memory_barrier();
				int32_t L_55 = V_1;
				int32_t L_56 = __this->____mask;
				il2cpp_codegen_memory_barrier();
				RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 L_57 = ___0_item;
				NullCheck(L_54);
				(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_55&L_56))), (RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3)L_57);
				int32_t L_58 = V_1;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex = ((int32_t)il2cpp_codegen_add(L_58, 1));
				int32_t L_59 = V_5;
				if (L_59)
				{
					goto IL_01d9_1;
				}
			}
			{
				int64_t* L_60 = ___1_emptyToNonEmptyListTransitionCount;
				int64_t L_61;
				L_61 = Interlocked_Increment_m12CD643CCD5FCDE95DBC0AB07D09AF696E26F9C0(L_60, NULL);
			}

IL_01d9_1:
			{
				int32_t L_62 = __this->____addTakeCount;
				int32_t L_63 = __this->____stealCount;
				__this->____addTakeCount = ((int32_t)il2cpp_codegen_subtract(L_62, L_63));
				__this->____stealCount = 0;
			}

IL_01f3_1:
			{
				int32_t L_64 = __this->____addTakeCount;
				if (((int64_t)L_64 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_64 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->____addTakeCount = ((int32_t)il2cpp_codegen_add(L_64, 1));
				goto IL_0216;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0216:
	{
		return;
	}
}
// Method Definition Index: 86791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_DangerousCopyTo_m91886FB71EEA8A0DAF688C94076C6ECD30CABAB6_gshared (WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* __this, RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____headIndex;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		int32_t L_1;
		L_1 = WorkStealingQueue_get_DangerousCount_m6CFF0C24696F92520405A031CCDC09D51322172C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		V_1 = L_1;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_2, L_3)), 1));
		goto IL_003e;
	}

IL_0018:
	{
		RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_4 = ___0_array;
		int32_t L_5 = V_2;
		RaycastHitU5BU5D_t6E2A605883D7BD3FF850663BAE7F4955C4DEB1D8* L_6 = __this->____array;
		il2cpp_codegen_memory_barrier();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = __this->____mask;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)(L_8&L_9));
		RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3 L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RaycastHit_t0F2F87253E9BCC5DF6A41D77664C09357858ECF3)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_003e:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___1_arrayIndex;
		if ((((int32_t)L_13) >= ((int32_t)L_14)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
// Method Definition Index: 86792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_get_DangerousCount_m6CFF0C24696F92520405A031CCDC09D51322172C_gshared (WorkStealingQueue_t6FB3A6C8FE9EF7A3014BD803AA7C658350C58FD1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____addTakeCount;
		int32_t L_1 = __this->____stealCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
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
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* currentDelegate = reinterpret_cast<WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
// Method Definition Index: 13203
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m630834333CB7AE51AB01F7713157EE57991D03D7_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast;
}
// Method Definition Index: 13204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* currentDelegate = reinterpret_cast<WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
// Method Definition Index: 13203
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m2AA9BE88F67A2DA68720D6B5F2AFFA89E23BB597_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast;
}
// Method Definition Index: 13204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* currentDelegate = reinterpret_cast<WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
// Method Definition Index: 13203
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m4F33ED7C62B9E61B33CC81A7B5C739D0396BC209_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast;
}
// Method Definition Index: 13204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* currentDelegate = reinterpret_cast<WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
// Method Definition Index: 13203
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m1067E857FEE330354C23F3DB8C7B30143BCA679D_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast;
}
// Method Definition Index: 13204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* currentDelegate = reinterpret_cast<WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
// Method Definition Index: 13203
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mC9073752A9F993A89037EB0FCF8968BCB14AE3A3_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast;
}
// Method Definition Index: 13204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* currentDelegate = reinterpret_cast<WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
// Method Definition Index: 13203
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mAA1CB4066F7346F24DA38ED5A1240309F0C4BC60_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast;
}
// Method Definition Index: 13204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* currentDelegate = reinterpret_cast<WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
// Method Definition Index: 13203
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m6165AFE856EC0CC9CDE8A145B404312481261696_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast;
}
// Method Definition Index: 13204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* currentDelegate = reinterpret_cast<WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	NullCheck(___0_val);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_val, ___1_fieldValue);
}
// Method Definition Index: 13203
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mCE6F306923A685DD2E41E1BAABB666E0F7B4E137_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast;
}
// Method Definition Index: 13204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 29730
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* XRInputDeviceValueReader_1_get_usage_mF0A9AE7573FC38F88BC2A539F4C8C9275B2A76D0_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:49>
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_0 = __this->___m_Usage;
		return L_0;
	}
}
// Method Definition Index: 29731
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1_set_usage_mC22455AB744A37C346A324A998574F6DB04E14D3_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:50>
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_0 = ___0_value;
		__this->___m_Usage = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Usage), (void*)L_0);
		return;
	}
}
// Method Definition Index: 29734
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_m0B20C50D68647794E8ABF10EE0B6D65CD140BBA1_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:67>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:68>
		bool L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:70>
		V_2 = (bool)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:71>
		bool L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29735
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_m54D121360DE7AD9452CC57703FE12C16072EFD88_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:79>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:80>
		uint32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:82>
		V_2 = (uint32_t)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:83>
		uint32_t L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29736
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_mCF2A56E6DCE4E105BCE9854F74BB105BFF1932B9_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:91>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:92>
		float L_7 = V_0;
		V_2 = L_7;
		goto IL_0039;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:94>
		V_2 = (0.0f);
		goto IL_0039;
	}

IL_0039:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:95>
		float L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29737
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_m282A750480083614F0683E4C0EE16A2CAF3F61EA_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:103>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:104>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:106>
		il2cpp_codegen_initobj((&V_3), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:107>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29738
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_mF1C33E2BF83C16671480514FFC6121811DE4349B_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:115>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:116>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:118>
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:119>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29739
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_m80FD7BEA8C9AD2F70E6D28F1B03DDE588D3942AF_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:127>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:128>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:130>
		il2cpp_codegen_initobj((&V_3), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:131>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29740
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_m3176E9B649FC143DE33EF339F248372AB8D9B6B4_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:139>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:140>
		uint32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:142>
		V_2 = (uint32_t)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:143>
		uint32_t L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29741
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_m9D19A7376E0AE9680F3223D4DEAAC297A0E39991_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:152>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:153>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:155>
		bool* L_8 = ___0_value;
		*((int8_t*)L_8) = (int8_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:156>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:157>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29742
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_mF769CE8E9E7218AE9AF381A08E1FEFF03696C7C9_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:166>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:167>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:169>
		uint32_t* L_8 = ___0_value;
		*((int32_t*)L_8) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:170>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:171>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29743
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_m80D898D043C7FA4CC3A7F3E841E5BB28C5F405FD_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, float* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:180>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:181>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:183>
		float* L_8 = ___0_value;
		*((float*)L_8) = (float)(0.0f);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:184>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:185>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29744
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_mAF77C736BED5C384445A1B75A7BF8D193312AA2C_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:194>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:195>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:197>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:198>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:199>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29745
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_m4F28C01418E4915E0396925FD73D269B0854CA17_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:208>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:209>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:211>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:212>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:213>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29746
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m4AD5DD99F3E2F43717E9E5A4695D5E3A01CDEA05_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:222>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:223>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:225>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:226>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:227>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29747
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m159AC502BF07E75AE54CC1BA4B4E41B5905E4377_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:236>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:237>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:239>
		uint32_t* L_8 = ___0_value;
		*((int32_t*)L_8) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:240>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:241>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29748
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mF312ADF2A82FB90388D4DCB94C6AC2B3444D7C81_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:250>
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_1;
		L_1 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_0, NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_2 = ((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this)->___m_Characteristics;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_4;
		L_4 = XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A(L_2, L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:251>
		bool L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 29749
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1__ctor_m3A04BEFA6C6B160463A36D46503E086A9EBF554D_gshared (XRInputDeviceValueReader_1_t0ED6AE29E22B31E0EE62B83D4324BDE4D1436506* __this, const RuntimeMethod* method) 
{
	{
		XRInputDeviceValueReader__ctor_m5F34B83F8DA1BD97773ED8301A966D2E2891F757((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this, NULL);
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
// Method Definition Index: 29730
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* XRInputDeviceValueReader_1_get_usage_m38D2C347947260D301DBEE9FBB7121544B9501AB_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:49>
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_0 = __this->___m_Usage;
		return L_0;
	}
}
// Method Definition Index: 29731
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1_set_usage_m8725ABB62EE56E4E8608AEF12ABABD27C6349327_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:50>
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_0 = ___0_value;
		__this->___m_Usage = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Usage), (void*)L_0);
		return;
	}
}
// Method Definition Index: 29734
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_mFB26DF481495DFA4EB7F9EAAF8EE8ECF2E218CB2_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:67>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:68>
		bool L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:70>
		V_2 = (bool)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:71>
		bool L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29735
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_m77A931FF80983194B30DA03F665640388590511B_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:79>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:80>
		uint32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:82>
		V_2 = (uint32_t)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:83>
		uint32_t L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29736
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_m54821C15C7470604F0BC91DAE0F3E7076EE302B1_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:91>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:92>
		float L_7 = V_0;
		V_2 = L_7;
		goto IL_0039;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:94>
		V_2 = (0.0f);
		goto IL_0039;
	}

IL_0039:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:95>
		float L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29737
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_m44166B3E6FC75545AE33BBF9B89C9943F00FDB8D_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:103>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:104>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:106>
		il2cpp_codegen_initobj((&V_3), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:107>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29738
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_m2024454A11380BF10D1D6B0DDBCF53B0799AB020_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:115>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:116>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:118>
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:119>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29739
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_mA6C76DCE9187BBD82C48376604EE223B263091B4_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:127>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:128>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:130>
		il2cpp_codegen_initobj((&V_3), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:131>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29740
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_m02E750B4C0BD7CBA10F6DB9236C7A4728AFFAF9F_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:139>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:140>
		uint32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:142>
		V_2 = (uint32_t)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:143>
		uint32_t L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29741
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_m44E8D3A05A0E946D45B72FEB1BCDCDB2F60EE82F_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:152>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:153>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:155>
		bool* L_8 = ___0_value;
		*((int8_t*)L_8) = (int8_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:156>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:157>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29742
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_m425D34A03FE4C914695BA8D8F3FAE0152398DA94_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:166>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:167>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:169>
		uint32_t* L_8 = ___0_value;
		*((int32_t*)L_8) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:170>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:171>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29743
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_m66DFBD8C6B12CC02200365C2B27F9DE2B63B3790_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, float* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:180>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:181>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:183>
		float* L_8 = ___0_value;
		*((float*)L_8) = (float)(0.0f);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:184>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:185>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29744
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_m435E7BB9BACDEF4ED2FE5CABC8BFD041AB3FE19F_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:194>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:195>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:197>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:198>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:199>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29745
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_m4B1FB9835DB5DB357439C434BB59A3F085028E33_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:208>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:209>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:211>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:212>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:213>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29746
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m685FBD0B743256EA4F365BFF239D41AF6C31ECD9_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:222>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:223>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:225>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:226>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:227>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29747
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m3B612E192FA4D176BCD56B4E3BF8304858DD36E7_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:236>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:237>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:239>
		uint32_t* L_8 = ___0_value;
		*((int32_t*)L_8) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:240>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:241>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29748
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m6CCBCEBE543EA8F4DE0058BB1A203679D49E8419_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:250>
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_1;
		L_1 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_0, NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_2 = ((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this)->___m_Characteristics;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_4;
		L_4 = XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A(L_2, L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:251>
		bool L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 29749
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1__ctor_m2FB898A4007961AE1997203C1006BF427A34BC50_gshared (XRInputDeviceValueReader_1_t471DEF07F207F01F80415E1739DC0047E8D7A8C2* __this, const RuntimeMethod* method) 
{
	{
		XRInputDeviceValueReader__ctor_m5F34B83F8DA1BD97773ED8301A966D2E2891F757((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this, NULL);
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
// Method Definition Index: 29730
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* XRInputDeviceValueReader_1_get_usage_mEB829DC58A87B12C46E6D1D6E82A27150B5BF73E_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:49>
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_0 = __this->___m_Usage;
		return L_0;
	}
}
// Method Definition Index: 29731
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1_set_usage_mC0DBCA0B79B703FDCFD853A779592A991F99BB58_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:50>
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_0 = ___0_value;
		__this->___m_Usage = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Usage), (void*)L_0);
		return;
	}
}
// Method Definition Index: 29734
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_mDA869931D4F5055E4EAA15705B22D3867BA2C0A8_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:67>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:68>
		bool L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:70>
		V_2 = (bool)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:71>
		bool L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29735
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_mC9CE3759541A029FE3763588C9E749BCFC965F4C_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:79>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:80>
		uint32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:82>
		V_2 = (uint32_t)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:83>
		uint32_t L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29736
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_m1DEA7E98FCDB8562BACCCA616493EAC82C32D422_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:91>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:92>
		float L_7 = V_0;
		V_2 = L_7;
		goto IL_0039;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:94>
		V_2 = (0.0f);
		goto IL_0039;
	}

IL_0039:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:95>
		float L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29737
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_m3095707D4AAFB6A6B0A22BB77C41E440AF75E57B_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:103>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:104>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:106>
		il2cpp_codegen_initobj((&V_3), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:107>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29738
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_m68DDCE5514BF70262402D19C6A7E28CC18765E48_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:115>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:116>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:118>
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:119>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29739
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_mB2C23B439F825B0B5BB941250F3E5AE2F9F1F532_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:127>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:128>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:130>
		il2cpp_codegen_initobj((&V_3), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:131>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29740
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_m66879ABEBA25EE865957DC92ECAEFFB2BBA25019_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:139>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:140>
		uint32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:142>
		V_2 = (uint32_t)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:143>
		uint32_t L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29741
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_mFFC7DFF7516774FEE4083151A16665F4091F4794_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:152>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:153>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:155>
		bool* L_8 = ___0_value;
		*((int8_t*)L_8) = (int8_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:156>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:157>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29742
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_m8D76F69C316D1AC4E61811FD53F90A26F449519A_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:166>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:167>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:169>
		uint32_t* L_8 = ___0_value;
		*((int32_t*)L_8) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:170>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:171>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29743
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_mB0DB8993BE3ECDC4EC0B1F057720978EB5107435_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, float* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:180>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:181>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:183>
		float* L_8 = ___0_value;
		*((float*)L_8) = (float)(0.0f);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:184>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:185>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29744
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_m40DAF0627FBD385E12338A9A1CEEF193EECAE58F_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:194>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:195>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:197>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:198>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:199>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29745
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_mFDD7B32A07BF1A39AD9E588B6AE792F70C5FEEA8_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:208>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:209>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:211>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:212>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:213>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29746
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m07714713D7AA8852C391199CCA02CFA4EE52280E_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:222>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:223>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:225>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:226>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:227>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29747
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m1DA9C7DC07430BD10A08A5455621D5D37F4BC172_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:236>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:237>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:239>
		uint32_t* L_8 = ___0_value;
		*((int32_t*)L_8) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:240>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:241>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29748
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m728270FD07655AE44E8A959A9C0B94AEB91BBE98_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:250>
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_1;
		L_1 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_0, NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_2 = ((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this)->___m_Characteristics;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_4;
		L_4 = XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A(L_2, L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:251>
		bool L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 29749
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1__ctor_mB16F3C49124967DDB0FF50D2F46158663A5FB222_gshared (XRInputDeviceValueReader_1_tE1180D2BC72FF45B92AFBC5B4E3EC34DC92095FF* __this, const RuntimeMethod* method) 
{
	{
		XRInputDeviceValueReader__ctor_m5F34B83F8DA1BD97773ED8301A966D2E2891F757((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this, NULL);
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
// Method Definition Index: 29730
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* XRInputDeviceValueReader_1_get_usage_mCBCA94DD61B7A1A10DEF689C603EFCED881C25B8_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:49>
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_0 = __this->___m_Usage;
		return L_0;
	}
}
// Method Definition Index: 29731
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1_set_usage_mF9B7077D4EF5BD78CB60F2C3F18B3A8A81A4A595_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:50>
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_0 = ___0_value;
		__this->___m_Usage = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Usage), (void*)L_0);
		return;
	}
}
// Method Definition Index: 29734
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_m501DFBBB6E5E690F7BCA314B73015A819B18ACAE_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:67>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:68>
		bool L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:70>
		V_2 = (bool)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:71>
		bool L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29735
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_m40960CAFC6123037C21EFE51E87F24169907B67A_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:79>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:80>
		uint32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:82>
		V_2 = (uint32_t)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:83>
		uint32_t L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29736
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_m2F01BD74E9BAF41901030EEF157DE4E054BF4389_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:91>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:92>
		float L_7 = V_0;
		V_2 = L_7;
		goto IL_0039;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:94>
		V_2 = (0.0f);
		goto IL_0039;
	}

IL_0039:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:95>
		float L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29737
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_m6E20E90493366761EE8CEA795DD0B09CB19097CE_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:103>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:104>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:106>
		il2cpp_codegen_initobj((&V_3), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:107>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29738
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_m4D086E23644B6C914C9530F2AF1B5ACC7812BE9C_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:115>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:116>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:118>
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:119>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29739
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_mA4087DFF9AA39A4CE05391C340E290F911BEE906_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:127>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:128>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:130>
		il2cpp_codegen_initobj((&V_3), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:131>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29740
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_mB818A2CD36259A4C2E9CA0D2994D4D5DE4203420_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:139>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:140>
		uint32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:142>
		V_2 = (uint32_t)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:143>
		uint32_t L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29741
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_mF04816BE0EC4AA038C5DA7F05E329402B291E72D_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:152>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:153>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:155>
		bool* L_8 = ___0_value;
		*((int8_t*)L_8) = (int8_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:156>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:157>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29742
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_m4CBE1CD38C6A703C36A0A9A5C7FB8468C68056D4_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:166>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:167>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:169>
		uint32_t* L_8 = ___0_value;
		*((int32_t*)L_8) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:170>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:171>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29743
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_m1700877EC39245DC6D4C5C9C629E3073FF488E59_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, float* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:180>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:181>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:183>
		float* L_8 = ___0_value;
		*((float*)L_8) = (float)(0.0f);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:184>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:185>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29744
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_mF05D489BF210B4EB33864E45EF2FE90066FC8280_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:194>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:195>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:197>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:198>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:199>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29745
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_m51E4A4CE7948EE8C3FBCA33873C5A3A76BD584F7_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:208>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:209>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:211>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:212>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:213>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29746
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m5B5C6AA4BA873D472FB94C949A426B2EB8C19E55_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:222>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:223>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:225>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:226>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:227>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29747
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m0C8EA4CD13974EAA7FE8A0B942632AC5C6765AF4_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:236>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:237>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:239>
		uint32_t* L_8 = ___0_value;
		*((int32_t*)L_8) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:240>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:241>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29748
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m660F5E0E0A0D3B9AB7D155D4E92E9623AC4C04D9_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:250>
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_1;
		L_1 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_0, NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_2 = ((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this)->___m_Characteristics;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_4;
		L_4 = XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A(L_2, L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:251>
		bool L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 29749
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1__ctor_m985BF99763CF0A2E46D8DA9798A111B4AF9C64AF_gshared (XRInputDeviceValueReader_1_t5AE475C4C8FF03E125045A4361EBEB9279B987FE* __this, const RuntimeMethod* method) 
{
	{
		XRInputDeviceValueReader__ctor_m5F34B83F8DA1BD97773ED8301A966D2E2891F757((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this, NULL);
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
// Method Definition Index: 29730
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* XRInputDeviceValueReader_1_get_usage_m26FF9C58C90E64222DF39DE7CE27969ACD622145_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:49>
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_0 = __this->___m_Usage;
		return L_0;
	}
}
// Method Definition Index: 29731
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1_set_usage_mC234C9FB2E374C90184839A3C0A0DCB550724C17_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:50>
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_0 = ___0_value;
		__this->___m_Usage = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Usage), (void*)L_0);
		return;
	}
}
// Method Definition Index: 29734
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_mA49C7EE2BEEA42C0B2FE3C3887971511DB78B447_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:67>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:68>
		bool L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:70>
		V_2 = (bool)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:71>
		bool L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29735
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_m94131583E42AA0D74DB00C36FB8A3714BF139FA1_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:79>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:80>
		uint32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:82>
		V_2 = (uint32_t)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:83>
		uint32_t L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29736
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_m8E7C33A1FD09397013D19616410DB9167A1CEB43_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:91>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:92>
		float L_7 = V_0;
		V_2 = L_7;
		goto IL_0039;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:94>
		V_2 = (0.0f);
		goto IL_0039;
	}

IL_0039:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:95>
		float L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29737
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_mAD4150AC0E9FCE8C6B42CDB6B072AD4AE9607B45_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:103>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:104>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:106>
		il2cpp_codegen_initobj((&V_3), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:107>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29738
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_mB3F8F5F0DC6B416D3105A59808E297745EEBE5F9_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:115>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:116>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:118>
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:119>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29739
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_m39AD5524AD5D05464A6328296B2666DE62B191DF_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:127>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:128>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:130>
		il2cpp_codegen_initobj((&V_3), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:131>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29740
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_m0140B2099A4BCCAF53FEF0BBD1B8624C79AAA4A2_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:139>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:140>
		uint32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:142>
		V_2 = (uint32_t)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:143>
		uint32_t L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29741
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_mE6090098CE06DABA7BDCD9F78348C08D79618C82_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:152>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:153>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:155>
		bool* L_8 = ___0_value;
		*((int8_t*)L_8) = (int8_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:156>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:157>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29742
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_m81FDB8DC199332F48592372B16246339D36BEDDA_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:166>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:167>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:169>
		uint32_t* L_8 = ___0_value;
		*((int32_t*)L_8) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:170>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:171>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29743
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_m93227A353AD1CC80C72FB5BD999265DE73E3FB68_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, float* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:180>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:181>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:183>
		float* L_8 = ___0_value;
		*((float*)L_8) = (float)(0.0f);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:184>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:185>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29744
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_m486E5E178D5D967E214B77DC48BFFA16B6D113D4_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:194>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:195>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:197>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:198>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:199>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29745
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_m56FBC3608E6F0490D368BF77CB89C18D7B34933C_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:208>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:209>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:211>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:212>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:213>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29746
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m808DAC1A1E93FD770DABC37DFFD33CDC3202BC7C_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:222>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:223>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:225>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:226>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:227>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29747
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m24BCA107F1BCF62B240AA8F76F21925D082BE5A0_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:236>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:237>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:239>
		uint32_t* L_8 = ___0_value;
		*((int32_t*)L_8) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:240>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:241>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29748
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_m9CAB4B91B315D575920EEB4501CC18E7228C1932_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:250>
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_1;
		L_1 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_0, NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_2 = ((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this)->___m_Characteristics;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_4;
		L_4 = XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A(L_2, L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:251>
		bool L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 29749
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1__ctor_mEBD6E983B151ECF15A97D24F3192633D643557F6_gshared (XRInputDeviceValueReader_1_t6459BAE2487B668212FD7457D8440BA5AD9B2D2C* __this, const RuntimeMethod* method) 
{
	{
		XRInputDeviceValueReader__ctor_m5F34B83F8DA1BD97773ED8301A966D2E2891F757((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this, NULL);
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
// Method Definition Index: 29730
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* XRInputDeviceValueReader_1_get_usage_m8A4ADCDDD48132239153924F12E54897EC30F1B2_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:49>
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_0 = __this->___m_Usage;
		return L_0;
	}
}
// Method Definition Index: 29731
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1_set_usage_m5348A718884B64985DF14EE9AD27E5D7D1D34EAB_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:50>
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_0 = ___0_value;
		__this->___m_Usage = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Usage), (void*)L_0);
		return;
	}
}
// Method Definition Index: 29734
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_m6315B201133B79A2B6FACD85C7C08FFC0AC3C44C_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:67>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:68>
		bool L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:70>
		V_2 = (bool)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:71>
		bool L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29735
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_m08721912593454E0D6D8357900E49314350947A2_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:79>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:80>
		uint32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:82>
		V_2 = (uint32_t)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:83>
		uint32_t L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29736
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_m5B29D78C353B85A5B094B77F9030108F289B7E82_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:91>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:92>
		float L_7 = V_0;
		V_2 = L_7;
		goto IL_0039;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:94>
		V_2 = (0.0f);
		goto IL_0039;
	}

IL_0039:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:95>
		float L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29737
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_mFA8108280395134E7724057DFE2FBE3FC4EDE211_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:103>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:104>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:106>
		il2cpp_codegen_initobj((&V_3), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:107>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29738
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_m988DB58009FB1D7A39423AAAFB7565C82C7A2B08_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:115>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:116>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:118>
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:119>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29739
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_mB27C6A31F0FE4CA56FC279B72AC2F1C28F9614D9_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:127>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:128>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:130>
		il2cpp_codegen_initobj((&V_3), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:131>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29740
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_mC429E3779B93AA9D7066476E6EABF632A74DED49_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:139>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:140>
		uint32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:142>
		V_2 = (uint32_t)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:143>
		uint32_t L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29741
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_m14E27F0618E4358C4B488F96B51C46CA0EDB0455_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:152>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:153>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:155>
		bool* L_8 = ___0_value;
		*((int8_t*)L_8) = (int8_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:156>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:157>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29742
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_mC74A7E86F12392C134F1EDDA7F9FC80ACF88A326_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:166>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:167>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:169>
		uint32_t* L_8 = ___0_value;
		*((int32_t*)L_8) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:170>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:171>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29743
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_m0CDE3B8947DD91C8D4122949A844F3E48952C606_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, float* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:180>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:181>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:183>
		float* L_8 = ___0_value;
		*((float*)L_8) = (float)(0.0f);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:184>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:185>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29744
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_mEB4AD6D455B137E0D175A387E8BF13CD9DAE4C46_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:194>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:195>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:197>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:198>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:199>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29745
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_m09ADC62BBC44DA482E8EBF17D66C8D92218B5A31_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:208>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:209>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:211>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:212>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:213>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29746
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m30A151D858010B4CA2DA11939A2980A2D2F07357_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:222>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:223>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:225>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:226>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:227>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29747
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m82387548A2195FD1D0F94EF3D363ACDEBC49B500_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:236>
		bool L_0;
		L_0 = XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:237>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:239>
		uint32_t* L_8 = ___0_value;
		*((int32_t*)L_8) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:240>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:241>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29748
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mD8AFA72D4B87EEFFFA6A09AD3694F00905E8298B_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:250>
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_1;
		L_1 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_0, NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_2 = ((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this)->___m_Characteristics;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_4;
		L_4 = XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A(L_2, L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:251>
		bool L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 29749
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1__ctor_m230D1C2834D49095B5805EDA86EDD55B2C4055C4_gshared (XRInputDeviceValueReader_1_tC278C9037887379E7F747CA0250271CF4B2FAAB1* __this, const RuntimeMethod* method) 
{
	{
		XRInputDeviceValueReader__ctor_m5F34B83F8DA1BD97773ED8301A966D2E2891F757((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this, NULL);
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
// Method Definition Index: 29730
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* XRInputDeviceValueReader_1_get_usage_m51F48ED988A97FC802827ABC0BB2FB75F971ABC5_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:49>
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_0 = __this->___m_Usage;
		return L_0;
	}
}
// Method Definition Index: 29731
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1_set_usage_mAD9D1335AC070AB967F71AFAB1DEAC7DE7B78E6C_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:50>
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_0 = ___0_value;
		__this->___m_Usage = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Usage), (void*)L_0);
		return;
	}
}
// Method Definition Index: 29734
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_ReadBoolValue_m2001C8BA8B0638BEDFB2582345CE2D5E2D767835_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:67>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:68>
		bool L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:70>
		V_2 = (bool)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:71>
		bool L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29735
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadUIntValue_mFDFD16DB71C231A037A1A57388051BA55AE48217_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:79>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:80>
		uint32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:82>
		V_2 = (uint32_t)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:83>
		uint32_t L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29736
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputDeviceValueReader_1_ReadFloatValue_mBCC31B41C0D092595219A441E8E3433703534D09_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:91>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:92>
		float L_7 = V_0;
		V_2 = L_7;
		goto IL_0039;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:94>
		V_2 = (0.0f);
		goto IL_0039;
	}

IL_0039:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:95>
		float L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29737
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputDeviceValueReader_1_ReadVector2Value_m42A9609BFF742DC74C96E9204D5AA9DF3F1455F3_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:103>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:104>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:106>
		il2cpp_codegen_initobj((&V_3), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:107>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29738
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRInputDeviceValueReader_1_ReadVector3Value_m96F9F4A33D5CA9A3D6E7327B9B7FE5FB03FF3C45_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:115>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:116>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:118>
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:119>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29739
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XRInputDeviceValueReader_1_ReadQuaternionValue_mF72D05FB881D857AAE9656B9BE5FB229A6145B5C_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:127>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:128>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_0;
		V_2 = L_7;
		goto IL_003d;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:130>
		il2cpp_codegen_initobj((&V_3), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_3;
		V_2 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:131>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 29740
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XRInputDeviceValueReader_1_ReadInputTrackingStateValue_mDC1787334BA972E01FEF4D773F170640048830C1_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:139>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		bool L_5;
		L_5 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, (&V_0), NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:140>
		uint32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:142>
		V_2 = (uint32_t)0;
		goto IL_0035;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:143>
		uint32_t L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 29741
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadBoolValue_mEA97CE264949878E5E914906CEF1DACF289C129A_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:152>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tE336B2F0B9AC721519BFA17A08D6353FD5221637 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7((&L_4), L_3, InputFeatureUsage_1__ctor_mEB36F8937385A1065CD9F48AE2DAD9EAE49EFCE7_RuntimeMethod_var);
		bool* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m24EC3B6C41AE4098269427232AD5F52E786BF884(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:153>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:155>
		bool* L_8 = ___0_value;
		*((int8_t*)L_8) = (int8_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:156>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:157>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29742
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadUIntValue_mCAB5614B9AEEE9E4B48820EC8F9E91CB17DE5F18_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:166>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tD73AC74B29139087A83959CB3395A0580A2128AE L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0((&L_4), L_3, InputFeatureUsage_1__ctor_m60EAD5DA963ED229B922EBAAEF0D226796B5CEC0_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m9FC969BEFF0E5BAB78DD9F2130F437788D20068C(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:167>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:169>
		uint32_t* L_8 = ___0_value;
		*((int32_t*)L_8) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:170>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:171>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29743
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadFloatValue_m014F713899E4DC5B4F178634B5505856C1829F03_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, float* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:180>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t311D0F42F1A7BF37D3CEAC15A53A1F24165F1848 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989((&L_4), L_3, InputFeatureUsage_1__ctor_m6357AF3E3C16046E807776AA58473ABC83F88989_RuntimeMethod_var);
		float* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m675D52240379FEF80D6499B5031941812FDFD081(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:181>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:183>
		float* L_8 = ___0_value;
		*((float*)L_8) = (float)(0.0f);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:184>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:185>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29744
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector2Value_mCC4A8B07339DC801FE7FDCEE188B52C36FB7B642_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:194>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_tEB160A05BCDCCA4F96072CBA0866498D06B9A27C L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A((&L_4), L_3, InputFeatureUsage_1__ctor_m502985516521824A155A5780090765043843868A_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_mB2C15D1FC747DA9FB5958FA17E77049886FB3BBA(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:195>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:197>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:198>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:199>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29745
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadVector3Value_m9276C72F191B6C43100BABDF25B9FF8D3A55FFB8_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:208>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t2E901FA41650EB29399194768CAA93D477CEBC58 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA((&L_4), L_3, InputFeatureUsage_1__ctor_m4267CE5D9D4C8FFE0CD48B585565A9DCADFB4FDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m472B5ECE996FB7440CACCF1E85722DA4963E3167(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:209>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:211>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:212>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:213>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29746
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadQuaternionValue_m59D008BC51086009D727F31D3FEC2BA0A50F12C6_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:222>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t8489CEC68B1EC178F2634079A9D7CD9E90D3CF5D L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08((&L_4), L_3, InputFeatureUsage_1__ctor_m14B4290F5C2B58B777726B4079A7CC2238176A08_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m0C1A9761DD0D1C6D1EF4BAB2FAF1BC1A9541BB9F(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:223>
		V_1 = (bool)1;
		goto IL_003b;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:225>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:226>
		V_1 = (bool)0;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:227>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29747
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_TryReadInputTrackingStateValue_m7AF90DA8A391B6E94FF034B82895151AC86B7510_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, uint32_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:236>
		bool L_0;
		L_0 = ((  bool (*) (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB* L_2 = __this->___m_Usage;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ((  String_t* (*) (InputFeatureUsageString_1_tED5559980FF0D037F1720B535BE2F33E44336CBB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		InputFeatureUsage_1_t4EF7DDCAC35EE23BA72694AC2AB76CF4A879FFD9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55((&L_4), L_3, InputFeatureUsage_1__ctor_m1E28CCD8989B0D08CD06B2E6200A55C33BC17A55_RuntimeMethod_var);
		uint32_t* L_5 = ___0_value;
		bool L_6;
		L_6 = InputDevice_TryGetFeatureValue_m8A01F07356DC85042F6BB7C6258A75C3EC3C4E11(L_1, L_4, L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:237>
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:239>
		uint32_t* L_8 = ___0_value;
		*((int32_t*)L_8) = (int32_t)0;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:240>
		V_1 = (bool)0;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:241>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 29748
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputDeviceValueReader_1_RefreshInputDeviceIfNeeded_mBAADB5F994FD363E73F0726B33982ABD8B20DD5E_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:250>
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_1;
		L_1 = InputDevice_get_isValid_mA908CF8195CECA44FF457430AFF9198C3FEC0948(L_0, NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_2 = ((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this)->___m_Characteristics;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_3 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&__this->___m_InputDevice);
		bool L_4;
		L_4 = XRInputTrackingAggregator_TryGetDeviceWithExactCharacteristics_mECEA5AB0B5B089CD481FC654BA081484A967647A(L_2, L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputDeviceValueReader.cs:251>
		bool L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 29749
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputDeviceValueReader_1__ctor_m929C31C577420C9309DE19085BDCE628C50368F7_gshared (XRInputDeviceValueReader_1_t52E057CBAAA0881CC1C329522294D1F15523C9C1* __this, const RuntimeMethod* method) 
{
	{
		XRInputDeviceValueReader__ctor_m5F34B83F8DA1BD97773ED8301A966D2E2891F757((XRInputDeviceValueReader_t91D732DACFC1260DE12B5C0EA0CE33B0EAF2581A*)__this, NULL);
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
// Method Definition Index: 29774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputValueReader_1_get_manualValue_m358F9F0BA08D09609B037B18F3A1B8BE07D9E1B8_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:227>
		int32_t L_0 = __this->___m_ManualValue;
		return L_0;
	}
}
// Method Definition Index: 29775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_manualValue_mD2270FCC650B88384915A33B622FD861C2610BBC_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:228>
		int32_t L_0 = ___0_value;
		__this->___m_ManualValue = L_0;
		return;
	}
}
// Method Definition Index: 29776
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 29777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_bypass_m386A0A0DDEE905226FC1ACADAFEB91AAE7C1118C_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CbypassU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbypassU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 29778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_m7E69847A755ED76E83DE2ACBEAAAE9E69FC73B40_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:243>
		UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* L_0 = (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		UnityObjectReferenceCache_2__ctor_mFC34A00A55B01C497AD043B6A61F3B7107C6B867(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:248>
		XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:250>
		return;
	}
}
// Method Definition Index: 29779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_m2A75B9DA05CFD73D6E4DD4E515CD134C2FACC995_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, String_t* ___0_name, int32_t ___1_inputSourceMode, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:243>
		UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* L_0 = (UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		UnityObjectReferenceCache_2__ctor_mFC34A00A55B01C497AD043B6A61F3B7107C6B867(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:258>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		String_t* L_3 = ___0_name;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032(L_2, L_3, NULL);
		int32_t L_5 = ___1_inputSourceMode;
		XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, L_4, L_5, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:260>
		return;
	}
}
// Method Definition Index: 29780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_mF793A106D82436FDD5CBE61E6BF37664A724A6FB_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:269>
		UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->___m_ObjectReferenceObject;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UnityObjectReferenceCache_2_Get_m93904A06D8A8D4DDBE09F1534B2FA036A5458AE4(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:270>
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 29781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_SetObjectReference_m4D6561CE04D18789B51614F97266ACB63E15EEC6_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:282>
		UnityObjectReferenceCache_2_tD8A6095CFF0BF19D8C03B26A41A006F289F7ED32* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** L_1 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)(&__this->___m_ObjectReferenceObject);
		RuntimeObject* L_2 = ___0_value;
		NullCheck(L_0);
		UnityObjectReferenceCache_2_Set_m14A85ED1105C25F3BF5BEB85F10E2C8B01D829C1(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:283>
		return;
	}
}
// Method Definition Index: 29782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputValueReader_1_ReadValue_mE0420C68FC1511C6B2730ECDE3F0E4AE5F359387_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B18_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:288>
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:290>
		BypassScope__ctor_m4C69A76D4AC77A2B9614EE057AF15FE52C0DE38A((&V_1), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{
				BypassScope_Dispose_m5CD3B43095C61AFF9874DDD86DB1293A28EEAFDE((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:292>
			RuntimeObject* L_3;
			L_3 = XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			NullCheck(L_3);
			int32_t L_4;
			L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
			V_2 = L_4;
			goto IL_00d7;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:296>
		int32_t L_5 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputSourceMode;
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_0087;
			}
			case 3:
			{
				goto IL_00ab;
			}
			case 4:
			{
				goto IL_00ce;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_006c:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:300>
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_8 = V_6;
		V_2 = L_8;
		goto IL_00d7;
	}

IL_0079:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:303>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		int32_t L_10;
		L_10 = XRInputValueReader_1_ReadValue_m69F588B9F23BE20A2F69B2E6C97BE921C393621D(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_2 = L_10;
		goto IL_00d7;
	}

IL_0087:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:306>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_11;
		L_11 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_3), NULL);
		if (L_11)
		{
			goto IL_009d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_12 = V_6;
		G_B14_0 = L_12;
		goto IL_00a8;
	}

IL_009d:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_13 = V_3;
		NullCheck(L_13);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14;
		L_14 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_13, NULL);
		int32_t L_15;
		L_15 = XRInputValueReader_1_ReadValue_m69F588B9F23BE20A2F69B2E6C97BE921C393621D(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		G_B14_0 = L_15;
	}

IL_00a8:
	{
		V_2 = G_B14_0;
		goto IL_00d7;
	}

IL_00ab:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:310>
		RuntimeObject* L_16;
		L_16 = XRInputValueReader_1_GetObjectReference_mF793A106D82436FDD5CBE61E6BF37664A724A6FB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_7 = L_16;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:311>
		RuntimeObject* L_17 = V_7;
		if (L_17)
		{
			goto IL_00c4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		int32_t L_18 = V_6;
		G_B18_0 = L_18;
		goto IL_00cb;
	}

IL_00c4:
	{
		RuntimeObject* L_19 = V_7;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_19);
		G_B18_0 = L_20;
	}

IL_00cb:
	{
		V_2 = G_B18_0;
		goto IL_00d7;
	}

IL_00ce:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:315>
		int32_t L_21 = __this->___m_ManualValue;
		V_2 = L_21;
		goto IL_00d7;
	}

IL_00d7:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:317>
		int32_t L_22 = V_2;
		return L_22;
	}
}
// Method Definition Index: 29783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m772C8F3234BBCAB9F90C24D0357692BA5D3C49C4_gshared (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, int32_t* ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	BypassScope_t22B85DE7BD7DE10C70316E2D58E15746F7AFB68A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:322>
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:324>
		BypassScope__ctor_m4C69A76D4AC77A2B9614EE057AF15FE52C0DE38A((&V_1), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{
				BypassScope_Dispose_m5CD3B43095C61AFF9874DDD86DB1293A28EEAFDE((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:326>
			RuntimeObject* L_3;
			L_3 = XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			int32_t* L_4 = ___0_value;
			NullCheck(L_3);
			bool L_5;
			L_5 = InterfaceFuncInvoker1< bool, int32_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3, L_4);
			V_2 = L_5;
			goto IL_00e9;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:330>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		int32_t L_6;
		L_6 = XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		V_5 = L_6;
		int32_t L_7 = V_5;
		V_4 = L_7;
		int32_t L_8 = V_4;
		switch (L_8)
		{
			case 0:
			{
				goto IL_006d;
			}
			case 1:
			{
				goto IL_0078;
			}
			case 2:
			{
				goto IL_0087;
			}
			case 3:
			{
				goto IL_00af;
			}
			case 4:
			{
				goto IL_00d9;
			}
		}
	}
	{
		goto IL_006d;
	}

IL_006d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:334>
		int32_t* L_9 = ___0_value;
		il2cpp_codegen_initobj(L_9, sizeof(int32_t));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:335>
		V_2 = (bool)0;
		goto IL_00e9;
	}

IL_0078:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:338>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_10 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		int32_t* L_11 = ___0_value;
		bool L_12;
		L_12 = XRInputValueReader_1_TryReadValue_m200FF50062D6428E69A621FA999E32B2D3B70FD6(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_2 = L_12;
		goto IL_00e9;
	}

IL_0087:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:341>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_13;
		L_13 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_3), NULL);
		V_6 = L_13;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_00a4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:342>
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_15 = V_3;
		NullCheck(L_15);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_16;
		L_16 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_15, NULL);
		int32_t* L_17 = ___0_value;
		bool L_18;
		L_18 = XRInputValueReader_1_TryReadValue_m200FF50062D6428E69A621FA999E32B2D3B70FD6(L_16, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_2 = L_18;
		goto IL_00e9;
	}

IL_00a4:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:344>
		int32_t* L_19 = ___0_value;
		il2cpp_codegen_initobj(L_19, sizeof(int32_t));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:345>
		V_2 = (bool)0;
		goto IL_00e9;
	}

IL_00af:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:349>
		RuntimeObject* L_20;
		L_20 = XRInputValueReader_1_GetObjectReference_mF793A106D82436FDD5CBE61E6BF37664A724A6FB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_7 = L_20;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:350>
		RuntimeObject* L_21 = V_7;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_21) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_00ce;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:351>
		RuntimeObject* L_23 = V_7;
		int32_t* L_24 = ___0_value;
		NullCheck(L_23);
		bool L_25;
		L_25 = InterfaceFuncInvoker1< bool, int32_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_23, L_24);
		V_2 = L_25;
		goto IL_00e9;
	}

IL_00ce:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:353>
		int32_t* L_26 = ___0_value;
		il2cpp_codegen_initobj(L_26, sizeof(int32_t));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:354>
		V_2 = (bool)0;
		goto IL_00e9;
	}

IL_00d9:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:358>
		int32_t* L_27 = ___0_value;
		int32_t L_28 = __this->___m_ManualValue;
		*(int32_t*)L_27 = L_28;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:359>
		V_2 = (bool)1;
		goto IL_00e9;
	}

IL_00e9:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:361>
		bool L_29 = V_2;
		return L_29;
	}
}
// Method Definition Index: 29784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputValueReader_1_ReadValue_m69F588B9F23BE20A2F69B2E6C97BE921C393621D_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:365>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_1 = V_0;
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_000f:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = ___0_action;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InputAction_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE5E9DB38576465AB81987CCC701100CC64849541(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		G_B3_0 = L_3;
	}

IL_0015:
	{
		V_1 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:366>
		int32_t L_4 = V_1;
		return L_4;
	}
}
// Method Definition Index: 29785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m200FF50062D6428E69A621FA999E32B2D3B70FD6_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, int32_t* ___1_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:370>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		V_0 = (bool)((((RuntimeObject*)(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:372>
		int32_t* L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, sizeof(int32_t));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:373>
		V_1 = (bool)0;
		goto IL_002a;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:376>
		int32_t* L_3 = ___1_value;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = ___0_action;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InputAction_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE5E9DB38576465AB81987CCC701100CC64849541(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		*(int32_t*)L_3 = L_5;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:377>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6 = ___0_action;
		NullCheck(L_6);
		bool L_7;
		L_7 = InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62(L_6, NULL);
		V_1 = L_7;
		goto IL_002a;
	}

IL_002a:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:378>
		bool L_8 = V_1;
		return L_8;
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
// Method Definition Index: 29774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputValueReader_1_get_manualValue_m3B6D11438549621E7A9045A95C18ACB8C0CB4746_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:227>
		float L_0 = __this->___m_ManualValue;
		return L_0;
	}
}
// Method Definition Index: 29775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_manualValue_m92D0CDB5E666254390FE5B4FB8BAFD3580EBADA7_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:228>
		float L_0 = ___0_value;
		__this->___m_ManualValue = L_0;
		return;
	}
}
// Method Definition Index: 29776
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 29777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_bypass_mBF28E6F2AD9ACD940BD13E35669A7CB834E4CFF0_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CbypassU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbypassU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 29778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_mCD49C74D79D06D3446BEF2DBA790F1B6C76E55C5_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:243>
		UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* L_0 = (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		UnityObjectReferenceCache_2__ctor_m2EDFEE2809AA3F7C399BB70520017AE60837C6C0(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:248>
		XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:250>
		return;
	}
}
// Method Definition Index: 29779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_m2D198A41FE129CDD40C6FDBF537BC35E3C4B6CFB_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, String_t* ___0_name, int32_t ___1_inputSourceMode, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:243>
		UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* L_0 = (UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		UnityObjectReferenceCache_2__ctor_m2EDFEE2809AA3F7C399BB70520017AE60837C6C0(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:258>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		String_t* L_3 = ___0_name;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032(L_2, L_3, NULL);
		int32_t L_5 = ___1_inputSourceMode;
		XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, L_4, L_5, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:260>
		return;
	}
}
// Method Definition Index: 29780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:269>
		UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->___m_ObjectReferenceObject;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UnityObjectReferenceCache_2_Get_m99CF6D170B41DABEAF641BF1B69DA3CDB57C0241(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:270>
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 29781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_SetObjectReference_m2EECA3A2B8475EC17A9B30BB3B6470EBE3A34169_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:282>
		UnityObjectReferenceCache_2_t1413D13E9E061514692C40A683297E679FF60E5D* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** L_1 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)(&__this->___m_ObjectReferenceObject);
		RuntimeObject* L_2 = ___0_value;
		NullCheck(L_0);
		UnityObjectReferenceCache_2_Set_m8C0EC3C498F45A3866B00A2177E77C4E89CDF80C(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:283>
		return;
	}
}
// Method Definition Index: 29782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputValueReader_1_ReadValue_mAFA366F0FF0345B1A9F16C19F1815D10E427860D_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	RuntimeObject* V_7 = NULL;
	int32_t G_B3_0 = 0;
	float G_B14_0 = 0.0f;
	float G_B18_0 = 0.0f;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:288>
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:290>
		BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0((&V_1), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{
				BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:292>
			RuntimeObject* L_3;
			L_3 = XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			NullCheck(L_3);
			float L_4;
			L_4 = InterfaceFuncInvoker0< float >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
			V_2 = L_4;
			goto IL_00d7;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:296>
		int32_t L_5 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputSourceMode;
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_0087;
			}
			case 3:
			{
				goto IL_00ab;
			}
			case 4:
			{
				goto IL_00ce;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_006c:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:300>
		il2cpp_codegen_initobj((&V_6), sizeof(float));
		float L_8 = V_6;
		V_2 = L_8;
		goto IL_00d7;
	}

IL_0079:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:303>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		float L_10;
		L_10 = XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_2 = L_10;
		goto IL_00d7;
	}

IL_0087:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:306>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_11;
		L_11 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_3), NULL);
		if (L_11)
		{
			goto IL_009d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(float));
		float L_12 = V_6;
		G_B14_0 = L_12;
		goto IL_00a8;
	}

IL_009d:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_13 = V_3;
		NullCheck(L_13);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14;
		L_14 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_13, NULL);
		float L_15;
		L_15 = XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		G_B14_0 = L_15;
	}

IL_00a8:
	{
		V_2 = G_B14_0;
		goto IL_00d7;
	}

IL_00ab:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:310>
		RuntimeObject* L_16;
		L_16 = XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_7 = L_16;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:311>
		RuntimeObject* L_17 = V_7;
		if (L_17)
		{
			goto IL_00c4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(float));
		float L_18 = V_6;
		G_B18_0 = L_18;
		goto IL_00cb;
	}

IL_00c4:
	{
		RuntimeObject* L_19 = V_7;
		NullCheck(L_19);
		float L_20;
		L_20 = InterfaceFuncInvoker0< float >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_19);
		G_B18_0 = L_20;
	}

IL_00cb:
	{
		V_2 = G_B18_0;
		goto IL_00d7;
	}

IL_00ce:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:315>
		float L_21 = __this->___m_ManualValue;
		V_2 = L_21;
		goto IL_00d7;
	}

IL_00d7:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:317>
		float L_22 = V_2;
		return L_22;
	}
}
// Method Definition Index: 29783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mA7A16FB5DD2CFAD42DF5414A8B012EDCF587F9AC_gshared (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, float* ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	BypassScope_t7D1B37565637622063AAB13A80F139C346FF13D9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:322>
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:324>
		BypassScope__ctor_m41D5DA2BCA2B77D2DA27E656C766E38EBEC627E0((&V_1), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{
				BypassScope_Dispose_mDBDD085BD390FE04EB2D5F27F3502957EC085CF4((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:326>
			RuntimeObject* L_3;
			L_3 = XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			float* L_4 = ___0_value;
			NullCheck(L_3);
			bool L_5;
			L_5 = InterfaceFuncInvoker1< bool, float* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3, L_4);
			V_2 = L_5;
			goto IL_00e9;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:330>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		int32_t L_6;
		L_6 = XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		V_5 = L_6;
		int32_t L_7 = V_5;
		V_4 = L_7;
		int32_t L_8 = V_4;
		switch (L_8)
		{
			case 0:
			{
				goto IL_006d;
			}
			case 1:
			{
				goto IL_0078;
			}
			case 2:
			{
				goto IL_0087;
			}
			case 3:
			{
				goto IL_00af;
			}
			case 4:
			{
				goto IL_00d9;
			}
		}
	}
	{
		goto IL_006d;
	}

IL_006d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:334>
		float* L_9 = ___0_value;
		il2cpp_codegen_initobj(L_9, sizeof(float));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:335>
		V_2 = (bool)0;
		goto IL_00e9;
	}

IL_0078:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:338>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_10 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		float* L_11 = ___0_value;
		bool L_12;
		L_12 = XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_2 = L_12;
		goto IL_00e9;
	}

IL_0087:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:341>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_13;
		L_13 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_3), NULL);
		V_6 = L_13;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_00a4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:342>
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_15 = V_3;
		NullCheck(L_15);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_16;
		L_16 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_15, NULL);
		float* L_17 = ___0_value;
		bool L_18;
		L_18 = XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A(L_16, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_2 = L_18;
		goto IL_00e9;
	}

IL_00a4:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:344>
		float* L_19 = ___0_value;
		il2cpp_codegen_initobj(L_19, sizeof(float));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:345>
		V_2 = (bool)0;
		goto IL_00e9;
	}

IL_00af:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:349>
		RuntimeObject* L_20;
		L_20 = XRInputValueReader_1_GetObjectReference_m75775B2BE8F56E7EF119555A5A63A4B68DFE79BE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_7 = L_20;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:350>
		RuntimeObject* L_21 = V_7;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_21) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_00ce;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:351>
		RuntimeObject* L_23 = V_7;
		float* L_24 = ___0_value;
		NullCheck(L_23);
		bool L_25;
		L_25 = InterfaceFuncInvoker1< bool, float* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_23, L_24);
		V_2 = L_25;
		goto IL_00e9;
	}

IL_00ce:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:353>
		float* L_26 = ___0_value;
		il2cpp_codegen_initobj(L_26, sizeof(float));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:354>
		V_2 = (bool)0;
		goto IL_00e9;
	}

IL_00d9:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:358>
		float* L_27 = ___0_value;
		float L_28 = __this->___m_ManualValue;
		*(float*)L_27 = L_28;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:359>
		V_2 = (bool)1;
		goto IL_00e9;
	}

IL_00e9:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:361>
		bool L_29 = V_2;
		return L_29;
	}
}
// Method Definition Index: 29784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRInputValueReader_1_ReadValue_mD5CE5B4F1C06A274AB39076214A714688C55F7F1_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:365>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_1 = V_0;
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_000f:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = ___0_action;
		NullCheck(L_2);
		float L_3;
		L_3 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		G_B3_0 = L_3;
	}

IL_0015:
	{
		V_1 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:366>
		float L_4 = V_1;
		return L_4;
	}
}
// Method Definition Index: 29785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mBAE538044CF21E47FE0E81D77828D6E69B03834A_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, float* ___1_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:370>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		V_0 = (bool)((((RuntimeObject*)(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:372>
		float* L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, sizeof(float));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:373>
		V_1 = (bool)0;
		goto IL_002a;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:376>
		float* L_3 = ___1_value;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = ___0_action;
		NullCheck(L_4);
		float L_5;
		L_5 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		*(float*)L_3 = L_5;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:377>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6 = ___0_action;
		NullCheck(L_6);
		bool L_7;
		L_7 = InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62(L_6, NULL);
		V_1 = L_7;
		goto IL_002a;
	}

IL_002a:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:378>
		bool L_8 = V_1;
		return L_8;
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
// Method Definition Index: 29774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_get_manualValue_m5EF71D81283E883A400D54151CCD812B7CF328EC_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:227>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_ManualValue;
		return L_0;
	}
}
// Method Definition Index: 29775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_manualValue_m19E36BFF1B4DCAB067FFAE8B5C4F3327C40D51E7_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:228>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___m_ManualValue = L_0;
		return;
	}
}
// Method Definition Index: 29776
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 29777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_bypass_m15ABD6A28E25B0DE4396C5B4FA13007E666FECF1_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CbypassU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbypassU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 29778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_mFC8C600D3AE334E250AD75D8B42AF6EDCC62528C_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:243>
		UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* L_0 = (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		UnityObjectReferenceCache_2__ctor_m98710579A55696E09E2140BF1470555A98299FE7(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:248>
		XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:250>
		return;
	}
}
// Method Definition Index: 29779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_mCCE3009EBDA5485C04EB7D2EDC884E3C4F0F185B_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, String_t* ___0_name, int32_t ___1_inputSourceMode, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:243>
		UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* L_0 = (UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		UnityObjectReferenceCache_2__ctor_m98710579A55696E09E2140BF1470555A98299FE7(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___m_ObjectReference = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReference), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:258>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		String_t* L_3 = ___0_name;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032(L_2, L_3, NULL);
		int32_t L_5 = ___1_inputSourceMode;
		XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, L_4, L_5, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:260>
		return;
	}
}
// Method Definition Index: 29780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:269>
		UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = __this->___m_ObjectReferenceObject;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UnityObjectReferenceCache_2_Get_mDFBF27054C7DCD19C3F6304A19B3D58B2AE3C460(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:270>
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 29781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_SetObjectReference_m12FFA2407D2822DB6CBB1B671A6F349F7AA0DA56_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:282>
		UnityObjectReferenceCache_2_t08EE923CC15885C623411E73603DB293982DFD7A* L_0 = __this->___m_ObjectReference;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** L_1 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)(&__this->___m_ObjectReferenceObject);
		RuntimeObject* L_2 = ___0_value;
		NullCheck(L_0);
		UnityObjectReferenceCache_2_Set_m355C3094DD9F9C03A7435749218114D5C3EC7B0C(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:283>
		return;
	}
}
// Method Definition Index: 29782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_ReadValue_m5F62621C89CC35067EDFEAE1EBBE315554767369_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t G_B3_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B18_0;
	memset((&G_B18_0), 0, sizeof(G_B18_0));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:288>
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:290>
		BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4((&V_1), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{
				BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:292>
			RuntimeObject* L_3;
			L_3 = XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			NullCheck(L_3);
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
			L_4 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
			V_2 = L_4;
			goto IL_00d7;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:296>
		int32_t L_5 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputSourceMode;
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_0087;
			}
			case 3:
			{
				goto IL_00ab;
			}
			case 4:
			{
				goto IL_00ce;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_006c:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:300>
		il2cpp_codegen_initobj((&V_6), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_6;
		V_2 = L_8;
		goto IL_00d7;
	}

IL_0079:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:303>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_2 = L_10;
		goto IL_00d7;
	}

IL_0087:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:306>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_11;
		L_11 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_3), NULL);
		if (L_11)
		{
			goto IL_009d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_6;
		G_B14_0 = L_12;
		goto IL_00a8;
	}

IL_009d:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_13 = V_3;
		NullCheck(L_13);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14;
		L_14 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		G_B14_0 = L_15;
	}

IL_00a8:
	{
		V_2 = G_B14_0;
		goto IL_00d7;
	}

IL_00ab:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:310>
		RuntimeObject* L_16;
		L_16 = XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_7 = L_16;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:311>
		RuntimeObject* L_17 = V_7;
		if (L_17)
		{
			goto IL_00c4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_6;
		G_B18_0 = L_18;
		goto IL_00cb;
	}

IL_00c4:
	{
		RuntimeObject* L_19 = V_7;
		NullCheck(L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_19);
		G_B18_0 = L_20;
	}

IL_00cb:
	{
		V_2 = G_B18_0;
		goto IL_00d7;
	}

IL_00ce:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:315>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = __this->___m_ManualValue;
		V_2 = L_21;
		goto IL_00d7;
	}

IL_00d7:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:317>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_2;
		return L_22;
	}
}
// Method Definition Index: 29783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mB3FA1E715287C738E23501839BE2CC019B0A4C33_gshared (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	BypassScope_tB35565F99D3AE468B5171E5D9CB0AE8274E0A7CE V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:322>
		RuntimeObject* L_0;
		L_0 = XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = __this->___m_CallingBypass;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:324>
		BypassScope__ctor_mC851733D0BA89E4C6D8B31DFBB314108D096BBE4((&V_1), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{
				BypassScope_Dispose_m7522061C3879542376C437B3B49765BA68353B70((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:326>
			RuntimeObject* L_3;
			L_3 = XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = ___0_value;
			NullCheck(L_3);
			bool L_5;
			L_5 = InterfaceFuncInvoker1< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3, L_4);
			V_2 = L_5;
			goto IL_00e9;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:330>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		int32_t L_6;
		L_6 = XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		V_5 = L_6;
		int32_t L_7 = V_5;
		V_4 = L_7;
		int32_t L_8 = V_4;
		switch (L_8)
		{
			case 0:
			{
				goto IL_006d;
			}
			case 1:
			{
				goto IL_0078;
			}
			case 2:
			{
				goto IL_0087;
			}
			case 3:
			{
				goto IL_00af;
			}
			case 4:
			{
				goto IL_00d9;
			}
		}
	}
	{
		goto IL_006d;
	}

IL_006d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:334>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = ___0_value;
		il2cpp_codegen_initobj(L_9, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:335>
		V_2 = (bool)0;
		goto IL_00e9;
	}

IL_0078:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:338>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_10 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = ___0_value;
		bool L_12;
		L_12 = XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_2 = L_12;
		goto IL_00e9;
	}

IL_0087:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:341>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_13;
		L_13 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_3), NULL);
		V_6 = L_13;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_00a4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:342>
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_15 = V_3;
		NullCheck(L_15);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_16;
		L_16 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = ___0_value;
		bool L_18;
		L_18 = XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D(L_16, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_2 = L_18;
		goto IL_00e9;
	}

IL_00a4:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:344>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = ___0_value;
		il2cpp_codegen_initobj(L_19, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:345>
		V_2 = (bool)0;
		goto IL_00e9;
	}

IL_00af:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:349>
		RuntimeObject* L_20;
		L_20 = XRInputValueReader_1_GetObjectReference_mBC248DD6ECA70D0477B507726A6E4E49ABC6F350(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_7 = L_20;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:350>
		RuntimeObject* L_21 = V_7;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_21) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_00ce;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:351>
		RuntimeObject* L_23 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_24 = ___0_value;
		NullCheck(L_23);
		bool L_25;
		L_25 = InterfaceFuncInvoker1< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_23, L_24);
		V_2 = L_25;
		goto IL_00e9;
	}

IL_00ce:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:353>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_26 = ___0_value;
		il2cpp_codegen_initobj(L_26, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:354>
		V_2 = (bool)0;
		goto IL_00e9;
	}

IL_00d9:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:358>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_27 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = __this->___m_ManualValue;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_27 = L_28;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:359>
		V_2 = (bool)1;
		goto IL_00e9;
	}

IL_00e9:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:361>
		bool L_29 = V_2;
		return L_29;
	}
}
// Method Definition Index: 29784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRInputValueReader_1_ReadValue_mE737473037C3C1C2E4AAAD2FA3F63C36E702C60D_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:365>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_000f:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = ___0_action;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		G_B3_0 = L_3;
	}

IL_0015:
	{
		V_1 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:366>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_1;
		return L_4;
	}
}
// Method Definition Index: 29785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_m2A95AD277EC6185B7206C1652F0CE8AF6317B67D_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___1_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:370>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		V_0 = (bool)((((RuntimeObject*)(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:372>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:373>
		V_1 = (bool)0;
		goto IL_002a;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:376>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = ___1_value;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = ___0_action;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_3 = L_5;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:377>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6 = ___0_action;
		NullCheck(L_6);
		bool L_7;
		L_7 = InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62(L_6, NULL);
		V_1 = L_7;
		goto IL_002a;
	}

IL_002a:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:378>
		bool L_8 = V_1;
		return L_8;
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
// Method Definition Index: 29774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_get_manualValue_m6580D9D0E90768453554EC4C3F3A8BDE118832AD_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:227>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
// Method Definition Index: 29775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_manualValue_m7DE8FBB1F992F66B64970AE99224524E22F8232B_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:228>
		il2cpp_codegen_memcpy(L_0, ___0_value, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
// Method Definition Index: 29776
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m86D6EE8C2B6C04E222D96122A85F792D9A7B8CAB_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		return L_0;
	}
}
// Method Definition Index: 29777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_set_bypass_m391756331BB534D08D3C6DF2D5615F75B5E0E21E_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_0);
		return;
	}
}
// Method Definition Index: 29778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_mC3F4DB0A46B3C8AE8E07B03FDE9B6AC8D81E1C78_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:243>
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		il2cpp_codegen_write_instance_field_data<UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_0);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:248>
		XRInputValueReader__ctor_mF80B938FCE31DD85F0E3048DC60D969C2E50A296((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:250>
		return;
	}
}
// Method Definition Index: 29779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1__ctor_m8A6FE1E7C460CBD4EC6AE392547F9B5454503EFE_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, String_t* ___0_name, int32_t ___1_inputSourceMode, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:243>
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		il2cpp_codegen_write_instance_field_data<UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_0);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:258>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		String_t* L_3 = ___0_name;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionUtility_CreateValueAction_mF7C1DCF322EBC2C0478B2F0502AF265CBC570032(L_2, L_3, NULL);
		int32_t L_5 = ___1_inputSourceMode;
		XRInputValueReader__ctor_mAFED8EF378777B7CB3C92AE4ED4FE6130C2A2A6F((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, L_4, L_5, NULL);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:260>
		return;
	}
}
// Method Definition Index: 29780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_GetObjectReference_m3BED8195FBDCE6A99FCC116EBDC1EB0D62D2A039_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:269>
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = *(UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = *(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:270>
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 29781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_SetObjectReference_m862D31846AB537F3363F51ACE9942E1FD7A486F1_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:282>
		UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D* L_0 = *(UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		((  void (*) (UnityObjectReferenceCache_2_t850C1C23A747C1AB952CAB8328E7C55937432A4D*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_0, (((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)))), L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:283>
		return;
	}
}
// Method Definition Index: 29782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_ReadValue_mFB37AAAB53CB16F2EEA26BCDF3A0023969C5A554_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	const Il2CppFullySharedGenericStruct L_8 = L_4;
	const Il2CppFullySharedGenericStruct L_10 = L_4;
	const Il2CppFullySharedGenericStruct L_12 = L_4;
	const Il2CppFullySharedGenericStruct L_15 = L_4;
	const Il2CppFullySharedGenericStruct L_18 = L_4;
	const Il2CppFullySharedGenericStruct L_20 = L_4;
	const Il2CppFullySharedGenericStruct L_21 = L_4;
	const Il2CppFullySharedGenericStruct L_22 = L_4;
	bool V_0 = false;
	BypassScope_t801793A02437762F196198D282A1980396D8B968 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(V_2, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericStruct V_6 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(V_6, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	RuntimeObject* V_7 = NULL;
	int32_t G_B3_0 = 0;
	Il2CppFullySharedGenericStruct G_B14_0 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(G_B14_0, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	Il2CppFullySharedGenericStruct G_B18_0 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(G_B18_0, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:288>
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:290>
		((  void (*) (BypassScope_t801793A02437762F196198D282A1980396D8B968*, XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((&V_1), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{
				BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:292>
			RuntimeObject* L_3;
			L_3 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			NullCheck(L_3);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericStruct* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3, (Il2CppFullySharedGenericStruct*)L_4);
			il2cpp_codegen_memcpy(V_2, L_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
			goto IL_00d7;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:296>
		int32_t L_5 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputSourceMode;
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_0087;
			}
			case 3:
			{
				goto IL_00ab;
			}
			case 4:
			{
				goto IL_00ce;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_006c:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:300>
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_6, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_8, V_6, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(V_2, L_8, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		goto IL_00d7;
	}

IL_0079:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:303>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		InvokerActionInvoker2< InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), NULL, L_9, (Il2CppFullySharedGenericStruct*)L_10);
		il2cpp_codegen_memcpy(V_2, L_10, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		goto IL_00d7;
	}

IL_0087:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:306>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_11;
		L_11 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_3), NULL);
		if (L_11)
		{
			goto IL_009d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_6, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_12, V_6, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(G_B14_0, L_12, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		goto IL_00a8;
	}

IL_009d:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_13 = V_3;
		NullCheck(L_13);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14;
		L_14 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_13, NULL);
		InvokerActionInvoker2< InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), NULL, L_14, (Il2CppFullySharedGenericStruct*)L_15);
		il2cpp_codegen_memcpy(G_B14_0, L_15, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	}

IL_00a8:
	{
		il2cpp_codegen_memcpy(V_2, G_B14_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		goto IL_00d7;
	}

IL_00ab:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:310>
		RuntimeObject* L_16;
		L_16 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_7 = L_16;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:311>
		RuntimeObject* L_17 = V_7;
		if (L_17)
		{
			goto IL_00c4;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_6, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_18, V_6, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(G_B18_0, L_18, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		goto IL_00cb;
	}

IL_00c4:
	{
		RuntimeObject* L_19 = V_7;
		NullCheck(L_19);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericStruct* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_19, (Il2CppFullySharedGenericStruct*)L_20);
		il2cpp_codegen_memcpy(G_B18_0, L_20, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	}

IL_00cb:
	{
		il2cpp_codegen_memcpy(V_2, G_B18_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		goto IL_00d7;
	}

IL_00ce:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:315>
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(V_2, L_21, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		goto IL_00d7;
	}

IL_00d7:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:317>
		il2cpp_codegen_memcpy(L_22, V_2, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_22, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
// Method Definition Index: 29783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mC84F19E640053D49DF7AC4E26440A3649D928CD4_gshared (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_28 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	bool V_0 = false;
	BypassScope_t801793A02437762F196198D282A1980396D8B968 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:322>
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:324>
		((  void (*) (BypassScope_t801793A02437762F196198D282A1980396D8B968*, XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((&V_1), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{
				BypassScope_Dispose_mD2092263EF1CD137EB35D092B66915B2A0EFDE40((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:326>
			RuntimeObject* L_3;
			L_3 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			Il2CppFullySharedGenericStruct* L_4 = ___0_value;
			NullCheck(L_3);
			bool L_5;
			L_5 = InterfaceFuncInvoker1< bool, Il2CppFullySharedGenericStruct* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3, L_4);
			V_2 = L_5;
			goto IL_00e9;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:330>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		int32_t L_6;
		L_6 = XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, NULL);
		V_5 = L_6;
		int32_t L_7 = V_5;
		V_4 = L_7;
		int32_t L_8 = V_4;
		switch (L_8)
		{
			case 0:
			{
				goto IL_006d;
			}
			case 1:
			{
				goto IL_0078;
			}
			case 2:
			{
				goto IL_0087;
			}
			case 3:
			{
				goto IL_00af;
			}
			case 4:
			{
				goto IL_00d9;
			}
		}
	}
	{
		goto IL_006d;
	}

IL_006d:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:334>
		Il2CppFullySharedGenericStruct* L_9 = ___0_value;
		il2cpp_codegen_initobj(L_9, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:335>
		V_2 = (bool)0;
		goto IL_00e9;
	}

IL_0078:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:338>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_10 = ((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this)->___m_InputAction;
		Il2CppFullySharedGenericStruct* L_11 = ___0_value;
		bool L_12;
		L_12 = ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_2 = L_12;
		goto IL_00e9;
	}

IL_0087:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:341>
		NullCheck((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this);
		bool L_13;
		L_13 = XRInputValueReader_TryGetInputActionReference_mD39365C3DCD6A92BCCD9918EF4919D075CF17806((XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59*)__this, (&V_3), NULL);
		V_6 = L_13;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_00a4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:342>
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_15 = V_3;
		NullCheck(L_15);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_16;
		L_16 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_15, NULL);
		Il2CppFullySharedGenericStruct* L_17 = ___0_value;
		bool L_18;
		L_18 = ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_16, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_2 = L_18;
		goto IL_00e9;
	}

IL_00a4:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:344>
		Il2CppFullySharedGenericStruct* L_19 = ___0_value;
		il2cpp_codegen_initobj(L_19, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:345>
		V_2 = (bool)0;
		goto IL_00e9;
	}

IL_00af:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:349>
		RuntimeObject* L_20;
		L_20 = ((  RuntimeObject* (*) (XRInputValueReader_1_t10FA1318595127FAFC306218EEA119C7F8DF1B5F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_7 = L_20;
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:350>
		RuntimeObject* L_21 = V_7;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_21) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_00ce;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:351>
		RuntimeObject* L_23 = V_7;
		Il2CppFullySharedGenericStruct* L_24 = ___0_value;
		NullCheck(L_23);
		bool L_25;
		L_25 = InterfaceFuncInvoker1< bool, Il2CppFullySharedGenericStruct* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_23, L_24);
		V_2 = L_25;
		goto IL_00e9;
	}

IL_00ce:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:353>
		Il2CppFullySharedGenericStruct* L_26 = ___0_value;
		il2cpp_codegen_initobj(L_26, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:354>
		V_2 = (bool)0;
		goto IL_00e9;
	}

IL_00d9:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:358>
		Il2CppFullySharedGenericStruct* L_27 = ___0_value;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_27, L_28, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 1), (void**)(Il2CppFullySharedGenericStruct*)L_27, (void*)L_28);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:359>
		V_2 = (bool)1;
		goto IL_00e9;
	}

IL_00e9:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:361>
		bool L_29 = V_2;
		return L_29;
	}
}
// Method Definition Index: 29784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputValueReader_1_ReadValue_mA9DD9A98276A883692B7BCBDFBAB6912D60F41E9_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	const Il2CppFullySharedGenericStruct L_3 = L_1;
	const Il2CppFullySharedGenericStruct L_4 = L_1;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(V_0, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(V_1, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	Il2CppFullySharedGenericStruct G_B3_0 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	memset(G_B3_0, 0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:365>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(G_B3_0, L_1, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		goto IL_0015;
	}

IL_000f:
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = ___0_action;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), L_2, (Il2CppFullySharedGenericStruct*)L_3);
		il2cpp_codegen_memcpy(G_B3_0, L_3, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	}

IL_0015:
	{
		il2cpp_codegen_memcpy(V_1, G_B3_0, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		goto IL_0018;
	}

IL_0018:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:366>
		il2cpp_codegen_memcpy(L_4, V_1, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		return;
	}
}
// Method Definition Index: 29785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputValueReader_1_TryReadValue_mAF814AE91F21FF5F3AD73616B7D14DB1CAD004D6_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, Il2CppFullySharedGenericStruct* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
	bool V_0 = false;
	bool V_1 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:370>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = ___0_action;
		V_0 = (bool)((((RuntimeObject*)(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:372>
		Il2CppFullySharedGenericStruct* L_2 = ___1_value;
		il2cpp_codegen_initobj(L_2, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:373>
		V_1 = (bool)0;
		goto IL_002a;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:376>
		Il2CppFullySharedGenericStruct* L_3 = ___1_value;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = ___0_action;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), L_4, (Il2CppFullySharedGenericStruct*)L_5);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_3, L_5, SizeOf_TValue_t760FA50A2A343274E5B6CD6587214C08E253F2B7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), (void**)(Il2CppFullySharedGenericStruct*)L_3, (void*)L_5);
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:377>
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6 = ___0_action;
		NullCheck(L_6);
		bool L_7;
		L_7 = InputAction_IsInProgress_m0572B3C5AA6C8E7FC4A1927DDAA54C3D40714E62(L_6, NULL);
		V_1 = L_7;
		goto IL_002a;
	}

IL_002a:
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:378>
		bool L_8 = V_1;
		return L_8;
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
// Method Definition Index: 73330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m66614734A851F69863F28F36CAE8C109DFE633A0_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 73331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mD7FB6CCCB39160CC4D1837430E55165CA2686FE6_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))), L_2);
		V_1 = L_3;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_1;
		V_2 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:32>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 73332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m9DC7A75C5043D26A8B0F27C1EBF6414DB1F38947_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_3 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_3), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_0;
		V_4 = L_8;
		goto IL_0053;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_9 = ___1_instance;
		RuntimeObject* L_10 = *((RuntimeObject**)L_9);
		V_1 = ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_11 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = ___0_data;
		NullCheck(L_12);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_13;
		L_13 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_12, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(11, __this, L_13, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_11, L_14, NULL);
		V_0 = L_15;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_16 = ___1_instance;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_17 = V_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_18);
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_19);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		V_4 = L_20;
		goto IL_0053;
	}

IL_0053:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:46>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_21 = V_4;
		return L_21;
	}
}
// Method Definition Index: 73335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m469B29DA8E93A109CE1A84DEF411C216C2E91B3C_gshared (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 73330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m3B1D5B68B9A2AB907D286BB041E68825E23D338B_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 73331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m228B3D61FB850893564D237F0F16E30BBD9B6B04_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))), L_2);
		V_1 = L_3;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_1;
		V_2 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:32>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 73332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mDDCD92619631E9ED6DE40EDE7B2E4E0A586513DA_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_3 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_3), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_0;
		V_4 = L_8;
		goto IL_0053;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_9 = ___1_instance;
		RuntimeObject* L_10 = *((RuntimeObject**)L_9);
		V_1 = ((*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)UnBox(L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_11 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = ___0_data;
		NullCheck(L_12);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_13;
		L_13 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_12, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* >::Invoke(11, __this, L_13, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_11, L_14, NULL);
		V_0 = L_15;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_16 = ___1_instance;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_17 = V_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_18);
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_19);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		V_4 = L_20;
		goto IL_0053;
	}

IL_0053:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:46>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_21 = V_4;
		return L_21;
	}
}
// Method Definition Index: 73335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m67B64763A70B6CFF7BC8E207844892AFCCFA9B72_gshared (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 73330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m9F76A8BA82C3043DFB71DA4C07A250F84CDB0184_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 73331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m641FFE348BDF3531BF6BDBDD22704DE53ED14F4A_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))), L_2);
		V_1 = L_3;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_1;
		V_2 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:32>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 73332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mFFB6258A349189C4019C5E3C202AAFC7230C1BF9_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_3 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_3), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_0;
		V_4 = L_8;
		goto IL_0053;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_9 = ___1_instance;
		RuntimeObject* L_10 = *((RuntimeObject**)L_9);
		V_1 = ((*(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)UnBox(L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_11 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = ___0_data;
		NullCheck(L_12);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_13;
		L_13 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_12, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* >::Invoke(11, __this, L_13, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_11, L_14, NULL);
		V_0 = L_15;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_16 = ___1_instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_17 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_18);
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_19);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		V_4 = L_20;
		goto IL_0053;
	}

IL_0053:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:46>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_21 = V_4;
		return L_21;
	}
}
// Method Definition Index: 73335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m8386B8479295E3AC361DE4EBBFC2C3CCB11BB908_gshared (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 73330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m434ECAC51B09FD530A6DD456388A8B3B39F71DE1_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 73331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m012F8AADBFF962499339189E5EABB41B2F51D491_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, RuntimeObject*, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1))), L_2);
		V_1 = L_3;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_1;
		V_2 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:32>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 73332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m9DA1D304ED129B105B65D30686CE2CE0BFACBBD0_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_3 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_3), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_0;
		V_4 = L_8;
		goto IL_0053;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_9 = ___1_instance;
		RuntimeObject* L_10 = *((RuntimeObject**)L_9);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_11 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = ___0_data;
		NullCheck(L_12);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_13;
		L_13 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_12, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, RuntimeObject** >::Invoke(11, __this, L_13, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_11, L_14, NULL);
		V_0 = L_15;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_16 = ___1_instance;
		RuntimeObject* L_17 = V_1;
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_17;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_17);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_18 = V_0;
		V_4 = L_18;
		goto IL_0053;
	}

IL_0053:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:46>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_4;
		return L_19;
	}
}
// Method Definition Index: 73335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mC4D982EAE127626844AA2FF8D98F3CEA570A1A10_gshared (fsDirectConverter_1_t3CFAD4EABDF356C7AA4577B8D1F5241EA64AAD95* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 73330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_mC32E7553583DD793467D6FB5CE24747854A070E4_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 73331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m8B301BF0E4624082448AC261F66E55A9069C9F2B_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))), L_2);
		V_1 = L_3;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_1;
		V_2 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:32>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 73332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mB57F1FED13B2F213B3A9C45337315BC8E5E3F6A6_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_3 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_3), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_0;
		V_4 = L_8;
		goto IL_0053;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_9 = ___1_instance;
		RuntimeObject* L_10 = *((RuntimeObject**)L_9);
		V_1 = ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_11 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = ___0_data;
		NullCheck(L_12);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_13;
		L_13 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_12, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* >::Invoke(11, __this, L_13, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_11, L_14, NULL);
		V_0 = L_15;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_16 = ___1_instance;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_17 = V_1;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_18);
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_19);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		V_4 = L_20;
		goto IL_0053;
	}

IL_0053:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:46>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_21 = V_4;
		return L_21;
	}
}
// Method Definition Index: 73335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m644F4C264CCF8F165037066D5AC2034B6D176110_gshared (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 73330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m58E406781ACEFCFD3F1526A502D26109CE14F8DF_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 73331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mBF17673DDC9A3AF571B07DA5640AA0BFE06B3FB4_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))), L_2);
		V_1 = L_3;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_1;
		V_2 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:32>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 73332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m6DC3716E17198067B467187A41C5F378F9C2753F_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_3 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_3), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_0;
		V_4 = L_8;
		goto IL_0053;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_9 = ___1_instance;
		RuntimeObject* L_10 = *((RuntimeObject**)L_9);
		V_1 = ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_11 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = ___0_data;
		NullCheck(L_12);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_13;
		L_13 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_12, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A* >::Invoke(11, __this, L_13, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_11, L_14, NULL);
		V_0 = L_15;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_16 = ___1_instance;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_17 = V_1;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_18);
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_19);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		V_4 = L_20;
		goto IL_0053;
	}

IL_0053:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:46>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_21 = V_4;
		return L_21;
	}
}
// Method Definition Index: 73335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mBFCA0DE0165FE7459AEBC89AC73731BBCF7F64E6_gshared (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 73330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m3FD4D633636A5AF98D07BE76673F55CC9262FB13_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 73331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mA6F80C2C119177F6A02BE2DCE8B17803F98E0A2A_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1)))), L_2);
		V_1 = L_3;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_1;
		V_2 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:32>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 73332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m055ADA15BC7796EDA3848DBC9F9B51BB2562A886_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_3 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_3), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_0;
		V_4 = L_8;
		goto IL_0053;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_9 = ___1_instance;
		RuntimeObject* L_10 = *((RuntimeObject**)L_9);
		V_1 = ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_11 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_12 = ___0_data;
		NullCheck(L_12);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_13;
		L_13 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_12, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(11, __this, L_13, (&V_1));
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_11, L_14, NULL);
		V_0 = L_15;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_16 = ___1_instance;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), &L_18);
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_19);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		V_4 = L_20;
		goto IL_0053;
	}

IL_0053:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:46>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_21 = V_4;
		return L_21;
	}
}
// Method Definition Index: 73335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_m74EBB5195DD5F746EE58C2B7FE7E20A93E44DFE8_gshared (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 73330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m7BFCBE6128959F6AAA08BB9FB82C5E3DA07FB3AD_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:24>
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 73331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mAB417033757D14765392C802374EE82941F7E430_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:28>
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:29>
		RuntimeObject* L_1 = ___0_instance;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_4 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5;
		L_5 = VirtualFuncInvoker2Invoker< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Il2CppFullySharedGenericAny, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))), L_4);
		V_1 = L_5;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:30>
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_6 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_7 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_8 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_8, L_7, NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_8);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:31>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_9 = V_1;
		V_2 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:32>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 73332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m68AEEE5C3FB70E702E364D7B0C537966E0B079CF_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	memset(V_1, 0, SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	bool V_2 = false;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:36>
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:37>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_3 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_3), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:39>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_8 = V_0;
		V_4 = L_8;
		goto IL_0053;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:42>
		RuntimeObject** L_9 = ___1_instance;
		RuntimeObject* L_10 = *((RuntimeObject**)L_9);
		void* L_12 = UnBox_Any(L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_11);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12)), SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:43>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_14 = ___0_data;
		NullCheck(L_14);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_15;
		L_15 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_14, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_16;
		L_16 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Il2CppFullySharedGenericAny* >::Invoke(11, __this, L_15, (Il2CppFullySharedGenericAny*)V_1);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_17;
		L_17 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_13, L_16, NULL);
		V_0 = L_17;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:44>
		RuntimeObject** L_18 = ___1_instance;
		il2cpp_codegen_memcpy(L_19, V_1, SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_19);
		*((RuntimeObject**)L_18) = (RuntimeObject*)L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_18, (void*)(RuntimeObject*)L_20);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:45>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_21 = V_0;
		V_4 = L_21;
		goto IL_0053;
	}

IL_0053:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/fsDirectConverter.cs:46>
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_22 = V_4;
		return L_22;
	}
}
// Method Definition Index: 73335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mA219A5FF100DBCB35147606E9E4E9C565D2F8D50_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// Method Definition Index: 73511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:13>
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 73512
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:15>
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 73513
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
	const Il2CppFullySharedGenericAny L_4 = L_3;
	bool V_0 = false;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
	memset(V_1, 0, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:21>
		bool L_0;
		L_0 = ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:23>
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:25>
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)), SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		il2cpp_codegen_memcpy(V_1, L_3, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		goto IL_0020;
	}

IL_0020:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:26>
		il2cpp_codegen_memcpy(L_4, V_1, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A(_thisAdjusted, il2cppRetVal, method);
	return;
}
// Method Definition Index: 73514
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:31>
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), (bool)1);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:32>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 3)) ? ___0_value : &___0_value), SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),1), L_0, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:33>
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 73511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:13>
		bool L_0 = __this->____hasValue;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 73512
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:15>
		bool L_0 = __this->____hasValue;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 73513
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:21>
		bool L_0;
		L_0 = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:23>
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:25>
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_3 = __this->____value;
		V_1 = L_3;
		goto IL_0020;
	}

IL_0020:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:26>
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 _returnValue;
	_returnValue = fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 73514
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:31>
		__this->____hasValue = (bool)1;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:32>
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_0 = ___0_value;
		__this->____value = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->___Ancestors), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->___VersionString), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->___ModelType), (void*)NULL);
		#endif
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:33>
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6_AdjustorThunk (RuntimeObject* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method)
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*>(__this + _offset);
	fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 29763
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRInputValueReader_get_inputSourceMode_m6D12A254104BBE6F3945ACFE6CAC42DC51CDD5E0_inline (XRInputValueReader_t0A220D04F7D6F5BC7E5A253F5AF8A9C3AB430D59* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:107>
		int32_t L_0 = __this->___m_InputSourceMode;
		return L_0;
	}
}
// Method Definition Index: 29651
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m7FBD19288A03E52062BB53A4B3CF42CDBB5311B7_gshared_inline (InputFeatureUsageString_1_tBC75C3672E6EDA491F708EEB938D226CA2DEE7DD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/InputFeatureUsageString.cs:21>
		String_t* L_0 = __this->___m_Name;
		return L_0;
	}
}
// Method Definition Index: 29651
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m7F1E267B8779D2B534DF6CAA4F1C213C4923CDBD_gshared_inline (InputFeatureUsageString_1_t4FEE7F6F55E2ED86526BCEEB6D1E4DA01D9DD0FE* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/InputFeatureUsageString.cs:21>
		String_t* L_0 = __this->___m_Name;
		return L_0;
	}
}
// Method Definition Index: 29651
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m0CAE008792052EE3C31DB35F35C0C3B711E1C0E8_gshared_inline (InputFeatureUsageString_1_t95DB71B1903A6CBA93A72A0C4C0F63DA59EBDA71* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/InputFeatureUsageString.cs:21>
		String_t* L_0 = __this->___m_Name;
		return L_0;
	}
}
// Method Definition Index: 29651
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m79EB170B0604E92F60955A492E64AE2E1E4E2A91_gshared_inline (InputFeatureUsageString_1_tE0192E43D96817D51E813D276FAB238AADB6AAA5* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/InputFeatureUsageString.cs:21>
		String_t* L_0 = __this->___m_Name;
		return L_0;
	}
}
// Method Definition Index: 29651
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_mDB2E755D22D0A9FB7AA14A88A8BE0BDA135533AF_gshared_inline (InputFeatureUsageString_1_t5CF9DAA3A2234D0073E5DEC9B39FE5EFC96F3408* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/InputFeatureUsageString.cs:21>
		String_t* L_0 = __this->___m_Name;
		return L_0;
	}
}
// Method Definition Index: 29651
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsageString_1_get_name_m07551A6D1E8A333DDA4D9755E7AD67A00CD44695_gshared_inline (InputFeatureUsageString_1_tD921CEFD6061D9A6075AEADFEBD8D112FD944693* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/InputFeatureUsageString.cs:21>
		String_t* L_0 = __this->___m_Name;
		return L_0;
	}
}
// Method Definition Index: 29776
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m7A5B2826C89CB7B562A2B138E369771D421A9A6B_gshared_inline (XRInputValueReader_1_t8F80E2A6EAD592207D2C695B2C3BF79698840C35* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 29776
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_mB8BDBFA98B186116F37455EE275A047A240518F5_gshared_inline (XRInputValueReader_1_t7482F990F323B5D373DF221174629A7C3EB97BC5* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 29776
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInputValueReader_1_get_bypass_m3D1FB833BDBCE34DB6636291EAD65A8C55381399_gshared_inline (XRInputValueReader_1_t6B311BAB920F92BC851C1CD180A8555021DE8FC0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.interaction.toolkit@76258c00be3e/Runtime/Inputs/Readers/XRInputValueReader.cs:234>
		RuntimeObject* L_0 = __this->___U3CbypassU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 73511
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:13>
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return L_0;
	}
}
// Method Definition Index: 73511
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F_gshared_inline (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Core/Dependencies/FullSerializer/Internal/fsOption.cs:13>
		bool L_0 = __this->____hasValue;
		return L_0;
	}
}
