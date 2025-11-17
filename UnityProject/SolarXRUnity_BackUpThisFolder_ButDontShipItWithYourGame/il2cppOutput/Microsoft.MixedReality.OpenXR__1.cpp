#include "pch-cpp.hpp"





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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

struct Action_1_t11340E5174173030E076A75316E18A395082F8A5;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535;
struct Dictionary_2_t8201E1B24F744EAB220281FE4E2EE3E29FC970C0;
struct Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA;
struct Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B;
struct IEnumerable_1_tB83A3B12F5B9AAEC6CFF917CFDEB77D3AF2BB650;
struct IEqualityComparer_1_t3307DD9AF9B2FB6D29369AE34FAC79516C04F489;
struct KeyCollection_t5823C8DA2382CF92F1764470358479E3188C1A62;
struct KeyCollection_t03A7FB59EF988EBD45BEFDC1EDFF1A8BA91DACB9;
struct KeyCollection_t9E060C86D70A5E2DABBB5BBFBBE4F1B9F583705F;
struct List_1_tC22325D2CF16D4312A02FEF441665DE1DABB3069;
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t160F335B05E7692BA4234AFD249D62316B990635;
struct List_1_t511BD97C45CE630FB76E68532C127583B647161F;
struct List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35;
struct ObjectPool_1_t51567CC7273F3E7F80D2821A64720EC208252097;
struct ObjectPool_1_tAF6FF40F22722AF69F31FD0344153D1CBA5DD516;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct ReadOnlyList_1_t6B97BE1A8E9DCB726FB412232C86647BB30B14F6;
struct ReadOnlyList_1_t08BE1BF4C3C8359CF33DDA7A9F0A3F8FC3E2CCD8;
struct SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07;
struct SubsystemDescriptorWithProvider_2_t5371C1AD13691BAA44EEB7D822245FB2802024ED;
struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55;
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3;
struct SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3;
struct SubsystemProvider_1_t0FC44397762C3D7F50C09E3117381BA1D8E46D4D;
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
struct SubsystemWithProvider_3_t6BE1E3098EABAB2CCADAE626A4DB9DB8D4E38D7F;
struct TaskFactory_1_t473B37BD2E5B3F5EC2F0AF2DBC05A0C31BDAED38;
struct Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1;
struct TrackingSubsystem_4_t540941697851E30F426086F3FF64AB8F3E6E8A36;
struct TrackingSubsystem_4_tF56E54AAA20020788FD751DB507BF114FDA7F37C;
struct UnityEvent_1_tD0EC2A4CFF83D815F986EE463DA5000DB937F484;
struct ValidationUtility_1_t4071DC84AD0683D4663382F1ED47C6DFFF271FB5;
struct ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F;
struct ValueCollection_t9853123B9054CBA3BE91C2A72D2DF6D196C48CB1;
struct ValueCollection_t54435D0A93A5BD5EB6A04A450ACB34185B20BFA2;
struct EntryU5BU5D_t7B68FBCD8295231F4624FC74CC90AF09CB0533BE;
struct EntryU5BU5D_tB7A32D8CB3BA3DE15C6B3012D7DED16C6A874BBD;
struct SlotU5BU5D_t8B6763663F83272EA8D1F0278A6E57A7EE836B73;
struct ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC;
struct XRMarkerSubsystemDescriptorU5BU5D_t29D66BBA61AEC7558FAAA08A31214A92ED40E64D;
struct XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541;
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06;
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IOpenXRContext_t9516AC31F508ED22DB3791D6A9A88C9963328263;
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
struct ISubsystemPlugin_t40FA6639F1F57974DC348B62EA2DCE1A8EB74B82;
struct InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351;
struct MarkerSubsystem_t6CE0544D63C7BF11F4D00888AD257947C248A72E;
struct MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct StringBuilder_t;
struct SubsystemController_tD5980C0FF070149F54AC1C113942441FCC0A69BF;
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XRAnchorStore_tA17A979992A57D87A09540CA7959CAC6DBADAC93;
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
struct XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30;
struct XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357;
struct XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6;
struct XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2;
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE;
struct OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
struct Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C;
struct Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC;

IL2CPP_EXTERN_C RuntimeClass* ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t511BD97C45CE630FB76E68532C127583B647161F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD____U3CproviderTypeU3Ek__BackingField_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0DE17B7149CFC4AD2D8D4499DED4098286557720;
IL2CPP_EXTERN_C String_t* _stringLiteral23DC94C1A21957C047FE1EB19F86F440997C76E7;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8A445EAF16A7CD3D15D43F73605AFDAF9E6A4652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mCE7E4DDDBB265D1DA73EC746C78893E20115B103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m431780744734EE4EC182BF5151096E066DB55325_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m98B8D02CCF63B9E76FCC2BE8FA6A6FFEA16364FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m38283E00C6BBAED167431266E49302A4FB2E9C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mD593334AB2D37306843FBFB0052346953414E594_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m483C72F7DD9B6DB29F3D3D65178F055CF1E756DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE1966FF7305FCFD926188A01F0EA2C1ACED3C652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mE611784C8B2BF45DD5B8969565FFE8DDB95220FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m81F13A0651D8C3119A4261E2DB5EDEC36CC67632_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m37ED1CFE8CBE452AC84176BBD88C3887F1873C07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m5C581F51050334465053446FE9C159CD3AB59756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m2F673F14126CDE80375D6C2D5B8FC5A27E694B6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m04FF651FBDB31735823C27E350F83EBBD864673D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m64144FA26440B5BC78A43D948FA6CD77E7B32C4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mCBD4575BD0A5EF520E35E17AA318A9999E9F5CBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m3B99CDB9A1D2168E059A5CCF5D68BD8111D7904A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m9C4751E6D978C5B862FAD4EBBD3BD342754B2705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISubsystemPlugin_CreateSubsystem_TisXRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6_TisXRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357_m1A23BDF123AF771DE0E0D8BC99000A2698E7D48A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISubsystemPlugin_DestroySubsystem_TisXRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357_m29E429B7340A8A442182BD2DAA371BE7A9443B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m324E7A7CD9476D65BA62D991A48E39EEBCA54AC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m54F232CCA2D4C159E105596ABC5A5E7BF58EC3C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC591BF6C7964B9359D62D7D0BD6AD4461C35F580_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m48CD3CF61FDD9A377C0C95816E46015C515F3070_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m6FA2FCD46A3382FA72F57CFE2B5E85D0787117BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mD368FDB245534A15FF4CC92F2D785391B9E8E4CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0_mFD5E6855D47C92D8001F08A675EFCACFAD237D66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m753E2A58E6C1BDD8F1C85FF19F65FFAF5BFB15B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mA05C9946B5B5F40525277432C838AC8F4A64E250_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m33F89C2694D7E4CA9CCA6FA3B1E05233D251CBB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m4453FA30F2EFF30147505B49EA2E983051936262_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mF73A5DA50C043A341E9948B988BD48252204D4A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_m860F49A1552CDB7B6BC6C7AE3780999F7B50E1B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_get_subsystem_mA1F0EB8234CADB2B521F077B1F4A35D931C3E207_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m58F9D97109F68F0DDBD2821E27882E90ADAD0BAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1_CopyFrom_m9CC036563CA29B66DCEFBA5D882AC7573B3C0C2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_4__ctor_m2988A45459798133A5E117AD263DFA6560F7A74E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidationUtility_1_ValidateAndDisposeIfThrown_m7F18C45935AE6619874E1B4B5A009820AD4464CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidationUtility_1__ctor_m436491B161EEE3548DEEDBBB85EB6B1B357F8193_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MarkerSubsystem_t6CE0544D63C7BF11F4D00888AD257947C248A72E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736;;
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke;
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke;;

struct ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0;
struct XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC;
struct XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t7B68FBCD8295231F4624FC74CC90AF09CB0533BE* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t03A7FB59EF988EBD45BEFDC1EDFF1A8BA91DACB9* ____keys;
	ValueCollection_t9853123B9054CBA3BE91C2A72D2DF6D196C48CB1* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tB7A32D8CB3BA3DE15C6B3012D7DED16C6A874BBD* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t9E060C86D70A5E2DABBB5BBFBBE4F1B9F583705F* ____keys;
	ValueCollection_t54435D0A93A5BD5EB6A04A450ACB34185B20BFA2* ____values;
	RuntimeObject* ____syncRoot;
};
struct HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t8B6763663F83272EA8D1F0278A6E57A7EE836B73* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct KeyCollection_t03A7FB59EF988EBD45BEFDC1EDFF1A8BA91DACB9  : public RuntimeObject
{
	Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* ____dictionary;
};
struct KeyCollection_t9E060C86D70A5E2DABBB5BBFBBE4F1B9F583705F  : public RuntimeObject
{
	Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* ____dictionary;
};
struct List_1_t160F335B05E7692BA4234AFD249D62316B990635  : public RuntimeObject
{
	TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t511BD97C45CE630FB76E68532C127583B647161F  : public RuntimeObject
{
	XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35  : public RuntimeObject
{
	XRMarkerSubsystemDescriptorU5BU5D_t29D66BBA61AEC7558FAAA08A31214A92ED40E64D* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F  : public RuntimeObject
{
	HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* ___m_Trackables;
};
struct U3CPrivateImplementationDetailsU3E_t228A994DA42421786B951FED157E05FA7A1B2655  : public RuntimeObject
{
};
struct ARAnchorExtensions_t14B3EE61B7B4E6A6B39A16F0805BA8D35BA56C3A  : public RuntimeObject
{
};
struct AnchorManagerExtensions_tB321ADA06AF5E4B57B4370F055475EDB3170AD49  : public RuntimeObject
{
};
struct AnchorSubsystemExtensions_tE071EDB7D6F7E3864217BA3989D967DE415D5A19  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct MeshSubsystemExtensions_tF543A0BA0DF8C9C71AA279F61559FE6362AAF424  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct SubsystemController_tD5980C0FF070149F54AC1C113942441FCC0A69BF  : public RuntimeObject
{
	RuntimeObject* ___Context;
};
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	String_t* ___U3CidU3Ek__BackingField;
	Type_t* ___U3CproviderTypeU3Ek__BackingField;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField;
};
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	bool ___m_Running;
};
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	bool ___U3CrunningU3Ek__BackingField;
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
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
struct XRAnchorExtensions_tE8843893302CEA7E59DBE4BE34A17D02D1532BD7  : public RuntimeObject
{
};
struct SubsystemDescriptorWithProvider_2_t5371C1AD13691BAA44EEB7D822245FB2802024ED  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};
struct SubsystemProvider_1_t0FC44397762C3D7F50C09E3117381BA1D8E46D4D  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	RuntimeObject* ___U3CsubsystemDescriptorU3Ek__BackingField;
	RuntimeObject* ___U3CproviderU3Ek__BackingField;
};
struct SubsystemWithProvider_3_t9B46676D7BE943A96773ABEE0697A7F35EA89C3B  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30* ___U3CsubsystemDescriptorU3Ek__BackingField;
	Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* ___U3CproviderU3Ek__BackingField;
};
struct SubsystemWithProvider_3_t6BE1E3098EABAB2CCADAE626A4DB9DB8D4E38D7F  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6* ___U3CsubsystemDescriptorU3Ek__BackingField;
	Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* ___U3CproviderU3Ek__BackingField;
};
struct Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	XRAnchorStore_tA17A979992A57D87A09540CA7959CAC6DBADAC93* ___m_result;
};
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
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
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
struct MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7  : public SubsystemController_tD5980C0FF070149F54AC1C113942441FCC0A69BF
{
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9 
{
	float ___lastOffsetCalculationTime;
	float ___offset;
};
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	uint64_t ___m_SubId1;
	uint64_t ___m_SubId2;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D6445_t35136A0E66166536E4BAE6EE9B65382360D646C8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6445_t35136A0E66166536E4BAE6EE9B65382360D646C8__padding[6445];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D6728_tC1585ABAE5DF635A628BC883F4EE7A55FDDB9741 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6728_tC1585ABAE5DF635A628BC883F4EE7A55FDDB9741__padding[6728];
	};
};
#pragma pack(pop, tp)
struct Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD 
{
	String_t* ___U3CidU3Ek__BackingField;
	Type_t* ___U3CproviderTypeU3Ek__BackingField;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField;
};
struct Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField;
	Type_t* ___U3CproviderTypeU3Ek__BackingField;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField;
};
struct Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField;
	Type_t* ___U3CproviderTypeU3Ek__BackingField;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField;
};
struct Enumerator_t413487DCCACC376393F93AF90282B4527081B999 
{
	List_1_t160F335B05E7692BA4234AFD249D62316B990635* ____list;
	int32_t ____index;
	int32_t ____version;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ____current;
};
struct TrackingSubsystem_4_tAE598621837B470F57C1F0867DC899BE9FDE8956  : public SubsystemWithProvider_3_t9B46676D7BE943A96773ABEE0697A7F35EA89C3B
{
};
struct TrackingSubsystem_4_tF56E54AAA20020788FD751DB507BF114FDA7F37C  : public SubsystemWithProvider_3_t6BE1E3098EABAB2CCADAE626A4DB9DB8D4E38D7F
{
};
struct ARMarkerType_t98DB893DF1611EE7F97184C8A4659F4B63233326 
{
	int32_t ___value__;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
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
struct FrameTime_t8B0BF0F677E4DCDF85387F0120ED2A41EA3FE746 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3  : public RuntimeObject
{
	intptr_t ___m_Ptr;
	RuntimeObject* ___m_SubsystemDescriptor;
};
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	RuntimeObject* ___m_SubsystemDescriptor;
};
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com
{
	intptr_t ___m_Ptr;
	RuntimeObject* ___m_SubsystemDescriptor;
};
struct ListenMode_tFE1C62334D6AC43D5CC7ACB87A98AD1E8D235534 
{
	int32_t ___value__;
};
struct MeshComputeConsistency_t2A9AB5D4D97F9FD9A4EA17E2B802507F5DDB9C82 
{
	int32_t ___value__;
};
struct MeshType_t5067F525FE93882AB3086EF6C9B6B33AB986A775 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
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
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
};
struct QRCodeType_tB9FD5A851EFB0D8F10B0B97C0023A7E83212F98B 
{
	int32_t ___value__;
};
struct RemotingAudioCaptureMode_t54F1B820095A0232E1948FDE4A58F5D5E9EA62FC 
{
	int32_t ___value__;
};
struct RemotingState_tA5BE1431560341A6049AFF5CFCE1F483D115F076 
{
	int32_t ___value__;
};
struct RemotingVideoCodec_tC2E7D43E4DC4741656FB54D0EEC03C8E783439B5 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SecureRemotingNameValidationResult_t71C9443E3E6714E39C121463AADAC2A21177BC25 
{
	int32_t ___value__;
};
struct TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2 
{
	int32_t ___value__;
};
struct TransformMode_t15459C6E860542E68CD64D685EF7179CE035BB6A 
{
	int32_t ___value__;
};
struct VisualMeshLevelOfDetail_t838556F79D72E180C78DAFA06F356D5FF9BF1F30 
{
	int32_t ___value__;
};
struct XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6  : public SubsystemDescriptorWithProvider_2_t5371C1AD13691BAA44EEB7D822245FB2802024ED
{
};
struct XrSceneMarkerQRCodeSymbolTypeMSFT_tAA8DB36B6B3665993B819CDE4DC6B5E9EE082964 
{
	int32_t ___value__;
};
struct XrSceneMarkerTypeMSFT_t59F7DE32A063CEB9C8A21B53FDF96EEF899ED083 
{
	int32_t ___value__;
};
struct Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC  : public SubsystemProvider_1_t0FC44397762C3D7F50C09E3117381BA1D8E46D4D
{
};
struct IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6 
{
	String_t* ___RemoteHostName;
	uint16_t ___RemotePort;
	uint32_t ___MaxBitrateKbps;
	int32_t ___VideoCodec;
	bool ___EnableAudio;
	int32_t ___AudioCaptureMode;
};
struct InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshaled_pinvoke
{
	char* ___RemoteHostName;
	uint16_t ___RemotePort;
	uint32_t ___MaxBitrateKbps;
	int32_t ___VideoCodec;
	int32_t ___EnableAudio;
	int32_t ___AudioCaptureMode;
};
struct InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshaled_com
{
	Il2CppChar* ___RemoteHostName;
	uint16_t ___RemotePort;
	uint32_t ___MaxBitrateKbps;
	int32_t ___VideoCodec;
	int32_t ___EnableAudio;
	int32_t ___AudioCaptureMode;
};
struct InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139 
{
	String_t* ___ListenInterface;
	uint16_t ___HandshakeListenPort;
	uint16_t ___TransportListenPort;
	uint32_t ___MaxBitrateKbps;
	int32_t ___VideoCodec;
	bool ___EnableAudio;
	int32_t ___AudioCaptureMode;
};
struct InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshaled_pinvoke
{
	char* ___ListenInterface;
	uint16_t ___HandshakeListenPort;
	uint16_t ___TransportListenPort;
	uint32_t ___MaxBitrateKbps;
	int32_t ___VideoCodec;
	int32_t ___EnableAudio;
	int32_t ___AudioCaptureMode;
};
struct InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshaled_com
{
	Il2CppChar* ___ListenInterface;
	uint16_t ___HandshakeListenPort;
	uint16_t ___TransportListenPort;
	uint32_t ___MaxBitrateKbps;
	int32_t ___VideoCodec;
	int32_t ___EnableAudio;
	int32_t ___AudioCaptureMode;
};
#pragma pack(push, tp, 8)
struct MeshComputeSettings_t9846F4B1842319A1C05A94581E0248E1253A896D 
{
	int32_t ___meshType;
	int32_t ___visualMeshLevelOfDetail;
	int32_t ___meshComputeConsistency;
};
#pragma pack(pop, tp)
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
#pragma pack(push, tp, 8)
struct NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 
{
	Guid_t ___id;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	int32_t ___trackingState;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size;
	int64_t ___lastSeenTime;
	int32_t ___type;
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 8)
struct NativeQRCodeProperties_tAC6DDE341B65C1EDBB0A04D80370B97E73640FE0 
{
	int32_t ___type;
	uint32_t ___version;
};
#pragma pack(pop, tp)
struct QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D 
{
	uint32_t ___version;
	int32_t ___type;
};
#pragma pack(push, tp, 8)
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 
{
	bool ___TrustedRoot;
	bool ___Revoked;
	bool ___Expired;
	bool ___WrongUsage;
	bool ___RevocationCheckFailed;
	bool ___InvalidCertOrChain;
	int32_t ___NameValidationResult;
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 8)
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke
{
	int32_t ___TrustedRoot;
	int32_t ___Revoked;
	int32_t ___Expired;
	int32_t ___WrongUsage;
	int32_t ___RevocationCheckFailed;
	int32_t ___InvalidCertOrChain;
	int32_t ___NameValidationResult;
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 8)
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_com
{
	int32_t ___TrustedRoot;
	int32_t ___Revoked;
	int32_t ___Expired;
	int32_t ___WrongUsage;
	int32_t ___RevocationCheckFailed;
	int32_t ___InvalidCertOrChain;
	int32_t ___NameValidationResult;
};
#pragma pack(pop, tp)
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	Guid_t ___m_SessionId;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF  : public TrackingSubsystem_4_tAE598621837B470F57C1F0867DC899BE9FDE8956
{
	ValidationUtility_1_t4071DC84AD0683D4663382F1ED47C6DFFF271FB5* ___m_ValidationUtility;
};
struct XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___U3CtrackableIdU3Ek__BackingField;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CposeU3Ek__BackingField;
	int32_t ___U3CtrackingStateU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CcenterU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CsizeU3Ek__BackingField;
	float ___U3ClastSeenTimeU3Ek__BackingField;
	int32_t ___U3CtransformModeU3Ek__BackingField;
	int32_t ___U3CmarkerTypeU3Ek__BackingField;
	intptr_t ___U3CnativePtrU3Ek__BackingField;
};
struct XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357  : public TrackingSubsystem_4_tF56E54AAA20020788FD751DB507BF114FDA7F37C
{
	ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F* ___m_ValidationUtility;
};
struct OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA  : public Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC
{
	ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* ___m_enabledMarkerTypes;
	int32_t ___m_defaultTransformMode;
	Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* ___m_Markers;
	Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* ___m_PendingTransforms;
	TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9 ___m_TimeOffsetInfo;
};
struct TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 
{
	NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496 ___m_Added;
	NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496 ___m_Updated;
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed;
	bool ___U3CisCreatedU3Ek__BackingField;
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351  : public MulticastDelegate_t
{
};
struct MarkerSubsystem_t6CE0544D63C7BF11F4D00888AD257947C248A72E  : public XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357
{
};
struct XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2  : public IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	RuntimeObject* ___U3CsubsystemU3Ek__BackingField;
};
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___U3CsubsystemU3Ek__BackingField;
};
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6  : public SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3
{
	UnityEvent_1_tD0EC2A4CFF83D815F986EE463DA5000DB937F484* ___U3CtrackablesChangedU3Ek__BackingField;
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_Trackables;
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_PendingAdds;
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___U3CoriginU3Ek__BackingField;
};
struct ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	bool ___m_DestroyOnRemoval;
	bool ___U3CpendingU3Ek__BackingField;
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___U3CsessionRelativeDataU3Ek__BackingField;
};
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06  : public ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B
{
};
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E  : public ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6
{
	Action_1_t11340E5174173030E076A75316E18A395082F8A5* ___anchorsChanged;
	ObjectPool_1_t51567CC7273F3E7F80D2821A64720EC208252097* ___m_AnchorCompletionSources;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab;
};
struct List_1_t160F335B05E7692BA4234AFD249D62316B990635_StaticFields
{
	TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* ___s_emptyArray;
};
struct List_1_t511BD97C45CE630FB76E68532C127583B647161F_StaticFields
{
	XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* ___s_emptyArray;
};
struct List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35_StaticFields
{
	XRMarkerSubsystemDescriptorU5BU5D_t29D66BBA61AEC7558FAAA08A31214A92ED40E64D* ___s_emptyArray;
};
struct ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F_StaticFields
{
	HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* ___s_IdSet;
	String_t* ___k_AddedAction;
	String_t* ___k_UpdatedAction;
	String_t* ___k_RemovedAction;
};
struct U3CPrivateImplementationDetailsU3E_t228A994DA42421786B951FED157E05FA7A1B2655_StaticFields
{
	__StaticArrayInitTypeSizeU3D6728_tC1585ABAE5DF635A628BC883F4EE7A55FDDB9741 ___1D33EABFE76C590E12AE1C23BC581F166DB1712587F68E152BB783017B46EC0E;
	__StaticArrayInitTypeSizeU3D6445_t35136A0E66166536E4BAE6EE9B65382360D646C8 ___9CD23AC2BD9B15EB9EA0ECD410A66F8FE53A96A5CAC823712A5C8AD50FFE6238;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1_StaticFields
{
	TaskFactory_1_t473B37BD2E5B3F5EC2F0AF2DBC05A0C31BDAED38* ___s_defaultFactory;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_StaticFields
{
	List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35* ___s_MarkerDescriptors;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex;
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
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity;
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
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields
{
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___s_Default;
};
struct XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_StaticFields
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___s_Default;
};
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E_StaticFields
{
	ObjectPool_1_tAF6FF40F22722AF69F31FD0344153D1CBA5DD516* ___s_AnchorByTrackableIdMaps;
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
struct ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801  : public RuntimeArray
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
struct XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541  : public RuntimeArray
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
struct TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0  : public RuntimeArray
{
	ALIGN_FIELD (8) TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 m_Items[1];

	inline TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 value)
	{
		m_Items[index] = value;
	}
};
struct XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC  : public RuntimeArray
{
	ALIGN_FIELD (8) XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 m_Items[1];

	inline XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshal_pinvoke(const SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736& unmarshaled, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshal_pinvoke_back(const SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke& marshaled, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736& unmarshaled);
IL2CPP_EXTERN_C void SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshal_pinvoke_cleanup(SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke& marshaled);

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline (SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtility_1__ctor_m436491B161EEE3548DEEDBBB85EB6B1B357F8193_gshared (ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_m8ABCB883CE361A387BBF3C6F049F808DFD561DDC_gshared (TrackingSubsystem_4_t540941697851E30F426086F3FF64AB8F3E6E8A36* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtility_1_ValidateAndDisposeIfThrown_m7F18C45935AE6619874E1B4B5A009820AD4464CE_gshared (ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F* __this, TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 ___0_changes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared (SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared (SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m483C72F7DD9B6DB29F3D3D65178F055CF1E756DF_gshared (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m877BB6551C6E358BA735387AD52394801234E96C_gshared (Dictionary_2_t8201E1B24F744EAB220281FE4E2EE3E29FC970C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m4453FA30F2EFF30147505B49EA2E983051936262_gshared (NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m753E2A58E6C1BDD8F1C85FF19F65FFAF5BFB15B7_gshared (NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mF73A5DA50C043A341E9948B988BD48252204D4A6_gshared (NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mA05C9946B5B5F40525277432C838AC8F4A64E250_gshared (NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0_mFD5E6855D47C92D8001F08A675EFCACFAD237D66_gshared (NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mD368FDB245534A15FF4CC92F2D785391B9E8E4CA_gshared (NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m2A78C109C5456536EEB8A2452FB65A51A5CD665D_gshared (Dictionary_2_t8201E1B24F744EAB220281FE4E2EE3E29FC970C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t5823C8DA2382CF92F1764470358479E3188C1A62* Dictionary_2_get_Keys_mA78D2F8F73A5A840930E849037B7F7F0A656A27E_gshared (Dictionary_2_t8201E1B24F744EAB220281FE4E2EE3E29FC970C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t160F335B05E7692BA4234AFD249D62316B990635* Enumerable_ToList_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m2F673F14126CDE80375D6C2D5B8FC5A27E694B6B_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t413487DCCACC376393F93AF90282B4527081B999 List_1_GetEnumerator_m324E7A7CD9476D65BA62D991A48E39EEBCA54AC1_gshared (List_1_t160F335B05E7692BA4234AFD249D62316B990635* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m04FF651FBDB31735823C27E350F83EBBD864673D_gshared (Enumerator_t413487DCCACC376393F93AF90282B4527081B999* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_gshared_inline (Enumerator_t413487DCCACC376393F93AF90282B4527081B999* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_gshared (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m5C2E08B27B789AE40BC206CF7D39FC4BAA2AD065_gshared (Dictionary_2_t8201E1B24F744EAB220281FE4E2EE3E29FC970C0* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_gshared_inline (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2_gshared (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m64144FA26440B5BC78A43D948FA6CD77E7B32C4D_gshared (Enumerator_t413487DCCACC376393F93AF90282B4527081B999* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m0CE5A051CD529884B9D70361C50F87469B679A96_gshared (Dictionary_2_t8201E1B24F744EAB220281FE4E2EE3E29FC970C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9C4751E6D978C5B862FAD4EBBD3BD342754B2705_gshared (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD_gshared (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mCBD4575BD0A5EF520E35E17AA318A9999E9F5CBA_gshared (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m6FA2FCD46A3382FA72F57CFE2B5E85D0787117BE_gshared (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, int32_t ___0_index, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m48CD3CF61FDD9A377C0C95816E46015C515F3070_gshared_inline (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t9E060C86D70A5E2DABBB5BBFBBE4F1B9F583705F* Dictionary_2_get_Keys_m5C581F51050334465053446FE9C159CD3AB59756_gshared (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m3B99CDB9A1D2168E059A5CCF5D68BD8111D7904A_gshared (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* List_1_ToArray_m54F232CCA2D4C159E105596ABC5A5E7BF58EC3C1_gshared (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m33F89C2694D7E4CA9CCA6FA3B1E05233D251CBB5_gshared (NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496* __this, XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* ___0_array, int32_t ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715_gshared (NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E* __this, TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* ___0_array, int32_t ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 TrackableChanges_1_CopyFrom_m9CC036563CA29B66DCEFBA5D882AC7573B3C0C2C_gshared (NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496 ___0_added, NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496 ___1_updated, NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___2_removed, int32_t ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_gshared (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m7EAF60416014D3F34E6A8A086276027199003657_gshared (Dictionary_2_t8201E1B24F744EAB220281FE4E2EE3E29FC970C0* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E_gshared (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mCE7E4DDDBB265D1DA73EC746C78893E20115B103_gshared (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6361ACBA0E4244CDE236681BEA768F766459BD25_gshared (Dictionary_2_t8201E1B24F744EAB220281FE4E2EE3E29FC970C0* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mC21C844B05D3ABF3525B132CF630D7A551B0BA98_gshared (Dictionary_2_t8201E1B24F744EAB220281FE4E2EE3E29FC970C0* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mD593334AB2D37306843FBFB0052346953414E594_gshared (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m42993F1FE2BE08C8EADC187A0297ED2C4F4CE30D_gshared (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t AnchorConverter_ToOpenXRHandle_m3EBC72B383781267FCF5E2DC0BB5CC1F1E073B91 (intptr_t ___0_nativePtr, const RuntimeMethod* method) ;
inline XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* SubsystemLifecycleManager_3_get_subsystem_mA1F0EB8234CADB2B521F077B1F4A35D931C3E207_inline (SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3* __this, const RuntimeMethod* method)
{
	return ((  XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* (*) (SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3*, const RuntimeMethod*))SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1* XRAnchorStore_LoadAnchorStoreAsync_mE2B6F2B8EC3C19BE851E90D4C24253B2A70BB4D3 (XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___0_anchorSubsystem, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRAnchor_get_nativePtr_mC0551FA7E8DB8A0DA1EAE02D9B0BFD9D47389C26_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_pose_m87E148B64A7EB29C96DC2FD61E9EF92F218278C8_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_trackingState_m4BD0134128A6C5770D8AFDBC95C9DE1DF8C18CFC_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_center_m0B4C7F5910FB4076003888A1060012F8BDC32A57_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_size_m8F91E0C1C6FD00F4125D4DACF3AABEAFDEB30F82_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_lastSeenTime_m5BB8E4F70A100B6732DB0E0E08F408FD71819ABD_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_transformMode_mF035A77F1869A415E1C30748DF8BE62991915EA4_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarker__ctor_m333BD0462FA9858789857B3B6127D56926E6932E (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, int32_t ___2_trackingState, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_center, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___4_size, float ___5_lastSeenTime, int32_t ___6_transformMode, int32_t ___7_markerType, intptr_t ___8_nativePtr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRMarker_get_trackableId_m631071587AB3A81FF304F9513B854F6A96355BA4_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRMarker_get_pose_m8F4C00DE68619C010A4450B02622257F33E049CB_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRMarker_get_trackingState_mAD3BB40B3E6FC7580159A8BE7FEB2A4D242D9CB6_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRMarker_get_center_m5DEEB5EB8BCD66CB7521828747174DA596A8CD0F_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRMarker_get_size_m74D038CACCDD79E6467F78EC28FF607B205EE813_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRMarker_get_lastSeenTime_m20EFAEA942299F041B9896C2B77424EA947D00E6_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRMarker_get_markerType_mE7671C1EC6EEA640492B85F356413914C05ED58F_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRMarker_get_nativePtr_m0D1149446102E59DB3825856A661976B79A9B03A_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
inline void ValidationUtility_1__ctor_m436491B161EEE3548DEEDBBB85EB6B1B357F8193 (ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F* __this, const RuntimeMethod* method)
{
	((  void (*) (ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F*, const RuntimeMethod*))ValidationUtility_1__ctor_m436491B161EEE3548DEEDBBB85EB6B1B357F8193_gshared)(__this, method);
}
inline void TrackingSubsystem_4__ctor_m2988A45459798133A5E117AD263DFA6560F7A74E (TrackingSubsystem_4_tF56E54AAA20020788FD751DB507BF114FDA7F37C* __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_4_tF56E54AAA20020788FD751DB507BF114FDA7F37C*, const RuntimeMethod*))TrackingSubsystem_4__ctor_m8ABCB883CE361A387BBF3C6F049F808DFD561DDC_gshared)(__this, method);
}
inline Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline (SubsystemWithProvider_3_t6BE1E3098EABAB2CCADAE626A4DB9DB8D4E38D7F* __this, const RuntimeMethod* method)
{
	return ((  Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* (*) (SubsystemWithProvider_3_t6BE1E3098EABAB2CCADAE626A4DB9DB8D4E38D7F*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 XRMarker_get_defaultValue_m049879891BEA32B4545D12BFEA87D0A0D0C9D8C9_inline (const RuntimeMethod* method) ;
inline void ValidationUtility_1_ValidateAndDisposeIfThrown_m7F18C45935AE6619874E1B4B5A009820AD4464CE (ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F* __this, TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 ___0_changes, const RuntimeMethod* method)
{
	((  void (*) (ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F*, TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1, const RuntimeMethod*))ValidationUtility_1_ValidateAndDisposeIfThrown_m7F18C45935AE6619874E1B4B5A009820AD4464CE_gshared)(__this, ___0_changes, method);
}
inline void SubsystemProvider_1__ctor_m58F9D97109F68F0DDBD2821E27882E90ADAD0BAB (SubsystemProvider_1_t0FC44397762C3D7F50C09E3117381BA1D8E46D4D* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_t0FC44397762C3D7F50C09E3117381BA1D8E46D4D*, const RuntimeMethod*))SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarkerSubsystemDescriptor__ctor_m6D1DB7BCFCAF187DDAEE3B9BB97117B0F3B31AF2 (XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6* __this, Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD ___0_cinfo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___0_descriptor, const RuntimeMethod* method) ;
inline void SubsystemDescriptorWithProvider_2__ctor_m860F49A1552CDB7B6BC6C7AE3780999F7B50E1B6 (SubsystemDescriptorWithProvider_2_t5371C1AD13691BAA44EEB7D822245FB2802024ED* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_t5371C1AD13691BAA44EEB7D822245FB2802024ED*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m6E690900279C4DFDDF3F0D8E3D09239186A5A425_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m01F87D7B1B8127E85BDD4DE8780A7BCCF0211193_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m04EEF98E63B64B109946B84990FD2E44A4C0F8FB_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCD91F95E6762BC58E3E8DD561E2F98289E8ED649_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m8C571769BF340ED36876835311F45366779C9704_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m721A0464565A1EE0F02F4D2470E628509BDC5A29_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalMeshSettings_TrySetMeshComputeSettings_m47DE5488CC1F9CBD2BA64A132B9EC75EE572CA19 (MeshComputeSettings_t9846F4B1842319A1C05A94581E0248E1253A896D ___0_settings, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarkerSubsystemDescriptor_Create_m5715C97F3DC18D0067B0FE10057DDE6F4E3D07E3 (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD ___0_cinfo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarkerSubsystem__ctor_m9000E1906DD784DDA122B0CF8001E77F71D39F49 (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m483C72F7DD9B6DB29F3D3D65178F055CF1E756DF (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F*, const RuntimeMethod*))Dictionary_2__ctor_m483C72F7DD9B6DB29F3D3D65178F055CF1E756DF_gshared)(__this, method);
}
inline void Dictionary_2__ctor_mE1966FF7305FCFD926188A01F0EA2C1ACED3C652 (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA*, const RuntimeMethod*))Dictionary_2__ctor_m877BB6551C6E358BA735387AD52394801234E96C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m1A9559F0ED02F5F43A41231B6BB779FD616B164A (Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_DestroyMarkerSubsystem_m499DDDF21B0239835937185F67C6B7C249D9078A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* OpenXRProvider_ToXrSceneMarkerTypeMSFT_m433281740A18B0C24D39984CABD5AA7A8F5D3802 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* ___0_markerTypes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_SetEnabledMarkerTypes_mDAB969557B62E417117D767C6C68A7C7116367DA (XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* ___0_enabledMarkerTypes, int32_t ___1_numMarkerTypes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeLib_GetCurrentQpcTimeAsXrTime_m88ED8DA9E9B9761C91CF2D6E4A64B1AF0DC08CE0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetNumMarkerChanges_m040A1C5B968567A22997E479824C891CA964684C (int32_t ___0_frameTime, uint32_t* ___1_numAddedMarkers, uint32_t* ___2_numUpdatedMarkers, uint32_t* ___3_numRemovedMarkers, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_m4453FA30F2EFF30147505B49EA2E983051936262 (NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m4453FA30F2EFF30147505B49EA2E983051936262_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1_Dispose_m753E2A58E6C1BDD8F1C85FF19F65FFAF5BFB15B7 (NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE*, const RuntimeMethod*))NativeArray_1_Dispose_m753E2A58E6C1BDD8F1C85FF19F65FFAF5BFB15B7_gshared)(__this, method);
}
inline void NativeArray_1__ctor_mF73A5DA50C043A341E9948B988BD48252204D4A6 (NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mF73A5DA50C043A341E9948B988BD48252204D4A6_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1_Dispose_mA05C9946B5B5F40525277432C838AC8F4A64E250 (NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8*, const RuntimeMethod*))NativeArray_1_Dispose_mA05C9946B5B5F40525277432C838AC8F4A64E250_gshared)(__this, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0_mFD5E6855D47C92D8001F08A675EFCACFAD237D66 (NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0_mFD5E6855D47C92D8001F08A675EFCACFAD237D66_gshared)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mD368FDB245534A15FF4CC92F2D785391B9E8E4CA (NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mD368FDB245534A15FF4CC92F2D785391B9E8E4CA_gshared)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetMarkerChanges_m7667F23DCFFCD310EEC8AA72EE636816F01E741C (uint32_t ___0_addedMarkersSize, void* ___1_addedMarkers, uint32_t ___2_updatedMarkersSize, void* ___3_updatedMarkers, uint32_t ___4_removedMarkersSize, void* ___5_removedMarkers, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t511BD97C45CE630FB76E68532C127583B647161F* OpenXRProvider_HandleAddedMarkers_mF4B821358D290648E05F13D47CDB9F3696C38511 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE ___0_addedNativeMarkers, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t511BD97C45CE630FB76E68532C127583B647161F* OpenXRProvider_HandleUpdatedMarkers_mE0BD2DDB1A7D9559291ABDF10083C71736088C80 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE ___0_updatedNativeMarkers, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* OpenXRProvider_HandleRemovedMarkers_m3C7AC3CC49565AA5D723CAAFD9B29AAF2A412C4E (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8 ___0_removedNativeMarkers, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mE611784C8B2BF45DD5B8969565FFE8DDB95220FC (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA*, const RuntimeMethod*))Dictionary_2_get_Count_m2A78C109C5456536EEB8A2452FB65A51A5CD665D_gshared)(__this, method);
}
inline KeyCollection_t03A7FB59EF988EBD45BEFDC1EDFF1A8BA91DACB9* Dictionary_2_get_Keys_m37ED1CFE8CBE452AC84176BBD88C3887F1873C07 (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t03A7FB59EF988EBD45BEFDC1EDFF1A8BA91DACB9* (*) (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA*, const RuntimeMethod*))Dictionary_2_get_Keys_mA78D2F8F73A5A840930E849037B7F7F0A656A27E_gshared)(__this, method);
}
inline List_1_t160F335B05E7692BA4234AFD249D62316B990635* Enumerable_ToList_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m2F673F14126CDE80375D6C2D5B8FC5A27E694B6B (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t160F335B05E7692BA4234AFD249D62316B990635* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m2F673F14126CDE80375D6C2D5B8FC5A27E694B6B_gshared)(___0_source, method);
}
inline Enumerator_t413487DCCACC376393F93AF90282B4527081B999 List_1_GetEnumerator_m324E7A7CD9476D65BA62D991A48E39EEBCA54AC1 (List_1_t160F335B05E7692BA4234AFD249D62316B990635* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t413487DCCACC376393F93AF90282B4527081B999 (*) (List_1_t160F335B05E7692BA4234AFD249D62316B990635*, const RuntimeMethod*))List_1_GetEnumerator_m324E7A7CD9476D65BA62D991A48E39EEBCA54AC1_gshared)(__this, method);
}
inline void Enumerator_Dispose_m04FF651FBDB31735823C27E350F83EBBD864673D (Enumerator_t413487DCCACC376393F93AF90282B4527081B999* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t413487DCCACC376393F93AF90282B4527081B999*, const RuntimeMethod*))Enumerator_Dispose_m04FF651FBDB31735823C27E350F83EBBD864673D_gshared)(__this, method);
}
inline TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_inline (Enumerator_t413487DCCACC376393F93AF90282B4527081B999* __this, const RuntimeMethod* method)
{
	return ((  TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 (*) (Enumerator_t413487DCCACC376393F93AF90282B4527081B999*, const RuntimeMethod*))Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_gshared_inline)(__this, method);
}
inline XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method)
{
	return ((  XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 (*) (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, const RuntimeMethod*))Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Item_m81F13A0651D8C3119A4261E2DB5EDEC36CC67632 (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, const RuntimeMethod*))Dictionary_2_get_Item_m5C2E08B27B789AE40BC206CF7D39FC4BAA2AD065_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 OpenXRProvider_ApplyTransform_mC47D48E167009A7AC3F69FAC7F337BC2F9818227 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_xrMarker, const RuntimeMethod* method) ;
inline void List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_inline (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t511BD97C45CE630FB76E68532C127583B647161F*, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0, const RuntimeMethod*))List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_gshared_inline)(__this, ___0_item, method);
}
inline void Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2 (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0, const RuntimeMethod*))Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Enumerator_MoveNext_m64144FA26440B5BC78A43D948FA6CD77E7B32C4D (Enumerator_t413487DCCACC376393F93AF90282B4527081B999* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t413487DCCACC376393F93AF90282B4527081B999*, const RuntimeMethod*))Enumerator_MoveNext_m64144FA26440B5BC78A43D948FA6CD77E7B32C4D_gshared)(__this, method);
}
inline void Dictionary_2_Clear_m431780744734EE4EC182BF5151096E066DB55325 (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA*, const RuntimeMethod*))Dictionary_2_Clear_m0CE5A051CD529884B9D70361C50F87469B679A96_gshared)(__this, method);
}
inline void HashSet_1__ctor_m9C4751E6D978C5B862FAD4EBBD3BD342754B2705 (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B*, const RuntimeMethod*))HashSet_1__ctor_m9C4751E6D978C5B862FAD4EBBD3BD342754B2705_gshared)(__this, method);
}
inline XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 (*) (List_1_t511BD97C45CE630FB76E68532C127583B647161F*, int32_t, const RuntimeMethod*))List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD_gshared)(__this, ___0_index, method);
}
inline bool HashSet_1_Add_mCBD4575BD0A5EF520E35E17AA318A9999E9F5CBA (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, const RuntimeMethod*))HashSet_1_Add_mCBD4575BD0A5EF520E35E17AA318A9999E9F5CBA_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRProvider_IsLastSeenTimeTooOld_mC9BBE6C8FD3AEBF16C5AC66E85EC9351A07B9416 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_xrMarker, const RuntimeMethod* method) ;
inline void List_1_set_Item_m6FA2FCD46A3382FA72F57CFE2B5E85D0787117BE (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, int32_t ___0_index, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t511BD97C45CE630FB76E68532C127583B647161F*, int32_t, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0, const RuntimeMethod*))List_1_set_Item_m6FA2FCD46A3382FA72F57CFE2B5E85D0787117BE_gshared)(__this, ___0_index, ___1_value, method);
}
inline int32_t List_1_get_Count_m48CD3CF61FDD9A377C0C95816E46015C515F3070_inline (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t511BD97C45CE630FB76E68532C127583B647161F*, const RuntimeMethod*))List_1_get_Count_m48CD3CF61FDD9A377C0C95816E46015C515F3070_gshared_inline)(__this, method);
}
inline KeyCollection_t9E060C86D70A5E2DABBB5BBFBBE4F1B9F583705F* Dictionary_2_get_Keys_m5C581F51050334465053446FE9C159CD3AB59756 (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t9E060C86D70A5E2DABBB5BBFBBE4F1B9F583705F* (*) (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F*, const RuntimeMethod*))Dictionary_2_get_Keys_m5C581F51050334465053446FE9C159CD3AB59756_gshared)(__this, method);
}
inline bool HashSet_1_Contains_m3B99CDB9A1D2168E059A5CCF5D68BD8111D7904A (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, const RuntimeMethod*))HashSet_1_Contains_m3B99CDB9A1D2168E059A5CCF5D68BD8111D7904A_gshared)(__this, ___0_item, method);
}
inline XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* List_1_ToArray_m54F232CCA2D4C159E105596ABC5A5E7BF58EC3C1 (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, const RuntimeMethod* method)
{
	return ((  XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* (*) (List_1_t511BD97C45CE630FB76E68532C127583B647161F*, const RuntimeMethod*))List_1_ToArray_m54F232CCA2D4C159E105596ABC5A5E7BF58EC3C1_gshared)(__this, method);
}
inline void NativeArray_1__ctor_m33F89C2694D7E4CA9CCA6FA3B1E05233D251CBB5 (NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496* __this, XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* ___0_array, int32_t ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496*, XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC*, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m33F89C2694D7E4CA9CCA6FA3B1E05233D251CBB5_gshared)(__this, ___0_array, ___1_allocator, method);
}
inline void NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715 (NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E* __this, TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* ___0_array, int32_t ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E*, TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0*, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715_gshared)(__this, ___0_array, ___1_allocator, method);
}
inline TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 TrackableChanges_1_CopyFrom_m9CC036563CA29B66DCEFBA5D882AC7573B3C0C2C (NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496 ___0_added, NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496 ___1_updated, NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___2_removed, int32_t ___3_allocator, const RuntimeMethod* method)
{
	return ((  TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 (*) (NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496, NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496, NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E, int32_t, const RuntimeMethod*))TrackableChanges_1_CopyFrom_m9CC036563CA29B66DCEFBA5D882AC7573B3C0C2C_gshared)(___0_added, ___1_updated, ___2_removed, ___3_allocator, method);
}
inline bool Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3 (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, const RuntimeMethod*))Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2_Add_m8A445EAF16A7CD3D15D43F73605AFDAF9E6A4652 (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, int32_t, const RuntimeMethod*))Dictionary_2_Add_m7EAF60416014D3F34E6A8A086276027199003657_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t FeatureUtils_ToGuid_mE584D409DA9B609AD40CD86340655B9E8996FFE9 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeLib_GetMarkerRawDataSize_m48B9EE302FB55610AF2739137D14465DFAA005D0 (Guid_t ___0_markerId, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetMarkerRawData_m544920DF405472FA3A93CDA3919894C630F65AFF (Guid_t ___0_markerId, void* ___1_rawDataOut, uint32_t ___2_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeLib_GetMarkerDecodedStringLength_m2A8FE807631CBDE22CC9B137501621E3D8208F8F (Guid_t ___0_markerId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Capacity_m9DBF3B3940BC0BB882CA26F0EDB53896A491AD1E (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetMarkerDecodedString_m4BB563331785D9535720B2E6DA32AD3BE3A9CC56 (Guid_t ___0_markerId, StringBuilder_t* ___1_decodedStringOut, uint32_t ___2_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetMarkerQRCodeProperties_mD9680AB8A4C493CCE95ED165DA2EED444522B3EA (Guid_t ___0_markerId, NativeQRCodeProperties_tAC6DDE341B65C1EDBB0A04D80370B97E73640FE0* ___1_qrCodePropertiesOut, uint32_t ___2_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_StartMarkerSubsystem_mA841DE4225E92CED4461DFF2A5CB471097AFB1FF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_StopMarkerSubsystem_mCEA7FD09C6F70CB89F200256896C0BA2088CE6C6 (const RuntimeMethod* method) ;
inline void List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t511BD97C45CE630FB76E68532C127583B647161F*, const RuntimeMethod*))List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 OpenXRProvider_ToXRMarker_m0D07122261B7A914500FAABD63D0D12B1F5E752F (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 ___0_nativeMarker, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 OpenXRProvider_ApplyCenterTransform_m00ED833682C6A353DBE5CE0AE796EAC65C888A86 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_xrMarker, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_mCE7E4DDDBB265D1DA73EC746C78893E20115B103 (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0, const RuntimeMethod*))Dictionary_2_Add_mCE7E4DDDBB265D1DA73EC746C78893E20115B103_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 FeatureUtils_ToTrackableId_m152DF710A98CD5C7264C3322770E841EFDB4CEBF (Guid_t ___0_guid, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OpenXRProvider_GetLastSeenTimeAsRealTimeSinceStartup_m56A4FD097CA3F7083477A18441159374001A96EC (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, int64_t ___0_lastSeenTime, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_m98B8D02CCF63B9E76FCC2BE8FA6A6FFEA16364FF (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, const RuntimeMethod*))Dictionary_2_ContainsKey_m6361ACBA0E4244CDE236681BEA768F766459BD25_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_Remove_m38283E00C6BBAED167431266E49302A4FB2E9C15 (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, const RuntimeMethod*))Dictionary_2_Remove_mC21C844B05D3ABF3525B132CF630D7A551B0BA98_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_Remove_mD593334AB2D37306843FBFB0052346953414E594 (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, const RuntimeMethod*))Dictionary_2_Remove_mD593334AB2D37306843FBFB0052346953414E594_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 OpenXRProvider_ApplyStableTransform_m1AD398C75E69AA99410219F8A47C6DAD10F92402 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_xrMarker, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Pose_get_right_m8518E7BCEB74B9798BADB001B9E38756CC35ECFE (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Pose_get_up_m5431E350242BEBB0CD7B0AAF9DC9468DC6DDFE5C (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemController__ctor_m860DC323501E43007757630E4E5AE907CC3DBBA4 (SubsystemController_tD5980C0FF070149F54AC1C113942441FCC0A69BF* __this, RuntimeObject* ___0_context, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRRuntime_IsExtensionEnabled_mF0C6FC95EDFD8DA6C5A838EA2053C06F657A2EE5 (String_t* ___0_extensionName, const RuntimeMethod* method) ;
inline void List_1__ctor_mC591BF6C7964B9359D62D7D0BD6AD4461C35F580 (List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m42993F1FE2BE08C8EADC187A0297ED2C4F4CE30D (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t511BD97C45CE630FB76E68532C127583B647161F*, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0, const RuntimeMethod*))List_1_AddWithResize_m42993F1FE2BE08C8EADC187A0297ED2C4F4CE30D_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 InternalValidateServerCertificateDelegate_Invoke_m652610F8F872BC895F42142EB8F5D0EA9D110EC3_Multicast(InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* __this, String_t* ___0_hostName, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 ___1_systemValidationResult, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* currentDelegate = reinterpret_cast<InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351*>(delegatesToInvoke[i]);
		typedef SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 (*FunctionPointerType) (RuntimeObject*, String_t*, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_hostName, ___1_systemValidationResult, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 InternalValidateServerCertificateDelegate_Invoke_m652610F8F872BC895F42142EB8F5D0EA9D110EC3_OpenInst(InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* __this, String_t* ___0_hostName, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 ___1_systemValidationResult, const RuntimeMethod* method)
{
	NullCheck(___0_hostName);
	typedef SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 (*FunctionPointerType) (String_t*, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_hostName, ___1_systemValidationResult, method);
}
SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 InternalValidateServerCertificateDelegate_Invoke_m652610F8F872BC895F42142EB8F5D0EA9D110EC3_OpenStatic(InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* __this, String_t* ___0_hostName, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 ___1_systemValidationResult, const RuntimeMethod* method)
{
	typedef SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 (*FunctionPointerType) (String_t*, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_hostName, ___1_systemValidationResult, method);
}
IL2CPP_EXTERN_C  SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 DelegatePInvokeWrapper_InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351 (InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* __this, String_t* ___0_hostName, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 ___1_systemValidationResult, const RuntimeMethod* method)
{




	typedef SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke (DEFAULT_CALL *PInvokeFunc)(char*, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	char* ____0_hostName_marshaled = NULL;
	____0_hostName_marshaled = il2cpp_codegen_marshal_string(___0_hostName);

	SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke ____1_systemValidationResult_marshaled = {};
	SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshal_pinvoke(___1_systemValidationResult, ____1_systemValidationResult_marshaled);

	SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke returnValue = il2cppPInvokeFunc(____0_hostName_marshaled, ____1_systemValidationResult_marshaled);

	SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 _returnValue_unmarshaled;
	memset((&_returnValue_unmarshaled), 0, sizeof(_returnValue_unmarshaled));
	SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshal_pinvoke_back(returnValue, _returnValue_unmarshaled);

	SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshal_pinvoke_cleanup(returnValue);

	il2cpp_codegen_marshal_free(____0_hostName_marshaled);
	____0_hostName_marshaled = NULL;

	SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshal_pinvoke_cleanup(____1_systemValidationResult_marshaled);

	return _returnValue_unmarshaled;
}
// Method Definition Index: 103418
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValidateServerCertificateDelegate__ctor_mBFEA2E7DB3ABD0729D97587F8081D72B53B472DF (InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
			__this->___invoke_impl = (intptr_t)&InternalValidateServerCertificateDelegate_Invoke_m652610F8F872BC895F42142EB8F5D0EA9D110EC3_OpenStatic;
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
			__this->___invoke_impl = (intptr_t)&InternalValidateServerCertificateDelegate_Invoke_m652610F8F872BC895F42142EB8F5D0EA9D110EC3_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&InternalValidateServerCertificateDelegate_Invoke_m652610F8F872BC895F42142EB8F5D0EA9D110EC3_Multicast;
}
// Method Definition Index: 103419
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 InternalValidateServerCertificateDelegate_Invoke_m652610F8F872BC895F42142EB8F5D0EA9D110EC3 (InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* __this, String_t* ___0_hostName, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 ___1_systemValidationResult, const RuntimeMethod* method) 
{
	typedef SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 (*FunctionPointerType) (RuntimeObject*, String_t*, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_hostName, ___1_systemValidationResult, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 103420
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalValidateServerCertificateDelegate_BeginInvoke_m78E6A910019DF90FD9F1068046188D5B87A72598 (InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* __this, String_t* ___0_hostName, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 ___1_systemValidationResult, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_hostName;
	__d_args[1] = Box(SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_il2cpp_TypeInfo_var, &___1_systemValidationResult);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 103421
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 InternalValidateServerCertificateDelegate_EndInvoke_m6FD2569D2255AFCB466BF0EB71103D99DABBE541 (InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736*)UnBox ((RuntimeObject*)__result);
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
IL2CPP_EXTERN_C void InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshal_pinvoke(const InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6& unmarshaled, InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshaled_pinvoke& marshaled)
{
	marshaled.___RemoteHostName = il2cpp_codegen_marshal_string(unmarshaled.___RemoteHostName);
	marshaled.___RemotePort = unmarshaled.___RemotePort;
	marshaled.___MaxBitrateKbps = unmarshaled.___MaxBitrateKbps;
	marshaled.___VideoCodec = unmarshaled.___VideoCodec;
	marshaled.___EnableAudio = static_cast<int32_t>(unmarshaled.___EnableAudio);
	marshaled.___AudioCaptureMode = unmarshaled.___AudioCaptureMode;
}
IL2CPP_EXTERN_C void InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshal_pinvoke_back(const InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshaled_pinvoke& marshaled, InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6& unmarshaled)
{
	unmarshaled.___RemoteHostName = il2cpp_codegen_marshal_string_result(marshaled.___RemoteHostName);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___RemoteHostName), (void*)il2cpp_codegen_marshal_string_result(marshaled.___RemoteHostName));
	uint16_t unmarshaledRemotePort_temp_1 = 0;
	unmarshaledRemotePort_temp_1 = marshaled.___RemotePort;
	unmarshaled.___RemotePort = unmarshaledRemotePort_temp_1;
	uint32_t unmarshaledMaxBitrateKbps_temp_2 = 0;
	unmarshaledMaxBitrateKbps_temp_2 = marshaled.___MaxBitrateKbps;
	unmarshaled.___MaxBitrateKbps = unmarshaledMaxBitrateKbps_temp_2;
	int32_t unmarshaledVideoCodec_temp_3 = 0;
	unmarshaledVideoCodec_temp_3 = marshaled.___VideoCodec;
	unmarshaled.___VideoCodec = unmarshaledVideoCodec_temp_3;
	bool unmarshaledEnableAudio_temp_4 = false;
	unmarshaledEnableAudio_temp_4 = static_cast<bool>(marshaled.___EnableAudio);
	unmarshaled.___EnableAudio = unmarshaledEnableAudio_temp_4;
	int32_t unmarshaledAudioCaptureMode_temp_5 = 0;
	unmarshaledAudioCaptureMode_temp_5 = marshaled.___AudioCaptureMode;
	unmarshaled.___AudioCaptureMode = unmarshaledAudioCaptureMode_temp_5;
}
IL2CPP_EXTERN_C void InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshal_pinvoke_cleanup(InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___RemoteHostName);
	marshaled.___RemoteHostName = NULL;
}
IL2CPP_EXTERN_C void InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshal_com(const InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6& unmarshaled, InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshaled_com& marshaled)
{
	marshaled.___RemoteHostName = il2cpp_codegen_marshal_bstring(unmarshaled.___RemoteHostName);
	marshaled.___RemotePort = unmarshaled.___RemotePort;
	marshaled.___MaxBitrateKbps = unmarshaled.___MaxBitrateKbps;
	marshaled.___VideoCodec = unmarshaled.___VideoCodec;
	marshaled.___EnableAudio = static_cast<int32_t>(unmarshaled.___EnableAudio);
	marshaled.___AudioCaptureMode = unmarshaled.___AudioCaptureMode;
}
IL2CPP_EXTERN_C void InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshal_com_back(const InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshaled_com& marshaled, InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6& unmarshaled)
{
	unmarshaled.___RemoteHostName = il2cpp_codegen_marshal_bstring_result(marshaled.___RemoteHostName);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___RemoteHostName), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___RemoteHostName));
	uint16_t unmarshaledRemotePort_temp_1 = 0;
	unmarshaledRemotePort_temp_1 = marshaled.___RemotePort;
	unmarshaled.___RemotePort = unmarshaledRemotePort_temp_1;
	uint32_t unmarshaledMaxBitrateKbps_temp_2 = 0;
	unmarshaledMaxBitrateKbps_temp_2 = marshaled.___MaxBitrateKbps;
	unmarshaled.___MaxBitrateKbps = unmarshaledMaxBitrateKbps_temp_2;
	int32_t unmarshaledVideoCodec_temp_3 = 0;
	unmarshaledVideoCodec_temp_3 = marshaled.___VideoCodec;
	unmarshaled.___VideoCodec = unmarshaledVideoCodec_temp_3;
	bool unmarshaledEnableAudio_temp_4 = false;
	unmarshaledEnableAudio_temp_4 = static_cast<bool>(marshaled.___EnableAudio);
	unmarshaled.___EnableAudio = unmarshaledEnableAudio_temp_4;
	int32_t unmarshaledAudioCaptureMode_temp_5 = 0;
	unmarshaledAudioCaptureMode_temp_5 = marshaled.___AudioCaptureMode;
	unmarshaled.___AudioCaptureMode = unmarshaledAudioCaptureMode_temp_5;
}
IL2CPP_EXTERN_C void InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshal_com_cleanup(InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___RemoteHostName);
	marshaled.___RemoteHostName = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshal_pinvoke(const InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139& unmarshaled, InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshaled_pinvoke& marshaled)
{
	marshaled.___ListenInterface = il2cpp_codegen_marshal_string(unmarshaled.___ListenInterface);
	marshaled.___HandshakeListenPort = unmarshaled.___HandshakeListenPort;
	marshaled.___TransportListenPort = unmarshaled.___TransportListenPort;
	marshaled.___MaxBitrateKbps = unmarshaled.___MaxBitrateKbps;
	marshaled.___VideoCodec = unmarshaled.___VideoCodec;
	marshaled.___EnableAudio = static_cast<int32_t>(unmarshaled.___EnableAudio);
	marshaled.___AudioCaptureMode = unmarshaled.___AudioCaptureMode;
}
IL2CPP_EXTERN_C void InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshal_pinvoke_back(const InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshaled_pinvoke& marshaled, InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139& unmarshaled)
{
	unmarshaled.___ListenInterface = il2cpp_codegen_marshal_string_result(marshaled.___ListenInterface);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ListenInterface), (void*)il2cpp_codegen_marshal_string_result(marshaled.___ListenInterface));
	uint16_t unmarshaledHandshakeListenPort_temp_1 = 0;
	unmarshaledHandshakeListenPort_temp_1 = marshaled.___HandshakeListenPort;
	unmarshaled.___HandshakeListenPort = unmarshaledHandshakeListenPort_temp_1;
	uint16_t unmarshaledTransportListenPort_temp_2 = 0;
	unmarshaledTransportListenPort_temp_2 = marshaled.___TransportListenPort;
	unmarshaled.___TransportListenPort = unmarshaledTransportListenPort_temp_2;
	uint32_t unmarshaledMaxBitrateKbps_temp_3 = 0;
	unmarshaledMaxBitrateKbps_temp_3 = marshaled.___MaxBitrateKbps;
	unmarshaled.___MaxBitrateKbps = unmarshaledMaxBitrateKbps_temp_3;
	int32_t unmarshaledVideoCodec_temp_4 = 0;
	unmarshaledVideoCodec_temp_4 = marshaled.___VideoCodec;
	unmarshaled.___VideoCodec = unmarshaledVideoCodec_temp_4;
	bool unmarshaledEnableAudio_temp_5 = false;
	unmarshaledEnableAudio_temp_5 = static_cast<bool>(marshaled.___EnableAudio);
	unmarshaled.___EnableAudio = unmarshaledEnableAudio_temp_5;
	int32_t unmarshaledAudioCaptureMode_temp_6 = 0;
	unmarshaledAudioCaptureMode_temp_6 = marshaled.___AudioCaptureMode;
	unmarshaled.___AudioCaptureMode = unmarshaledAudioCaptureMode_temp_6;
}
IL2CPP_EXTERN_C void InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshal_pinvoke_cleanup(InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___ListenInterface);
	marshaled.___ListenInterface = NULL;
}
IL2CPP_EXTERN_C void InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshal_com(const InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139& unmarshaled, InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshaled_com& marshaled)
{
	marshaled.___ListenInterface = il2cpp_codegen_marshal_bstring(unmarshaled.___ListenInterface);
	marshaled.___HandshakeListenPort = unmarshaled.___HandshakeListenPort;
	marshaled.___TransportListenPort = unmarshaled.___TransportListenPort;
	marshaled.___MaxBitrateKbps = unmarshaled.___MaxBitrateKbps;
	marshaled.___VideoCodec = unmarshaled.___VideoCodec;
	marshaled.___EnableAudio = static_cast<int32_t>(unmarshaled.___EnableAudio);
	marshaled.___AudioCaptureMode = unmarshaled.___AudioCaptureMode;
}
IL2CPP_EXTERN_C void InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshal_com_back(const InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshaled_com& marshaled, InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139& unmarshaled)
{
	unmarshaled.___ListenInterface = il2cpp_codegen_marshal_bstring_result(marshaled.___ListenInterface);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ListenInterface), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___ListenInterface));
	uint16_t unmarshaledHandshakeListenPort_temp_1 = 0;
	unmarshaledHandshakeListenPort_temp_1 = marshaled.___HandshakeListenPort;
	unmarshaled.___HandshakeListenPort = unmarshaledHandshakeListenPort_temp_1;
	uint16_t unmarshaledTransportListenPort_temp_2 = 0;
	unmarshaledTransportListenPort_temp_2 = marshaled.___TransportListenPort;
	unmarshaled.___TransportListenPort = unmarshaledTransportListenPort_temp_2;
	uint32_t unmarshaledMaxBitrateKbps_temp_3 = 0;
	unmarshaledMaxBitrateKbps_temp_3 = marshaled.___MaxBitrateKbps;
	unmarshaled.___MaxBitrateKbps = unmarshaledMaxBitrateKbps_temp_3;
	int32_t unmarshaledVideoCodec_temp_4 = 0;
	unmarshaledVideoCodec_temp_4 = marshaled.___VideoCodec;
	unmarshaled.___VideoCodec = unmarshaledVideoCodec_temp_4;
	bool unmarshaledEnableAudio_temp_5 = false;
	unmarshaledEnableAudio_temp_5 = static_cast<bool>(marshaled.___EnableAudio);
	unmarshaled.___EnableAudio = unmarshaledEnableAudio_temp_5;
	int32_t unmarshaledAudioCaptureMode_temp_6 = 0;
	unmarshaledAudioCaptureMode_temp_6 = marshaled.___AudioCaptureMode;
	unmarshaled.___AudioCaptureMode = unmarshaledAudioCaptureMode_temp_6;
}
IL2CPP_EXTERN_C void InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshal_com_cleanup(InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___ListenInterface);
	marshaled.___ListenInterface = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 103422
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ARAnchorExtensions_GetOpenXRHandle_mD3FBE707AF870E2629442C553C08806441878ED5 (ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___0_anchor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/AnchorConverter.cs:181>
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_0 = ___0_anchor;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_2 = ___0_anchor;
		NullCheck(L_2);
		intptr_t L_3;
		L_3 = VirtualFuncInvoker0< intptr_t >::Invoke(12, L_2);
		uint64_t L_4;
		L_4 = AnchorConverter_ToOpenXRHandle_m3EBC72B383781267FCF5E2DC0BB5CC1F1E073B91(L_3, NULL);
		G_B3_0 = L_4;
		goto IL_0019;
	}

IL_0017:
	{
		G_B3_0 = ((uint64_t)(((int64_t)0)));
	}

IL_0019:
	{
		V_0 = G_B3_0;
		goto IL_001c;
	}

IL_001c:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/AnchorConverter.cs:182>
		uint64_t L_5 = V_0;
		return L_5;
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
// Method Definition Index: 103423
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1* AnchorManagerExtensions_LoadAnchorStoreAsync_m0DA11136A58D5AD8E1793D37EFAB07558947D6BC (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___0_anchorManager, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_mA1F0EB8234CADB2B521F077B1F4A35D931C3E207_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/XRAnchorStore.cs:31>
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_0 = ___0_anchorManager;
		NullCheck(L_0);
		XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* L_1;
		L_1 = SubsystemLifecycleManager_3_get_subsystem_mA1F0EB8234CADB2B521F077B1F4A35D931C3E207_inline(L_0, SubsystemLifecycleManager_3_get_subsystem_mA1F0EB8234CADB2B521F077B1F4A35D931C3E207_RuntimeMethod_var);
		Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1* L_2;
		L_2 = XRAnchorStore_LoadAnchorStoreAsync_mE2B6F2B8EC3C19BE851E90D4C24253B2A70BB4D3(L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/XRAnchorStore.cs:32>
		Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1* L_3 = V_0;
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
// Method Definition Index: 103424
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XRAnchorExtensions_GetOpenXRHandle_mAA7D729CF968CECC040BE338B77817BC882EE1A1 (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___0_anchor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/AnchorConverter.cs:161>
		il2cpp_codegen_runtime_class_init_inline(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = XRAnchor_get_nativePtr_mC0551FA7E8DB8A0DA1EAE02D9B0BFD9D47389C26_inline((&___0_anchor), NULL);
		uint64_t L_1;
		L_1 = AnchorConverter_ToOpenXRHandle_m3EBC72B383781267FCF5E2DC0BB5CC1F1E073B91(L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/AnchorConverter.cs:162>
		uint64_t L_2 = V_0;
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
// Method Definition Index: 103425
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 XRMarker_get_defaultValue_m049879891BEA32B4545D12BFEA87D0A0D0C9D8C9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:36>
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_0 = ((XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_StaticFields*)il2cpp_codegen_static_fields_for(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var))->___s_Default;
		return L_0;
	}
}
// Method Definition Index: 103426
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarker__ctor_m333BD0462FA9858789857B3B6127D56926E6932E (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, int32_t ___2_trackingState, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_center, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___4_size, float ___5_lastSeenTime, int32_t ___6_transformMode, int32_t ___7_markerType, intptr_t ___8_nativePtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:62>
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ___0_trackableId;
		__this->___U3CtrackableIdU3Ek__BackingField = L_0;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:63>
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = ___1_pose;
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		XRMarker_set_pose_m87E148B64A7EB29C96DC2FD61E9EF92F218278C8_inline(__this, L_1, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:64>
		int32_t L_2 = ___2_trackingState;
		XRMarker_set_trackingState_m4BD0134128A6C5770D8AFDBC95C9DE1DF8C18CFC_inline(__this, L_2, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:65>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___3_center;
		XRMarker_set_center_m0B4C7F5910FB4076003888A1060012F8BDC32A57_inline(__this, L_3, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:66>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___4_size;
		XRMarker_set_size_m8F91E0C1C6FD00F4125D4DACF3AABEAFDEB30F82_inline(__this, L_4, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:67>
		float L_5 = ___5_lastSeenTime;
		XRMarker_set_lastSeenTime_m5BB8E4F70A100B6732DB0E0E08F408FD71819ABD_inline(__this, L_5, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:68>
		int32_t L_6 = ___6_transformMode;
		XRMarker_set_transformMode_mF035A77F1869A415E1C30748DF8BE62991915EA4_inline(__this, L_6, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:69>
		int32_t L_7 = ___7_markerType;
		__this->___U3CmarkerTypeU3Ek__BackingField = L_7;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:70>
		intptr_t L_8 = ___8_nativePtr;
		__this->___U3CnativePtrU3Ek__BackingField = L_8;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:71>
		return;
	}
}
IL2CPP_EXTERN_C  void XRMarker__ctor_m333BD0462FA9858789857B3B6127D56926E6932E_AdjustorThunk (RuntimeObject* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, int32_t ___2_trackingState, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_center, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___4_size, float ___5_lastSeenTime, int32_t ___6_transformMode, int32_t ___7_markerType, intptr_t ___8_nativePtr, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	XRMarker__ctor_m333BD0462FA9858789857B3B6127D56926E6932E(_thisAdjusted, ___0_trackableId, ___1_pose, ___2_trackingState, ___3_center, ___4_size, ___5_lastSeenTime, ___6_transformMode, ___7_markerType, ___8_nativePtr, method);
}
// Method Definition Index: 103427
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRMarker_get_trackableId_m631071587AB3A81FF304F9513B854F6A96355BA4 (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:76>
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___U3CtrackableIdU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRMarker_get_trackableId_m631071587AB3A81FF304F9513B854F6A96355BA4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 _returnValue;
	_returnValue = XRMarker_get_trackableId_m631071587AB3A81FF304F9513B854F6A96355BA4_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 103428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRMarker_get_pose_m8F4C00DE68619C010A4450B02622257F33E049CB (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:81>
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CposeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRMarker_get_pose_m8F4C00DE68619C010A4450B02622257F33E049CB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = XRMarker_get_pose_m8F4C00DE68619C010A4450B02622257F33E049CB_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 103429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarker_set_pose_m87E148B64A7EB29C96DC2FD61E9EF92F218278C8 (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:81>
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___U3CposeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRMarker_set_pose_m87E148B64A7EB29C96DC2FD61E9EF92F218278C8_AdjustorThunk (RuntimeObject* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	XRMarker_set_pose_m87E148B64A7EB29C96DC2FD61E9EF92F218278C8_inline(_thisAdjusted, ___0_value, method);
}
// Method Definition Index: 103430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRMarker_get_trackingState_mAD3BB40B3E6FC7580159A8BE7FEB2A4D242D9CB6 (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:86>
		int32_t L_0 = __this->___U3CtrackingStateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRMarker_get_trackingState_mAD3BB40B3E6FC7580159A8BE7FEB2A4D242D9CB6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRMarker_get_trackingState_mAD3BB40B3E6FC7580159A8BE7FEB2A4D242D9CB6_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 103431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarker_set_trackingState_m4BD0134128A6C5770D8AFDBC95C9DE1DF8C18CFC (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:86>
		int32_t L_0 = ___0_value;
		__this->___U3CtrackingStateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRMarker_set_trackingState_m4BD0134128A6C5770D8AFDBC95C9DE1DF8C18CFC_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	XRMarker_set_trackingState_m4BD0134128A6C5770D8AFDBC95C9DE1DF8C18CFC_inline(_thisAdjusted, ___0_value, method);
}
// Method Definition Index: 103432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRMarker_get_center_m5DEEB5EB8BCD66CB7521828747174DA596A8CD0F (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:91>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CcenterU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRMarker_get_center_m5DEEB5EB8BCD66CB7521828747174DA596A8CD0F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = XRMarker_get_center_m5DEEB5EB8BCD66CB7521828747174DA596A8CD0F_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 103433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarker_set_center_m0B4C7F5910FB4076003888A1060012F8BDC32A57 (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:91>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CcenterU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRMarker_set_center_m0B4C7F5910FB4076003888A1060012F8BDC32A57_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	XRMarker_set_center_m0B4C7F5910FB4076003888A1060012F8BDC32A57_inline(_thisAdjusted, ___0_value, method);
}
// Method Definition Index: 103434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRMarker_get_size_m74D038CACCDD79E6467F78EC28FF607B205EE813 (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:96>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CsizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRMarker_get_size_m74D038CACCDD79E6467F78EC28FF607B205EE813_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = XRMarker_get_size_m74D038CACCDD79E6467F78EC28FF607B205EE813_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 103435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarker_set_size_m8F91E0C1C6FD00F4125D4DACF3AABEAFDEB30F82 (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:96>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CsizeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRMarker_set_size_m8F91E0C1C6FD00F4125D4DACF3AABEAFDEB30F82_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	XRMarker_set_size_m8F91E0C1C6FD00F4125D4DACF3AABEAFDEB30F82_inline(_thisAdjusted, ___0_value, method);
}
// Method Definition Index: 103436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRMarker_get_lastSeenTime_m20EFAEA942299F041B9896C2B77424EA947D00E6 (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:101>
		float L_0 = __this->___U3ClastSeenTimeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float XRMarker_get_lastSeenTime_m20EFAEA942299F041B9896C2B77424EA947D00E6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	float _returnValue;
	_returnValue = XRMarker_get_lastSeenTime_m20EFAEA942299F041B9896C2B77424EA947D00E6_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 103437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarker_set_lastSeenTime_m5BB8E4F70A100B6732DB0E0E08F408FD71819ABD (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:101>
		float L_0 = ___0_value;
		__this->___U3ClastSeenTimeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRMarker_set_lastSeenTime_m5BB8E4F70A100B6732DB0E0E08F408FD71819ABD_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	XRMarker_set_lastSeenTime_m5BB8E4F70A100B6732DB0E0E08F408FD71819ABD_inline(_thisAdjusted, ___0_value, method);
}
// Method Definition Index: 103438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:106>
		int32_t L_0 = __this->___U3CtransformModeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 103439
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarker_set_transformMode_mF035A77F1869A415E1C30748DF8BE62991915EA4 (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:106>
		int32_t L_0 = ___0_value;
		__this->___U3CtransformModeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRMarker_set_transformMode_mF035A77F1869A415E1C30748DF8BE62991915EA4_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	XRMarker_set_transformMode_mF035A77F1869A415E1C30748DF8BE62991915EA4_inline(_thisAdjusted, ___0_value, method);
}
// Method Definition Index: 103440
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRMarker_get_markerType_mE7671C1EC6EEA640492B85F356413914C05ED58F (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:111>
		int32_t L_0 = __this->___U3CmarkerTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRMarker_get_markerType_mE7671C1EC6EEA640492B85F356413914C05ED58F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRMarker_get_markerType_mE7671C1EC6EEA640492B85F356413914C05ED58F_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 103441
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRMarker_get_nativePtr_m0D1149446102E59DB3825856A661976B79A9B03A (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:117>
		intptr_t L_0 = __this->___U3CnativePtrU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t XRMarker_get_nativePtr_m0D1149446102E59DB3825856A661976B79A9B03A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = XRMarker_get_nativePtr_m0D1149446102E59DB3825856A661976B79A9B03A_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 103442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarker__cctor_mB090B5F89D99B8EAB3AB6B16C8FEBDC4A332C2D7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:20>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:21>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:22>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:23>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:24>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:25>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:26>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:27>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:28>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:29>
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0;
		L_0 = TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494(NULL);
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		XRMarker__ctor_m333BD0462FA9858789857B3B6127D56926E6932E((&L_4), L_0, L_1, 0, L_2, L_3, (0.0f), 0, 1, 0, NULL);
		((XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_StaticFields*)il2cpp_codegen_static_fields_for(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var))->___s_Default = L_4;
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
// Method Definition Index: 103443
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarkerSubsystem__ctor_m9000E1906DD784DDA122B0CF8001E77F71D39F49 (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingSubsystem_4__ctor_m2988A45459798133A5E117AD263DFA6560F7A74E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidationUtility_1__ctor_m436491B161EEE3548DEEDBBB85EB6B1B357F8193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:152>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:153>
		ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F* L_0 = (ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F*)il2cpp_codegen_object_new(ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F_il2cpp_TypeInfo_var);
		ValidationUtility_1__ctor_m436491B161EEE3548DEEDBBB85EB6B1B357F8193(L_0, ValidationUtility_1__ctor_m436491B161EEE3548DEEDBBB85EB6B1B357F8193_RuntimeMethod_var);
		__this->___m_ValidationUtility = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ValidationUtility), (void*)L_0);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:20>
		TrackingSubsystem_4__ctor_m2988A45459798133A5E117AD263DFA6560F7A74E(__this, TrackingSubsystem_4__ctor_m2988A45459798133A5E117AD263DFA6560F7A74E_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:20>
		return;
	}
}
// Method Definition Index: 103444
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* XRMarkerSubsystem_get_EnabledMarkerTypes_m136000BD81DDEC1B44BA58DDBFDF92619544A106 (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:27>
		Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline(__this, SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		NullCheck(L_0);
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_1;
		L_1 = VirtualFuncInvoker0< ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* >::Invoke(13, L_0);
		return L_1;
	}
}
// Method Definition Index: 103445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarkerSubsystem_set_EnabledMarkerTypes_m58784536BED03AD1CB9778F6518E3BC6D4FC3F76 (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:28>
		Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline(__this, SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* >::Invoke(14, L_0, L_1);
		return;
	}
}
// Method Definition Index: 103446
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRMarkerSubsystem_get_DefaultTransformMode_mF96FE0594A1771892C1AA9FBEF78D556AA59E853 (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:36>
		Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline(__this, SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(15, L_0);
		return L_1;
	}
}
// Method Definition Index: 103447
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarkerSubsystem_set_DefaultTransformMode_mC63990109ECFA0AEEFABB87219A51E4C7470E8C7 (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:37>
		Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline(__this, SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(16, L_0, L_1);
		return;
	}
}
// Method Definition Index: 103448
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 XRMarkerSubsystem_GetChanges_m31960BED9F7B0D6CD051BCF1A7DE4FBD3360C0CB (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, int32_t ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidationUtility_1_ValidateAndDisposeIfThrown_m7F18C45935AE6619874E1B4B5A009820AD4464CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:50>
		Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline(__this, SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_1;
		L_1 = XRMarker_get_defaultValue_m049879891BEA32B4545D12BFEA87D0A0D0C9D8C9_inline(NULL);
		int32_t L_2 = ___0_allocator;
		NullCheck(L_0);
		TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 L_3;
		L_3 = VirtualFuncInvoker2< TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0, int32_t >::Invoke(8, L_0, L_1, L_2);
		V_0 = L_3;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:52>
		ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F* L_4 = __this->___m_ValidationUtility;
		TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 L_5 = V_0;
		NullCheck(L_4);
		ValidationUtility_1_ValidateAndDisposeIfThrown_m7F18C45935AE6619874E1B4B5A009820AD4464CE(L_4, L_5, ValidationUtility_1_ValidateAndDisposeIfThrown_m7F18C45935AE6619874E1B4B5A009820AD4464CE_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:54>
		TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 L_6 = V_0;
		V_1 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:55>
		TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 103449
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarkerSubsystem_SetTransformMode_mF28D924135D96AE277674630D91532F05E0E43E5 (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, int32_t ___1_transformMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:64>
		Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline(__this, SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_trackableId;
		int32_t L_2 = ___1_transformMode;
		NullCheck(L_0);
		VirtualActionInvoker2< TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, int32_t >::Invoke(9, L_0, L_1, L_2);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:65>
		return;
	}
}
// Method Definition Index: 103450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF XRMarkerSubsystem_GetRawData_m3455360C4A6BB9B0252D58426BA42BE45591097E (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:73>
		Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline(__this, SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_trackableId;
		int32_t L_2 = ___1_allocator;
		NullCheck(L_0);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_3;
		L_3 = VirtualFuncInvoker2< NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, int32_t >::Invoke(10, L_0, L_1, L_2);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:74>
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 103451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRMarkerSubsystem_GetDecodedString_mD8D1F187BC95924C8F38D9D5C3F3E5E032EAFDA1 (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:82>
		Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline(__this, SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_trackableId;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 >::Invoke(11, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:83>
		String_t* L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 103452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D XRMarkerSubsystem_GetQRCodeProperties_m461F40E881FEE29D6B73638C379855CC4F523FEC (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:91>
		Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline(__this, SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_trackableId;
		NullCheck(L_0);
		QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D L_2;
		L_2 = VirtualFuncInvoker1< QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 >::Invoke(12, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystem.cs:92>
		QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D L_3 = V_0;
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
// Method Definition Index: 103462
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m1A9559F0ED02F5F43A41231B6BB779FD616B164A (Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m58F9D97109F68F0DDBD2821E27882E90ADAD0BAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m58F9D97109F68F0DDBD2821E27882E90ADAD0BAB(__this, SubsystemProvider_1__ctor_m58F9D97109F68F0DDBD2821E27882E90ADAD0BAB_RuntimeMethod_var);
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
// Method Definition Index: 103463
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarkerSubsystemDescriptor_Create_m5715C97F3DC18D0067B0FE10057DDE6F4E3D07E3 (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:42>
		Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD L_0 = ___0_cinfo;
		XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6* L_1 = (XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6*)il2cpp_codegen_object_new(XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6_il2cpp_TypeInfo_var);
		XRMarkerSubsystemDescriptor__ctor_m6D1DB7BCFCAF187DDAEE3B9BB97117B0F3B31AF2(L_1, L_0, NULL);
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:43>
		XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_2, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:44>
		return;
	}
}
// Method Definition Index: 103464
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarkerSubsystemDescriptor__ctor_m6D1DB7BCFCAF187DDAEE3B9BB97117B0F3B31AF2 (XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6* __this, Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_m860F49A1552CDB7B6BC6C7AE3780999F7B50E1B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:46>
		SubsystemDescriptorWithProvider_2__ctor_m860F49A1552CDB7B6BC6C7AE3780999F7B50E1B6(__this, SubsystemDescriptorWithProvider_2__ctor_m860F49A1552CDB7B6BC6C7AE3780999F7B50E1B6_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:48>
		String_t* L_0;
		L_0 = Cinfo_get_id_m6E690900279C4DFDDF3F0D8E3D09239186A5A425_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:49>
		Type_t* L_1;
		L_1 = Cinfo_get_providerType_m01F87D7B1B8127E85BDD4DE8780A7BCCF0211193_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_1, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:50>
		Type_t* L_2;
		L_2 = Cinfo_get_subsystemTypeOverride_m04EEF98E63B64B109946B84990FD2E44A4C0F8FB_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_2, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:51>
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
IL2CPP_EXTERN_C void Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshal_pinvoke(const Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD& unmarshaled, Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD____U3CproviderTypeU3Ek__BackingField_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___U3CproviderTypeU3Ek__BackingFieldException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD____U3CproviderTypeU3Ek__BackingField_FieldInfo_var, Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingFieldException, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshal_pinvoke_back(const Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshaled_pinvoke& marshaled, Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD____U3CproviderTypeU3Ek__BackingField_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___U3CproviderTypeU3Ek__BackingFieldException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD____U3CproviderTypeU3Ek__BackingField_FieldInfo_var, Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingFieldException, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshal_pinvoke_cleanup(Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshal_com(const Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD& unmarshaled, Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD____U3CproviderTypeU3Ek__BackingField_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___U3CproviderTypeU3Ek__BackingFieldException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD____U3CproviderTypeU3Ek__BackingField_FieldInfo_var, Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingFieldException, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshal_com_back(const Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshaled_com& marshaled, Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD____U3CproviderTypeU3Ek__BackingField_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___U3CproviderTypeU3Ek__BackingFieldException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD____U3CproviderTypeU3Ek__BackingField_FieldInfo_var, Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingFieldException, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshal_com_cleanup(Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshaled_com& marshaled)
{
}
// Method Definition Index: 103465
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m6E690900279C4DFDDF3F0D8E3D09239186A5A425 (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:17>
		String_t* L_0 = __this->___U3CidU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m6E690900279C4DFDDF3F0D8E3D09239186A5A425_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_m6E690900279C4DFDDF3F0D8E3D09239186A5A425_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 103466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_mCD91F95E6762BC58E3E8DD561E2F98289E8ED649 (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:17>
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_mCD91F95E6762BC58E3E8DD561E2F98289E8ED649_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD*>(__this + _offset);
	Cinfo_set_id_mCD91F95E6762BC58E3E8DD561E2F98289E8ED649_inline(_thisAdjusted, ___0_value, method);
}
// Method Definition Index: 103467
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m01F87D7B1B8127E85BDD4DE8780A7BCCF0211193 (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:25>
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_providerType_m01F87D7B1B8127E85BDD4DE8780A7BCCF0211193_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_providerType_m01F87D7B1B8127E85BDD4DE8780A7BCCF0211193_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 103468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m8C571769BF340ED36876835311F45366779C9704 (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:25>
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m8C571769BF340ED36876835311F45366779C9704_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD*>(__this + _offset);
	Cinfo_set_providerType_m8C571769BF340ED36876835311F45366779C9704_inline(_thisAdjusted, ___0_value, method);
}
// Method Definition Index: 103469
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m04EEF98E63B64B109946B84990FD2E44A4C0F8FB (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:33>
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_subsystemTypeOverride_m04EEF98E63B64B109946B84990FD2E44A4C0F8FB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_m04EEF98E63B64B109946B84990FD2E44A4C0F8FB_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 103470
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m721A0464565A1EE0F02F4D2470E628509BDC5A29 (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:33>
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_m721A0464565A1EE0F02F4D2470E628509BDC5A29_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD*>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_m721A0464565A1EE0F02F4D2470E628509BDC5A29_inline(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 103471
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshSubsystemExtensions_TrySetMeshComputeSettings_mFFBCA3DAF91CA65F28F48285DEFC251BB2EB03A8 (XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* ___0_subsystem, MeshComputeSettings_t9846F4B1842319A1C05A94581E0248E1253A896D ___1_settings, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/MeshSettings.cs:131>
		MeshComputeSettings_t9846F4B1842319A1C05A94581E0248E1253A896D L_0 = ___1_settings;
		bool L_1;
		L_1 = InternalMeshSettings_TrySetMeshComputeSettings_m47DE5488CC1F9CBD2BA64A132B9EC75EE572CA19(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/MeshSettings.cs:132>
		bool L_2 = V_0;
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
// Method Definition Index: 103472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1* AnchorSubsystemExtensions_LoadAnchorStoreAsync_mBA73C68F3A497E0BCA71043B4C0BA210178E41FF (XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___0_anchorSubsystem, const RuntimeMethod* method) 
{
	Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/XRAnchorStore.cs:57>
		XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* L_0 = ___0_anchorSubsystem;
		Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1* L_1;
		L_1 = XRAnchorStore_LoadAnchorStoreAsync_mE2B6F2B8EC3C19BE851E90D4C24253B2A70BB4D3(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/XRAnchorStore.cs:58>
		Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1* L_2 = V_0;
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
// Method Definition Index: 103473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSubsystem_RegisterDescriptor_mB4B042529F48A8969D9323CE63E9E3E92C7A4561 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerSubsystem_t6CE0544D63C7BF11F4D00888AD257947C248A72E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DE17B7149CFC4AD2D8D4499DED4098286557720);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:398>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:399>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:400>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:401>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:402>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:403>
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD));
		Cinfo_set_id_mCD91F95E6762BC58E3E8DD561E2F98289E8ED649_inline((&V_0), _stringLiteral0DE17B7149CFC4AD2D8D4499DED4098286557720, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Cinfo_set_providerType_m8C571769BF340ED36876835311F45366779C9704_inline((&V_0), L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (MarkerSubsystem_t6CE0544D63C7BF11F4D00888AD257947C248A72E_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Cinfo_set_subsystemTypeOverride_m721A0464565A1EE0F02F4D2470E628509BDC5A29_inline((&V_0), L_3, NULL);
		Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD L_4 = V_0;
		XRMarkerSubsystemDescriptor_Create_m5715C97F3DC18D0067B0FE10057DDE6F4E3D07E3(L_4, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:404>
		return;
	}
}
// Method Definition Index: 103474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSubsystem__ctor_mBCC0964BE8C322FB348A2C1498871D614377C38E (MarkerSubsystem_t6CE0544D63C7BF11F4D00888AD257947C248A72E* __this, const RuntimeMethod* method) 
{
	{
		XRMarkerSubsystem__ctor_m9000E1906DD784DDA122B0CF8001E77F71D39F49(__this, NULL);
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
// Method Definition Index: 103475
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider__ctor_m3EE24BC2D6423407664F26B1E538F49A05234979 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m483C72F7DD9B6DB29F3D3D65178F055CF1E756DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE1966FF7305FCFD926188A01F0EA2C1ACED3C652_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:62>
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_0 = (ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801*)(ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801*)SZArrayNew(ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801_il2cpp_TypeInfo_var, (uint32_t)1);
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		__this->___m_enabledMarkerTypes = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_enabledMarkerTypes), (void*)L_1);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:64>
		__this->___m_defaultTransformMode = 0;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:66>
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_2 = (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F*)il2cpp_codegen_object_new(Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m483C72F7DD9B6DB29F3D3D65178F055CF1E756DF(L_2, Dictionary_2__ctor_m483C72F7DD9B6DB29F3D3D65178F055CF1E756DF_RuntimeMethod_var);
		__this->___m_Markers = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Markers), (void*)L_2);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:68>
		Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_3 = (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA*)il2cpp_codegen_object_new(Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE1966FF7305FCFD926188A01F0EA2C1ACED3C652(L_3, Dictionary_2__ctor_mE1966FF7305FCFD926188A01F0EA2C1ACED3C652_RuntimeMethod_var);
		__this->___m_PendingTransforms = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PendingTransforms), (void*)L_3);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:70>
		TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9* L_4 = (TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9*)(&__this->___m_TimeOffsetInfo);
		il2cpp_codegen_initobj(L_4, sizeof(TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9));
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:72>
		Provider__ctor_m1A9559F0ED02F5F43A41231B6BB779FD616B164A(__this, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:74>
		return;
	}
}
// Method Definition Index: 103476
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_Destroy_mC12B5D8611E9539A7947BC3E36CBF82EE2FB2EEB (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:78>
		NativeLib_DestroyMarkerSubsystem_m499DDDF21B0239835937185F67C6B7C249D9078A(NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:79>
		return;
	}
}
// Method Definition Index: 103477
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* OpenXRProvider_get_EnabledMarkerTypes_m4EA95C573563011DC62EBED8DA30BF666EB4D462 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:83>
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_0 = __this->___m_enabledMarkerTypes;
		return L_0;
	}
}
// Method Definition Index: 103478
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_set_EnabledMarkerTypes_mF92E5BFF110FDAB08AE655043D39E901F2061ACB (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:86>
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_0 = ___0_value;
		__this->___m_enabledMarkerTypes = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_enabledMarkerTypes), (void*)L_0);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:87>
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_1 = __this->___m_enabledMarkerTypes;
		XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* L_2;
		L_2 = OpenXRProvider_ToXrSceneMarkerTypeMSFT_m433281740A18B0C24D39984CABD5AA7A8F5D3802(__this, L_1, NULL);
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_3 = __this->___m_enabledMarkerTypes;
		NullCheck(L_3);
		NativeLib_SetEnabledMarkerTypes_mDAB969557B62E417117D767C6C68A7C7116367DA(L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:88>
		return;
	}
}
// Method Definition Index: 103479
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenXRProvider_get_DefaultTransformMode_m26DA28A06B538115BAF698CDB3EDA8D586CE22A0 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:93>
		int32_t L_0 = __this->___m_defaultTransformMode;
		return L_0;
	}
}
// Method Definition Index: 103480
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_set_DefaultTransformMode_m613E58922A57CF2BF8C0D06CFA209A884EAB8A59 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:94>
		int32_t L_0 = ___0_value;
		__this->___m_defaultTransformMode = L_0;
		return;
	}
}
// Method Definition Index: 103481
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 OpenXRProvider_GetChanges_m20638E2AE68379EA0D834F86F71589869193BA38 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_defaultMarker, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m431780744734EE4EC182BF5151096E066DB55325_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mE611784C8B2BF45DD5B8969565FFE8DDB95220FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m81F13A0651D8C3119A4261E2DB5EDEC36CC67632_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m37ED1CFE8CBE452AC84176BBD88C3887F1873C07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m5C581F51050334465053446FE9C159CD3AB59756_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m2F673F14126CDE80375D6C2D5B8FC5A27E694B6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m04FF651FBDB31735823C27E350F83EBBD864673D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m64144FA26440B5BC78A43D948FA6CD77E7B32C4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mCBD4575BD0A5EF520E35E17AA318A9999E9F5CBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m3B99CDB9A1D2168E059A5CCF5D68BD8111D7904A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m9C4751E6D978C5B862FAD4EBBD3BD342754B2705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m324E7A7CD9476D65BA62D991A48E39EEBCA54AC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m54F232CCA2D4C159E105596ABC5A5E7BF58EC3C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m48CD3CF61FDD9A377C0C95816E46015C515F3070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m6FA2FCD46A3382FA72F57CFE2B5E85D0787117BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mD368FDB245534A15FF4CC92F2D785391B9E8E4CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0_mFD5E6855D47C92D8001F08A675EFCACFAD237D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m753E2A58E6C1BDD8F1C85FF19F65FFAF5BFB15B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mA05C9946B5B5F40525277432C838AC8F4A64E250_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m33F89C2694D7E4CA9CCA6FA3B1E05233D251CBB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m4453FA30F2EFF30147505B49EA2E983051936262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mF73A5DA50C043A341E9948B988BD48252204D4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableChanges_1_CopyFrom_m9CC036563CA29B66DCEFBA5D882AC7573B3C0C2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	bool V_4 = false;
	int64_t V_5 = 0;
	NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE V_6;
	memset((&V_6), 0, sizeof(V_6));
	NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE V_7;
	memset((&V_7), 0, sizeof(V_7));
	NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	List_1_t511BD97C45CE630FB76E68532C127583B647161F* V_9 = NULL;
	List_1_t511BD97C45CE630FB76E68532C127583B647161F* V_10 = NULL;
	TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* V_11 = NULL;
	HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	Enumerator_t413487DCCACC376393F93AF90282B4527081B999 V_15;
	memset((&V_15), 0, sizeof(V_15));
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_16;
	memset((&V_16), 0, sizeof(V_16));
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_17;
	memset((&V_17), 0, sizeof(V_17));
	int32_t V_18 = 0;
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool V_22 = false;
	Enumerator_t413487DCCACC376393F93AF90282B4527081B999 V_23;
	memset((&V_23), 0, sizeof(V_23));
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_24;
	memset((&V_24), 0, sizeof(V_24));
	bool V_25 = false;
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_26;
	memset((&V_26), 0, sizeof(V_26));
	bool V_27 = false;
	TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 V_28;
	memset((&V_28), 0, sizeof(V_28));
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:99>
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:102>
		float L_1 = V_0;
		TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9* L_2 = (TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9*)(&__this->___m_TimeOffsetInfo);
		float L_3 = L_2->___lastOffsetCalculationTime;
		V_4 = (bool)((((float)((float)il2cpp_codegen_subtract(L_1, L_3))) > ((float)(1.0f)))? 1 : 0);
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:104>
		TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9* L_5 = (TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9*)(&__this->___m_TimeOffsetInfo);
		float L_6 = V_0;
		L_5->___lastOffsetCalculationTime = L_6;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:105>
		int64_t L_7;
		L_7 = NativeLib_GetCurrentQpcTimeAsXrTime_m88ED8DA9E9B9761C91CF2D6E4A64B1AF0DC08CE0(NULL);
		V_5 = L_7;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:106>
		TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9* L_8 = (TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9*)(&__this->___m_TimeOffsetInfo);
		float L_9 = V_0;
		int64_t L_10 = V_5;
		L_8->___offset = ((float)il2cpp_codegen_subtract(L_9, ((float)(((float)L_10)/(1.0E+09f)))));
	}

IL_004c:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:109>
		V_1 = 0;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:110>
		V_2 = 0;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:111>
		V_3 = 0;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:112>
		NativeLib_GetNumMarkerChanges_m040A1C5B968567A22997E479824C891CA964684C(0, (&V_1), (&V_2), (&V_3), NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:114>
		uint32_t L_11 = V_1;
		int32_t L_12 = ___1_allocator;
		NativeArray_1__ctor_m4453FA30F2EFF30147505B49EA2E983051936262((&V_6), L_11, L_12, 0, NativeArray_1__ctor_m4453FA30F2EFF30147505B49EA2E983051936262_RuntimeMethod_var);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_030c:
			{
				NativeArray_1_Dispose_m753E2A58E6C1BDD8F1C85FF19F65FFAF5BFB15B7((&V_6), NativeArray_1_Dispose_m753E2A58E6C1BDD8F1C85FF19F65FFAF5BFB15B7_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:115>
				uint32_t L_13 = V_2;
				int32_t L_14 = ___1_allocator;
				NativeArray_1__ctor_m4453FA30F2EFF30147505B49EA2E983051936262((&V_7), L_13, L_14, 0, NativeArray_1__ctor_m4453FA30F2EFF30147505B49EA2E983051936262_RuntimeMethod_var);
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_02fd_1:
					{
						NativeArray_1_Dispose_m753E2A58E6C1BDD8F1C85FF19F65FFAF5BFB15B7((&V_7), NativeArray_1_Dispose_m753E2A58E6C1BDD8F1C85FF19F65FFAF5BFB15B7_RuntimeMethod_var);
						return;
					}
				});
				try
				{
					{
						//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:116>
						uint32_t L_15 = V_3;
						int32_t L_16 = ___1_allocator;
						NativeArray_1__ctor_mF73A5DA50C043A341E9948B988BD48252204D4A6((&V_8), L_15, L_16, 0, NativeArray_1__ctor_mF73A5DA50C043A341E9948B988BD48252204D4A6_RuntimeMethod_var);
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_02ee_2:
							{
								NativeArray_1_Dispose_mA05C9946B5B5F40525277432C838AC8F4A64E250((&V_8), NativeArray_1_Dispose_mA05C9946B5B5F40525277432C838AC8F4A64E250_RuntimeMethod_var);
								return;
							}
						});
						try
						{
							{
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:118>
								uint32_t L_17 = V_1;
								uint32_t L_18 = V_2;
								uint32_t L_19 = V_3;
								V_13 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)), (int32_t)L_19))) <= ((uint32_t)0)))? 1 : 0);
								bool L_20 = V_13;
								if (!L_20)
								{
									goto IL_00ca_3;
								}
							}
							{
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:120>
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:121>
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:122>
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:123>
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:124>
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:125>
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:126>
								uint32_t L_21 = V_1;
								uint32_t L_22 = sizeof(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0);
								NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE L_23 = V_6;
								void* L_24;
								L_24 = NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0_mFD5E6855D47C92D8001F08A675EFCACFAD237D66(L_23, NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0_mFD5E6855D47C92D8001F08A675EFCACFAD237D66_RuntimeMethod_var);
								uint32_t L_25 = V_2;
								uint32_t L_26 = sizeof(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0);
								NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE L_27 = V_7;
								void* L_28;
								L_28 = NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0_mFD5E6855D47C92D8001F08A675EFCACFAD237D66(L_27, NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0_mFD5E6855D47C92D8001F08A675EFCACFAD237D66_RuntimeMethod_var);
								uint32_t L_29 = V_3;
								uint32_t L_30 = sizeof(Guid_t);
								NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8 L_31 = V_8;
								void* L_32;
								L_32 = NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mD368FDB245534A15FF4CC92F2D785391B9E8E4CA(L_31, NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mD368FDB245534A15FF4CC92F2D785391B9E8E4CA_RuntimeMethod_var);
								NativeLib_GetMarkerChanges_m7667F23DCFFCD310EEC8AA72EE636816F01E741C(((int32_t)(uint32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_21)), ((int64_t)((int32_t)L_22))))), L_24, ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_25)), ((int64_t)((int32_t)L_26))))), L_28, ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_29)), ((int64_t)((int32_t)L_30))))), L_32, NULL);
							}

IL_00ca_3:
							{
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:129>
								NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE L_33 = V_6;
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_34;
								L_34 = OpenXRProvider_HandleAddedMarkers_mF4B821358D290648E05F13D47CDB9F3696C38511(__this, L_33, NULL);
								V_9 = L_34;
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:130>
								NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE L_35 = V_7;
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_36;
								L_36 = OpenXRProvider_HandleUpdatedMarkers_mE0BD2DDB1A7D9559291ABDF10083C71736088C80(__this, L_35, NULL);
								V_10 = L_36;
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:131>
								NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8 L_37 = V_8;
								TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* L_38;
								L_38 = OpenXRProvider_HandleRemovedMarkers_m3C7AC3CC49565AA5D723CAAFD9B29AAF2A412C4E(__this, L_37, NULL);
								V_11 = L_38;
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:134>
								Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_39 = __this->___m_PendingTransforms;
								NullCheck(L_39);
								int32_t L_40;
								L_40 = Dictionary_2_get_Count_mE611784C8B2BF45DD5B8969565FFE8DDB95220FC(L_39, Dictionary_2_get_Count_mE611784C8B2BF45DD5B8969565FFE8DDB95220FC_RuntimeMethod_var);
								V_14 = (bool)((((int32_t)L_40) > ((int32_t)0))? 1 : 0);
								bool L_41 = V_14;
								if (!L_41)
								{
									goto IL_0194_3;
								}
							}
							{
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:136>
								Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_42 = __this->___m_PendingTransforms;
								NullCheck(L_42);
								KeyCollection_t03A7FB59EF988EBD45BEFDC1EDFF1A8BA91DACB9* L_43;
								L_43 = Dictionary_2_get_Keys_m37ED1CFE8CBE452AC84176BBD88C3887F1873C07(L_42, Dictionary_2_get_Keys_m37ED1CFE8CBE452AC84176BBD88C3887F1873C07_RuntimeMethod_var);
								List_1_t160F335B05E7692BA4234AFD249D62316B990635* L_44;
								L_44 = Enumerable_ToList_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m2F673F14126CDE80375D6C2D5B8FC5A27E694B6B(L_43, Enumerable_ToList_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m2F673F14126CDE80375D6C2D5B8FC5A27E694B6B_RuntimeMethod_var);
								NullCheck(L_44);
								Enumerator_t413487DCCACC376393F93AF90282B4527081B999 L_45;
								L_45 = List_1_GetEnumerator_m324E7A7CD9476D65BA62D991A48E39EEBCA54AC1(L_44, List_1_GetEnumerator_m324E7A7CD9476D65BA62D991A48E39EEBCA54AC1_RuntimeMethod_var);
								V_15 = L_45;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_0178_3:
									{
										Enumerator_Dispose_m04FF651FBDB31735823C27E350F83EBBD864673D((&V_15), Enumerator_Dispose_m04FF651FBDB31735823C27E350F83EBBD864673D_RuntimeMethod_var);
										return;
									}
								});
								try
								{
									{
										goto IL_016d_4;
									}

IL_011a_4:
									{
										//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:136>
										TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_46;
										L_46 = Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_inline((&V_15), Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_RuntimeMethod_var);
										V_16 = L_46;
										//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:138>
										Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_47 = __this->___m_Markers;
										TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_48 = V_16;
										NullCheck(L_47);
										XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_49;
										L_49 = Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E(L_47, L_48, Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_RuntimeMethod_var);
										V_17 = L_49;
										//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:139>
										Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_50 = __this->___m_PendingTransforms;
										TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_51 = V_16;
										NullCheck(L_50);
										int32_t L_52;
										L_52 = Dictionary_2_get_Item_m81F13A0651D8C3119A4261E2DB5EDEC36CC67632(L_50, L_51, Dictionary_2_get_Item_m81F13A0651D8C3119A4261E2DB5EDEC36CC67632_RuntimeMethod_var);
										il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
										XRMarker_set_transformMode_mF035A77F1869A415E1C30748DF8BE62991915EA4_inline((&V_17), L_52, NULL);
										//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:140>
										XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_53 = V_17;
										XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_54;
										L_54 = OpenXRProvider_ApplyTransform_mC47D48E167009A7AC3F69FAC7F337BC2F9818227(__this, L_53, NULL);
										V_17 = L_54;
										//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:143>
										List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_55 = V_10;
										XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_56 = V_17;
										NullCheck(L_55);
										List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_inline(L_55, L_56, List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_RuntimeMethod_var);
										//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:144>
										Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_57 = __this->___m_Markers;
										TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_58 = V_16;
										XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_59 = V_17;
										NullCheck(L_57);
										Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2(L_57, L_58, L_59, Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2_RuntimeMethod_var);
									}

IL_016d_4:
									{
										//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:136>
										bool L_60;
										L_60 = Enumerator_MoveNext_m64144FA26440B5BC78A43D948FA6CD77E7B32C4D((&V_15), Enumerator_MoveNext_m64144FA26440B5BC78A43D948FA6CD77E7B32C4D_RuntimeMethod_var);
										if (L_60)
										{
											goto IL_011a_4;
										}
									}
									{
										goto IL_0187_3;
									}
								}
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}

IL_0187_3:
							{
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:146>
								Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_61 = __this->___m_PendingTransforms;
								NullCheck(L_61);
								Dictionary_2_Clear_m431780744734EE4EC182BF5151096E066DB55325(L_61, Dictionary_2_Clear_m431780744734EE4EC182BF5151096E066DB55325_RuntimeMethod_var);
							}

IL_0194_3:
							{
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:152>
								HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* L_62 = (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B*)il2cpp_codegen_object_new(HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B_il2cpp_TypeInfo_var);
								HashSet_1__ctor_m9C4751E6D978C5B862FAD4EBBD3BD342754B2705(L_62, HashSet_1__ctor_m9C4751E6D978C5B862FAD4EBBD3BD342754B2705_RuntimeMethod_var);
								V_12 = L_62;
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:153>
								V_18 = 0;
								goto IL_0219_3;
							}

IL_01a0_3:
							{
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:155>
								HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* L_63 = V_12;
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_64 = V_10;
								int32_t L_65 = V_18;
								NullCheck(L_64);
								XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_66;
								L_66 = List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD(L_64, L_65, List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD_RuntimeMethod_var);
								V_19 = L_66;
								il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
								TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_67;
								L_67 = XRMarker_get_trackableId_m631071587AB3A81FF304F9513B854F6A96355BA4_inline((&V_19), NULL);
								NullCheck(L_63);
								bool L_68;
								L_68 = HashSet_1_Add_mCBD4575BD0A5EF520E35E17AA318A9999E9F5CBA(L_63, L_67, HashSet_1_Add_mCBD4575BD0A5EF520E35E17AA318A9999E9F5CBA_RuntimeMethod_var);
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:156>
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_69 = V_10;
								int32_t L_70 = V_18;
								NullCheck(L_69);
								XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_71;
								L_71 = List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD(L_69, L_70, List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD_RuntimeMethod_var);
								bool L_72;
								L_72 = OpenXRProvider_IsLastSeenTimeTooOld_mC9BBE6C8FD3AEBF16C5AC66E85EC9351A07B9416(__this, L_71, NULL);
								V_20 = L_72;
								bool L_73 = V_20;
								if (!L_73)
								{
									goto IL_0212_3;
								}
							}
							{
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:158>
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_74 = V_10;
								int32_t L_75 = V_18;
								NullCheck(L_74);
								XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_76;
								L_76 = List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD(L_74, L_75, List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD_RuntimeMethod_var);
								V_21 = L_76;
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:159>
								il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
								XRMarker_set_trackingState_m4BD0134128A6C5770D8AFDBC95C9DE1DF8C18CFC_inline((&V_21), 1, NULL);
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:160>
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_77 = V_10;
								int32_t L_78 = V_18;
								XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_79 = V_21;
								NullCheck(L_77);
								List_1_set_Item_m6FA2FCD46A3382FA72F57CFE2B5E85D0787117BE(L_77, L_78, L_79, List_1_set_Item_m6FA2FCD46A3382FA72F57CFE2B5E85D0787117BE_RuntimeMethod_var);
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:161>
								Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_80 = __this->___m_Markers;
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_81 = V_10;
								int32_t L_82 = V_18;
								NullCheck(L_81);
								XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_83;
								L_83 = List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD(L_81, L_82, List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD_RuntimeMethod_var);
								V_19 = L_83;
								TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_84;
								L_84 = XRMarker_get_trackableId_m631071587AB3A81FF304F9513B854F6A96355BA4_inline((&V_19), NULL);
								XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_85 = V_21;
								NullCheck(L_80);
								Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2(L_80, L_84, L_85, Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2_RuntimeMethod_var);
							}

IL_0212_3:
							{
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:153>
								int32_t L_86 = V_18;
								V_18 = ((int32_t)il2cpp_codegen_add(L_86, 1));
							}

IL_0219_3:
							{
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:153>
								int32_t L_87 = V_18;
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_88 = V_10;
								NullCheck(L_88);
								int32_t L_89;
								L_89 = List_1_get_Count_m48CD3CF61FDD9A377C0C95816E46015C515F3070_inline(L_88, List_1_get_Count_m48CD3CF61FDD9A377C0C95816E46015C515F3070_RuntimeMethod_var);
								V_22 = (bool)((((int32_t)L_87) < ((int32_t)L_89))? 1 : 0);
								bool L_90 = V_22;
								if (L_90)
								{
									goto IL_01a0_3;
								}
							}
							{
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:167>
								Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_91 = __this->___m_Markers;
								NullCheck(L_91);
								KeyCollection_t9E060C86D70A5E2DABBB5BBFBBE4F1B9F583705F* L_92;
								L_92 = Dictionary_2_get_Keys_m5C581F51050334465053446FE9C159CD3AB59756(L_91, Dictionary_2_get_Keys_m5C581F51050334465053446FE9C159CD3AB59756_RuntimeMethod_var);
								List_1_t160F335B05E7692BA4234AFD249D62316B990635* L_93;
								L_93 = Enumerable_ToList_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m2F673F14126CDE80375D6C2D5B8FC5A27E694B6B(L_92, Enumerable_ToList_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m2F673F14126CDE80375D6C2D5B8FC5A27E694B6B_RuntimeMethod_var);
								NullCheck(L_93);
								Enumerator_t413487DCCACC376393F93AF90282B4527081B999 L_94;
								L_94 = List_1_GetEnumerator_m324E7A7CD9476D65BA62D991A48E39EEBCA54AC1(L_93, List_1_GetEnumerator_m324E7A7CD9476D65BA62D991A48E39EEBCA54AC1_RuntimeMethod_var);
								V_23 = L_94;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_02b3_3:
									{
										Enumerator_Dispose_m04FF651FBDB31735823C27E350F83EBBD864673D((&V_23), Enumerator_Dispose_m04FF651FBDB31735823C27E350F83EBBD864673D_RuntimeMethod_var);
										return;
									}
								});
								try
								{
									{
										goto IL_02a8_4;
									}

IL_0247_4:
									{
										//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:167>
										TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_95;
										L_95 = Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_inline((&V_23), Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_RuntimeMethod_var);
										V_24 = L_95;
										//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:169>
										HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* L_96 = V_12;
										TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_97 = V_24;
										NullCheck(L_96);
										bool L_98;
										L_98 = HashSet_1_Contains_m3B99CDB9A1D2168E059A5CCF5D68BD8111D7904A(L_96, L_97, HashSet_1_Contains_m3B99CDB9A1D2168E059A5CCF5D68BD8111D7904A_RuntimeMethod_var);
										V_25 = (bool)((((int32_t)L_98) == ((int32_t)0))? 1 : 0);
										bool L_99 = V_25;
										if (!L_99)
										{
											goto IL_02a7_4;
										}
									}
									{
										//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:171>
										Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_100 = __this->___m_Markers;
										TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_101 = V_24;
										NullCheck(L_100);
										XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_102;
										L_102 = Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E(L_100, L_101, Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_RuntimeMethod_var);
										V_26 = L_102;
										//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:172>
										XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_103 = V_26;
										bool L_104;
										L_104 = OpenXRProvider_IsLastSeenTimeTooOld_mC9BBE6C8FD3AEBF16C5AC66E85EC9351A07B9416(__this, L_103, NULL);
										V_27 = L_104;
										bool L_105 = V_27;
										if (!L_105)
										{
											goto IL_02a6_4;
										}
									}
									{
										//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:174>
										il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
										XRMarker_set_trackingState_m4BD0134128A6C5770D8AFDBC95C9DE1DF8C18CFC_inline((&V_26), 1, NULL);
										//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:175>
										List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_106 = V_10;
										XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_107 = V_26;
										NullCheck(L_106);
										List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_inline(L_106, L_107, List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_RuntimeMethod_var);
										//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:176>
										Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_108 = __this->___m_Markers;
										TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_109 = V_24;
										XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_110 = V_26;
										NullCheck(L_108);
										Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2(L_108, L_109, L_110, Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2_RuntimeMethod_var);
									}

IL_02a6_4:
									{
									}

IL_02a7_4:
									{
									}

IL_02a8_4:
									{
										//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:167>
										bool L_111;
										L_111 = Enumerator_MoveNext_m64144FA26440B5BC78A43D948FA6CD77E7B32C4D((&V_23), Enumerator_MoveNext_m64144FA26440B5BC78A43D948FA6CD77E7B32C4D_RuntimeMethod_var);
										if (L_111)
										{
											goto IL_0247_4;
										}
									}
									{
										goto IL_02c2_3;
									}
								}
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}

IL_02c2_3:
							{
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:181>
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:182>
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:183>
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:184>
								//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:185>
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_112 = V_9;
								NullCheck(L_112);
								XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* L_113;
								L_113 = List_1_ToArray_m54F232CCA2D4C159E105596ABC5A5E7BF58EC3C1(L_112, List_1_ToArray_m54F232CCA2D4C159E105596ABC5A5E7BF58EC3C1_RuntimeMethod_var);
								int32_t L_114 = ___1_allocator;
								NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496 L_115;
								memset((&L_115), 0, sizeof(L_115));
								NativeArray_1__ctor_m33F89C2694D7E4CA9CCA6FA3B1E05233D251CBB5((&L_115), L_113, L_114, NativeArray_1__ctor_m33F89C2694D7E4CA9CCA6FA3B1E05233D251CBB5_RuntimeMethod_var);
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_116 = V_10;
								NullCheck(L_116);
								XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* L_117;
								L_117 = List_1_ToArray_m54F232CCA2D4C159E105596ABC5A5E7BF58EC3C1(L_116, List_1_ToArray_m54F232CCA2D4C159E105596ABC5A5E7BF58EC3C1_RuntimeMethod_var);
								int32_t L_118 = ___1_allocator;
								NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496 L_119;
								memset((&L_119), 0, sizeof(L_119));
								NativeArray_1__ctor_m33F89C2694D7E4CA9CCA6FA3B1E05233D251CBB5((&L_119), L_117, L_118, NativeArray_1__ctor_m33F89C2694D7E4CA9CCA6FA3B1E05233D251CBB5_RuntimeMethod_var);
								TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* L_120 = V_11;
								int32_t L_121 = ___1_allocator;
								NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E L_122;
								memset((&L_122), 0, sizeof(L_122));
								NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715((&L_122), L_120, L_121, NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715_RuntimeMethod_var);
								int32_t L_123 = ___1_allocator;
								TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 L_124;
								L_124 = TrackableChanges_1_CopyFrom_m9CC036563CA29B66DCEFBA5D882AC7573B3C0C2C(L_115, L_119, L_122, L_123, TrackableChanges_1_CopyFrom_m9CC036563CA29B66DCEFBA5D882AC7573B3C0C2C_RuntimeMethod_var);
								V_28 = L_124;
								goto IL_031b;
							}
						}
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_031b:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:187>
		TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 L_125 = V_28;
		return L_125;
	}
}
// Method Definition Index: 103482
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_SetTransformMode_mCA4D978B62F621F20D6F00A2047C5F6D1B014677 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, int32_t ___1_transformMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8A445EAF16A7CD3D15D43F73605AFDAF9E6A4652_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:191>
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_0 = __this->___m_Markers;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_trackableId;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3(L_0, L_1, Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_3 = __this->___m_Markers;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_4 = ___0_trackableId;
		NullCheck(L_3);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_5;
		L_5 = Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E(L_3, L_4, Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_RuntimeMethod_var);
		V_1 = L_5;
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_inline((&V_1), NULL);
		int32_t L_7 = ___1_transformMode;
		G_B3_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = 0;
	}

IL_002c:
	{
		V_0 = (bool)G_B3_0;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:194>
		Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_9 = __this->___m_PendingTransforms;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_10 = ___0_trackableId;
		int32_t L_11 = ___1_transformMode;
		NullCheck(L_9);
		Dictionary_2_Add_m8A445EAF16A7CD3D15D43F73605AFDAF9E6A4652(L_9, L_10, L_11, Dictionary_2_Add_m8A445EAF16A7CD3D15D43F73605AFDAF9E6A4652_RuntimeMethod_var);
	}

IL_0040:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:196>
		return;
	}
}
// Method Definition Index: 103483
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF OpenXRProvider_GetRawData_m7705E5184CBD15DD81C60052E111B8D0D3AFDC78 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:200>
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_0 = __this->___m_Markers;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_trackableId;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3(L_0, L_1, Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:202>
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_4 = ___0_trackableId;
		Guid_t L_5;
		L_5 = FeatureUtils_ToGuid_mE584D409DA9B609AD40CD86340655B9E8996FFE9(L_4, NULL);
		V_1 = L_5;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:203>
		Guid_t L_6 = V_1;
		uint32_t L_7;
		L_7 = NativeLib_GetMarkerRawDataSize_m48B9EE302FB55610AF2739137D14465DFAA005D0(L_6, NULL);
		V_2 = L_7;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:204>
		int32_t L_8 = V_2;
		V_3 = (bool)((((int32_t)L_8) > ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:206>
		int32_t L_10 = V_2;
		int32_t L_11 = ___1_allocator;
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&V_4), L_10, L_11, 0, NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:207>
		Guid_t L_12 = V_1;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_13 = V_4;
		void* L_14;
		L_14 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_13, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		int32_t L_15 = V_2;
		NativeLib_GetMarkerRawData_m544920DF405472FA3A93CDA3919894C630F65AFF(L_12, L_14, L_15, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:208>
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_16 = V_4;
		V_5 = L_16;
		goto IL_0055;
	}

IL_0048:
	{
	}

IL_0049:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:211>
		int32_t L_17 = ___1_allocator;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_18;
		memset((&L_18), 0, sizeof(L_18));
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&L_18), 0, L_17, 0, NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		V_5 = L_18;
		goto IL_0055;
	}

IL_0055:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:212>
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_19 = V_5;
		return L_19;
	}
}
// Method Definition Index: 103484
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OpenXRProvider_GetDecodedString_mB7CC6E4074243EDC78723C1F457B974E9A5D99DA (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	StringBuilder_t* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:216>
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_0 = __this->___m_Markers;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_trackableId;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3(L_0, L_1, Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:218>
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_4 = ___0_trackableId;
		Guid_t L_5;
		L_5 = FeatureUtils_ToGuid_mE584D409DA9B609AD40CD86340655B9E8996FFE9(L_4, NULL);
		V_1 = L_5;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:219>
		Guid_t L_6 = V_1;
		uint32_t L_7;
		L_7 = NativeLib_GetMarkerDecodedStringLength_m2A8FE807631CBDE22CC9B137501621E3D8208F8F(L_6, NULL);
		V_2 = L_7;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:220>
		int32_t L_8 = V_2;
		V_3 = (bool)((((int32_t)L_8) > ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:222>
		int32_t L_10 = V_2;
		StringBuilder_t* L_11 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_11, L_10, NULL);
		V_4 = L_11;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:223>
		Guid_t L_12 = V_1;
		StringBuilder_t* L_13 = V_4;
		StringBuilder_t* L_14 = V_4;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = StringBuilder_get_Capacity_m9DBF3B3940BC0BB882CA26F0EDB53896A491AD1E(L_14, NULL);
		NativeLib_GetMarkerDecodedString_m4BB563331785D9535720B2E6DA32AD3BE3A9CC56(L_12, L_13, L_15, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:224>
		StringBuilder_t* L_16 = V_4;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_16);
		V_5 = L_17;
		goto IL_0052;
	}

IL_004c:
	{
	}

IL_004d:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:227>
		V_5 = (String_t*)NULL;
		goto IL_0052;
	}

IL_0052:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:228>
		String_t* L_18 = V_5;
		return L_18;
	}
}
// Method Definition Index: 103485
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D OpenXRProvider_GetQRCodeProperties_mB95383244F7A0DF9045B041B4A6BD7F1C1DA4390 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeQRCodeProperties_tAC6DDE341B65C1EDBB0A04D80370B97E73640FE0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D V_2;
	memset((&V_2), 0, sizeof(V_2));
	QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:232>
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ___0_trackableId;
		Guid_t L_1;
		L_1 = FeatureUtils_ToGuid_mE584D409DA9B609AD40CD86340655B9E8996FFE9(L_0, NULL);
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:233>
		il2cpp_codegen_initobj((&V_1), sizeof(NativeQRCodeProperties_tAC6DDE341B65C1EDBB0A04D80370B97E73640FE0));
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:234>
		il2cpp_codegen_initobj((&V_2), sizeof(QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D));
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:235>
		Guid_t L_2 = V_0;
		uint32_t L_3 = sizeof(NativeQRCodeProperties_tAC6DDE341B65C1EDBB0A04D80370B97E73640FE0);
		NativeLib_GetMarkerQRCodeProperties_mD9680AB8A4C493CCE95ED165DA2EED444522B3EA(L_2, (NativeQRCodeProperties_tAC6DDE341B65C1EDBB0A04D80370B97E73640FE0*)((uintptr_t)(&V_1)), L_3, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:236>
		NativeQRCodeProperties_tAC6DDE341B65C1EDBB0A04D80370B97E73640FE0 L_4 = V_1;
		uint32_t L_5 = L_4.___version;
		(&V_2)->___version = L_5;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:237>
		NativeQRCodeProperties_tAC6DDE341B65C1EDBB0A04D80370B97E73640FE0 L_6 = V_1;
		int32_t L_7 = L_6.___type;
		(&V_2)->___type = L_7;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:238>
		QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D L_8 = V_2;
		V_3 = L_8;
		goto IL_0046;
	}

IL_0046:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:239>
		QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D L_9 = V_3;
		return L_9;
	}
}
// Method Definition Index: 103486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_Start_m926535B2BF9CD9FC5B89F080889CD31EF5D2FFD8 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:243>
		NativeLib_StartMarkerSubsystem_mA841DE4225E92CED4461DFF2A5CB471097AFB1FF(NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:244>
		return;
	}
}
// Method Definition Index: 103487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_Stop_m3BDD4C2FEF1281CF33E648546996FC07331A993B (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:248>
		NativeLib_StopMarkerSubsystem_mCEA7FD09C6F70CB89F200256896C0BA2088CE6C6(NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:249>
		return;
	}
}
// Method Definition Index: 103488
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t511BD97C45CE630FB76E68532C127583B647161F* OpenXRProvider_HandleAddedMarkers_mF4B821358D290648E05F13D47CDB9F3696C38511 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE ___0_addedNativeMarkers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mCE7E4DDDBB265D1DA73EC746C78893E20115B103_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t511BD97C45CE630FB76E68532C127583B647161F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t511BD97C45CE630FB76E68532C127583B647161F* V_0 = NULL;
	int32_t V_1 = 0;
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	List_1_t511BD97C45CE630FB76E68532C127583B647161F* V_5 = NULL;
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:253>
		List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_0 = (List_1_t511BD97C45CE630FB76E68532C127583B647161F*)il2cpp_codegen_object_new(List_1_t511BD97C45CE630FB76E68532C127583B647161F_il2cpp_TypeInfo_var);
		List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E(L_0, List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:254>
		V_1 = 0;
		goto IL_0054;
	}

IL_000b:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:256>
		int32_t L_1 = V_1;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0, ((&___0_addedNativeMarkers))->___m_Buffer, L_1);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_3;
		L_3 = OpenXRProvider_ToXRMarker_m0D07122261B7A914500FAABD63D0D12B1F5E752F(__this, L_2, NULL);
		V_2 = L_3;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:257>
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_inline((&V_2), NULL);
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:260>
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_6 = V_2;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_7;
		L_7 = OpenXRProvider_ApplyCenterTransform_m00ED833682C6A353DBE5CE0AE796EAC65C888A86(__this, L_6, NULL);
		V_2 = L_7;
	}

IL_0033:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:262>
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_8 = __this->___m_Markers;
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_9;
		L_9 = XRMarker_get_trackableId_m631071587AB3A81FF304F9513B854F6A96355BA4_inline((&V_2), NULL);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_10 = V_2;
		NullCheck(L_8);
		Dictionary_2_Add_mCE7E4DDDBB265D1DA73EC746C78893E20115B103(L_8, L_9, L_10, Dictionary_2_Add_mCE7E4DDDBB265D1DA73EC746C78893E20115B103_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:263>
		List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_11 = V_0;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_12 = V_2;
		NullCheck(L_11);
		List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_inline(L_11, L_12, List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:254>
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0054:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:254>
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_addedNativeMarkers))->___m_Length);
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_000b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:265>
		List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_17 = V_0;
		V_5 = L_17;
		goto IL_0069;
	}

IL_0069:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:266>
		List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_18 = V_5;
		return L_18;
	}
}
// Method Definition Index: 103489
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t511BD97C45CE630FB76E68532C127583B647161F* OpenXRProvider_HandleUpdatedMarkers_mE0BD2DDB1A7D9559291ABDF10083C71736088C80 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE ___0_updatedNativeMarkers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m98B8D02CCF63B9E76FCC2BE8FA6A6FFEA16364FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m38283E00C6BBAED167431266E49302A4FB2E9C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m81F13A0651D8C3119A4261E2DB5EDEC36CC67632_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t511BD97C45CE630FB76E68532C127583B647161F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t511BD97C45CE630FB76E68532C127583B647161F* V_0 = NULL;
	int32_t V_1 = 0;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	List_1_t511BD97C45CE630FB76E68532C127583B647161F* V_9 = NULL;
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:270>
		List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_0 = (List_1_t511BD97C45CE630FB76E68532C127583B647161F*)il2cpp_codegen_object_new(List_1_t511BD97C45CE630FB76E68532C127583B647161F_il2cpp_TypeInfo_var);
		List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E(L_0, List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E_RuntimeMethod_var);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:271>
		V_1 = 0;
		goto IL_0152;
	}

IL_000e:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:273>
		int32_t L_1 = V_1;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0, ((&___0_updatedNativeMarkers))->___m_Buffer, L_1);
		Guid_t L_3 = L_2.___id;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_4;
		L_4 = FeatureUtils_ToTrackableId_m152DF710A98CD5C7264C3322770E841EFDB4CEBF(L_3, NULL);
		V_2 = L_4;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:274>
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_5 = __this->___m_Markers;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_6 = V_2;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3(L_5, L_6, Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_014d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:276>
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_9 = __this->___m_Markers;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_10 = V_2;
		NullCheck(L_9);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_11;
		L_11 = Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E(L_9, L_10, Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_RuntimeMethod_var);
		V_4 = L_11;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:278>
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12;
		L_12 = XRMarker_get_pose_m8F4C00DE68619C010A4450B02622257F33E049CB_inline((&V_4), NULL);
		V_5 = L_12;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:279>
		int32_t L_13 = V_1;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0, ((&___0_updatedNativeMarkers))->___m_Buffer, L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14.___position;
		(&V_5)->___position = L_15;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:280>
		int32_t L_16 = V_1;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_17;
		L_17 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0, ((&___0_updatedNativeMarkers))->___m_Buffer, L_16);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = L_17.___rotation;
		(&V_5)->___rotation = L_18;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:281>
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19 = V_5;
		XRMarker_set_pose_m87E148B64A7EB29C96DC2FD61E9EF92F218278C8_inline((&V_4), L_19, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:283>
		int32_t L_20 = V_1;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_21;
		L_21 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0, ((&___0_updatedNativeMarkers))->___m_Buffer, L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = L_21.___center;
		XRMarker_set_center_m0B4C7F5910FB4076003888A1060012F8BDC32A57_inline((&V_4), L_22, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:284>
		int32_t L_23 = V_1;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_24;
		L_24 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0, ((&___0_updatedNativeMarkers))->___m_Buffer, L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = L_24.___size;
		XRMarker_set_size_m8F91E0C1C6FD00F4125D4DACF3AABEAFDEB30F82_inline((&V_4), L_25, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:285>
		int32_t L_26 = V_1;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_27;
		L_27 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0, ((&___0_updatedNativeMarkers))->___m_Buffer, L_26);
		int64_t L_28 = L_27.___lastSeenTime;
		float L_29;
		L_29 = OpenXRProvider_GetLastSeenTimeAsRealTimeSinceStartup_m56A4FD097CA3F7083477A18441159374001A96EC(__this, L_28, NULL);
		XRMarker_set_lastSeenTime_m5BB8E4F70A100B6732DB0E0E08F408FD71819ABD_inline((&V_4), L_29, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:286>
		int32_t L_30 = V_1;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_31;
		L_31 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0, ((&___0_updatedNativeMarkers))->___m_Buffer, L_30);
		int32_t L_32 = L_31.___trackingState;
		XRMarker_set_trackingState_m4BD0134128A6C5770D8AFDBC95C9DE1DF8C18CFC_inline((&V_4), L_32, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:288>
		Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_33 = __this->___m_PendingTransforms;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_34 = V_2;
		NullCheck(L_33);
		bool L_35;
		L_35 = Dictionary_2_ContainsKey_m98B8D02CCF63B9E76FCC2BE8FA6A6FFEA16364FF(L_33, L_34, Dictionary_2_ContainsKey_m98B8D02CCF63B9E76FCC2BE8FA6A6FFEA16364FF_RuntimeMethod_var);
		V_6 = L_35;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_010e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:291>
		Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_37 = __this->___m_PendingTransforms;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_38 = V_2;
		NullCheck(L_37);
		int32_t L_39;
		L_39 = Dictionary_2_get_Item_m81F13A0651D8C3119A4261E2DB5EDEC36CC67632(L_37, L_38, Dictionary_2_get_Item_m81F13A0651D8C3119A4261E2DB5EDEC36CC67632_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		XRMarker_set_transformMode_mF035A77F1869A415E1C30748DF8BE62991915EA4_inline((&V_4), L_39, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:292>
		Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_40 = __this->___m_PendingTransforms;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_41 = V_2;
		NullCheck(L_40);
		bool L_42;
		L_42 = Dictionary_2_Remove_m38283E00C6BBAED167431266E49302A4FB2E9C15(L_40, L_41, Dictionary_2_Remove_m38283E00C6BBAED167431266E49302A4FB2E9C15_RuntimeMethod_var);
	}

IL_010e:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:294>
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		int32_t L_43;
		L_43 = XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_inline((&V_4), NULL);
		V_7 = (bool)((((int32_t)L_43) == ((int32_t)1))? 1 : 0);
		bool L_44 = V_7;
		if (!L_44)
		{
			goto IL_012a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:297>
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_45 = V_4;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_46;
		L_46 = OpenXRProvider_ApplyCenterTransform_m00ED833682C6A353DBE5CE0AE796EAC65C888A86(__this, L_45, NULL);
		V_4 = L_46;
	}

IL_012a:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:300>
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_47 = __this->___m_Markers;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_48 = V_2;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_49 = V_4;
		NullCheck(L_47);
		Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2(L_47, L_48, L_49, Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:301>
		List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_50 = V_0;
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_51 = __this->___m_Markers;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_52 = V_2;
		NullCheck(L_51);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_53;
		L_53 = Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E(L_51, L_52, Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_RuntimeMethod_var);
		NullCheck(L_50);
		List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_inline(L_50, L_53, List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_RuntimeMethod_var);
	}

IL_014d:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:271>
		int32_t L_54 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0152:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:271>
		int32_t L_55 = V_1;
		int32_t L_56;
		L_56 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_updatedNativeMarkers))->___m_Length);
		V_8 = (bool)((((int32_t)L_55) < ((int32_t)L_56))? 1 : 0);
		bool L_57 = V_8;
		if (L_57)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:304>
		List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_58 = V_0;
		V_9 = L_58;
		goto IL_016a;
	}

IL_016a:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:305>
		List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_59 = V_9;
		return L_59;
	}
}
// Method Definition Index: 103490
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* OpenXRProvider_HandleRemovedMarkers_m3C7AC3CC49565AA5D723CAAFD9B29AAF2A412C4E (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8 ___0_removedNativeMarkers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m98B8D02CCF63B9E76FCC2BE8FA6A6FFEA16364FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m38283E00C6BBAED167431266E49302A4FB2E9C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mD593334AB2D37306843FBFB0052346953414E594_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* V_0 = NULL;
	int32_t V_1 = 0;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* V_6 = NULL;
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:309>
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_removedNativeMarkers))->___m_Length);
		TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* L_1 = (TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0*)(TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0*)SZArrayNew(TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:310>
		V_1 = 0;
		goto IL_006e;
	}

IL_0012:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:312>
		int32_t L_2 = V_1;
		Guid_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_ITEM(Guid_t, ((&___0_removedNativeMarkers))->___m_Buffer, L_2);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_4;
		L_4 = FeatureUtils_ToTrackableId_m152DF710A98CD5C7264C3322770E841EFDB4CEBF(L_3, NULL);
		V_2 = L_4;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:313>
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_5 = __this->___m_Markers;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_6 = V_2;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3(L_5, L_6, Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:315>
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_9 = __this->___m_Markers;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_10 = V_2;
		NullCheck(L_9);
		bool L_11;
		L_11 = Dictionary_2_Remove_mD593334AB2D37306843FBFB0052346953414E594(L_9, L_10, Dictionary_2_Remove_mD593334AB2D37306843FBFB0052346953414E594_RuntimeMethod_var);
	}

IL_0040:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:317>
		Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_12 = __this->___m_PendingTransforms;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_13 = V_2;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m98B8D02CCF63B9E76FCC2BE8FA6A6FFEA16364FF(L_12, L_13, Dictionary_2_ContainsKey_m98B8D02CCF63B9E76FCC2BE8FA6A6FFEA16364FF_RuntimeMethod_var);
		V_4 = L_14;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0061;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:319>
		Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_16 = __this->___m_PendingTransforms;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_17 = V_2;
		NullCheck(L_16);
		bool L_18;
		L_18 = Dictionary_2_Remove_m38283E00C6BBAED167431266E49302A4FB2E9C15(L_16, L_17, Dictionary_2_Remove_m38283E00C6BBAED167431266E49302A4FB2E9C15_RuntimeMethod_var);
	}

IL_0061:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:321>
		TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* L_19 = V_0;
		int32_t L_20 = V_1;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_21 = V_2;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7)L_21);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:310>
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_006e:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:310>
		int32_t L_23 = V_1;
		int32_t L_24;
		L_24 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_removedNativeMarkers))->___m_Length);
		V_5 = (bool)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_5;
		if (L_25)
		{
			goto IL_0012;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:323>
		TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* L_26 = V_0;
		V_6 = L_26;
		goto IL_0083;
	}

IL_0083:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:324>
		TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* L_27 = V_6;
		return L_27;
	}
}
// Method Definition Index: 103491
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 OpenXRProvider_ApplyTransform_mC47D48E167009A7AC3F69FAC7F337BC2F9818227 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_xrMarker, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:328>
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_inline((&___0_xrMarker), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:330>
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_2 = ___0_xrMarker;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_3;
		L_3 = OpenXRProvider_ApplyCenterTransform_m00ED833682C6A353DBE5CE0AE796EAC65C888A86(__this, L_2, NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_001a:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:333>
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_4 = ___0_xrMarker;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_5;
		L_5 = OpenXRProvider_ApplyStableTransform_m1AD398C75E69AA99410219F8A47C6DAD10F92402(__this, L_4, NULL);
		V_1 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:334>
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_6 = V_1;
		return L_6;
	}
}
// Method Definition Index: 103492
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 OpenXRProvider_ApplyCenterTransform_m00ED833682C6A353DBE5CE0AE796EAC65C888A86 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_xrMarker, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:338>
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_inline((&___0_xrMarker), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:340>
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = XRMarker_get_pose_m8F4C00DE68619C010A4450B02622257F33E049CB_inline((&___0_xrMarker), NULL);
		V_1 = L_2;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:341>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&(&V_1)->___position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = XRMarker_get_center_m5DEEB5EB8BCD66CB7521828747174DA596A8CD0F_inline((&___0_xrMarker), NULL);
		float L_7 = L_6.___x;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Pose_get_right_m8518E7BCEB74B9798BADB001B9E38756CC35ECFE((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_7, L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = XRMarker_get_center_m5DEEB5EB8BCD66CB7521828747174DA596A8CD0F_inline((&___0_xrMarker), NULL);
		float L_11 = L_10.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Pose_get_up_m5431E350242BEBB0CD7B0AAF9DC9468DC6DDFE5C((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_11, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_14, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4 = L_15;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:342>
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_16 = V_1;
		XRMarker_set_pose_m87E148B64A7EB29C96DC2FD61E9EF92F218278C8_inline((&___0_xrMarker), L_16, NULL);
	}

IL_006e:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:344>
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_17 = ___0_xrMarker;
		V_2 = L_17;
		goto IL_0072;
	}

IL_0072:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:345>
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_18 = V_2;
		return L_18;
	}
}
// Method Definition Index: 103493
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 OpenXRProvider_ApplyStableTransform_m1AD398C75E69AA99410219F8A47C6DAD10F92402 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_xrMarker, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:349>
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_inline((&___0_xrMarker), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:351>
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = XRMarker_get_pose_m8F4C00DE68619C010A4450B02622257F33E049CB_inline((&___0_xrMarker), NULL);
		V_1 = L_2;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:352>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&(&V_1)->___position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = XRMarker_get_center_m5DEEB5EB8BCD66CB7521828747174DA596A8CD0F_inline((&___0_xrMarker), NULL);
		float L_7 = L_6.___x;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Pose_get_right_m8518E7BCEB74B9798BADB001B9E38756CC35ECFE((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_7, L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = XRMarker_get_center_m5DEEB5EB8BCD66CB7521828747174DA596A8CD0F_inline((&___0_xrMarker), NULL);
		float L_11 = L_10.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Pose_get_up_m5431E350242BEBB0CD7B0AAF9DC9468DC6DDFE5C((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_11, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_14, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4 = L_15;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:353>
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_16 = V_1;
		XRMarker_set_pose_m87E148B64A7EB29C96DC2FD61E9EF92F218278C8_inline((&___0_xrMarker), L_16, NULL);
	}

IL_006e:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:355>
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_17 = ___0_xrMarker;
		V_2 = L_17;
		goto IL_0072;
	}

IL_0072:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:356>
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_18 = V_2;
		return L_18;
	}
}
// Method Definition Index: 103494
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 OpenXRProvider_ToXRMarker_m0D07122261B7A914500FAABD63D0D12B1F5E752F (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 ___0_nativeMarker, const RuntimeMethod* method) 
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:360>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:361>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:362>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:363>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:364>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:365>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:366>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:367>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:368>
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:369>
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_0 = ___0_nativeMarker;
		Guid_t L_1 = L_0.___id;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2;
		L_2 = FeatureUtils_ToTrackableId_m152DF710A98CD5C7264C3322770E841EFDB4CEBF(L_1, NULL);
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_3 = ___0_nativeMarker;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3.___position;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_5 = ___0_nativeMarker;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = L_5.___rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_7), L_4, L_6, NULL);
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_8 = ___0_nativeMarker;
		int32_t L_9 = L_8.___trackingState;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_10 = ___0_nativeMarker;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = L_10.___center;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_12 = ___0_nativeMarker;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = L_12.___size;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_14 = ___0_nativeMarker;
		int64_t L_15 = L_14.___lastSeenTime;
		float L_16;
		L_16 = OpenXRProvider_GetLastSeenTimeAsRealTimeSinceStartup_m56A4FD097CA3F7083477A18441159374001A96EC(__this, L_15, NULL);
		int32_t L_17 = __this->___m_defaultTransformMode;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_18 = ___0_nativeMarker;
		int32_t L_19 = L_18.___type;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_20;
		memset((&L_20), 0, sizeof(L_20));
		XRMarker__ctor_m333BD0462FA9858789857B3B6127D56926E6932E((&L_20), L_2, L_7, L_9, L_11, L_13, L_16, L_17, L_19, 0, NULL);
		V_0 = L_20;
		goto IL_0054;
	}

IL_0054:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:370>
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_21 = V_0;
		return L_21;
	}
}
// Method Definition Index: 103495
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* OpenXRProvider_ToXrSceneMarkerTypeMSFT_m433281740A18B0C24D39984CABD5AA7A8F5D3802 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* ___0_markerTypes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* V_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:374>
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_0 = ___0_markerTypes;
		NullCheck(L_0);
		XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* L_1 = (XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541*)(XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541*)SZArrayNew(XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:375>
		V_1 = 0;
		goto IL_001a;
	}

IL_000e:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:377>
		XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* L_2 = V_0;
		int32_t L_3 = V_1;
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_4 = ___0_markerTypes;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_7);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:375>
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001a:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:375>
		int32_t L_9 = V_1;
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_10 = ___0_markerTypes;
		NullCheck(L_10);
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:379>
		XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* L_12 = V_0;
		V_3 = L_12;
		goto IL_0028;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:380>
		XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* L_13 = V_3;
		return L_13;
	}
}
// Method Definition Index: 103496
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OpenXRProvider_GetLastSeenTimeAsRealTimeSinceStartup_m56A4FD097CA3F7083477A18441159374001A96EC (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, int64_t ___0_lastSeenTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:384>
		int64_t L_0 = ___0_lastSeenTime;
		TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9* L_1 = (TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9*)(&__this->___m_TimeOffsetInfo);
		float L_2 = L_1->___offset;
		V_0 = ((float)il2cpp_codegen_add(((float)(((float)L_0)/(1.0E+09f))), L_2));
		goto IL_0018;
	}

IL_0018:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:385>
		float L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 103497
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRProvider_IsLastSeenTimeTooOld_mC9BBE6C8FD3AEBF16C5AC66E85EC9351A07B9416 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_xrMarker, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:391>
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = XRMarker_get_lastSeenTime_m20EFAEA942299F041B9896C2B77424EA947D00E6_inline((&___0_xrMarker), NULL);
		if ((!(((float)((float)il2cpp_codegen_subtract(L_0, L_1))) > ((float)(2.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = XRMarker_get_trackingState_mAD3BB40B3E6FC7580159A8BE7FEB2A4D242D9CB6_inline((&___0_xrMarker), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
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
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:392>
		bool L_3 = V_0;
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
// Method Definition Index: 103498
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSubsystemController__ctor_mE834221E79C5A9097B7294175A4A96B05B912DBC (MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7* __this, RuntimeObject* ___0_context, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:411>
		RuntimeObject* L_0 = ___0_context;
		SubsystemController__ctor_m860DC323501E43007757630E4E5AE907CC3DBBA4(__this, L_0, NULL);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:413>
		return;
	}
}
// Method Definition Index: 103499
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSubsystemController_OnSubsystemCreate_m63487805481D8DAE4482D8121087105B6876F5D8 (MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7* __this, RuntimeObject* ___0_plugin, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemPlugin_CreateSubsystem_TisXRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6_TisXRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357_m1A23BDF123AF771DE0E0D8BC99000A2698E7D48A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DE17B7149CFC4AD2D8D4499DED4098286557720);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DC94C1A21957C047FE1EB19F86F440997C76E7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:417>
		bool L_0;
		L_0 = OpenXRRuntime_IsExtensionEnabled_mF0C6FC95EDFD8DA6C5A838EA2053C06F657A2EE5(_stringLiteral23DC94C1A21957C047FE1EB19F86F440997C76E7, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:419>
		RuntimeObject* L_2 = ___0_plugin;
		il2cpp_codegen_runtime_class_init_inline(MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var);
		List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35* L_3 = ((MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_StaticFields*)il2cpp_codegen_static_fields_for(MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var))->___s_MarkerDescriptors;
		NullCheck(L_2);
		GenericInterfaceActionInvoker2< List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35*, String_t* >::Invoke(ISubsystemPlugin_CreateSubsystem_TisXRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6_TisXRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357_m1A23BDF123AF771DE0E0D8BC99000A2698E7D48A_RuntimeMethod_var, L_2, L_3, _stringLiteral0DE17B7149CFC4AD2D8D4499DED4098286557720);
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:421>
		return;
	}
}
// Method Definition Index: 103500
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSubsystemController_OnSubsystemDestroy_m7784FD85FB3DFF1ADD45A5D92E9779490BE5208D (MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7* __this, RuntimeObject* ___0_plugin, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemPlugin_DestroySubsystem_TisXRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357_m29E429B7340A8A442182BD2DAA371BE7A9443B36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:425>
		RuntimeObject* L_0 = ___0_plugin;
		NullCheck(L_0);
		GenericInterfaceActionInvoker0::Invoke(ISubsystemPlugin_DestroySubsystem_TisXRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357_m29E429B7340A8A442182BD2DAA371BE7A9443B36_RuntimeMethod_var, L_0);
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:426>
		return;
	}
}
// Method Definition Index: 103501
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSubsystemController__cctor_mE0C003AAFAEC4F66A9C97677AD06326098443E8B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC591BF6C7964B9359D62D7D0BD6AD4461C35F580_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/Subsystems/ARMarker/MarkerSubsystem.cs:409>
		List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35* L_0 = (List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35*)il2cpp_codegen_object_new(List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35_il2cpp_TypeInfo_var);
		List_1__ctor_mC591BF6C7964B9359D62D7D0BD6AD4461C35F580(L_0, List_1__ctor_mC591BF6C7964B9359D62D7D0BD6AD4461C35F580_RuntimeMethod_var);
		((MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_StaticFields*)il2cpp_codegen_static_fields_for(MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var))->___s_MarkerDescriptors = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_StaticFields*)il2cpp_codegen_static_fields_for(MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var))->___s_MarkerDescriptors), (void*)L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 96100
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRAnchor_get_nativePtr_mC0551FA7E8DB8A0DA1EAE02D9B0BFD9D47389C26_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.arfoundation@ddd5a77596e0/Runtime/ARSubsystems/AnchorSubsystem/XRAnchor.cs:125>
		intptr_t L_0 = __this->___m_NativePtr;
		return L_0;
	}
}
// Method Definition Index: 103429
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_pose_m87E148B64A7EB29C96DC2FD61E9EF92F218278C8_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:81>
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___U3CposeU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 103431
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_trackingState_m4BD0134128A6C5770D8AFDBC95C9DE1DF8C18CFC_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:86>
		int32_t L_0 = ___0_value;
		__this->___U3CtrackingStateU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 103433
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_center_m0B4C7F5910FB4076003888A1060012F8BDC32A57_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:91>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CcenterU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 103435
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_size_m8F91E0C1C6FD00F4125D4DACF3AABEAFDEB30F82_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:96>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CsizeU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 103437
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_lastSeenTime_m5BB8E4F70A100B6732DB0E0E08F408FD71819ABD_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:101>
		float L_0 = ___0_value;
		__this->___U3ClastSeenTimeU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 103439
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_transformMode_mF035A77F1869A415E1C30748DF8BE62991915EA4_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:106>
		int32_t L_0 = ___0_value;
		__this->___U3CtransformModeU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 103427
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRMarker_get_trackableId_m631071587AB3A81FF304F9513B854F6A96355BA4_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:76>
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___U3CtrackableIdU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 103428
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRMarker_get_pose_m8F4C00DE68619C010A4450B02622257F33E049CB_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:81>
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CposeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 103430
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRMarker_get_trackingState_mAD3BB40B3E6FC7580159A8BE7FEB2A4D242D9CB6_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:86>
		int32_t L_0 = __this->___U3CtrackingStateU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 103432
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRMarker_get_center_m5DEEB5EB8BCD66CB7521828747174DA596A8CD0F_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:91>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CcenterU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 103434
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRMarker_get_size_m74D038CACCDD79E6467F78EC28FF607B205EE813_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:96>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CsizeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 103436
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRMarker_get_lastSeenTime_m20EFAEA942299F041B9896C2B77424EA947D00E6_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:101>
		float L_0 = __this->___U3ClastSeenTimeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 103438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:106>
		int32_t L_0 = __this->___U3CtransformModeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 103440
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRMarker_get_markerType_mE7671C1EC6EEA640492B85F356413914C05ED58F_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:111>
		int32_t L_0 = __this->___U3CmarkerTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 103441
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRMarker_get_nativePtr_m0D1149446102E59DB3825856A661976B79A9B03A_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:117>
		intptr_t L_0 = __this->___U3CnativePtrU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 61367
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 103425
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 XRMarker_get_defaultValue_m049879891BEA32B4545D12BFEA87D0A0D0C9D8C9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarker.cs:36>
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_0 = ((XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_StaticFields*)il2cpp_codegen_static_fields_for(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var))->___s_Default;
		return L_0;
	}
}
// Method Definition Index: 103465
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m6E690900279C4DFDDF3F0D8E3D09239186A5A425_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:17>
		String_t* L_0 = __this->___U3CidU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 111267
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 103467
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m01F87D7B1B8127E85BDD4DE8780A7BCCF0211193_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:25>
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 111269
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 103469
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m04EEF98E63B64B109946B84990FD2E44A4C0F8FB_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:33>
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 111271
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 103466
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCD91F95E6762BC58E3E8DD561E2F98289E8ED649_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:17>
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 103468
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m8C571769BF340ED36876835311F45366779C9704_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:25>
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 103470
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m721A0464565A1EE0F02F4D2470E628509BDC5A29_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.microsoft.mixedreality.openxr@42041f7dc068/Runtime/API/ARMarker/XRMarkerSubsystemDescriptor.cs:33>
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 61215
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
// Method Definition Index: 61211
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
// Method Definition Index: 61212
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
// Method Definition Index: 95976
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline (SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.arfoundation@ddd5a77596e0/Runtime/ARFoundation/SubsystemLifecycleManager.cs:20>
		RuntimeObject* L_0 = __this->___U3CsubsystemU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 111303
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CproviderU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 11125
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_gshared_inline (Enumerator_t413487DCCACC376393F93AF90282B4527081B999* __this, const RuntimeMethod* method) 
{
	{
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 11075
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_gshared_inline (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_item, const RuntimeMethod* method) 
{
	XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* L_6 = V_0;
		int32_t L_7 = V_1;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0)L_8);
		return;
	}

IL_0034:
	{
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_9 = ___0_item;
		List_1_AddWithResize_m42993F1FE2BE08C8EADC187A0297ED2C4F4CE30D(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// Method Definition Index: 11064
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m48CD3CF61FDD9A377C0C95816E46015C515F3070_gshared_inline (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 61178
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
