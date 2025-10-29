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
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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

struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C;
struct Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D;
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8;
struct EnvironmentDepthManagerU5BU5D_t9FFBFDE801A778A81860F0724CB4AB3ABB9EE8A7;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5;
struct RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA;
struct RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46;
struct EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631;
struct HDROutputSettings_t6A590B1AA325DD7389D71F502B762BF1592A9F62;
struct IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42;
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
struct String_t;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t1ACF46C8B2EF733FA0223A82328A383F4AABE8DA;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1;
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
struct Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OcclusionShadersMode_t5E05D042A31C02AED3DAE94D664CB5FB98B24A9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDEA4DBF25ED3A57BEF93477E21812F662B700F3C____A1EE658CBD08D8BD40F2A3C82B8B522A12F12ABB95E036DC95F85130EA7869FF_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDEA4DBF25ED3A57BEF93477E21812F662B700F3C____C65B6ECC6AB0A311BBC30DD56BA6E82E8655F66ED88EB2E6680A09897E131462_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06E02AAD278C470CA00827078CCD2F85C887CBD0;
IL2CPP_EXTERN_C String_t* _stringLiteral1636A4BA9AE4E4042E374DBDD1627CE3A68CF0CE;
IL2CPP_EXTERN_C String_t* _stringLiteral1DB6F79BC26F74A2048E9C638ECC919589DBFA22;
IL2CPP_EXTERN_C String_t* _stringLiteral1DBA9D771CF21BD0FF172F0B4156503587FD5B7F;
IL2CPP_EXTERN_C String_t* _stringLiteral204F544BAFC4863B359F592A20972AD51732AE93;
IL2CPP_EXTERN_C String_t* _stringLiteral3B44297D60CF56CB725817F52F8E32E7D2D5047C;
IL2CPP_EXTERN_C String_t* _stringLiteral523BF4488708BE2234C4B9012CE7985904607C1C;
IL2CPP_EXTERN_C String_t* _stringLiteral52D116CDEFB0E031F0B4DCBA373CD38BDA93F877;
IL2CPP_EXTERN_C String_t* _stringLiteral5F224B2AEF4A637D33372AD5CB608CD3CE8013AF;
IL2CPP_EXTERN_C String_t* _stringLiteral751DF501B3658107DF0A0E5BBD583871E9D7F7E5;
IL2CPP_EXTERN_C String_t* _stringLiteral8E994D0100257BF66B5AC25A19EA6D5296A523A0;
IL2CPP_EXTERN_C String_t* _stringLiteral9FC59D8986B846D2BF95AF308D4A1BDF1803347C;
IL2CPP_EXTERN_C String_t* _stringLiteralA5E8D505AB96888EB0230DF995112A81F0791818;
IL2CPP_EXTERN_C String_t* _stringLiteralB29005781C891F9AA15F6FF036E1C296DF7D185D;
IL2CPP_EXTERN_C String_t* _stringLiteralB9617EED2DB44742A945CC34B2AEDAD85CF5829E;
IL2CPP_EXTERN_C String_t* _stringLiteralBB2ED7F20376FBEB6F53E15F9D67658D0E6B8478;
IL2CPP_EXTERN_C String_t* _stringLiteralC72278CAD213B4C576D5C76D1DBEE59F598828C2;
IL2CPP_EXTERN_C String_t* _stringLiteralC92F425FF6D1AA7661F3BC4F16E65014AB18038A;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F5A00EE4168A8128DDBCD07A1218D7BFEA7A37;
IL2CPP_EXTERN_C String_t* _stringLiteralDE36140A6B900DD92158BBA056C0056D6031D25D;
IL2CPP_EXTERN_C String_t* _stringLiteralF059B746A59FE38D002C266467591FEA7D7F42AD;
IL2CPP_EXTERN_C String_t* _stringLiteralF5C8165CA10C005224204E77DF9D14B920A64297;
IL2CPP_EXTERN_C String_t* _stringLiteralF811479F06651C8AFA71880841D3E3465A1FE575;
IL2CPP_EXTERN_C String_t* _stringLiteralFACA7D75FD5104282E5CBBE3280D22C37DA9575F;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_mF5091B94BF13CA3EF3C5BE064D4473587E449094_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8B9ED3F06F257815D476EC4C5023AB38A4387D83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DepthProviderNotSupported_Meta_XR_EnvironmentDepth_IDepthProvider_TryGetUpdatedDepthTexture_m766AA0C5259E3A2B5FAD8861A782F285FFED6699_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m50A5896C62B9ADBC7CDA569AED01965F732C0206_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB3335A2F8C13E8560AD216C31C274039EAD6E5AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0E9B975BD111000DA67E4735FCB6FE908FAB1FF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnvironmentDepthManager_OnBeforeRender_m00D18902AA35B53448B64DCCE48FAB161B2BF078_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m89A1D216F94797F1BFBDD647E317B8389D495E99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m1564DCD77DA806C8E84BE6808F00823EBCA88234_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsByType_TisEnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_mA0C000397774A6698A8B34F69170B3D349FABA0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m5F2479AD2426A9D07E2B13A031D1F489CDB1A960_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8;
struct EnvironmentDepthManagerU5BU5D_t9FFBFDE801A778A81860F0724CB4AB3ABB9EE8A7;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5;
struct RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA;
struct RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tC73739737D4E911DBA1D240C198942E5C147CBD1 
{
};
struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930  : public RuntimeObject
{
	MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_tDEA4DBF25ED3A57BEF93477E21812F662B700F3C  : public RuntimeObject
{
};
struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F  : public RuntimeObject
{
};
struct DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46  : public RuntimeObject
{
};
struct EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t1ACF46C8B2EF733FA0223A82328A383F4AABE8DA  : public RuntimeObject
{
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
struct Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB  : public RuntimeObject
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____maskMaterial;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ____maskDepthRt;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ____maskedDepthTexture;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ____maskCommandBuffer;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ____mvpMatrices;
};
struct Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064 
{
	List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* ____list;
	int32_t ____index;
	int32_t ____version;
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ____current;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
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
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D228_t2110C658A1420F0597BCBE78FE23FFE45466FFA2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D228_t2110C658A1420F0597BCBE78FE23FFE45466FFA2__padding[228];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D305_tB30398D15F1F238042BA010C07F40E4336664988 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D305_tB30398D15F1F238042BA010C07F40E4336664988__padding[305];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E 
{
	int32_t ___value__;
};
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B 
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
struct DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___createPoseLocation;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___createPoseRotation;
	float ___fovLeftAngleTangent;
	float ___fovRightAngleTangent;
	float ___fovTopAngleTangent;
	float ___fovDownAngleTangent;
	float ___nearZ;
	float ___farZ;
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
struct FindObjectsInactive_t10C7BE036CAD0178142374F945283DA50D02B87A 
{
	int32_t ___value__;
};
struct FindObjectsSortMode_t3C83F8C6588F54EBB0CEB21F79D54CD19460AE9E 
{
	int32_t ___value__;
};
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
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
struct LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331 
{
	int32_t ___value__;
};
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF 
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
struct OcclusionShadersMode_t5E05D042A31C02AED3DAE94D664CB5FB98B24A9C 
{
	int32_t ___value__;
};
struct RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 
{
	int32_t ___m_RenderTextureInstanceID;
	intptr_t ___m_BufferPtr;
};
struct RenderBufferLoadAction_t3333B2CABABAC39DA0CDC25602E5E4FD93C2CB0E 
{
	int32_t ___value__;
};
struct RenderBufferStoreAction_t87683F22C09634E24A574F21F42037C953A2C8B7 
{
	int32_t ___value__;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642 
{
	int32_t ___value__;
};
struct IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	int32_t ___m_Type;
	int32_t ___m_NameID;
	int32_t ___m_InstanceID;
	intptr_t ___m_BufferPointer;
	int32_t ___m_MipLevel;
	int32_t ___m_CubeFace;
	int32_t ___m_DepthSlice;
};
struct RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F 
{
	RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5* ___color;
	RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 ___depth;
	int32_t ___mipLevel;
	int32_t ___cubemapFace;
	int32_t ___depthSlice;
	RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA* ___colorLoad;
	RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5* ___colorStore;
	int32_t ___depthLoad;
	int32_t ___depthStore;
};
struct RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F_marshaled_pinvoke
{
	RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* ___color;
	RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 ___depth;
	int32_t ___mipLevel;
	int32_t ___cubemapFace;
	int32_t ___depthSlice;
	int32_t* ___colorLoad;
	int32_t* ___colorStore;
	int32_t ___depthLoad;
	int32_t ___depthStore;
};
struct RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F_marshaled_com
{
	RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* ___color;
	RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 ___depth;
	int32_t ___mipLevel;
	int32_t ___cubemapFace;
	int32_t ___depthSlice;
	int32_t* ___colorLoad;
	int32_t* ___colorStore;
	int32_t ___depthLoad;
	int32_t ___depthStore;
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
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1  : public IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___displayFocusChanged;
	HDROutputSettings_t6A590B1AA325DD7389D71F502B762BF1592A9F62* ___m_HDROutputSettings;
};
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance;
	bool ___m_InitManagerOnStart;
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager;
	bool ___m_ProviderIntialized;
	bool ___m_ProviderStarted;
};
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	bool ___m_InitializationComplete;
	bool ___m_RequiresSettingsUpdate;
	bool ___m_AutomaticLoading;
	bool ___m_AutomaticRunning;
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders;
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t ____occlusionShadersMode;
	bool ____removeHands;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___CustomTrackingSpace;
	List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* ___U3CMaskMeshFiltersU3Ek__BackingField;
	bool ____isCameraRigCached;
	OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* ____cameraRig;
	bool ____hasPermission;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____preprocessMaterial;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ____preprocessTexture;
	RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F ____preprocessRenderTargetSetup;
	Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* ___onDepthTextureUpdate;
	DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8* ___frameDescriptors;
	float ____maskBias;
	Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB* ____mask;
	bool ___U3CIsDepthAvailableU3Ek__BackingField;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ____reprojectionMatrices;
};
struct OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackingSpaceU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftEyeAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CcenterEyeAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightEyeAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftHandAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightHandAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftHandAnchorDetachedU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightHandAnchorDetachedU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftControllerInHandAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftHandOnControllerAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightControllerInHandAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightHandOnControllerAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftControllerAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightControllerAnchorU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackerAnchorU3Ek__BackingField;
	Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F* ___UpdatedAnchors;
	Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D* ___TrackingSpaceChanged;
	bool ___usePerEyeCameras;
	bool ___useFixedUpdateForTracking;
	bool ___disableEyeAnchorCameras;
	bool ____skipUpdate;
	String_t* ___trackingSpaceName;
	String_t* ___trackerAnchorName;
	String_t* ___leftEyeAnchorName;
	String_t* ___centerEyeAnchorName;
	String_t* ___rightEyeAnchorName;
	String_t* ___leftHandAnchorName;
	String_t* ___rightHandAnchorName;
	String_t* ___leftControllerAnchorName;
	String_t* ___rightControllerAnchorName;
	String_t* ___leftHandAnchorDetachedName;
	String_t* ___rightHandAnchorDetachedName;
	String_t* ___leftControllerInHandAnchorName;
	String_t* ___leftHandOnControllerAnchorName;
	String_t* ___rightControllerInHandAnchorName;
	String_t* ___rightHandOnControllerAnchorName;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____centerEyeCamera;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____leftEyeCamera;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____rightEyeCamera;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____previousTrackingSpaceTransform;
};
struct List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_StaticFields
{
	MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_tDEA4DBF25ED3A57BEF93477E21812F662B700F3C_StaticFields
{
	__StaticArrayInitTypeSizeU3D305_tB30398D15F1F238042BA010C07F40E4336664988 ___A1EE658CBD08D8BD40F2A3C82B8B522A12F12ABB95E036DC95F85130EA7869FF;
	__StaticArrayInitTypeSizeU3D228_t2110C658A1420F0597BCBE78FE23FFE45466FFA2 ___C65B6ECC6AB0A311BBC30DD56BA6E82E8655F66ED88EB2E6680A09897E131462;
};
struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields
{
	RuntimeObject* ___s_DefaultLogger;
	RuntimeObject* ___s_Logger;
};
struct EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____scalingVector3;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
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
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_StaticFields
{
	bool ___ThrowOnSetRenderTarget;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_StaticFields
{
	int32_t ___k_ColorId;
	int32_t ___k_MainTexId;
};
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B_StaticFields
{
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___Invalid;
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	int32_t ___GenerateAllMips;
};
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	String_t* ___k_SettingsKey;
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance;
};
struct EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields
{
	int32_t ___DepthTextureID;
	int32_t ___ReprojectionMatricesID;
	int32_t ___ZBufferParamsID;
	int32_t ___PreprocessedEnvironmentDepthTexture;
	int32_t ___MvpMatricesID;
	int32_t ___MaskTextureID;
	int32_t ___MaskBiasID;
	RuntimeObject* ____provider;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct EnvironmentDepthManagerU5BU5D_t9FFBFDE801A778A81860F0724CB4AB3ABB9EE8A7  : public RuntimeArray
{
	ALIGN_FIELD (8) EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* m_Items[1];

	inline EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8  : public RuntimeArray
{
	ALIGN_FIELD (8) DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 m_Items[1];

	inline DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 value)
	{
		m_Items[index] = value;
	}
};
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
struct RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5  : public RuntimeArray
{
	ALIGN_FIELD (8) RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 m_Items[1];

	inline RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 value)
	{
		m_Items[index] = value;
	}
};
struct RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA  : public RuntimeArray
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
struct RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5  : public RuntimeArray
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_TisRuntimeObject_m7433F6940A7F720450FC31AEAD38A811EC2FAB32_gshared (RuntimeObject* ___0_value, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsByType_TisRuntimeObject_mB1F91C8A4722D89B3A122EE213E9746E9C67EE8D_gshared (int32_t ___0_findObjectsInactive, int32_t ___1_sortMode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnvironmentDepthManager_CreateProvider_m35224046022B072044C09BCE9A58DF60117F03B1 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
inline void Assert_IsNotNull_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8B9ED3F06F257815D476EC4C5023AB38A4387D83 (XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* ___0_value, String_t* ___1_message, const RuntimeMethod* method)
{
	((  void (*) (XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1*, String_t*, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_m7433F6940A7F720450FC31AEAD38A811EC2FAB32_gshared)(___0_value, ___1_message, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthProviderNotSupported__ctor_m36C707656C1F484EA4DF05DDA2435CEA343A9B4A (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnvironmentDepthManager_get_provider_mF8336B93FC202C31D6EED68BF640F81D8BEA42D4 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C_inline (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_SetOcclusionShaderKeywords_m5E0A4D11D6250C621884346B7E1A9CE72B443DD0 (int32_t ___0_mode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentDepthManager_get_IsSupported_m7DA10536D673EAAB71E7A1B798270D959EF5D52B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, float ___1_value, const RuntimeMethod* method) ;
inline EnvironmentDepthManagerU5BU5D_t9FFBFDE801A778A81860F0724CB4AB3ABB9EE8A7* Object_FindObjectsByType_TisEnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_mA0C000397774A6698A8B34F69170B3D349FABA0B (int32_t ___0_findObjectsInactive, int32_t ___1_sortMode, const RuntimeMethod* method)
{
	return ((  EnvironmentDepthManagerU5BU5D_t9FFBFDE801A778A81860F0724CB4AB3ABB9EE8A7* (*) (int32_t, int32_t, const RuntimeMethod*))Object_FindObjectsByType_TisRuntimeObject_mB1F91C8A4722D89B3A122EE213E9746E9C67EE8D_gshared)(___0_findObjectsInactive, ___1_sortMode, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_mD8176BDAA89607889C07ED77B53254AD7A8ADEB5 (int32_t ___0_expected, int32_t ___1_actual, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
inline void Assert_IsNotNull_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_mF5091B94BF13CA3EF3C5BE064D4473587E449094 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_value, String_t* ___1_message, const RuntimeMethod* method)
{
	((  void (*) (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*, String_t*, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_m7433F6940A7F720450FC31AEAD38A811EC2FAB32_gshared)(___0_value, ___1_message, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_onBeforeRender_mEE8925294C807AD08FA0FF35D4C663E098510394 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___0_permission, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_Log_m1CB09C58585D4E275084C2E6DCB56920334BBE3E (int32_t ___0_type, String_t* ___1_msg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnvironmentDepthManager_set_IsDepthAvailable_m77ABBDA4D0A9BFF1247642CE22A018F22ECDA762_inline (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalTexture_m6DAEF0F184187427D0B7EE64827BD95A482CC09C (int32_t ___0_nameID, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_onBeforeRender_m9F54448ED4059A26C9972E5C9ED2F6DCD58B4E24 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_ResetDepthTextureIfAvailable_m08C8274380CE0F0078AD7DBCA015C2E2807C1A32 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mask_Dispose_m81960258F0C281CD889E609332941E5351C85582 (Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 EnvironmentDepthManager_GetTrackingSpaceWorldToLocalMatrix_m7AFFBAC9F85B67622E0718EE85CCBE7329C2419B (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_TryFetchDepthTexture_m239D100D17BD2A00B9D16A9092CC1A13DE8820DA (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_trackingSpaceWorldToLocal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 EnvironmentDepthUtils_ComputeNdcToLinearDepthParameters_m4ED08BC1248832A75BCEE1B40D63F91EFA86F081 (float ___0_near, float ___1_far, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalVector_mDC5F45B008D44A2C8BF6D450CFE8B58B847C8190 (int32_t ___0_nameID, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 EnvironmentDepthUtils_CalculateReprojection_m5E3435EBDF139CCC6D1E006FF797311DF8ADF2E3 (DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 ___0_frameDesc, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalMatrixArray_m0232FB4129D259C4C70254E2ED65A8F19CA5D2AB (int32_t ___0_nameID, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___1_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
inline OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m1564DCD77DA806C8E84BE6808F00823EBCA88234 (const RuntimeMethod* method)
{
	return ((  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88 (String_t* ___0_keyword, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1 (String_t* ___0_keyword, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_m390B3F48332F46CE76AB45491A60ACDCCF521AAE (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) ;
inline void Action_1_Invoke_mAE3653F6A13461721D90CA13BB1DAFD3B0943C77_inline (Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C*, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* EnvironmentDepthManager_get_MaskMeshFilters_m97869EE18D51E20EE954B89C73E7DAE9EAA6DA4B_inline (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_inline (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mask__ctor_mA6803E08778A11BC080DA27E72FDB11DCB73418B (Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB* __this, int32_t ___0_width, int32_t ___1_height, float ___2_bias, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* Mask_ApplyMask_m9AC3E2E085375EF8C7376B867999E583AC1C380E (Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_depthTexture, List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* ___1_meshFilters, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_trackingSpaceWorldToLocal, DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8* ___3_frameDescriptors, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_PreprocessDepthTexture_m3446EA7F2AB6FEEE92A73344D2EC6DE9FBB02253 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_depthTexture, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_CacheCameraRig_m6D78ED0C4C3C425E94D10381A114EDBF9B9B21D8 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_mD60FB2D8D9560774F2E21BAC0A0061CB17904EA3 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_colorFormat, int32_t ___3_depthStencilFormat, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_volumeDepth_mD9B1E6BA4BE6B1741427B34A23B9D48BA9493633 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_depth_m3D8EF7C98634724B2DB8279387A81C4E19B5DA53 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 RenderTexture_get_colorBuffer_mE043AF01C1B2FB73BDC9C82D78528A367089CDE0 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 RenderTexture_get_depthBuffer_mBBDFA14B3AC2AE4796795E89A0BCA59D54B859D5 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_SetRenderTarget_m473C88BAC10F05E85918C154CB0426D05A1933D4 (RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F ___0_setup, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_pass, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawProceduralNow_m978B544E28AF7B83FD6FF4AC88C41C9BF66CDC62 (int32_t ___0_topology, int32_t ___1_vertexCount, int32_t ___2_instanceCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline (const RuntimeMethod* method) ;
inline void List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_enableInstancing_m84BA72A28BCFE94B50535BDE410A539A7CD7AF80 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthUtils_CalculateDepthCameraMatrices_mEAFC3CA26D1CB1BB8D595409083E1B6EB21E8F60 (DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 ___0_frameDesc, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_projMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___2_viewMatrix, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetIdentifier__ctor_m36F9914C200EE580EEDE97C4E8759D74879999D7 (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_tex, int32_t ___1_mipLevel, int32_t ___2_cubeFace, int32_t ___3_depthSlice, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetRenderTarget_m00472C42F4BAE11802652921705D554E158D926C (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___0_rt, int32_t ___1_colorLoadAction, int32_t ___2_colorStoreAction, int32_t ___3_depthLoadAction, int32_t ___4_depthStoreAction, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_ClearRenderTarget_mABBE498A16DCEADCAA8F5DB50073012F74D03F14 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, bool ___0_clearDepth, bool ___1_clearColor, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_backgroundColor, const RuntimeMethod* method) ;
inline Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064 List_1_GetEnumerator_m89A1D216F94797F1BFBDD647E317B8389D495E99 (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064 (*) (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_m50A5896C62B9ADBC7CDA569AED01965F732C0206 (Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Enumerator_get_Current_m0E9B975BD111000DA67E4735FCB6FE908FAB1FF9_inline (Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GL_GetGPUProjectionMatrix_m3B89D47134C77B9361DB3CDDFFDA276C1373DD2A (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_proj, bool ___1_renderIntoTexture, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetGlobalMatrixArray_m6CDB4B2AA044E16F3C8C23AC8B62282E84246E62 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, int32_t ___0_nameID, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___1_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawMeshInstancedProcedural_mC90B24E747BE838270B0EE65B21E7647964D31D5 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_mesh, int32_t ___1_submeshIndex, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___2_material, int32_t ___3_shaderPass, int32_t ___4_count, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___5_properties, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_mB3335A2F8C13E8560AD216C31C274039EAD6E5AF (Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_mA9F8461850AAB88F992E9C6FA6F24C2E050B83FD (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawProcedural_m32B556B3F1B4989708C7D0DD6F9D4FD2659E84CA (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_matrix, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_material, int32_t ___2_shaderPass, int32_t ___3_topology, int32_t ___4_vertexCount, int32_t ___5_instanceCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_ExecuteCommandBuffer_mE7D922583404AB08A25C1413A3EA9F6B0D2F16B9 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Dispose_m9A5E7A3CA09B3E3F9D199FC7C9E7B27CD9CFADF3 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline (float ___0_f, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) ;
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
// Method Definition Index: 88696
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3 UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_m75C3BB6863489AED0D5ED23A50FC2B78D83B0D4B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDEA4DBF25ED3A57BEF93477E21812F662B700F3C____A1EE658CBD08D8BD40F2A3C82B8B522A12F12ABB95E036DC95F85130EA7869FF_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDEA4DBF25ED3A57BEF93477E21812F662B700F3C____C65B6ECC6AB0A311BBC30DD56BA6E82E8655F66ED88EB2E6680A09897E131462_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)228));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDEA4DBF25ED3A57BEF93477E21812F662B700F3C____C65B6ECC6AB0A311BBC30DD56BA6E82E8655F66ED88EB2E6680A09897E131462_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)305));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDEA4DBF25ED3A57BEF93477E21812F662B700F3C____A1EE658CBD08D8BD40F2A3C82B8B522A12F12ABB95E036DC95F85130EA7869FF_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = 2;
		(&V_0)->___TotalTypes = 6;
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3 L_6 = V_0;
		V_1 = L_6;
		goto IL_005d;
	}

IL_005d:
	{
		MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 88697
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_m2B5E401043D3EF6EC0554C5045D2FA46F2A513E6 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t1ACF46C8B2EF733FA0223A82328A383F4AABE8DA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C void MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshal_pinvoke(const MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3& unmarshaled, MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshal_pinvoke_back(const MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshaled_pinvoke& marshaled, MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshal_pinvoke_cleanup(MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshal_com(const MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3& unmarshaled, MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshal_com_back(const MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshaled_com& marshaled, MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshal_com_cleanup(MonoScriptData_t3416D25F961CB51863D291A045234B8C52193BA3_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 88698
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* EnvironmentDepthManager_get_MaskMeshFilters_m97869EE18D51E20EE954B89C73E7DAE9EAA6DA4B (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:118>
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_0 = __this->___U3CMaskMeshFiltersU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88699
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_set_MaskMeshFilters_m30E69B49ABCFB2DE4F378B6319A06C64931CB3B4 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:118>
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_0 = ___0_value;
		__this->___U3CMaskMeshFiltersU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMaskMeshFiltersU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 88700
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_add_onDepthTextureUpdate_mCC9582C4F55323241A1575565EC0617BCC6C679B (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* V_0 = NULL;
	Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* V_1 = NULL;
	Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* V_2 = NULL;
	{
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_0 = __this->___onDepthTextureUpdate;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_2 = V_1;
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C*)Castclass((RuntimeObject*)L_4, Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C_il2cpp_TypeInfo_var));
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C** L_5 = (Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C**)(&__this->___onDepthTextureUpdate);
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_6 = V_2;
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_7 = V_1;
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_9 = V_0;
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C*)L_9) == ((RuntimeObject*)(Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 88701
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_remove_onDepthTextureUpdate_m8D6C3BC94892D884D472219031E7CD6295A150BC (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* V_0 = NULL;
	Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* V_1 = NULL;
	Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* V_2 = NULL;
	{
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_0 = __this->___onDepthTextureUpdate;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_2 = V_1;
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C*)Castclass((RuntimeObject*)L_4, Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C_il2cpp_TypeInfo_var));
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C** L_5 = (Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C**)(&__this->___onDepthTextureUpdate);
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_6 = V_2;
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_7 = V_1;
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_9 = V_0;
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C*)L_9) == ((RuntimeObject*)(Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 88702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnvironmentDepthManager_get_provider_mF8336B93FC202C31D6EED68BF640F81D8BEA42D4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:133>
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider;
		RuntimeObject* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
		G_B1_0 = L_1;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = EnvironmentDepthManager_CreateProvider_m35224046022B072044C09BCE9A58DF60117F03B1(NULL);
		RuntimeObject* L_3 = L_2;
		((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->____provider), (void*)L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return G_B2_0;
	}
}
// Method Definition Index: 88703
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnvironmentDepthManager_CreateProvider_m35224046022B072044C09BCE9A58DF60117F03B1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8B9ED3F06F257815D476EC4C5023AB38A4387D83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m5F2479AD2426A9D07E2B13A031D1F489CDB1A960_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DB6F79BC26F74A2048E9C638ECC919589DBFA22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D116CDEFB0E031F0B4DCBA373CD38BDA93F877);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* V_1 = NULL;
	XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	int32_t G_B4_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:139>
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_2;
		L_2 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		NullCheck(L_2);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_3;
		L_3 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_5;
		L_5 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		NullCheck(L_5);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_6;
		L_6 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_5, NULL);
		NullCheck(L_6);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_7;
		L_7 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B4_0 = ((int32_t)(L_8));
		goto IL_0038;
	}

IL_0037:
	{
		G_B4_0 = 0;
	}

IL_0038:
	{
		V_0 = (bool)G_B4_0;
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:141>
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_10;
		L_10 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		NullCheck(L_10);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_11;
		L_11 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_10, NULL);
		NullCheck(L_11);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_12;
		L_12 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_11, NULL);
		V_1 = L_12;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:142>
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_13 = V_1;
		NullCheck(L_13);
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_14;
		L_14 = GenericVirtualFuncInvoker0< XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* >::Invoke(XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m5F2479AD2426A9D07E2B13A031D1F489CDB1A960_RuntimeMethod_var, L_13);
		V_2 = L_14;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:143>
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_15 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8B9ED3F06F257815D476EC4C5023AB38A4387D83(L_15, _stringLiteral52D116CDEFB0E031F0B4DCBA373CD38BDA93F877, Assert_IsNotNull_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8B9ED3F06F257815D476EC4C5023AB38A4387D83_RuntimeMethod_var);
	}

IL_0061:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:162>
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral1DB6F79BC26F74A2048E9C638ECC919589DBFA22, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:163>
		DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* L_16 = (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46*)il2cpp_codegen_object_new(DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46_il2cpp_TypeInfo_var);
		DepthProviderNotSupported__ctor_m36C707656C1F484EA4DF05DDA2435CEA343A9B4A(L_16, NULL);
		V_3 = L_16;
		goto IL_0074;
	}

IL_0074:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:164>
		RuntimeObject* L_17 = V_3;
		return L_17;
	}
}
// Method Definition Index: 88704
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentDepthManager_get_IsSupported_m7DA10536D673EAAB71E7A1B798270D959EF5D52B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:169>
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = EnvironmentDepthManager_get_provider_mF8336B93FC202C31D6EED68BF640F81D8BEA42D4(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Method Definition Index: 88705
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:174>
		bool L_0 = __this->___U3CIsDepthAvailableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88706
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_set_IsDepthAvailable_m77ABBDA4D0A9BFF1247642CE22A018F22ECDA762 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:174>
		bool L_0 = ___0_value;
		__this->___U3CIsDepthAvailableU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88707
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnvironmentDepthManager_get_OcclusionShadersMode_mF0CA69250148479C4BC4EE85DFD948CBD9EE5D6C (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:182>
		int32_t L_0 = __this->____occlusionShadersMode;
		return L_0;
	}
}
// Method Definition Index: 88708
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_set_OcclusionShadersMode_m457114F6E041C154E08A45E7AB442CFBC673C9D5 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:185>
		int32_t L_0 = __this->____occlusionShadersMode;
		int32_t L_1 = ___0_value;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:186>
		goto IL_0028;
	}

IL_0010:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:187>
		int32_t L_3 = ___0_value;
		__this->____occlusionShadersMode = L_3;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:188>
		bool L_4;
		L_4 = EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C_inline(__this, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:189>
		int32_t L_6 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		EnvironmentDepthManager_SetOcclusionShaderKeywords_m5E0A4D11D6250C621884346B7E1A9CE72B443DD0(L_6, NULL);
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:190>
		return;
	}
}
// Method Definition Index: 88709
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentDepthManager_get_RemoveHands_mB1BAB22E297B860E48BD05BD6BD238D05C47FAFE (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:201>
		bool L_0 = __this->____removeHands;
		return L_0;
	}
}
// Method Definition Index: 88710
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_set_RemoveHands_mA9AB95B7CAE5D8DFBAD88EE83AAC3394E12B1595 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:204>
		bool L_0 = __this->____removeHands;
		bool L_1 = ___0_value;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:205>
		goto IL_0037;
	}

IL_0010:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:206>
		bool L_3 = ___0_value;
		__this->____removeHands = L_3;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:207>
		bool L_4;
		L_4 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = EnvironmentDepthManager_get_IsSupported_m7DA10536D673EAAB71E7A1B798270D959EF5D52B(NULL);
		G_B5_0 = ((int32_t)(L_5));
		goto IL_0027;
	}

IL_0026:
	{
		G_B5_0 = 0;
	}

IL_0027:
	{
		V_1 = (bool)G_B5_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:208>
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = EnvironmentDepthManager_get_provider_mF8336B93FC202C31D6EED68BF640F81D8BEA42D4(NULL);
		bool L_8 = ___0_value;
		NullCheck(L_7);
		InterfaceActionInvoker1< bool >::Invoke(1, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_7, L_8);
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:209>
		return;
	}
}
// Method Definition Index: 88711
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnvironmentDepthManager_get_MaskBias_mF60AB3A0C3FF3C25F208876F20F1FF0583DC2327 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:218>
		float L_0 = __this->____maskBias;
		return L_0;
	}
}
// Method Definition Index: 88712
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_set_MaskBias_m347F69D429D46FEAFB95EE2E1961A1DB483C0F7C (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:221>
		float L_0 = ___0_value;
		__this->____maskBias = L_0;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:222>
		Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB* L_1 = __this->____mask;
		V_0 = (bool)((!(((RuntimeObject*)(Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:224>
		Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB* L_3 = __this->____mask;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = L_3->____maskMaterial;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		int32_t L_5 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___MaskBiasID;
		float L_6 = ___0_value;
		NullCheck(L_4);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_4, L_5, L_6, NULL);
	}

IL_002e:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:226>
		return;
	}
}
// Method Definition Index: 88713
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_Awake_m0ADA6BE3CBB9FDEAA038174B84A47F6ADB3E781C (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_mF5091B94BF13CA3EF3C5BE064D4473587E449094_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsByType_TisEnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_mA0C000397774A6698A8B34F69170B3D349FABA0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B44297D60CF56CB725817F52F8E32E7D2D5047C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral751DF501B3658107DF0A0E5BBD583871E9D7F7E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC92F425FF6D1AA7661F3BC4F16E65014AB18038A);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:233>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:234>
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		EnvironmentDepthManagerU5BU5D_t9FFBFDE801A778A81860F0724CB4AB3ABB9EE8A7* L_0;
		L_0 = Object_FindObjectsByType_TisEnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_mA0C000397774A6698A8B34F69170B3D349FABA0B(1, 0, Object_FindObjectsByType_TisEnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_mA0C000397774A6698A8B34F69170B3D349FABA0B_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3B44297D60CF56CB725817F52F8E32E7D2D5047C, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_AreEqual_mD8176BDAA89607889C07ED77B53254AD7A8ADEB5(1, ((int32_t)(((RuntimeArray*)L_0)->max_length)), L_2, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:235>
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = EnvironmentDepthManager_get_IsSupported_m7DA10536D673EAAB71E7A1B798270D959EF5D52B(NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:248>
		goto IL_0053;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:252>
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_5;
		L_5 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteralC92F425FF6D1AA7661F3BC4F16E65014AB18038A, NULL);
		V_0 = L_5;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:253>
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_mF5091B94BF13CA3EF3C5BE064D4473587E449094(L_6, _stringLiteral751DF501B3658107DF0A0E5BBD583871E9D7F7E5, Assert_IsNotNull_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_mF5091B94BF13CA3EF3C5BE064D4473587E449094_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:254>
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_8, L_7, NULL);
		__this->____preprocessMaterial = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____preprocessMaterial), (void*)L_8);
	}

IL_0053:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:255>
		return;
	}
}
// Method Definition Index: 88714
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_OnEnable_m3425FD09A569E30BAAE5B148C8C46B75CD12654B (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_OnBeforeRender_m00D18902AA35B53448B64DCCE48FAB161B2BF078_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204F544BAFC4863B359F592A20972AD51732AE93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FC59D8986B846D2BF95AF308D4A1BDF1803347C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC72278CAD213B4C576D5C76D1DBEE59F598828C2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:259>
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_0, __this, (intptr_t)((void*)EnvironmentDepthManager_OnBeforeRender_m00D18902AA35B53448B64DCCE48FAB161B2BF078_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		Application_add_onBeforeRender_mEE8925294C807AD08FA0FF35D4C663E098510394(L_0, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:260>
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = EnvironmentDepthManager_get_IsSupported_m7DA10536D673EAAB71E7A1B798270D959EF5D52B(NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:262>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:263>
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral204F544BAFC4863B359F592A20972AD51732AE93, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:264>
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:265>
		goto IL_006f;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:268>
		bool L_3;
		L_3 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral9FC59D8986B846D2BF95AF308D4A1BDF1803347C, NULL);
		__this->____hasPermission = L_3;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:269>
		bool L_4 = __this->____hasPermission;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:270>
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = EnvironmentDepthManager_get_provider_mF8336B93FC202C31D6EED68BF640F81D8BEA42D4(NULL);
		bool L_7 = __this->____removeHands;
		NullCheck(L_6);
		InterfaceActionInvoker2< bool, bool >::Invoke(2, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_6, (bool)1, L_7);
		goto IL_006f;
	}

IL_0063:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:271>
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		EnvironmentDepthManager_Log_m1CB09C58585D4E275084C2E6DCB56920334BBE3E(2, _stringLiteralC72278CAD213B4C576D5C76D1DBEE59F598828C2, NULL);
	}

IL_006f:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:272>
		return;
	}
}
// Method Definition Index: 88715
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_ResetDepthTextureIfAvailable_m08C8274380CE0F0078AD7DBCA015C2E2807C1A32 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:276>
		bool L_0;
		L_0 = EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:278>
		EnvironmentDepthManager_set_IsDepthAvailable_m77ABBDA4D0A9BFF1247642CE22A018F22ECDA762_inline(__this, (bool)0, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:279>
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		int32_t L_2 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___DepthTextureID;
		Shader_SetGlobalTexture_m6DAEF0F184187427D0B7EE64827BD95A482CC09C(L_2, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:280>
		int32_t L_3 = __this->____occlusionShadersMode;
		V_1 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:281>
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		EnvironmentDepthManager_SetOcclusionShaderKeywords_m5E0A4D11D6250C621884346B7E1A9CE72B443DD0(0, NULL);
	}

IL_0034:
	{
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:283>
		return;
	}
}
// Method Definition Index: 88716
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_OnDisable_mF0DE61B956A3C760549EF7AC61F828F6C2ACAFB5 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_OnBeforeRender_m00D18902AA35B53448B64DCCE48FAB161B2BF078_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:287>
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_0, __this, (intptr_t)((void*)EnvironmentDepthManager_OnBeforeRender_m00D18902AA35B53448B64DCCE48FAB161B2BF078_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		Application_remove_onBeforeRender_m9F54448ED4059A26C9972E5C9ED2F6DCD58B4E24(L_0, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:288>
		EnvironmentDepthManager_ResetDepthTextureIfAvailable_m08C8274380CE0F0078AD7DBCA015C2E2807C1A32(__this, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:289>
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = EnvironmentDepthManager_get_IsSupported_m7DA10536D673EAAB71E7A1B798270D959EF5D52B(NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		bool L_2 = __this->____hasPermission;
		G_B3_0 = ((int32_t)(L_2));
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:290>
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = EnvironmentDepthManager_get_provider_mF8336B93FC202C31D6EED68BF640F81D8BEA42D4(NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< bool, bool >::Invoke(2, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_4, (bool)0, (bool)0);
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:291>
		return;
	}
}
// Method Definition Index: 88717
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_OnDestroy_m676509BBC91DDF17F034F3867448E7E3F3D56E9C (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB* G_B6_0 = NULL;
	Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB* G_B5_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:295>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____preprocessMaterial;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:296>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->____preprocessMaterial;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_001d:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:297>
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = __this->____preprocessTexture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:298>
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = __this->____preprocessTexture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
	}

IL_0039:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:299>
		Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB* L_8 = __this->____mask;
		Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB* L_9 = L_8;
		if (L_9)
		{
			G_B6_0 = L_9;
			goto IL_0045;
		}
		G_B5_0 = L_9;
	}
	{
		goto IL_004b;
	}

IL_0045:
	{
		NullCheck(G_B6_0);
		Mask_Dispose_m81960258F0C281CD889E609332941E5351C85582(G_B6_0, NULL);
	}

IL_004b:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:300>
		return;
	}
}
// Method Definition Index: 88718
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_OnBeforeRender_m00D18902AA35B53448B64DCCE48FAB161B2BF078 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FC59D8986B846D2BF95AF308D4A1BDF1803347C);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:304>
		bool L_0 = __this->____hasPermission;
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:306>
		bool L_2;
		L_2 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral9FC59D8986B846D2BF95AF308D4A1BDF1803347C, NULL);
		V_4 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:307>
		goto IL_00db;
	}

IL_0027:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:308>
		__this->____hasPermission = (bool)1;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:309>
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = EnvironmentDepthManager_get_provider_mF8336B93FC202C31D6EED68BF640F81D8BEA42D4(NULL);
		bool L_5 = __this->____removeHands;
		NullCheck(L_4);
		InterfaceActionInvoker2< bool, bool >::Invoke(2, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_4, (bool)1, L_5);
	}

IL_0041:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:312>
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
		L_6 = EnvironmentDepthManager_GetTrackingSpaceWorldToLocalMatrix_m7AFFBAC9F85B67622E0718EE85CCBE7329C2419B(__this, NULL);
		V_0 = L_6;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:313>
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = V_0;
		EnvironmentDepthManager_TryFetchDepthTexture_m239D100D17BD2A00B9D16A9092CC1A13DE8820DA(__this, L_7, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:314>
		bool L_8;
		L_8 = EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C_inline(__this, NULL);
		V_5 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:316>
		goto IL_00db;
	}

IL_0062:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:321>
		DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8* L_10 = __this->___frameDescriptors;
		NullCheck(L_10);
		int32_t L_11 = 0;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = L_12;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:322>
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_13 = V_1;
		float L_14 = L_13.___nearZ;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_15 = V_1;
		float L_16 = L_15.___farZ;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17;
		L_17 = EnvironmentDepthUtils_ComputeNdcToLinearDepthParameters_m4ED08BC1248832A75BCEE1B40D63F91EFA86F081(L_14, L_16, NULL);
		V_2 = L_17;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:323>
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		int32_t L_18 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___ZBufferParamsID;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = V_2;
		Shader_SetGlobalVector_mDC5F45B008D44A2C8BF6D450CFE8B58B847C8190(L_18, L_19, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:325>
		V_6 = 0;
		goto IL_00bf;
	}

IL_0092:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:327>
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_20 = __this->____reprojectionMatrices;
		int32_t L_21 = V_6;
		DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8* L_22 = __this->___frameDescriptors;
		int32_t L_23 = V_6;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26;
		L_26 = EnvironmentDepthUtils_CalculateReprojection_m5E3435EBDF139CCC6D1E006FF797311DF8ADF2E3(L_25, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_27 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_28;
		L_28 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_26, L_27, NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_28);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:325>
		int32_t L_29 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00bf:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:325>
		int32_t L_30 = V_6;
		V_7 = (bool)((((int32_t)L_30) < ((int32_t)2))? 1 : 0);
		bool L_31 = V_7;
		if (L_31)
		{
			goto IL_0092;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:329>
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		int32_t L_32 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___ReprojectionMatricesID;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_33 = __this->____reprojectionMatrices;
		Shader_SetGlobalMatrixArray_m0232FB4129D259C4C70254E2ED65A8F19CA5D2AB(L_32, L_33, NULL);
	}

IL_00db:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:330>
		return;
	}
}
// Method Definition Index: 88719
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_CacheCameraRig_m6D78ED0C4C3C425E94D10381A114EDBF9B9B21D8 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m1564DCD77DA806C8E84BE6808F00823EBCA88234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:339>
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_0 = __this->____cameraRig;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:341>
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_3;
		L_3 = Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m1564DCD77DA806C8E84BE6808F00823EBCA88234(Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m1564DCD77DA806C8E84BE6808F00823EBCA88234_RuntimeMethod_var);
		__this->____cameraRig = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cameraRig), (void*)L_3);
	}

IL_001c:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:343>
		return;
	}
}
// Method Definition Index: 88720
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_SetOcclusionShaderKeywords_m5E0A4D11D6250C621884346B7E1A9CE72B443DD0 (int32_t ___0_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OcclusionShadersMode_t5E05D042A31C02AED3DAE94D664CB5FB98B24A9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DBA9D771CF21BD0FF172F0B4156503587FD5B7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E8D505AB96888EB0230DF995112A81F0791818);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5C8165CA10C005224204E77DF9D14B920A64297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF811479F06651C8AFA71880841D3E3465A1FE575);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:347>
		int32_t L_0 = ___0_mode;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0049;
			}
			case 1:
			{
				goto IL_0019;
			}
			case 2:
			{
				goto IL_0031;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:350>
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteralF811479F06651C8AFA71880841D3E3465A1FE575, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:351>
		Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1(_stringLiteral1DBA9D771CF21BD0FF172F0B4156503587FD5B7F, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:352>
		goto IL_007e;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:354>
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteral1DBA9D771CF21BD0FF172F0B4156503587FD5B7F, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:355>
		Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1(_stringLiteralF811479F06651C8AFA71880841D3E3465A1FE575, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:356>
		goto IL_007e;
	}

IL_0049:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:358>
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteral1DBA9D771CF21BD0FF172F0B4156503587FD5B7F, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:359>
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteralF811479F06651C8AFA71880841D3E3465A1FE575, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:360>
		goto IL_007e;
	}

IL_0061:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:362>
		int32_t L_3 = ___0_mode;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(OcclusionShadersMode_t5E05D042A31C02AED3DAE94D664CB5FB98B24A9C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA5E8D505AB96888EB0230DF995112A81F0791818, _stringLiteralF5C8165CA10C005224204E77DF9D14B920A64297, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:363>
		goto IL_007e;
	}

IL_007e:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:365>
		return;
	}
}
// Method Definition Index: 88721
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_TryFetchDepthTexture_m239D100D17BD2A00B9D16A9092CC1A13DE8820DA (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_trackingSpaceWorldToLocal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF059B746A59FE38D002C266467591FEA7D7F42AD);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* G_B6_0 = NULL;
	Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* G_B5_0 = NULL;
	int32_t G_B10_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:369>
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = EnvironmentDepthManager_get_provider_mF8336B93FC202C31D6EED68BF640F81D8BEA42D4(NULL);
		DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8* L_1 = __this->___frameDescriptors;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27**, DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8* >::Invoke(3, IDepthProvider_t82F515402325FE9773830CB67FB735BEABEEBBDF_il2cpp_TypeInfo_var, L_0, (&V_0), L_1);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:371>
		goto IL_0111;
	}

IL_0020:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:373>
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:375>
		EnvironmentDepthManager_ResetDepthTextureIfAvailable_m08C8274380CE0F0078AD7DBCA015C2E2807C1A32(__this, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:376>
		goto IL_0111;
	}

IL_0038:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:379>
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_m390B3F48332F46CE76AB45491A60ACDCCF521AAE(L_8, _stringLiteralF059B746A59FE38D002C266467591FEA7D7F42AD, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:380>
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_9 = __this->___onDepthTextureUpdate;
		Action_1_t2CB563D9C7F370A8760E0F8B6316E01325F7651C* L_10 = L_9;
		if (L_10)
		{
			G_B6_0 = L_10;
			goto IL_0055;
		}
		G_B5_0 = L_10;
	}
	{
		goto IL_005c;
	}

IL_0055:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = V_0;
		NullCheck(G_B6_0);
		Action_1_Invoke_mAE3653F6A13461721D90CA13BB1DAFD3B0943C77_inline(G_B6_0, L_11, NULL);
	}

IL_005c:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:381>
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_12;
		L_12 = EnvironmentDepthManager_get_MaskMeshFilters_m97869EE18D51E20EE954B89C73E7DAE9EAA6DA4B_inline(__this, NULL);
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_13;
		L_13 = EnvironmentDepthManager_get_MaskMeshFilters_m97869EE18D51E20EE954B89C73E7DAE9EAA6DA4B_inline(__this, NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_inline(L_13, List_1_get_Count_mEA72181DA04067D7475922C8DBA014128689F30B_RuntimeMethod_var);
		G_B10_0 = ((((int32_t)L_14) > ((int32_t)0))? 1 : 0);
		goto IL_0075;
	}

IL_0074:
	{
		G_B10_0 = 0;
	}

IL_0075:
	{
		V_3 = (bool)G_B10_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00ba;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:383>
		Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB* L_16 = __this->____mask;
		if (L_16)
		{
			goto IL_009f;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(5, L_17);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(7, L_19);
		float L_21 = __this->____maskBias;
		Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB* L_22 = (Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB*)il2cpp_codegen_object_new(Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB_il2cpp_TypeInfo_var);
		Mask__ctor_mA6803E08778A11BC080DA27E72FDB11DCB73418B(L_22, L_18, L_20, L_21, NULL);
		__this->____mask = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mask), (void*)L_22);
	}

IL_009f:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:384>
		Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB* L_23 = __this->____mask;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24 = V_0;
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_25;
		L_25 = EnvironmentDepthManager_get_MaskMeshFilters_m97869EE18D51E20EE954B89C73E7DAE9EAA6DA4B_inline(__this, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26 = ___0_trackingSpaceWorldToLocal;
		DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8* L_27 = __this->___frameDescriptors;
		NullCheck(L_23);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_28;
		L_28 = Mask_ApplyMask_m9AC3E2E085375EF8C7376B867999E583AC1C380E(L_23, L_24, L_25, L_26, L_27, NULL);
		V_0 = L_28;
	}

IL_00ba:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:386>
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		int32_t L_29 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___DepthTextureID;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_30 = V_0;
		Shader_SetGlobalTexture_m6DAEF0F184187427D0B7EE64827BD95A482CC09C(L_29, L_30, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:387>
		bool L_31;
		L_31 = EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C_inline(__this, NULL);
		V_4 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_4;
		if (!L_32)
		{
			goto IL_00fa;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:389>
		EnvironmentDepthManager_set_IsDepthAvailable_m77ABBDA4D0A9BFF1247642CE22A018F22ECDA762_inline(__this, (bool)1, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:390>
		int32_t L_33 = __this->____occlusionShadersMode;
		V_5 = (bool)((!(((uint32_t)L_33) <= ((uint32_t)0)))? 1 : 0);
		bool L_34 = V_5;
		if (!L_34)
		{
			goto IL_00f9;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:391>
		int32_t L_35 = __this->____occlusionShadersMode;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		EnvironmentDepthManager_SetOcclusionShaderKeywords_m5E0A4D11D6250C621884346B7E1A9CE72B443DD0(L_35, NULL);
	}

IL_00f9:
	{
	}

IL_00fa:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:394>
		int32_t L_36 = __this->____occlusionShadersMode;
		V_6 = (bool)((((int32_t)L_36) == ((int32_t)2))? 1 : 0);
		bool L_37 = V_6;
		if (!L_37)
		{
			goto IL_0111;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:395>
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_38 = V_0;
		EnvironmentDepthManager_PreprocessDepthTexture_m3446EA7F2AB6FEEE92A73344D2EC6DE9FBB02253(__this, L_38, NULL);
	}

IL_0111:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:396>
		return;
	}
}
// Method Definition Index: 88722
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 EnvironmentDepthManager_GetTrackingSpaceWorldToLocalMatrix_m7AFFBAC9F85B67622E0718EE85CCBE7329C2419B (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:400>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___CustomTrackingSpace;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:402>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___CustomTrackingSpace;
		NullCheck(L_3);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_3, NULL);
		V_1 = L_4;
		goto IL_0065;
	}

IL_0020:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:404>
		bool L_5 = __this->____isCameraRigCached;
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:406>
		__this->____isCameraRigCached = (bool)1;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:407>
		EnvironmentDepthManager_CacheCameraRig_m6D78ED0C4C3C425E94D10381A114EDBF9B9B21D8(__this, NULL);
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:409>
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_7 = __this->____cameraRig;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_8)
		{
			goto IL_0052;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		G_B7_0 = L_9;
		goto IL_0062;
	}

IL_0052:
	{
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_10 = __this->____cameraRig;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline(L_10, NULL);
		NullCheck(L_11);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12;
		L_12 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_11, NULL);
		G_B7_0 = L_12;
	}

IL_0062:
	{
		V_1 = G_B7_0;
		goto IL_0065;
	}

IL_0065:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:410>
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 88723
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_PreprocessDepthTexture_m3446EA7F2AB6FEEE92A73344D2EC6DE9FBB02253 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_depthTexture, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4F5A00EE4168A8128DDBCD07A1218D7BFEA7A37);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:492>
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->____preprocessTexture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00f7;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:494>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:495>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:496>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:497>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:498>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:499>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:500>
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___0_depthTexture;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(5, L_3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___0_depthTexture;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(7, L_5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		RenderTexture__ctor_mD60FB2D8D9560774F2E21BAC0A0061CB17904EA3(L_7, L_4, L_6, ((int32_t)48), 0, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = L_7;
		NullCheck(L_8);
		VirtualActionInvoker1< int32_t >::Invoke(10, L_8, 5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = L_8;
		NullCheck(L_9);
		RenderTexture_set_volumeDepth_mD9B1E6BA4BE6B1741427B34A23B9D48BA9493633(L_9, 2, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = L_9;
		NullCheck(L_10);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_10, _stringLiteralD4F5A00EE4168A8128DDBCD07A1218D7BFEA7A37, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = L_10;
		NullCheck(L_11);
		RenderTexture_set_depth_m3D8EF7C98634724B2DB8279387A81C4E19B5DA53(L_11, 0, NULL);
		__this->____preprocessTexture = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____preprocessTexture), (void*)L_11);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:501>
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = __this->____preprocessTexture;
		NullCheck(L_12);
		bool L_13;
		L_13 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_12, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:502>
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		int32_t L_14 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___PreprocessedEnvironmentDepthTexture;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = __this->____preprocessTexture;
		Shader_SetGlobalTexture_m6DAEF0F184187427D0B7EE64827BD95A482CC09C(L_14, L_15, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:504>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:505>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:506>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:507>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:508>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:509>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:510>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:511>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:512>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:513>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:514>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:515>
		il2cpp_codegen_initobj((&V_1), sizeof(RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F));
		RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5* L_16 = (RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5*)(RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5*)SZArrayNew(RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5_il2cpp_TypeInfo_var, (uint32_t)1);
		RenderBufferU5BU5D_t243AD088CC8449166000DC2F429023524FD855F5* L_17 = L_16;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = __this->____preprocessTexture;
		NullCheck(L_18);
		RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 L_19;
		L_19 = RenderTexture_get_colorBuffer_mE043AF01C1B2FB73BDC9C82D78528A367089CDE0(L_18, NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551)L_19);
		(&V_1)->___color = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___color), (void*)L_17);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = __this->____preprocessTexture;
		NullCheck(L_20);
		RenderBuffer_tBE7B342979EF2FA36E24C8A7F9242212F5B89551 L_21;
		L_21 = RenderTexture_get_depthBuffer_mBBDFA14B3AC2AE4796795E89A0BCA59D54B859D5(L_20, NULL);
		(&V_1)->___depth = L_21;
		(&V_1)->___depthSlice = (-1);
		RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA* L_22 = (RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA*)(RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA*)SZArrayNew(RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA_il2cpp_TypeInfo_var, (uint32_t)1);
		RenderBufferLoadActionU5BU5D_t49A752C09896D99A1F5734A4AFDE4588AB2883BA* L_23 = L_22;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)2);
		(&V_1)->___colorLoad = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___colorLoad), (void*)L_23);
		RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5* L_24 = (RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5*)(RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5*)SZArrayNew(RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5_il2cpp_TypeInfo_var, (uint32_t)1);
		(&V_1)->___colorStore = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___colorStore), (void*)L_24);
		(&V_1)->___depthLoad = 2;
		(&V_1)->___depthStore = 3;
		(&V_1)->___mipLevel = 0;
		(&V_1)->___cubemapFace = (-1);
		RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F L_25 = V_1;
		__this->____preprocessRenderTargetSetup = L_25;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____preprocessRenderTargetSetup))->___color), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____preprocessRenderTargetSetup))->___colorLoad), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____preprocessRenderTargetSetup))->___colorStore), (void*)NULL);
		#endif
	}

IL_00f7:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:518>
		RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F L_26 = __this->____preprocessRenderTargetSetup;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m473C88BAC10F05E85918C154CB0426D05A1933D4(L_26, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:519>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->____preprocessMaterial;
		NullCheck(L_27);
		bool L_28;
		L_28 = Material_SetPass_mBB03542DFF4FAEADFCED332009F9D61B6DED75FE(L_27, 0, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:520>
		Graphics_DrawProceduralNow_m978B544E28AF7B83FD6FF4AC88C41C9BF66CDC62(0, 3, 2, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:521>
		return;
	}
}
// Method Definition Index: 88724
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager_Log_m1CB09C58585D4E275084C2E6DCB56920334BBE3E (int32_t ___0_type, String_t* ___1_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:524>
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		int32_t L_1 = ___0_type;
		String_t* L_2 = ___1_msg;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(3, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 88725
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager__ctor_m21A2BC6430D9332470D4AA443155413563A20F52 (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:108>
		__this->____occlusionShadersMode = 2;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:118>
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_0 = (List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930*)il2cpp_codegen_object_new(List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930_il2cpp_TypeInfo_var);
		List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C(L_0, List_1__ctor_mE87D19792408B0284962521E4F189E704CEE1A8C_RuntimeMethod_var);
		__this->___U3CMaskMeshFiltersU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMaskMeshFiltersU3Ek__BackingField), (void*)L_0);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:128>
		DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8* L_1 = (DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8*)(DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8*)SZArrayNew(DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___frameDescriptors = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frameDescriptors), (void*)L_1);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:130>
		__this->____maskBias = (0.100000001f);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:229>
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_2 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____reprojectionMatrices = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reprojectionMatrices), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// Method Definition Index: 88726
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthManager__cctor_mB5AE399ADCD05E59E531AED3129B2926C4A3B153 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06E02AAD278C470CA00827078CCD2F85C887CBD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1636A4BA9AE4E4042E374DBDD1627CE3A68CF0CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F224B2AEF4A637D33372AD5CB608CD3CE8013AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E994D0100257BF66B5AC25A19EA6D5296A523A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB29005781C891F9AA15F6FF036E1C296DF7D185D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB2ED7F20376FBEB6F53E15F9D67658D0E6B8478);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE36140A6B900DD92158BBA056C0056D6031D25D);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:99>
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralDE36140A6B900DD92158BBA056C0056D6031D25D, NULL);
		((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___DepthTextureID = L_0;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:100>
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral06E02AAD278C470CA00827078CCD2F85C887CBD0, NULL);
		((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___ReprojectionMatricesID = L_1;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:101>
		int32_t L_2;
		L_2 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral5F224B2AEF4A637D33372AD5CB608CD3CE8013AF, NULL);
		((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___ZBufferParamsID = L_2;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:102>
		int32_t L_3;
		L_3 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralB29005781C891F9AA15F6FF036E1C296DF7D185D, NULL);
		((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___PreprocessedEnvironmentDepthTexture = L_3;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:104>
		int32_t L_4;
		L_4 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral8E994D0100257BF66B5AC25A19EA6D5296A523A0, NULL);
		((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___MvpMatricesID = L_4;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:105>
		int32_t L_5;
		L_5 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralBB2ED7F20376FBEB6F53E15F9D67658D0E6B8478, NULL);
		((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___MaskTextureID = L_5;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:106>
		int32_t L_6;
		L_6 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral1636A4BA9AE4E4042E374DBDD1627CE3A68CF0CE, NULL);
		((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___MaskBiasID = L_6;
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
// Method Definition Index: 88727
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mask__ctor_mA6803E08778A11BC080DA27E72FDB11DCB73418B (Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB* __this, int32_t ___0_width, int32_t ___1_height, float ___2_bias, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_mF5091B94BF13CA3EF3C5BE064D4473587E449094_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral523BF4488708BE2234C4B9012CE7985904607C1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9617EED2DB44742A945CC34B2AEDAD85CF5829E);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:418>
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____mvpMatrices = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mvpMatrices), (void*)L_0);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:420>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:423>
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1;
		L_1 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral523BF4488708BE2234C4B9012CE7985904607C1C, NULL);
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:424>
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_mF5091B94BF13CA3EF3C5BE064D4473587E449094(L_2, _stringLiteralB9617EED2DB44742A945CC34B2AEDAD85CF5829E, Assert_IsNotNull_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_mF5091B94BF13CA3EF3C5BE064D4473587E449094_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:425>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:426>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:427>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:428>
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_4, L_3, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = L_4;
		NullCheck(L_5);
		Material_set_enableInstancing_m84BA72A28BCFE94B50535BDE410A539A7CD7AF80(L_5, (bool)1, NULL);
		__this->____maskMaterial = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____maskMaterial), (void*)L_5);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:429>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->____maskMaterial;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		int32_t L_7 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___MaskBiasID;
		float L_8 = ___2_bias;
		NullCheck(L_6);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_6, L_7, L_8, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:430>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:431>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:432>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:433>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:434>
		int32_t L_9 = ___0_width;
		int32_t L_10 = ___1_height;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		RenderTexture__ctor_mD60FB2D8D9560774F2E21BAC0A0061CB17904EA3(L_11, L_9, L_10, ((int32_t)21), ((int32_t)90), NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = L_11;
		NullCheck(L_12);
		VirtualActionInvoker1< int32_t >::Invoke(10, L_12, 5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = L_12;
		NullCheck(L_13);
		RenderTexture_set_volumeDepth_mD9B1E6BA4BE6B1741427B34A23B9D48BA9493633(L_13, 2, NULL);
		__this->____maskDepthRt = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____maskDepthRt), (void*)L_13);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:435>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:436>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:437>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:438>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:439>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:440>
		int32_t L_14 = ___0_width;
		int32_t L_15 = ___1_height;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		RenderTexture__ctor_mD60FB2D8D9560774F2E21BAC0A0061CB17904EA3(L_16, L_14, L_15, ((int32_t)21), 0, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = L_16;
		NullCheck(L_17);
		VirtualActionInvoker1< int32_t >::Invoke(10, L_17, 5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = L_17;
		NullCheck(L_18);
		RenderTexture_set_volumeDepth_mD9B1E6BA4BE6B1741427B34A23B9D48BA9493633(L_18, 2, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19 = L_18;
		NullCheck(L_19);
		RenderTexture_set_depth_m3D8EF7C98634724B2DB8279387A81C4E19B5DA53(L_19, 0, NULL);
		__this->____maskedDepthTexture = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____maskedDepthTexture), (void*)L_19);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:441>
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_20 = (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)il2cpp_codegen_object_new(CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4(L_20, NULL);
		__this->____maskCommandBuffer = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____maskCommandBuffer), (void*)L_20);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:442>
		return;
	}
}
// Method Definition Index: 88728
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* Mask_ApplyMask_m9AC3E2E085375EF8C7376B867999E583AC1C380E (Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_depthTexture, List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* ___1_meshFilters, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_trackingSpaceWorldToLocal, DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8* ___3_frameDescriptors, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m50A5896C62B9ADBC7CDA569AED01965F732C0206_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB3335A2F8C13E8560AD216C31C274039EAD6E5AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0E9B975BD111000DA67E4735FCB6FE908FAB1FF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m89A1D216F94797F1BFBDD647E317B8389D495E99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFACA7D75FD5104282E5CBBE3280D22C37DA9575F);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064 V_4;
	memset((&V_4), 0, sizeof(V_4));
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_5 = NULL;
	bool V_6 = false;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_7 = NULL;
	int32_t G_B5_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:447>
		DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8* L_0 = ___3_frameDescriptors;
		NullCheck(L_0);
		int32_t L_1 = 0;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		EnvironmentDepthUtils_CalculateDepthCameraMatrices_mEAFC3CA26D1CB1BB8D595409083E1B6EB21E8F60(L_2, (&V_0), (&V_1), NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:448>
		DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8* L_3 = ___3_frameDescriptors;
		NullCheck(L_3);
		int32_t L_4 = 1;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		EnvironmentDepthUtils_CalculateDepthCameraMatrices_mEAFC3CA26D1CB1BB8D595409083E1B6EB21E8F60(L_5, (&V_2), (&V_3), NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:451>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:452>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:453>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:454>
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_6 = __this->____maskCommandBuffer;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = __this->____maskDepthRt;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_8;
		memset((&L_8), 0, sizeof(L_8));
		RenderTargetIdentifier__ctor_m36F9914C200EE580EEDE97C4E8759D74879999D7((&L_8), L_7, 0, (-1), (-1), NULL);
		NullCheck(L_6);
		CommandBuffer_SetRenderTarget_m00472C42F4BAE11802652921705D554E158D926C(L_6, L_8, 2, 0, 2, 3, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:455>
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_9 = __this->____maskCommandBuffer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_9);
		CommandBuffer_ClearRenderTarget_mABBE498A16DCEADCAA8F5DB50073012F74D03F14(L_9, (bool)1, (bool)1, L_10, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:456>
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_11 = ___1_meshFilters;
		NullCheck(L_11);
		Enumerator_tB4DC20E86A32140F83A82C593E2E78521CE29064 L_12;
		L_12 = List_1_GetEnumerator_m89A1D216F94797F1BFBDD647E317B8389D495E99(L_11, List_1_GetEnumerator_m89A1D216F94797F1BFBDD647E317B8389D495E99_RuntimeMethod_var);
		V_4 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0142:
			{
				Enumerator_Dispose_m50A5896C62B9ADBC7CDA569AED01965F732C0206((&V_4), Enumerator_Dispose_m50A5896C62B9ADBC7CDA569AED01965F732C0206_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0134_1;
			}

IL_0064_1:
			{
				//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:456>
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_13;
				L_13 = Enumerator_get_Current_m0E9B975BD111000DA67E4735FCB6FE908FAB1FF9_inline((&V_4), Enumerator_get_Current_m0E9B975BD111000DA67E4735FCB6FE908FAB1FF9_RuntimeMethod_var);
				V_5 = L_13;
				//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:458>
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_14 = V_5;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_15;
				L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_15)
				{
					goto IL_0087_1;
				}
			}
			{
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_16 = V_5;
				NullCheck(L_16);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_17;
				L_17 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				G_B5_0 = ((int32_t)(L_18));
				goto IL_0088_1;
			}

IL_0087_1:
			{
				G_B5_0 = 1;
			}

IL_0088_1:
			{
				V_6 = (bool)G_B5_0;
				bool L_19 = V_6;
				if (!L_19)
				{
					goto IL_009f_1;
				}
			}
			{
				//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:460>
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFACA7D75FD5104282E5CBBE3280D22C37DA9575F, NULL);
				//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:461>
				goto IL_0134_1;
			}

IL_009f_1:
			{
				//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:463>
				Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_20 = __this->____mvpMatrices;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_21 = V_0;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_22;
				L_22 = GL_GetGPUProjectionMatrix_m3B89D47134C77B9361DB3CDDFFDA276C1373DD2A(L_21, (bool)1, NULL);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_23 = V_1;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_24;
				L_24 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_22, L_23, NULL);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_25 = ___2_trackingSpaceWorldToLocal;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26;
				L_26 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_24, L_25, NULL);
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_27 = V_5;
				NullCheck(L_27);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
				L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_27, NULL);
				NullCheck(L_28);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_29;
				L_29 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_28, NULL);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_30;
				L_30 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_26, L_29, NULL);
				NullCheck(L_20);
				(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_30);
				//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:464>
				Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_31 = __this->____mvpMatrices;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_32 = V_2;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_33;
				L_33 = GL_GetGPUProjectionMatrix_m3B89D47134C77B9361DB3CDDFFDA276C1373DD2A(L_32, (bool)1, NULL);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_34 = V_3;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_35;
				L_35 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_33, L_34, NULL);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_36 = ___2_trackingSpaceWorldToLocal;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_37;
				L_37 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_35, L_36, NULL);
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_38 = V_5;
				NullCheck(L_38);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
				L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_38, NULL);
				NullCheck(L_39);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_40;
				L_40 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_39, NULL);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_41;
				L_41 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_37, L_40, NULL);
				NullCheck(L_31);
				(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_41);
				//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:465>
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_42 = __this->____maskCommandBuffer;
				il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
				int32_t L_43 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___MvpMatricesID;
				Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_44 = __this->____mvpMatrices;
				NullCheck(L_42);
				CommandBuffer_SetGlobalMatrixArray_m6CDB4B2AA044E16F3C8C23AC8B62282E84246E62(L_42, L_43, L_44, NULL);
				//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:466>
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_45 = __this->____maskCommandBuffer;
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_46 = V_5;
				NullCheck(L_46);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_47;
				L_47 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_46, NULL);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_48 = __this->____maskMaterial;
				NullCheck(L_45);
				CommandBuffer_DrawMeshInstancedProcedural_mC90B24E747BE838270B0EE65B21E7647964D31D5(L_45, L_47, 0, L_48, 0, 2, (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)NULL, NULL);
			}

IL_0134_1:
			{
				//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:456>
				bool L_49;
				L_49 = Enumerator_MoveNext_mB3335A2F8C13E8560AD216C31C274039EAD6E5AF((&V_4), Enumerator_MoveNext_mB3335A2F8C13E8560AD216C31C274039EAD6E5AF_RuntimeMethod_var);
				if (L_49)
				{
					goto IL_0064_1;
				}
			}
			{
				goto IL_0151;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0151:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:470>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50 = __this->____maskMaterial;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var);
		int32_t L_51 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___DepthTextureID;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_52 = ___0_depthTexture;
		NullCheck(L_50);
		Material_SetTexture_mA9F8461850AAB88F992E9C6FA6F24C2E050B83FD(L_50, L_51, L_52, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:471>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_53 = __this->____maskMaterial;
		int32_t L_54 = ((EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631_il2cpp_TypeInfo_var))->___MaskTextureID;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = __this->____maskDepthRt;
		NullCheck(L_53);
		Material_SetTexture_mA9F8461850AAB88F992E9C6FA6F24C2E050B83FD(L_53, L_54, L_55, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:472>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:473>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:474>
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_56 = __this->____maskCommandBuffer;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_57 = __this->____maskedDepthTexture;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_58;
		memset((&L_58), 0, sizeof(L_58));
		RenderTargetIdentifier__ctor_m36F9914C200EE580EEDE97C4E8759D74879999D7((&L_58), L_57, 0, (-1), (-1), NULL);
		NullCheck(L_56);
		CommandBuffer_SetRenderTarget_m00472C42F4BAE11802652921705D554E158D926C(L_56, L_58, 2, 0, 2, 3, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:475>
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_59 = __this->____maskCommandBuffer;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_60;
		L_60 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_61 = __this->____maskMaterial;
		NullCheck(L_59);
		CommandBuffer_DrawProcedural_m32B556B3F1B4989708C7D0DD6F9D4FD2659E84CA(L_59, L_60, L_61, 1, 0, 3, 2, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:476>
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_62 = __this->____maskCommandBuffer;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_ExecuteCommandBuffer_mE7D922583404AB08A25C1413A3EA9F6B0D2F16B9(L_62, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:477>
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_63 = __this->____maskCommandBuffer;
		NullCheck(L_63);
		CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7(L_63, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:478>
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_64 = __this->____maskedDepthTexture;
		V_7 = L_64;
		goto IL_01d5;
	}

IL_01d5:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:479>
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_65 = V_7;
		return L_65;
	}
}
// Method Definition Index: 88729
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mask_Dispose_m81960258F0C281CD889E609332941E5351C85582 (Mask_tF3A4D566E9EBBE2211850CFBE22B12E49C4C47EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:483>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____maskMaterial;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:484>
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = __this->____maskDepthRt;
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:485>
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = __this->____maskedDepthTexture;
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:486>
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_3 = __this->____maskCommandBuffer;
		NullCheck(L_3);
		CommandBuffer_Dispose_m9A5E7A3CA09B3E3F9D199FC7C9E7B27CD9CFADF3(L_3, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:487>
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
// Method Definition Index: 88734
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DepthProviderNotSupported_Meta_XR_EnvironmentDepth_IDepthProvider_get_IsSupported_m12003A1A521FB06E22A9F720CF0FA1E92288E062 (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:537>
		return (bool)0;
	}
}
// Method Definition Index: 88735
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthProviderNotSupported_Meta_XR_EnvironmentDepth_IDepthProvider_set_RemoveHands_mCE3BED7618A95AE088C5D88D49953D9991280A4A (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:538>
		return;
	}
}
// Method Definition Index: 88736
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthProviderNotSupported_Meta_XR_EnvironmentDepth_IDepthProvider_SetDepthEnabled_m3508AC0259971D75C437B636B5A0B5CC31A7992B (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, bool ___0_isEnabled, bool ___1_removeHands, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:539>
		return;
	}
}
// Method Definition Index: 88737
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DepthProviderNotSupported_Meta_XR_EnvironmentDepth_IDepthProvider_TryGetUpdatedDepthTexture_m766AA0C5259E3A2B5FAD8861A782F285FFED6699 (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27** ___0_depthTexture, DepthFrameDescU5BU5D_t4D8B3C737B8653EFCA44427FC2DF0EE8F8A100B8* ___1_frameDescriptors, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:540>
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DepthProviderNotSupported_Meta_XR_EnvironmentDepth_IDepthProvider_TryGetUpdatedDepthTexture_m766AA0C5259E3A2B5FAD8861A782F285FFED6699_RuntimeMethod_var)));
	}
}
// Method Definition Index: 88738
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthProviderNotSupported__ctor_m36C707656C1F484EA4DF05DDA2435CEA343A9B4A (DepthProviderNotSupported_t921A3A2D107552501A0108FA3CCAF5843CBE8E46* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 88739
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 EnvironmentDepthUtils_ComputeNdcToLinearDepthParameters_m4ED08BC1248832A75BCEE1B40D63F91EFA86F081 (float ___0_near, float ___1_far, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:33>
		float L_0 = ___1_far;
		float L_1 = ___0_near;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = ___1_far;
		bool L_3;
		L_3 = Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline(L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 1;
	}

IL_000e:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:36>
		float L_5 = ___0_near;
		V_0 = ((float)il2cpp_codegen_multiply((-2.0f), L_5));
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:37>
		V_1 = (-1.0f);
		goto IL_003d;
	}

IL_0024:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:42>
		float L_6 = ___1_far;
		float L_7 = ___0_near;
		float L_8 = ___1_far;
		float L_9 = ___0_near;
		V_0 = ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_6)), L_7))/((float)il2cpp_codegen_subtract(L_8, L_9))));
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:43>
		float L_10 = ___1_far;
		float L_11 = ___0_near;
		float L_12 = ___1_far;
		float L_13 = ___0_near;
		V_1 = ((float)(((-((float)il2cpp_codegen_add(L_10, L_11))))/((float)il2cpp_codegen_subtract(L_12, L_13))));
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:46>
		float L_14 = V_0;
		float L_15 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_16), L_14, L_15, (0.0f), (0.0f), NULL);
		V_3 = L_16;
		goto IL_0051;
	}

IL_0051:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:47>
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = V_3;
		return L_17;
	}
}
// Method Definition Index: 88740
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 EnvironmentDepthUtils_CalculateReprojection_m5E3435EBDF139CCC6D1E006FF797311DF8ADF2E3 (DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 ___0_frameDesc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:51>
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_0 = ___0_frameDesc;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		EnvironmentDepthUtils_CalculateDepthCameraMatrices_mEAFC3CA26D1CB1BB8D595409083E1B6EB21E8F60(L_0, (&V_0), (&V_1), NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:52>
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_1, L_2, NULL);
		V_2 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:53>
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = V_2;
		return L_4;
	}
}
// Method Definition Index: 88741
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthUtils_CalculateDepthCameraMatrices_mEAFC3CA26D1CB1BB8D595409083E1B6EB21E8F60 (DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 ___0_frameDesc, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_projMatrix, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___2_viewMatrix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	bool V_13 = false;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:57>
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_0 = ___0_frameDesc;
		float L_1 = L_0.___fovLeftAngleTangent;
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:58>
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_2 = ___0_frameDesc;
		float L_3 = L_2.___fovRightAngleTangent;
		V_1 = L_3;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:59>
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_4 = ___0_frameDesc;
		float L_5 = L_4.___fovDownAngleTangent;
		V_2 = L_5;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:60>
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_6 = ___0_frameDesc;
		float L_7 = L_6.___fovTopAngleTangent;
		V_3 = L_7;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:61>
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_8 = ___0_frameDesc;
		float L_9 = L_8.___nearZ;
		V_4 = L_9;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:62>
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_10 = ___0_frameDesc;
		float L_11 = L_10.___farZ;
		V_5 = L_11;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:64>
		float L_12 = V_1;
		float L_13 = V_0;
		V_6 = ((float)((2.0f)/((float)il2cpp_codegen_add(L_12, L_13))));
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:65>
		float L_14 = V_3;
		float L_15 = V_2;
		V_7 = ((float)((2.0f)/((float)il2cpp_codegen_add(L_14, L_15))));
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:66>
		float L_16 = V_1;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_0;
		V_8 = ((float)(((float)il2cpp_codegen_subtract(L_16, L_17))/((float)il2cpp_codegen_add(L_18, L_19))));
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:67>
		float L_20 = V_3;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_2;
		V_9 = ((float)(((float)il2cpp_codegen_subtract(L_20, L_21))/((float)il2cpp_codegen_add(L_22, L_23))));
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:70>
		float L_24 = V_5;
		bool L_25;
		L_25 = Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline(L_24, NULL);
		V_13 = L_25;
		bool L_26 = V_13;
		if (!L_26)
		{
			goto IL_0077;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:72>
		V_10 = (-1.0f);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:73>
		float L_27 = V_4;
		V_11 = ((float)il2cpp_codegen_multiply((-2.0f), L_27));
		goto IL_009b;
	}

IL_0077:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:77>
		float L_28 = V_5;
		float L_29 = V_4;
		float L_30 = V_5;
		float L_31 = V_4;
		V_10 = ((float)(((-((float)il2cpp_codegen_add(L_28, L_29))))/((float)il2cpp_codegen_subtract(L_30, L_31))));
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:78>
		float L_32 = V_5;
		float L_33 = V_4;
		float L_34 = V_5;
		float L_35 = V_4;
		V_11 = ((float)(((-((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_32)), L_33))))/((float)il2cpp_codegen_subtract(L_34, L_35))));
	}

IL_009b:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:80>
		V_12 = (-1.0f);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:81>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:82>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:83>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:84>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:85>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:86>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:87>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:88>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:89>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:90>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:91>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:92>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:93>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:94>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:95>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:96>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:97>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:98>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:99>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:100>
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_36 = ___1_projMatrix;
		il2cpp_codegen_initobj((&V_14), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		float L_37 = V_6;
		(&V_14)->___m00 = L_37;
		(&V_14)->___m01 = (0.0f);
		float L_38 = V_8;
		(&V_14)->___m02 = L_38;
		(&V_14)->___m03 = (0.0f);
		(&V_14)->___m10 = (0.0f);
		float L_39 = V_7;
		(&V_14)->___m11 = L_39;
		float L_40 = V_9;
		(&V_14)->___m12 = L_40;
		(&V_14)->___m13 = (0.0f);
		(&V_14)->___m20 = (0.0f);
		(&V_14)->___m21 = (0.0f);
		float L_41 = V_10;
		(&V_14)->___m22 = L_41;
		float L_42 = V_11;
		(&V_14)->___m23 = L_42;
		(&V_14)->___m30 = (0.0f);
		(&V_14)->___m31 = (0.0f);
		float L_43 = V_12;
		(&V_14)->___m32 = L_43;
		(&V_14)->___m33 = (0.0f);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_44 = V_14;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_36 = L_44;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:102>
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_45 = ___2_viewMatrix;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_46 = ___0_frameDesc;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = L_46.___createPoseLocation;
		DepthFrameDesc_t8E03631D7F12D148E09C208091FBCA5C692E2DB2 L_48 = ___0_frameDesc;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49 = L_48.___createPoseRotation;
		il2cpp_codegen_runtime_class_init_inline(EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = ((EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var))->____scalingVector3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_51;
		L_51 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_47, L_49, L_50, NULL);
		V_14 = L_51;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_52;
		L_52 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&V_14), NULL);
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_45 = L_52;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:103>
		return;
	}
}
// Method Definition Index: 88742
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentDepthUtils__cctor_m2DF5D2142435F391BB3D02EC4A0EFC82248879D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthUtils.cs:27>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (1.0f), (1.0f), (-1.0f), NULL);
		((EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_StaticFields*)il2cpp_codegen_static_fields_for(EnvironmentDepthUtils_tF0B57ABF5A71BC39C607681F1611BD437291128A_il2cpp_TypeInfo_var))->____scalingVector3 = L_0;
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
// Method Definition Index: 88669
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.xr.management@f589c7ba49ff/Runtime/XRManagerSettings.cs:141>
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88705
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EnvironmentDepthManager_get_IsDepthAvailable_m46C6D9DCA227381A3840DBE6B41083EFB8FD132C_inline (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:174>
		bool L_0 = __this->___U3CIsDepthAvailableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88706
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnvironmentDepthManager_set_IsDepthAvailable_m77ABBDA4D0A9BFF1247642CE22A018F22ECDA762_inline (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:174>
		bool L_0 = ___0_value;
		__this->___U3CIsDepthAvailableU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 88698
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* EnvironmentDepthManager_get_MaskMeshFilters_m97869EE18D51E20EE954B89C73E7DAE9EAA6DA4B_inline (EnvironmentDepthManager_t66B25129AB8791DEB056A5AFAB14151358AAA631* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/EnvironmentDepth/EnvironmentDepthManager.cs:118>
		List_1_tF38D1A45CF65189578ADAC12AED34802EB2B8930* L_0 = __this->___U3CMaskMeshFiltersU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 62085
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 22549
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@503a72ca5496/Scripts/OVRCameraRig.cs:65>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CtrackingSpaceU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 60391
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields*)il2cpp_codegen_static_fields_for(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))->___s_Logger;
		return L_0;
	}
}
// Method Definition Index: 61997
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), NULL);
		return L_0;
	}
}
// Method Definition Index: 2023
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline (float ___0_f, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_f;
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) == ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
// Method Definition Index: 62348
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		float L_3 = ___3_w;
		__this->___w = L_3;
		return;
	}
}
// Method Definition Index: 62108
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
// Method Definition Index: 607
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 9599
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 9660
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 61966
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r = L_0;
		float L_1 = ___1_g;
		__this->___g = L_1;
		float L_2 = ___2_b;
		__this->___b = L_2;
		float L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
// Method Definition Index: 737
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
