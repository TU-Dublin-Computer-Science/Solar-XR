#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA;
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
struct AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD;
struct AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2;
struct BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08;
struct DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
struct Exception_t;
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6;
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A;
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B;
struct PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372;
struct RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A;
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C;
struct RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4;
struct RSAManaged_t897B29EF76C459408E11A42680C942716D809001;
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3;
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE;
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9;
struct SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631;
struct SHA512_t4D716D49F898611875B880291C726B1D1DE354C8;
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356;
struct X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4;
struct X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21;
struct X509ExtensionCollection_t4A6DDB3D653B72CD358E09B7A1D6DE4EA4DB6534;
struct ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF;
struct ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE;
struct SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B;
struct SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505;
struct KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
struct X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE;

IL2CPP_EXTERN_C RuntimeClass* ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____25E3E48132FBDBE9B7C0C6C54D7C10A5DE12A105AA3E5DE2A0DC808BF245B7A5_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral12C0D00507D5556F04E6640916CA4AAF502616A1;
IL2CPP_EXTERN_C String_t* _stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD;
IL2CPP_EXTERN_C String_t* _stringLiteral244C3A134C2AC035AB58EF188A0D0B4BA1CEFA31;
IL2CPP_EXTERN_C String_t* _stringLiteral27D427C458FC314980EA5254B2BBDBFCCC0A876C;
IL2CPP_EXTERN_C String_t* _stringLiteral2F711231B5142B5CF16AF94E2BBD10112DFDFD46;
IL2CPP_EXTERN_C String_t* _stringLiteral320DA2233DCCC5359A1A5EA863847EB34DE6BD1F;
IL2CPP_EXTERN_C String_t* _stringLiteral3227BC5517316F41D601A40DC84532F3C724DC04;
IL2CPP_EXTERN_C String_t* _stringLiteral32C78D941B97C930AACD7D6E8DB23C25EEB4F0DC;
IL2CPP_EXTERN_C String_t* _stringLiteral387F7E2809830195F02BCCAE39C49D389AC99CAA;
IL2CPP_EXTERN_C String_t* _stringLiteral38A29F0742E6F746BEAE82B7874F2F4A23D91741;
IL2CPP_EXTERN_C String_t* _stringLiteral416683232C98B46D3CB67F7E22FF1BE125144CB7;
IL2CPP_EXTERN_C String_t* _stringLiteral4250A23553CC186AEFAD328A160DFF786585B4E5;
IL2CPP_EXTERN_C String_t* _stringLiteral453C5BAA19765F31DEA040CBE3D9E279F3C7FA6E;
IL2CPP_EXTERN_C String_t* _stringLiteral46042EA5661F92B06849C13B0ACFBB825CABF696;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF;
IL2CPP_EXTERN_C String_t* _stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B;
IL2CPP_EXTERN_C String_t* _stringLiteral5B8103E2B806098B7F46CF08C6D72C8755B125FC;
IL2CPP_EXTERN_C String_t* _stringLiteral5F0552FD39D0662CC057CFE2B43FEC612634CD8B;
IL2CPP_EXTERN_C String_t* _stringLiteral5F6CA27A9C002B63386F4AB67AC0CE31874F8329;
IL2CPP_EXTERN_C String_t* _stringLiteral6B43E74E9398DB441740D9E9B5A64DAF1F003FC3;
IL2CPP_EXTERN_C String_t* _stringLiteral7574434A66B8CE95810DD546D39A94210FA34C93;
IL2CPP_EXTERN_C String_t* _stringLiteral80581756DEDCE88293CE555E5A87B00CD4001098;
IL2CPP_EXTERN_C String_t* _stringLiteralABB7FEEC1EC6D8916597823AAC19524D7F71BCB2;
IL2CPP_EXTERN_C String_t* _stringLiteralCB700205FF65F52AA739D18D7B8B0C06536C7C99;
IL2CPP_EXTERN_C String_t* _stringLiteralCE0379382C2810C1AED5C5B0021E7B8221741E17;
IL2CPP_EXTERN_C String_t* _stringLiteralD50495FC91A1C7AEC9A992D5D9500D59B15669C1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD9C7849851C546319ED5DCC821A7B730DE8FF73;
IL2CPP_EXTERN_C String_t* _stringLiteralE64E6B72E9C44522A1D99B5C6A7F27EF33B44410;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEA9886E4F2C4A6802C316A24EEE315A59DF9E0B5;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticodeBase_ProcessFirstBlock_m3FB173D7CA309AA1119CFB86D5E4768DA1DCCC1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticodeBase_ReadFirstBlock_m7F5A9F2A9C8FAA6C6685E0F3322E8D69E7324545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_ToString_m007BCE771B1D0C61761EF1F3D98B8C508EC6DF9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Multiply_mEDE5A32D2745927133F814E397EA4E628A60C549_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BigInteger_op_Subtraction_m2017F0245B56CE2D6245757B43DDA997625581CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kernel_LeftShift_mE40ED9013AB88A02A79C7640DA3FA1F320ED86F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kernel_RightShift_m3EF3092A11D1C9680419B275A8349E56CC4BEC5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kernel_modInverse_m9B85AEE3C824216F039E1B5D7EFAE04F71D2A1BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModulusRing_BarrettReduction_mA753465B3A0DC2E9DEC32D345C24DCA1B56115D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModulusRing_Difference_mE4B31BBB8F73710EC6AA7D3F87719672EF683AAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimalityTests_GetSPPRounds_mE93C23146823DD9BB19FF2588CACB3EA32D5E845_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimalityTests_RabinMillerTest_m69936AC3B0635D2E4145DCA9CD2A7E8F63B8CFC4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813  : public RuntimeObject
{
};
struct ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F  : public RuntimeObject
{
	uint8_t ___m_nTag;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_aValue;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___elist;
};
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8  : public RuntimeObject
{
	int32_t ___KeySizeValue;
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue;
};
struct AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileblock;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___fs;
	int32_t ___blockNo;
	int32_t ___blockLength;
	int32_t ___peOffset;
	int32_t ___dirSecurityOffset;
	int32_t ___dirSecuritySize;
	int32_t ___coffSymbolTableOffset;
	bool ___pe64;
};
struct BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08  : public RuntimeObject
{
	uint32_t ___length;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___data;
};
struct CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F  : public RuntimeObject
{
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list;
};
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	bool ____disposed;
	int32_t ___HashSizeValue;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue;
	int32_t ___State;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct PrimalityTests_tDB9CA9A8AD178FFA67DA3B23F4C3E76D6B4F8F20  : public RuntimeObject
{
};
struct PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372  : public RuntimeObject
{
};
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3  : public RuntimeObject
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
struct Kernel_t3E9C89E842E791BDCEC06BE4D7788BC552315ED2  : public RuntimeObject
{
};
struct ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF  : public RuntimeObject
{
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___mod;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___constant;
};
struct ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE  : public RuntimeObject
{
	String_t* ___contentType;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___content;
};
struct SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B  : public RuntimeObject
{
	uint8_t ___version;
	String_t* ___hashAlgorithm;
	ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* ___contentInfo;
	X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* ___certs;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___crls;
	SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* ___signerInfo;
	bool ___mda;
};
struct SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505  : public RuntimeObject
{
	uint8_t ___version;
	String_t* ___hashAlgorithm;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___authenticatedAttributes;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___unauthenticatedAttributes;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___signature;
	String_t* ___issuer;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___serial;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ski;
};
struct X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE  : public RuntimeObject
{
	RuntimeObject* ___enumerator;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
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
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};
struct RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A  : public AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8
{
};
struct RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Exponent;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Modulus;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Q;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DP;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DQ;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___InverseQ;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___D;
};
struct RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshaled_pinvoke
{
	Il2CppSafeArray* ___Exponent;
	Il2CppSafeArray* ___Modulus;
	Il2CppSafeArray* ___P;
	Il2CppSafeArray* ___Q;
	Il2CppSafeArray* ___DP;
	Il2CppSafeArray* ___DQ;
	Il2CppSafeArray* ___InverseQ;
	Il2CppSafeArray* ___D;
};
struct RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshaled_com
{
	Il2CppSafeArray* ___Exponent;
	Il2CppSafeArray* ___Modulus;
	Il2CppSafeArray* ___P;
	Il2CppSafeArray* ___Q;
	Il2CppSafeArray* ___DP;
	Il2CppSafeArray* ___DQ;
	Il2CppSafeArray* ___InverseQ;
	Il2CppSafeArray* ___D;
};
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};
struct SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};
struct SHA512_t4D716D49F898611875B880291C726B1D1DE354C8  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};
struct SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175  : public PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372
{
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
struct X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4  : public CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F
{
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D10_t1320800A84A593C0C545AA86F56DB35F62D3F3B2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t1320800A84A593C0C545AA86F56DB35F62D3F3B2__padding[10];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D18_tA6016B38246762611CCF93D6D91E8AB122C1D671 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D18_tA6016B38246762611CCF93D6D91E8AB122C1D671__padding[18];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D20_t3FAE08F10A75268B585F7B017FEEB774F4E15776 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t3FAE08F10A75268B585F7B017FEEB774F4E15776__padding[20];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D256_t2D0DEE853BDA1AD8D9861536BB032DC5710596AB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t2D0DEE853BDA1AD8D9861536BB032DC5710596AB__padding[256];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F__padding[3];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3132_tB22FE8E689088D29959DAC48B057906D10762D61 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3132_tB22FE8E689088D29959DAC48B057906D10762D61__padding[3132];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_t98F70AA7E629F6A93A37486AFFD45279759B86C3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t98F70AA7E629F6A93A37486AFFD45279759B86C3__padding[32];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D48_t02BDA49745B091399292B3B370DB4FE5B9D6DDB5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_t02BDA49745B091399292B3B370DB4FE5B9D6DDB5__padding[48];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D64_tF99BC823428B50B6B78303D57D4FC461CE1B7334 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_tF99BC823428B50B6B78303D57D4FC461CE1B7334__padding[64];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D9_tCF0B8F5E7316E215622AB02BE64B168AFC5FCCC7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_tCF0B8F5E7316E215622AB02BE64B168AFC5FCCC7__padding[9];
	};
};
#pragma pack(pop, tp)
struct AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2  : public AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD
{
	String_t* ___filename;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawdata;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hash;
	X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* ___coll;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___signedHash;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___timestamp;
	X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* ___signingCertificate;
	int32_t ___reason;
	bool ___trustedRoot;
	bool ___trustedTimestampRoot;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___entry;
	X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* ___signerChain;
	X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* ___timestampChain;
};
struct ConfidenceFactor_tFC67485C5A11DE15A0129C6002A35CAE070C82C2 
{
	int32_t ___value__;
};
struct CspProviderFlags_tE84737C4FE8BB969ADE9D11702DB91D3165D668F 
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
struct FileAccess_t3992FF4CCC61971B804DD291F06F696C3CF33C30 
{
	int32_t ___value__;
};
struct FileMode_t111B48D5347628AEFCBF9A0EC2833827A302ECBA 
{
	int32_t ___value__;
};
struct FileShare_t0A0E9739F5AB44D6B8026C9D2A2F1CEEE442733A 
{
	int32_t ___value__;
};
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	int32_t ____origin;
	int32_t ____position;
	int32_t ____length;
	int32_t ____capacity;
	bool ____expandable;
	bool ____writable;
	bool ____exposable;
	bool ____isOpen;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask;
};
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C  : public RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A
{
	KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* ___store;
	bool ___persistKey;
	bool ___persisted;
	bool ___privateKeyExportable;
	bool ___m_disposed;
	RSAManaged_t897B29EF76C459408E11A42680C942716D809001* ___rsa;
};
struct RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4  : public RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A
{
	bool ___isCRTpossible;
	bool ___keyBlinding;
	bool ___keypairGenerated;
	bool ___m_disposed;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___d;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___p;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___q;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___dp;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___dq;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___qInv;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___n;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___e;
	KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* ___KeyGenerated;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356  : public RuntimeObject
{
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___decoder;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_encodedcert;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_from;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_until;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___issuer;
	String_t* ___m_issuername;
	String_t* ___m_keyalgo;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_keyalgoparams;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___subject;
	String_t* ___m_subject;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_publickey;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___signature;
	String_t* ___m_signaturealgo;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_signaturealgoparams;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___certhash;
	RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* ____rsa;
	DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* ____dsa;
	int32_t ___version;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___serialnumber;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___issuerUniqueID;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___subjectUniqueID;
	X509ExtensionCollection_t4A6DDB3D653B72CD358E09B7A1D6DE4EA4DB6534* ___extensions;
};
struct X509ChainStatusFlags_tB830ABE4C7BDE872BD721F1651EBF7A6CF1B3396 
{
	int32_t ___value__;
};
struct Sign_t11F5CBC3891B31BE851882342D832361A761F404 
{
	int32_t ___value__;
};
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf;
	String_t* ___name;
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle;
	bool ___isExposed;
	int64_t ___append_startpos;
	int32_t ___access;
	bool ___owner;
	bool ___async;
	bool ___canseek;
	bool ___anonymous;
	bool ___buf_dirty;
	int32_t ___buf_size;
	int32_t ___buf_length;
	int32_t ___buf_offset;
	int64_t ___buf_start;
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
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21  : public RuntimeObject
{
	X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* ___roots;
	X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* ___certs;
	X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* ____root;
	X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* ____chain;
	int32_t ____status;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B  : public MulticastDelegate_t
{
};
struct SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ___permissionState;
};
struct KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107  : public MulticastDelegate_t
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813_StaticFields
{
	__StaticArrayInitTypeSizeU3D64_tF99BC823428B50B6B78303D57D4FC461CE1B7334 ___001D686DB504E20C792EAA07FE09224A45FF328E24A80072D04D16ABC5C2B5D2;
	__StaticArrayInitTypeSizeU3D3132_tB22FE8E689088D29959DAC48B057906D10762D61 ___25E3E48132FBDBE9B7C0C6C54D7C10A5DE12A105AA3E5DE2A0DC808BF245B7A5;
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___32D0830B8EE1D49A66F395C8EA80E02BFC07C2A12A8EA8C8B484AF02108A1950;
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___35BF50EEF3270FD8CA09E66FC5B0481C5A151B14F6A634854E32F63633D49DCB;
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___3C0C410618682C4DF0474E034114CC8E562F05A512B521AC367571017BDFA75D;
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___44F5B1A2C48314502ACCBF186D1A2F9F7F176825898F32F1A2047B956194F174;
	__StaticArrayInitTypeSizeU3D48_t02BDA49745B091399292B3B370DB4FE5B9D6DDB5 ___4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6;
	__StaticArrayInitTypeSizeU3D20_t3FAE08F10A75268B585F7B017FEEB774F4E15776 ___533B8C444F951E83EFF7305E3807B66CE0005DE0A2D0A44873C130895A3BE6AA;
	__StaticArrayInitTypeSizeU3D256_t2D0DEE853BDA1AD8D9861536BB032DC5710596AB ___55D0BF716B334D123E0088CFB3F8E2FEA17AF5025BB527F95EEB09BA978EA329;
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___59BE5A634187B8A57216EFF5371A47732C05744B1C1A0A6382A6D5622C9FFDCE;
	__StaticArrayInitTypeSizeU3D32_t98F70AA7E629F6A93A37486AFFD45279759B86C3 ___5DF6E0E2761359D30A8275058E299FCC0381534545F55CF43E41983F5D4C9456;
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___5F8C6B3C66B972606D85E7651F67ADBD02E8316876884674E8328FA710747E5B;
	__StaticArrayInitTypeSizeU3D10_t1320800A84A593C0C545AA86F56DB35F62D3F3B2 ___60C6ED13AF98DBFEEDA8F8197FFFCC349BB04395CC81DF0D477CBC57BF5B398B;
	__StaticArrayInitTypeSizeU3D10_t1320800A84A593C0C545AA86F56DB35F62D3F3B2 ___64B3E7D737AFF47D4C3BBD81D2D06D697DDD8EB60F29E13E4425D19D8BBCA1F7;
	__StaticArrayInitTypeSizeU3D9_tCF0B8F5E7316E215622AB02BE64B168AFC5FCCC7 ___684312AFB7719E57993D2826FFBAF7EA965614F20F91D999FB19B01E21AA62E6;
	__StaticArrayInitTypeSizeU3D64_tF99BC823428B50B6B78303D57D4FC461CE1B7334 ___6AA56C4BCD208911792AD24C7681FEFB93BED51903AFC54860C9BD37E41E5A31;
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___796E63069E193A008CB4E85573AA1FE53C5F4E58B42A7F61FD0EEE1D89B5120B;
	__StaticArrayInitTypeSizeU3D64_tF99BC823428B50B6B78303D57D4FC461CE1B7334 ___7C8975E1E60A5C8337F28EDF8C33C3B180360B7279644A9BC1AF3C51E6220BF5;
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___850D7367E4FB0766E2CBC3ACF5AB42B4E98348E58E5A789845D4FCCDB63D2AEE;
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___9A65C09A11757751BFED67A414E00B188DC4C7757FCB6CBD33A916DDE4A3D925;
	__StaticArrayInitTypeSizeU3D18_tA6016B38246762611CCF93D6D91E8AB122C1D671 ___9ACEFCC0C950280B64AB9E045E38C34ABF71EC70A0DC61B9C621C6BFB4F78047;
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___B1E34F4A11EE411B83415EF0B252A0B2BBCFCAC2E592865E09C12E4252C93A75;
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___C92FAD7F348A682E7D5B7E74C76B5D019174EE7BC87545B25A1FDD49FBCC2D0B;
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___E17B8359E685992B0DE6242AAA24FCB7404173CBB7FF8646FF7D658139F41B5F;
	__StaticArrayInitTypeSizeU3D64_tF99BC823428B50B6B78303D57D4FC461CE1B7334 ___F83B332BE4E6A5A4B1C56AAF6DB52657DA495E149870057D8590AB9D7A6167AD;
	__StaticArrayInitTypeSizeU3D3_t5760B80EAD4D11FDBFDFCD57A808D0D9CEECC80F ___FB6D7301FFDCB5FBA5807A19B4F0606947897C1105240B6BBA815352DBBE2064;
};
struct BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___smallPrimes;
	RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* ___rng;
};
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty;
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
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_StaticFields
{
	int32_t ___s_UseMachineKeyStore;
};
struct X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356_StaticFields
{
	String_t* ___encoding_error;
};
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle;
	RuntimeObject* ___buf_recycle_lock;
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
struct BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66  : public RuntimeArray
{
	ALIGN_FIELD (8) BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* m_Items[1];

	inline BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase_ReadFirstBlock_m7F5A9F2A9C8FAA6C6685E0F3322E8D69E7324545 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase_Close_m1FA42AD55310BAF64DB00FFE6563ED06D44980E9 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___0_path, int32_t ___1_mode, int32_t ___2_access, int32_t ___3_share, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m5BAFB4CE0C3BB700DB05907C334DD64834D75D1B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, bool ___1_writable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticodeBase_ProcessFirstBlock_m3FB173D7CA309AA1119CFB86D5E4768DA1DCCC1A (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_mB63D530ABD106F4BC9C2BB3AC1A38EDDFC3188A2 (String_t* ___0_fmt, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t BitConverterLE_ToUInt16_m9C9006FA48C5155275790F99EC5558AB440B4088 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverterLE_ToInt32_m9883205CC9360B9937EBB27051250198255F8D2A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_m7531650AD8364720B8A7BADB48287D4E6FF9FCE8 (String_t* ___0_msg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BitConverterLE_ToUInt32_m311817F60340C60EE9891E11C144DCAC2113BC8E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashAlgorithm_TransformBlock_m87000AF460B94CB0BC1B2EFD9A4B1C3756707F6F (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inputBuffer, int32_t ___1_inputOffset, int32_t ___2_inputCount, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_outputBuffer, int32_t ___4_outputOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_TransformFinalBlock_m19F3A05AAA0A60B59AD59E1677F7525CFF3EE8EB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inputBuffer, int32_t ___1_inputOffset, int32_t ___2_inputCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase__ctor_m0439483FE9A59BB7E27DE3A8D9EA1D1265BF968C (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain__ctor_m5220D6FE9477D3D63B902475BDBFDC3CB63B3A79 (X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeDeformatter__ctor_m2695F107A500029472C7B519B00F5F8F86918114 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeDeformatter_set_RawData_m0D90817618D3ED52A415A898F0037018A777D07A (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeDeformatter_Reset_mD15DE78C062103550A42BEE536E78F9526585B90 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticodeDeformatter_CheckSignature_mCC125D2B04750C3581E9C60593C4212BC54077F0 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase_Open_m6D97F062F4176730B6020ACAAD47ED4353B35465 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, String_t* ___0_filename, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase_Open_mB75CCA77F829FC8F99FDFCDC639AE5ADA3B32A81 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rawdata, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AuthenticodeBase_GetSecurityEntry_m3690E0D6B4D14F2A8979F1BE0CCE6F7327C2E24E (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo__ctor_m7D3DD72DA482A68007DB183975E3F649EEE308CD (ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ContentInfo_get_ContentType_m4ACE1C1CD7330D35EF0C2C422CF48E3BA0FFD7D1_inline (ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ContentInfo_get_Content_m85ECCB3CF732981E207598428EF008D95F754F98_inline (ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData__ctor_m4609283D3F9F231C0B5156FAE7C2DCF89A3AD7A6 (SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* __this, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___0_asn1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* SignedData_get_ContentInfo_m91409FC043E8C6FF741A922FC69BB9E98B5B7F09_inline (SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* SignedData_get_Certificates_m2F2280AA69C4903FD8CAA75FAECEFC7586EF6D7E_inline (SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASN1_get_Length_mC03E8FE25B4BD7B97EA3D8591E01A457F491C7FE (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* MD5_Create_mD7AEBE7A752D163971C764A9A8CC0029C865F223 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AuthenticodeBase_GetHash_mF881D2926F2FABC3ACDA646842954F83A9434066 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___0_hash, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* SHA256_Create_m41FBBA07C26677E1028E44E3530AC1BA17D26BBC (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631* SHA384_Create_m9ACE4F589597C30B8BB648320B201C9DBCACDD4D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA512_t4D716D49F898611875B880291C726B1D1DE354C8* SHA512_Create_m8BC1AD8C4B34A48F0730842A93C4885C9A4970F5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ASN1_CompareValue_m7397F4657555C6ACAF6622DE143C89E9E7593554 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticodeDeformatter_VerifySignature_mEA4B444611069CAADC507D771CFBA1A571CD8973 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* ___0_sd, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_calculatedMessageDigest, HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___2_ha, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline (SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* SignerInfo_get_AuthenticatedAttributes_m52500C3AC3793C89F0296BBEF64698F2ED20B8F4_inline (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ASN1Convert_ToOid_mBCE4FD3970C556190FB00A6AD409A6ABB4C627D8 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___0_asn1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CryptoConfig_MapNameToOID_mA0B81D5A916A8995E9D5131E21828309C783896D (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, uint8_t ___0_tag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___0_asn1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignerInfo_get_Signature_m6FA43681D705A53BA0857AF55624483A9AE94CA8 (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SignerInfo_get_IssuerName_m30347CCCF2ED4EF05618DD9AF4F71030E4A5A324_inline (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignerInfo_get_SerialNumber_m6B855067A7C4CEF6758805C18E8417729BA62BD7 (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* X509CertificateCollection_GetEnumerator_m602E7163983BF2C8F8B5C09652D5E74771969B56 (X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* X509CertificateEnumerator_get_Current_mA12833D7DAE7B1E3FB58D8596D266CA30A6BCD69 (X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticodeDeformatter_CompareIssuerSerial_m3EE0CDFEE995FAB1C96A8B358D15F1D5EB4F2413 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, String_t* ___0_issuer, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_serial, X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* ___2_x509, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RSACryptoServiceProvider_VerifyHash_m8638C767565FA34974E2537EA44FBD30AE796ECE (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbHash, String_t* ___1_str, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_rgbSignature, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain_LoadCertificates_m5EA569474D1608E1292B8CF39917841C20278825 (X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* __this, X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* ___0_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Chain_Build_m664E7F7A48510E8F5D538A932D1D5E6EC0095C33 (X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* __this, X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* ___0_leaf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_MoveNext_mAB0C32FB96AD574439B87E0E7D2553CBD7DF37C7 (X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* SignerInfo_get_UnauthenticatedAttributes_m718FE21E74C9898E7B4060A5BE1264C68D3171FA_inline (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignerInfo__ctor_mDB114E56EC2F9D5820B2F48A00CF14972B3BCCED (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___0_asn1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticodeDeformatter_VerifyCounterSignature_mCC865AF6E1CE3E6917FF161182D64EDCFE94DBCD (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* ___0_cs, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_signature, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t SignerInfo_get_Version_m0CFF6A1B831986936100F7F4A27D6386D65CFB37_inline (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ASN1Convert_ToDateTime_m2D520694D39F2C86F72ECB24EF48F58B8C57AA75 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___0_time, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* HashAlgorithm_Create_mCCF58B59C5F93DE5220039DDDEE7486C8D104AFC (String_t* ___0_hashName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAManaged__ctor_m3DC50713376908C5D1B7EDE7662070DBC185597A (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PKCS1_Verify_v15_m00B9330B8AA9E623DF4EBFAEEE73BA062CC2BBA1 (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* ___0_rsa, HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___1_hash, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_hashValue, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_signature, bool ___4_tryNonStandardEncoding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain_Reset_m55EC23EC313B197F439649DF941228B8D799645F (X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m9AFFDE2505C2B712D5F89EF501A2D163B7855E02 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___0_ui, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_m3D8FFD303A14BBC17B7423CE9EEC513700BF921F (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, uint32_t ___1_ui, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m42B232CF6F76C15DAA3C02C3F5DE1B1F7C7BBC51 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kernel_Compare_mB84E41B7046C951E360FB9DA11A4BFA5A0E66611 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6 (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* Kernel_Subtract_mEA9B4A2546B4EBBEF7FAB54CD8F33F2283E08A5C (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_big, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_small, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_DwordMod_m1B3830BC4779D5B4BEBC37E1BF320F500C20CC0E (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_n, uint32_t ___1_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* Kernel_multiByteDivide_m32F2ED53F2DEC2DE630E0BDD5AA4A4BC462CD7EF (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, int32_t ___0_sign, uint32_t ___1_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_Multiply_mF725E33ADE4B9849626BB9F011C45E1EE7A5FBB7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, uint32_t ___1_xOffset, uint32_t ___2_xLen, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_y, uint32_t ___4_yOffset, uint32_t ___5_yLen, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___6_d, uint32_t ___7_dOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* Kernel_LeftShift_mE40ED9013AB88A02A79C7640DA3FA1F320ED86F0 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, int32_t ___1_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* Kernel_RightShift_m3EF3092A11D1C9680419B275A8349E56CC4BEC5C (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, int32_t ___1_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* RandomNumberGenerator_Create_m10E13D4B5CF93E2EBB1BE9226488C919FFAC3340 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* BigInteger_get_Rng_m200DBFEDB3D711658BDB3796FE3B805956058A07 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_GenerateRandom_m01DB8F5756F75D8B9810F25D871EC04D41069E4E (int32_t ___0_bits, RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* ___1_rng, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_SetBit_m60B275C4579C541B806FECB49EBBDA1579DA70BE (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___0_bitNum, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, int32_t ___0_bitNum, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mECF42AF9013ADE8D8274E7485C7BA23E4BFFEC60 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m007BCE771B1D0C61761EF1F3D98B8C508EC6DF9D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___0_radix, String_t* ___1_characterSet, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_SingleByteDivideInPlace_mD9E56BF746E318BEDECEC4280A829A63EAD28F09 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_n, uint32_t ___1_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_mDDDA5BA9BF336633ADBD56F97601ACF81C0133FF (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, uint32_t ___1_ui, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m02A324A776BF09756B1BB3B6BFF6DBD7EA98852D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___0_radix, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* Kernel_modInverse_m9B85AEE3C824216F039E1B5D7EFAE04F71D2A1BB (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_modulus, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulusRing__ctor_mA5C74C954C8ABD6F9843F41BBF197F7F00F8D00A (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_modulus, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ModulusRing_Pow_mE14DBD510D57E2A1CF1BFB2B237439A8EB08A418 (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_a, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_k, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequentialSearchPrimeGeneratorBase__ctor_mFE1A43FA14390E871ED0C9025B57B84D9A7AA754 (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Division_m440FC499D6242819F93B60269F50546F85790C6A (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_MultiplyMod2p32pmod_mD9A826628E622F9BF45520DE5A6C0BD53DD2AD9E (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOffset, int32_t ___2_xLen, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_y, int32_t ___4_yOffest, int32_t ___5_yLen, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___6_d, int32_t ___7_dOffset, int32_t ___8_mod, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThanOrEqual_mFB395E4E35C3E672EB2B1D485FA9E621D769D68A (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_MinusEq_m634A25656C7AD0F7C521B23BE30425B788030B91 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_big, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_small, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_PlusEq_mA092738CB4B501B664F314715C7C74FC03384AE3 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_m84F5223CE33D7E4B977B30D32E87AD7D5051DB4F (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_m4102428737E020DEF999F9A2320F2C8962C4947C (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Modulus_m5AC5D8DD148908E30BA188BC50E6B2F0E75545CD (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Multiply_mEDE5A32D2745927133F814E397EA4E628A60C549 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulusRing_BarrettReduction_mA753465B3A0DC2E9DEC32D345C24DCA1B56115D5 (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Subtraction_m2017F0245B56CE2D6245757B43DDA997625581CA (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ModulusRing_Multiply_mDBAD6831070EE1661E3B7EEC4786A515DE5C229A (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_a, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Implicit_m953448132663D58B45AF679B003D0BBC92FEBB49 (uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* Kernel_DwordDivMod_m5977404465381995E14EF36BE94500F6D18458B7 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_n, uint32_t ___1_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_LeftShift_m0450D740864BE2C62DFC1A0777498E518A2E6A73 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, int32_t ___1_shiftVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_RightShift_m9ABBE9016A201283D5DF10CD67D5302510F86224 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, int32_t ___1_shiftVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mD26E0224E82674AFA9A6E4BF4F0674BB0B7BECBF (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, uint32_t ___1_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BigInteger_op_Modulus_m614BB6B5B40C256436BB94EA2B8391C298260F47 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, uint32_t ___1_ui, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_modInverse_m9AF7A04275E7EC3CB3BE97A0E49D303128551788 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, uint32_t ___1_modulus, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ModulusRing_Difference_mE4B31BBB8F73710EC6AA7D3F87719672EF683AAD (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_a, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimalityTests_GetSPPRounds_mE93C23146823DD9BB19FF2588CACB3EA32D5E845 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, int32_t ___1_confidence, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_LowestSetBit_m6443AF5F1F7C864A65365DD731FC7DAC1495DE20 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ModulusRing_Pow_m9F2BB905682A6999D33B598EE7A61755DC240C6D (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, uint32_t ___0_b, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_exp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_GenerateRandom_m5350D6E9C3AAE96153C46D80880F1CE43BB9DA9C (int32_t ___0_bits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_m2AB984FD1240CAD1831070279D41DD97EB632DC7 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimalityTest__ctor_m73483F9E5D166F74E0340F479376C61D9280266A (PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_SetBit_m3E67DE35B0E691FCB886C60252CAAFC3FCB92A39 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___0_bitNum, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_inline (PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, int32_t ___1_confidence, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Incr2_mE5DCADCC1DEDD4F3E48E326940D3C926E1A37808 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimeGeneratorBase__ctor_mECF0CD5B964A7E6FCE4F504719164114B8A678E9 (PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_Multicast(KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* currentDelegate = reinterpret_cast<KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenInst(KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	typedef void (*FunctionPointerType) (RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_sender, ___1_e, method);
}
void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenStatic(KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_sender, ___1_e, method);
}
void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenVirtual(KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	VirtualActionInvoker1< EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sender, ___1_e);
}
void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenInterface(KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	InterfaceActionInvoker1< EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sender, ___1_e);
}
void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenGenericVirtual(KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericVirtualActionInvoker1< EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* >::Invoke(method, ___0_sender, ___1_e);
}
void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenGenericInterface(KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericInterfaceActionInvoker1< EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* >::Invoke(method, ___0_sender, ___1_e);
}
// Method Definition Index: 108157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyGeneratedEventHandler__ctor_m5B52F3B7F5A33F1A0BDC378D304EF8F681A1D8FB (KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
			__this->___invoke_impl = (intptr_t)&KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenStatic;
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
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA_Multicast;
}
// Method Definition Index: 108158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyGeneratedEventHandler_Invoke_mD73F8C7BC0305037EC520C3F4AF3DE74E5481DDA (KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 108159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase__ctor_m0439483FE9A59BB7E27DE3A8D9EA1D1265BF968C (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___fileblock = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileblock), (void*)L_0);
		return;
	}
}
// Method Definition Index: 108160
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___blockNo;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		AuthenticodeBase_ReadFirstBlock_m7F5A9F2A9C8FAA6C6685E0F3322E8D69E7324545(__this, NULL);
	}

IL_000f:
	{
		int32_t L_1 = __this->___peOffset;
		return L_1;
	}
}
// Method Definition Index: 108161
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase_Open_m6D97F062F4176730B6020ACAAD47ED4353B35465 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, String_t* ___0_filename, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___fs;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		AuthenticodeBase_Close_m1FA42AD55310BAF64DB00FFE6563ED06D44980E9(__this, NULL);
	}

IL_000e:
	{
		String_t* L_1 = ___0_filename;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_2, L_1, 3, 1, 1, NULL);
		__this->___fs = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fs), (void*)L_2);
		__this->___blockNo = 0;
		return;
	}
}
// Method Definition Index: 108162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase_Open_mB75CCA77F829FC8F99FDFCDC639AE5ADA3B32A81 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rawdata, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___fs;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		AuthenticodeBase_Close_m1FA42AD55310BAF64DB00FFE6563ED06D44980E9(__this, NULL);
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_rawdata;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m5BAFB4CE0C3BB700DB05907C334DD64834D75D1B(L_2, L_1, (bool)0, NULL);
		__this->___fs = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fs), (void*)L_2);
		__this->___blockNo = 0;
		return;
	}
}
// Method Definition Index: 108163
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase_Close_m1FA42AD55310BAF64DB00FFE6563ED06D44980E9 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___fs;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___fs;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(13, L_1);
		__this->___fs = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fs), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
	}

IL_001a:
	{
		return;
	}
}
// Method Definition Index: 108164
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeBase_ReadFirstBlock_m7F5A9F2A9C8FAA6C6685E0F3322E8D69E7324545 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = AuthenticodeBase_ProcessFirstBlock_m3FB173D7CA309AA1119CFB86D5E4768DA1DCCC1A(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_defaults.int32_class, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		String_t* L_7;
		L_7 = Locale_GetText_mB63D530ABD106F4BC9C2BB3AC1A38EDDFC3188A2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453C5BAA19765F31DEA040CBE3D9E279F3C7FA6E)), L_3, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_8 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticodeBase_ReadFirstBlock_m7F5A9F2A9C8FAA6C6685E0F3322E8D69E7324545_RuntimeMethod_var)));
	}

IL_0029:
	{
		return;
	}
}
// Method Definition Index: 108165
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticodeBase_ProcessFirstBlock_m3FB173D7CA309AA1119CFB86D5E4768DA1DCCC1A (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___fs;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 1;
	}

IL_000a:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___fs;
		NullCheck(L_1);
		VirtualActionInvoker1< int64_t >::Invoke(12, L_1, ((int64_t)0));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___fs;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___fileblock;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___fileblock;
		NullCheck(L_4);
		NullCheck(L_2);
		int32_t L_5;
		L_5 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(25, L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)));
		__this->___blockLength = L_5;
		__this->___blockNo = 1;
		int32_t L_6 = __this->___blockLength;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)64))))
		{
			goto IL_004a;
		}
	}
	{
		return 2;
	}

IL_004a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___fileblock;
		uint16_t L_8;
		L_8 = BitConverterLE_ToUInt16_m9C9006FA48C5155275790F99EC5558AB440B4088(L_7, 0, NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)23117))))
		{
			goto IL_005f;
		}
	}
	{
		return 3;
	}

IL_005f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___fileblock;
		int32_t L_10;
		L_10 = BitConverterLE_ToInt32_m9883205CC9360B9937EBB27051250198255F8D2A(L_9, ((int32_t)60), NULL);
		__this->___peOffset = L_10;
		int32_t L_11 = __this->___peOffset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___fileblock;
		NullCheck(L_12);
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_00a4;
		}
	}
	{
		String_t* L_13;
		L_13 = Locale_GetText_m7531650AD8364720B8A7BADB48287D4E6FF9FCE8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4250A23553CC186AEFAD328A160DFF786585B4E5)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___fileblock;
		NullCheck(L_14);
		int32_t L_15 = ((int32_t)(((RuntimeArray*)L_14)->max_length));
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_13, L_16, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_18 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticodeBase_ProcessFirstBlock_m3FB173D7CA309AA1119CFB86D5E4768DA1DCCC1A_RuntimeMethod_var)));
	}

IL_00a4:
	{
		int32_t L_19 = __this->___peOffset;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_20 = __this->___fs;
		NullCheck(L_20);
		int64_t L_21;
		L_21 = VirtualFuncInvoker0< int64_t >::Invoke(10, L_20);
		if ((((int64_t)((int64_t)L_19)) <= ((int64_t)L_21)))
		{
			goto IL_00ba;
		}
	}
	{
		return 4;
	}

IL_00ba:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___fileblock;
		int32_t L_23 = __this->___peOffset;
		uint32_t L_24;
		L_24 = BitConverterLE_ToUInt32_m311817F60340C60EE9891E11C144DCAC2113BC8E(L_22, L_23, NULL);
		if ((((int32_t)L_24) == ((int32_t)((int32_t)17744))))
		{
			goto IL_00d4;
		}
	}
	{
		return 5;
	}

IL_00d4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___fileblock;
		int32_t L_26 = __this->___peOffset;
		uint16_t L_27;
		L_27 = BitConverterLE_ToUInt16_m9C9006FA48C5155275790F99EC5558AB440B4088(L_25, ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)24))), NULL);
		V_0 = L_27;
		uint16_t L_28 = V_0;
		__this->___pe64 = (bool)((((int32_t)L_28) == ((int32_t)((int32_t)523)))? 1 : 0);
		bool L_29 = __this->___pe64;
		if (!L_29)
		{
			goto IL_013d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___fileblock;
		int32_t L_31 = __this->___peOffset;
		int32_t L_32;
		L_32 = BitConverterLE_ToInt32_m9883205CC9360B9937EBB27051250198255F8D2A(L_30, ((int32_t)il2cpp_codegen_add(L_31, ((int32_t)168))), NULL);
		__this->___dirSecurityOffset = L_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___fileblock;
		int32_t L_34 = __this->___peOffset;
		int32_t L_35;
		L_35 = BitConverterLE_ToInt32_m9883205CC9360B9937EBB27051250198255F8D2A(L_33, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_34, ((int32_t)168))), 4)), NULL);
		__this->___dirSecuritySize = L_35;
		goto IL_0177;
	}

IL_013d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___fileblock;
		int32_t L_37 = __this->___peOffset;
		int32_t L_38;
		L_38 = BitConverterLE_ToInt32_m9883205CC9360B9937EBB27051250198255F8D2A(L_36, ((int32_t)il2cpp_codegen_add(L_37, ((int32_t)152))), NULL);
		__this->___dirSecurityOffset = L_38;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = __this->___fileblock;
		int32_t L_40 = __this->___peOffset;
		int32_t L_41;
		L_41 = BitConverterLE_ToInt32_m9883205CC9360B9937EBB27051250198255F8D2A(L_39, ((int32_t)il2cpp_codegen_add(L_40, ((int32_t)156))), NULL);
		__this->___dirSecuritySize = L_41;
	}

IL_0177:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = __this->___fileblock;
		int32_t L_43 = __this->___peOffset;
		int32_t L_44;
		L_44 = BitConverterLE_ToInt32_m9883205CC9360B9937EBB27051250198255F8D2A(L_42, ((int32_t)il2cpp_codegen_add(L_43, ((int32_t)12))), NULL);
		__this->___coffSymbolTableOffset = L_44;
		return 0;
	}
}
// Method Definition Index: 108166
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AuthenticodeBase_GetSecurityEntry_m3690E0D6B4D14F2A8979F1BE0CCE6F7327C2E24E (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t L_0 = __this->___blockNo;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		AuthenticodeBase_ReadFirstBlock_m7F5A9F2A9C8FAA6C6685E0F3322E8D69E7324545(__this, NULL);
	}

IL_000f:
	{
		int32_t L_1 = __this->___dirSecuritySize;
		if ((((int32_t)L_1) <= ((int32_t)8)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = __this->___dirSecuritySize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_2, 8)));
		V_0 = L_3;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___fs;
		int32_t L_5 = __this->___dirSecurityOffset;
		NullCheck(L_4);
		VirtualActionInvoker1< int64_t >::Invoke(12, L_4, ((int64_t)((int32_t)il2cpp_codegen_add(L_5, 8))));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = __this->___fs;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		NullCheck(L_6);
		int32_t L_9;
		L_9 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(25, L_6, L_7, 0, ((int32_t)(((RuntimeArray*)L_8)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		return L_10;
	}

IL_004d:
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
}
// Method Definition Index: 108167
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AuthenticodeBase_GetHash_mF881D2926F2FABC3ACDA646842954F83A9434066 (AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD* __this, HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___0_hash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->___blockNo;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		AuthenticodeBase_ReadFirstBlock_m7F5A9F2A9C8FAA6C6685E0F3322E8D69E7324545(__this, NULL);
	}

IL_000f:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___fs;
		int32_t L_2 = __this->___blockLength;
		NullCheck(L_1);
		VirtualActionInvoker1< int64_t >::Invoke(12, L_1, ((int64_t)L_2));
		V_1 = 0;
		int32_t L_3 = __this->___dirSecurityOffset;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_4 = __this->___dirSecurityOffset;
		int32_t L_5 = __this->___blockLength;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_6 = __this->___dirSecurityOffset;
		__this->___blockLength = L_6;
		V_0 = ((int64_t)0);
		goto IL_0152;
	}

IL_004e:
	{
		int32_t L_7 = __this->___dirSecurityOffset;
		int32_t L_8 = __this->___blockLength;
		V_0 = ((int64_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8)));
		goto IL_0152;
	}

IL_0062:
	{
		int32_t L_9 = __this->___coffSymbolTableOffset;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0126;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___fileblock;
		int32_t L_11;
		L_11 = AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B(__this, NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, ((int32_t)12)))), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___fileblock;
		int32_t L_13;
		L_13 = AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B(__this, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, ((int32_t)13)))), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___fileblock;
		int32_t L_15;
		L_15 = AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B(__this, NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_15, ((int32_t)14)))), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___fileblock;
		int32_t L_17;
		L_17 = AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B(__this, NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_17, ((int32_t)15)))), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___fileblock;
		int32_t L_19;
		L_19 = AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B(__this, NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, ((int32_t)16)))), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___fileblock;
		int32_t L_21;
		L_21 = AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B(__this, NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_21, ((int32_t)17)))), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___fileblock;
		int32_t L_23;
		L_23 = AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B(__this, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, ((int32_t)18)))), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___fileblock;
		int32_t L_25;
		L_25 = AuthenticodeBase_get_PEOffset_mC4BFB80BAEF28B712FD9048C85B3F20B3DC81C5B(__this, NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_25, ((int32_t)19)))), (uint8_t)0);
		int32_t L_26 = __this->___coffSymbolTableOffset;
		int32_t L_27 = __this->___blockLength;
		if ((((int32_t)L_26) >= ((int32_t)L_27)))
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_28 = __this->___coffSymbolTableOffset;
		__this->___blockLength = L_28;
		V_0 = ((int64_t)0);
		goto IL_0152;
	}

IL_0115:
	{
		int32_t L_29 = __this->___coffSymbolTableOffset;
		int32_t L_30 = __this->___blockLength;
		V_0 = ((int64_t)((int32_t)il2cpp_codegen_subtract(L_29, L_30)));
		goto IL_0152;
	}

IL_0126:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_31 = __this->___fs;
		NullCheck(L_31);
		int64_t L_32;
		L_32 = VirtualFuncInvoker0< int64_t >::Invoke(10, L_31);
		V_1 = ((int32_t)((int64_t)(L_32&((int64_t)7))));
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_013e;
		}
	}
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(8, L_34));
	}

IL_013e:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_35 = __this->___fs;
		NullCheck(L_35);
		int64_t L_36;
		L_36 = VirtualFuncInvoker0< int64_t >::Invoke(10, L_35);
		int32_t L_37 = __this->___blockLength;
		V_0 = ((int64_t)il2cpp_codegen_subtract(L_36, ((int64_t)L_37)));
	}

IL_0152:
	{
		int32_t L_38 = __this->___peOffset;
		V_2 = ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)88)));
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_39 = ___0_hash;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = __this->___fileblock;
		int32_t L_41 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = __this->___fileblock;
		NullCheck(L_39);
		int32_t L_43;
		L_43 = HashAlgorithm_TransformBlock_m87000AF460B94CB0BC1B2EFD9A4B1C3756707F6F(L_39, L_40, 0, L_41, L_42, 0, NULL);
		int32_t L_44 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_44, 4));
		bool L_45 = __this->___pe64;
		if (!L_45)
		{
			goto IL_019c;
		}
	}
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_46 = ___0_hash;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___fileblock;
		int32_t L_48 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = __this->___fileblock;
		int32_t L_50 = V_2;
		NullCheck(L_46);
		int32_t L_51;
		L_51 = HashAlgorithm_TransformBlock_m87000AF460B94CB0BC1B2EFD9A4B1C3756707F6F(L_46, L_47, L_48, ((int32_t)76), L_49, L_50, NULL);
		int32_t L_52 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_52, ((int32_t)84)));
		goto IL_01b8;
	}

IL_019c:
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_53 = ___0_hash;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = __this->___fileblock;
		int32_t L_55 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = __this->___fileblock;
		int32_t L_57 = V_2;
		NullCheck(L_53);
		int32_t L_58;
		L_58 = HashAlgorithm_TransformBlock_m87000AF460B94CB0BC1B2EFD9A4B1C3756707F6F(L_53, L_54, L_55, ((int32_t)60), L_56, L_57, NULL);
		int32_t L_59 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_59, ((int32_t)68)));
	}

IL_01b8:
	{
		int64_t L_60 = V_0;
		if (L_60)
		{
			goto IL_01d6;
		}
	}
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_61 = ___0_hash;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = __this->___fileblock;
		int32_t L_63 = V_2;
		int32_t L_64 = __this->___blockLength;
		int32_t L_65 = V_2;
		NullCheck(L_61);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66;
		L_66 = HashAlgorithm_TransformFinalBlock_m19F3A05AAA0A60B59AD59E1677F7525CFF3EE8EB(L_61, L_62, L_63, ((int32_t)il2cpp_codegen_subtract(L_64, L_65)), NULL);
		goto IL_02ab;
	}

IL_01d6:
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_67 = ___0_hash;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = __this->___fileblock;
		int32_t L_69 = V_2;
		int32_t L_70 = __this->___blockLength;
		int32_t L_71 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = __this->___fileblock;
		int32_t L_73 = V_2;
		NullCheck(L_67);
		int32_t L_74;
		L_74 = HashAlgorithm_TransformBlock_m87000AF460B94CB0BC1B2EFD9A4B1C3756707F6F(L_67, L_68, L_69, ((int32_t)il2cpp_codegen_subtract(L_70, L_71)), L_72, L_73, NULL);
		int64_t L_75 = V_0;
		V_3 = ((int64_t)(L_75>>((int32_t)12)));
		int64_t L_76 = V_0;
		int64_t L_77 = V_3;
		V_4 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_76, ((int64_t)(L_77<<((int32_t)12))))));
		int32_t L_78 = V_4;
		if (L_78)
		{
			goto IL_024b;
		}
	}
	{
		int64_t L_79 = V_3;
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_79, ((int64_t)1)));
		V_4 = ((int32_t)4096);
		goto IL_024b;
	}

IL_0213:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_80 = __this->___fs;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = __this->___fileblock;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = __this->___fileblock;
		NullCheck(L_82);
		NullCheck(L_80);
		int32_t L_83;
		L_83 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(25, L_80, L_81, 0, ((int32_t)(((RuntimeArray*)L_82)->max_length)));
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_84 = ___0_hash;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = __this->___fileblock;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = __this->___fileblock;
		NullCheck(L_86);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = __this->___fileblock;
		NullCheck(L_84);
		int32_t L_88;
		L_88 = HashAlgorithm_TransformBlock_m87000AF460B94CB0BC1B2EFD9A4B1C3756707F6F(L_84, L_85, 0, ((int32_t)(((RuntimeArray*)L_86)->max_length)), L_87, 0, NULL);
	}

IL_024b:
	{
		int64_t L_89 = V_3;
		int64_t L_90 = L_89;
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_90, ((int64_t)1)));
		if ((((int64_t)L_90) > ((int64_t)((int64_t)0))))
		{
			goto IL_0213;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_91 = __this->___fs;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = __this->___fileblock;
		int32_t L_93 = V_4;
		NullCheck(L_91);
		int32_t L_94;
		L_94 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(25, L_91, L_92, 0, L_93);
		int32_t L_95 = V_4;
		if ((((int32_t)L_94) == ((int32_t)L_95)))
		{
			goto IL_026f;
		}
	}
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_026f:
	{
		int32_t L_96 = V_1;
		if ((((int32_t)L_96) <= ((int32_t)0)))
		{
			goto IL_029b;
		}
	}
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_97 = ___0_hash;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = __this->___fileblock;
		int32_t L_99 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = __this->___fileblock;
		NullCheck(L_97);
		int32_t L_101;
		L_101 = HashAlgorithm_TransformBlock_m87000AF460B94CB0BC1B2EFD9A4B1C3756707F6F(L_97, L_98, 0, L_99, L_100, 0, NULL);
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_102 = ___0_hash;
		int32_t L_103 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_103);
		int32_t L_105 = V_1;
		NullCheck(L_102);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106;
		L_106 = HashAlgorithm_TransformFinalBlock_m19F3A05AAA0A60B59AD59E1677F7525CFF3EE8EB(L_102, L_104, 0, L_105, NULL);
		goto IL_02ab;
	}

IL_029b:
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_107 = ___0_hash;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = __this->___fileblock;
		int32_t L_109 = V_4;
		NullCheck(L_107);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_110;
		L_110 = HashAlgorithm_TransformFinalBlock_m19F3A05AAA0A60B59AD59E1677F7525CFF3EE8EB(L_107, L_108, 0, L_109, NULL);
	}

IL_02ab:
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_111 = ___0_hash;
		NullCheck(L_111);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112;
		L_112 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11, L_111);
		return L_112;
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
// Method Definition Index: 108168
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeDeformatter__ctor_m2695F107A500029472C7B519B00F5F8F86918114 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AuthenticodeBase__ctor_m0439483FE9A59BB7E27DE3A8D9EA1D1265BF968C(__this, NULL);
		__this->___reason = (-1);
		X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* L_0 = (X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21*)il2cpp_codegen_object_new(X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21_il2cpp_TypeInfo_var);
		X509Chain__ctor_m5220D6FE9477D3D63B902475BDBFDC3CB63B3A79(L_0, NULL);
		__this->___signerChain = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signerChain), (void*)L_0);
		X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* L_1 = (X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21*)il2cpp_codegen_object_new(X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21_il2cpp_TypeInfo_var);
		X509Chain__ctor_m5220D6FE9477D3D63B902475BDBFDC3CB63B3A79(L_1, NULL);
		__this->___timestampChain = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timestampChain), (void*)L_1);
		return;
	}
}
// Method Definition Index: 108169
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeDeformatter__ctor_mE7D65775E1289E0DBB208034BE5EB40AB6469BA0 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rawData, const RuntimeMethod* method) 
{
	{
		AuthenticodeDeformatter__ctor_m2695F107A500029472C7B519B00F5F8F86918114(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rawData;
		AuthenticodeDeformatter_set_RawData_m0D90817618D3ED52A415A898F0037018A777D07A(__this, L_0, NULL);
		return;
	}
}
// Method Definition Index: 108170
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeDeformatter_set_RawData_m0D90817618D3ED52A415A898F0037018A777D07A (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		AuthenticodeDeformatter_Reset_mD15DE78C062103550A42BEE536E78F9526585B90(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___rawdata = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rawdata), (void*)L_0);
	}
	try
	{
		bool L_1;
		L_1 = AuthenticodeDeformatter_CheckSignature_mCC125D2B04750C3581E9C60593C4212BC54077F0(__this, NULL);
		goto IL_0023;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0016:
	{
		SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C* L_2 = ((SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C*)IL2CPP_GET_ACTIVE_EXCEPTION(SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C*));;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
	}

CATCH_0019:
	{
		RuntimeObject* L_3 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		__this->___reason = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0023;
	}

IL_0023:
	{
		return;
	}
}
// Method Definition Index: 108171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* AuthenticodeDeformatter_get_SigningCertificate_m5C675A2AB0464670DF6C557C4433871014EB52CC (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_0 = __this->___signingCertificate;
		return L_0;
	}
}
// Method Definition Index: 108172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticodeDeformatter_CheckSignature_mCC125D2B04750C3581E9C60593C4212BC54077F0 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B43E74E9398DB441740D9E9B5A64DAF1F003FC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA9886E4F2C4A6802C316A24EEE315A59DF9E0B5);
		s_Il2CppMethodInitialized = true;
	}
	ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* V_0 = NULL;
	SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* V_1 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_2 = NULL;
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t V_6 = 0;
	{
		String_t* L_0 = __this->___filename;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = __this->___filename;
		AuthenticodeBase_Open_m6D97F062F4176730B6020ACAAD47ED4353B35465(__this, L_1, NULL);
		goto IL_0022;
	}

IL_0016:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___rawdata;
		AuthenticodeBase_Open_mB75CCA77F829FC8F99FDFCDC639AE5ADA3B32A81(__this, L_2, NULL);
	}

IL_0022:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = AuthenticodeBase_GetSecurityEntry_m3690E0D6B4D14F2A8979F1BE0CCE6F7327C2E24E(__this, NULL);
		__this->___entry = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entry), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___entry;
		if (L_4)
		{
			goto IL_0045;
		}
	}
	{
		__this->___reason = 1;
		AuthenticodeBase_Close_m1FA42AD55310BAF64DB00FFE6563ED06D44980E9(__this, NULL);
		return (bool)0;
	}

IL_0045:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___entry;
		ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* L_6 = (ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE*)il2cpp_codegen_object_new(ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE_il2cpp_TypeInfo_var);
		ContentInfo__ctor_m7D3DD72DA482A68007DB183975E3F649EEE308CD(L_6, L_5, NULL);
		V_0 = L_6;
		ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = ContentInfo_get_ContentType_m4ACE1C1CD7330D35EF0C2C422CF48E3BA0FFD7D1_inline(L_7, NULL);
		bool L_9;
		L_9 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_8, _stringLiteralEA9886E4F2C4A6802C316A24EEE315A59DF9E0B5, NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		AuthenticodeBase_Close_m1FA42AD55310BAF64DB00FFE6563ED06D44980E9(__this, NULL);
		return (bool)0;
	}

IL_006b:
	{
		ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* L_10 = V_0;
		NullCheck(L_10);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_11;
		L_11 = ContentInfo_get_Content_m85ECCB3CF732981E207598428EF008D95F754F98_inline(L_10, NULL);
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_12 = (SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B*)il2cpp_codegen_object_new(SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B_il2cpp_TypeInfo_var);
		SignedData__ctor_m4609283D3F9F231C0B5156FAE7C2DCF89A3AD7A6(L_12, L_11, NULL);
		V_1 = L_12;
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_13 = V_1;
		NullCheck(L_13);
		ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* L_14;
		L_14 = SignedData_get_ContentInfo_m91409FC043E8C6FF741A922FC69BB9E98B5B7F09_inline(L_13, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = ContentInfo_get_ContentType_m4ACE1C1CD7330D35EF0C2C422CF48E3BA0FFD7D1_inline(L_14, NULL);
		bool L_16;
		L_16 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_15, _stringLiteral6B43E74E9398DB441740D9E9B5A64DAF1F003FC3, NULL);
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		AuthenticodeBase_Close_m1FA42AD55310BAF64DB00FFE6563ED06D44980E9(__this, NULL);
		return (bool)0;
	}

IL_0096:
	{
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_17 = V_1;
		NullCheck(L_17);
		X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* L_18;
		L_18 = SignedData_get_Certificates_m2F2280AA69C4903FD8CAA75FAECEFC7586EF6D7E_inline(L_17, NULL);
		__this->___coll = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coll), (void*)L_18);
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_19 = V_1;
		NullCheck(L_19);
		ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* L_20;
		L_20 = SignedData_get_ContentInfo_m91409FC043E8C6FF741A922FC69BB9E98B5B7F09_inline(L_19, NULL);
		NullCheck(L_20);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_21;
		L_21 = ContentInfo_get_Content_m85ECCB3CF732981E207598428EF008D95F754F98_inline(L_20, NULL);
		V_2 = L_21;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_22 = V_2;
		NullCheck(L_22);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_23;
		L_23 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_22, 0, NULL);
		NullCheck(L_23);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_24;
		L_24 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_23, 1, NULL);
		NullCheck(L_24);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_25;
		L_25 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_24, 1, NULL);
		__this->___signedHash = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signedHash), (void*)L_25);
		V_3 = (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)NULL;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_26 = __this->___signedHash;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = ASN1_get_Length_mC03E8FE25B4BD7B97EA3D8591E01A457F491C7FE(L_26, NULL);
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)20))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_29 = V_6;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)16))))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_30 = V_6;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)20))))
		{
			goto IL_0113;
		}
	}
	{
		goto IL_0167;
	}

IL_00ea:
	{
		int32_t L_31 = V_6;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)32))))
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_32 = V_6;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)48))))
		{
			goto IL_013d;
		}
	}
	{
		int32_t L_33 = V_6;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)64))))
		{
			goto IL_0152;
		}
	}
	{
		goto IL_0167;
	}

IL_00fe:
	{
		MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* L_34;
		L_34 = MD5_Create_mD7AEBE7A752D163971C764A9A8CC0029C865F223(NULL);
		V_3 = L_34;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_35 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
		L_36 = AuthenticodeBase_GetHash_mF881D2926F2FABC3ACDA646842954F83A9434066(__this, L_35, NULL);
		__this->___hash = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hash), (void*)L_36);
		goto IL_0176;
	}

IL_0113:
	{
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_37;
		L_37 = SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042(NULL);
		V_3 = L_37;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_38 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39;
		L_39 = AuthenticodeBase_GetHash_mF881D2926F2FABC3ACDA646842954F83A9434066(__this, L_38, NULL);
		__this->___hash = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hash), (void*)L_39);
		goto IL_0176;
	}

IL_0128:
	{
		SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_40;
		L_40 = SHA256_Create_m41FBBA07C26677E1028E44E3530AC1BA17D26BBC(NULL);
		V_3 = L_40;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_41 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = AuthenticodeBase_GetHash_mF881D2926F2FABC3ACDA646842954F83A9434066(__this, L_41, NULL);
		__this->___hash = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hash), (void*)L_42);
		goto IL_0176;
	}

IL_013d:
	{
		SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631* L_43;
		L_43 = SHA384_Create_m9ACE4F589597C30B8BB648320B201C9DBCACDD4D(NULL);
		V_3 = L_43;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_44 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45;
		L_45 = AuthenticodeBase_GetHash_mF881D2926F2FABC3ACDA646842954F83A9434066(__this, L_44, NULL);
		__this->___hash = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hash), (void*)L_45);
		goto IL_0176;
	}

IL_0152:
	{
		SHA512_t4D716D49F898611875B880291C726B1D1DE354C8* L_46;
		L_46 = SHA512_Create_m8BC1AD8C4B34A48F0730842A93C4885C9A4970F5(NULL);
		V_3 = L_46;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_47 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48;
		L_48 = AuthenticodeBase_GetHash_mF881D2926F2FABC3ACDA646842954F83A9434066(__this, L_47, NULL);
		__this->___hash = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hash), (void*)L_48);
		goto IL_0176;
	}

IL_0167:
	{
		__this->___reason = 5;
		AuthenticodeBase_Close_m1FA42AD55310BAF64DB00FFE6563ED06D44980E9(__this, NULL);
		return (bool)0;
	}

IL_0176:
	{
		AuthenticodeBase_Close_m1FA42AD55310BAF64DB00FFE6563ED06D44980E9(__this, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_49 = __this->___signedHash;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = __this->___hash;
		NullCheck(L_49);
		bool L_51;
		L_51 = ASN1_CompareValue_m7397F4657555C6ACAF6622DE143C89E9E7593554(L_49, L_50, NULL);
		if (L_51)
		{
			goto IL_0196;
		}
	}
	{
		__this->___reason = 2;
	}

IL_0196:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_52 = V_2;
		NullCheck(L_52);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_53;
		L_53 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_52, 0, NULL);
		NullCheck(L_53);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54;
		L_54 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_53, NULL);
		V_4 = L_54;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_55 = V_3;
		NullCheck(L_55);
		VirtualActionInvoker0::Invoke(18, L_55);
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_56 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_4;
		NullCheck(L_56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58;
		L_58 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_56, L_57, NULL);
		V_5 = L_58;
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_59 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_5;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_61 = V_3;
		bool L_62;
		L_62 = AuthenticodeDeformatter_VerifySignature_mEA4B444611069CAADC507D771CFBA1A571CD8973(__this, L_59, L_60, L_61, NULL);
		if (!L_62)
		{
			goto IL_01ca;
		}
	}
	{
		int32_t L_63 = __this->___reason;
		return (bool)((((int32_t)L_63) == ((int32_t)0))? 1 : 0);
	}

IL_01ca:
	{
		return (bool)0;
	}
}
// Method Definition Index: 108173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticodeDeformatter_CompareIssuerSerial_m3EE0CDFEE995FAB1C96A8B358D15F1D5EB4F2413 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, String_t* ___0_issuer, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_serial, X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* ___2_x509, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_issuer;
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_1 = ___2_x509;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_1);
		bool L_3;
		L_3 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_serial;
		NullCheck(L_4);
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_5 = ___2_x509;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11, L_5);
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}

IL_001f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_serial;
		NullCheck(L_7);
		V_0 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		V_1 = 0;
		goto IL_003e;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___1_serial;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_12 = ___2_x509;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11, L_12);
		int32_t L_14 = V_0;
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		V_0 = L_15;
		NullCheck(L_13);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if ((((int32_t)L_11) == ((int32_t)L_17)))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_003a:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_003e:
	{
		int32_t L_19 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___1_serial;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)1;
	}
}
// Method Definition Index: 108174
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticodeDeformatter_VerifySignature_mEA4B444611069CAADC507D771CFBA1A571CD8973 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* ___0_sd, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_calculatedMessageDigest, HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___2_ha, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral244C3A134C2AC035AB58EF188A0D0B4BA1CEFA31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D427C458FC314980EA5254B2BBDBFCCC0A876C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral416683232C98B46D3CB67F7E22FF1BE125144CB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46042EA5661F92B06849C13B0ACFBB825CABF696);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B43E74E9398DB441740D9E9B5A64DAF1F003FC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABB7FEEC1EC6D8916597823AAC19524D7F71BCB2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_1 = NULL;
	String_t* V_2 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	String_t* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t V_8 = 0;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_9 = NULL;
	String_t* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_12 = NULL;
	RuntimeObject* V_13 = NULL;
	X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* V_14 = NULL;
	X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* V_15 = NULL;
	int32_t V_16 = 0;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_17 = NULL;
	SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* V_18 = NULL;
	{
		V_0 = (String_t*)NULL;
		V_1 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)NULL;
		V_8 = 0;
		goto IL_0099;
	}

IL_000c:
	{
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_0 = ___0_sd;
		NullCheck(L_0);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_1;
		L_1 = SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline(L_0, NULL);
		NullCheck(L_1);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2;
		L_2 = SignerInfo_get_AuthenticatedAttributes_m52500C3AC3793C89F0296BBEF64698F2ED20B8F4_inline(L_1, NULL);
		int32_t L_3 = V_8;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(27, L_2, L_3);
		V_9 = ((ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)CastclassClass((RuntimeObject*)L_4, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var));
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_5 = V_9;
		NullCheck(L_5);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_6;
		L_6 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_5, 0, NULL);
		String_t* L_7;
		L_7 = ASN1Convert_ToOid_mBCE4FD3970C556190FB00A6AD409A6ABB4C627D8(L_6, NULL);
		V_10 = L_7;
		String_t* L_8 = V_10;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral416683232C98B46D3CB67F7E22FF1BE125144CB7, NULL);
		if (L_9)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_10 = V_10;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral244C3A134C2AC035AB58EF188A0D0B4BA1CEFA31, NULL);
		if (L_11)
		{
			goto IL_0084;
		}
	}
	{
		String_t* L_12 = V_10;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral27D427C458FC314980EA5254B2BBDBFCCC0A876C, NULL);
		if (L_13)
		{
			goto IL_0093;
		}
	}
	{
		String_t* L_14 = V_10;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralABB7FEEC1EC6D8916597823AAC19524D7F71BCB2, NULL);
		if (L_15)
		{
			goto IL_0093;
		}
	}
	{
		goto IL_0093;
	}

IL_006e:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_16 = V_9;
		NullCheck(L_16);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_17;
		L_17 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_16, 1, NULL);
		NullCheck(L_17);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_18;
		L_18 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_17, 0, NULL);
		String_t* L_19;
		L_19 = ASN1Convert_ToOid_mBCE4FD3970C556190FB00A6AD409A6ABB4C627D8(L_18, NULL);
		V_0 = L_19;
		goto IL_0093;
	}

IL_0084:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_20 = V_9;
		NullCheck(L_20);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_21;
		L_21 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_20, 1, NULL);
		NullCheck(L_21);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_22;
		L_22 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_21, 0, NULL);
		V_1 = L_22;
	}

IL_0093:
	{
		int32_t L_23 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0099:
	{
		int32_t L_24 = V_8;
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_25 = ___0_sd;
		NullCheck(L_25);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_26;
		L_26 = SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline(L_25, NULL);
		NullCheck(L_26);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_27;
		L_27 = SignerInfo_get_AuthenticatedAttributes_m52500C3AC3793C89F0296BBEF64698F2ED20B8F4_inline(L_26, NULL);
		NullCheck(L_27);
		int32_t L_28;
		L_28 = VirtualFuncInvoker0< int32_t >::Invoke(22, L_27);
		if ((((int32_t)L_24) < ((int32_t)L_28)))
		{
			goto IL_000c;
		}
	}
	{
		String_t* L_29 = V_0;
		bool L_30;
		L_30 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_29, _stringLiteral6B43E74E9398DB441740D9E9B5A64DAF1F003FC3, NULL);
		if (!L_30)
		{
			goto IL_00bf;
		}
	}
	{
		return (bool)0;
	}

IL_00bf:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_31 = V_1;
		if (L_31)
		{
			goto IL_00c4;
		}
	}
	{
		return (bool)0;
	}

IL_00c4:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_32 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___1_calculatedMessageDigest;
		NullCheck(L_32);
		bool L_34;
		L_34 = ASN1_CompareValue_m7397F4657555C6ACAF6622DE143C89E9E7593554(L_32, L_33, NULL);
		if (L_34)
		{
			goto IL_00cf;
		}
	}
	{
		return (bool)0;
	}

IL_00cf:
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_35 = ___2_ha;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_35);
		il2cpp_codegen_runtime_class_init_inline(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		String_t* L_37;
		L_37 = CryptoConfig_MapNameToOID_mA0B81D5A916A8995E9D5131E21828309C783896D(L_36, NULL);
		V_2 = L_37;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_38 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114(L_38, (uint8_t)((int32_t)49), NULL);
		V_3 = L_38;
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_39 = ___0_sd;
		NullCheck(L_39);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_40;
		L_40 = SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline(L_39, NULL);
		NullCheck(L_40);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_41;
		L_41 = SignerInfo_get_AuthenticatedAttributes_m52500C3AC3793C89F0296BBEF64698F2ED20B8F4_inline(L_40, NULL);
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(36, L_41);
		V_11 = L_42;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0119:
			{
				{
					RuntimeObject* L_43 = V_11;
					V_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_43, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_44 = V_13;
					if (!L_44)
					{
						goto IL_012d;
					}
				}
				{
					RuntimeObject* L_45 = V_13;
					NullCheck(L_45);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_45);
				}

IL_012d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_010e_1;
			}

IL_00f7_1:
			{
				RuntimeObject* L_46 = V_11;
				NullCheck(L_46);
				RuntimeObject* L_47;
				L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				V_12 = ((ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)CastclassClass((RuntimeObject*)L_47, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var));
				ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_48 = V_3;
				ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_49 = V_12;
				NullCheck(L_48);
				ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_50;
				L_50 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_48, L_49, NULL);
			}

IL_010e_1:
			{
				RuntimeObject* L_51 = V_11;
				NullCheck(L_51);
				bool L_52;
				L_52 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_51);
				if (L_52)
				{
					goto IL_00f7_1;
				}
			}
			{
				goto IL_012e;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012e:
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_53 = ___2_ha;
		NullCheck(L_53);
		VirtualActionInvoker0::Invoke(18, L_53);
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_54 = ___2_ha;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_55 = V_3;
		NullCheck(L_55);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56;
		L_56 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4, L_55);
		NullCheck(L_54);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57;
		L_57 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_54, L_56, NULL);
		V_4 = L_57;
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_58 = ___0_sd;
		NullCheck(L_58);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_59;
		L_59 = SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline(L_58, NULL);
		NullCheck(L_59);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60;
		L_60 = SignerInfo_get_Signature_m6FA43681D705A53BA0857AF55624483A9AE94CA8(L_59, NULL);
		V_5 = L_60;
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_61 = ___0_sd;
		NullCheck(L_61);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_62;
		L_62 = SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline(L_61, NULL);
		NullCheck(L_62);
		String_t* L_63;
		L_63 = SignerInfo_get_IssuerName_m30347CCCF2ED4EF05618DD9AF4F71030E4A5A324_inline(L_62, NULL);
		V_6 = L_63;
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_64 = ___0_sd;
		NullCheck(L_64);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_65;
		L_65 = SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline(L_64, NULL);
		NullCheck(L_65);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66;
		L_66 = SignerInfo_get_SerialNumber_m6B855067A7C4CEF6758805C18E8417729BA62BD7(L_65, NULL);
		V_7 = L_66;
		X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* L_67 = __this->___coll;
		NullCheck(L_67);
		X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_68;
		L_68 = X509CertificateCollection_GetEnumerator_m602E7163983BF2C8F8B5C09652D5E74771969B56(L_67, NULL);
		V_14 = L_68;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01f1:
			{
				{
					X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_69 = V_14;
					V_13 = ((RuntimeObject*)IsInst((RuntimeObject*)L_69, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_70 = V_13;
					if (!L_70)
					{
						goto IL_0205;
					}
				}
				{
					RuntimeObject* L_71 = V_13;
					NullCheck(L_71);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_71);
				}

IL_0205:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_01e6_1;
			}

IL_0178_1:
			{
				X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_72 = V_14;
				NullCheck(L_72);
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_73;
				L_73 = X509CertificateEnumerator_get_Current_mA12833D7DAE7B1E3FB58D8596D266CA30A6BCD69(L_72, NULL);
				V_15 = L_73;
				String_t* L_74 = V_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_7;
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_76 = V_15;
				bool L_77;
				L_77 = AuthenticodeDeformatter_CompareIssuerSerial_m3EE0CDFEE995FAB1C96A8B358D15F1D5EB4F2413(__this, L_74, L_75, L_76, NULL);
				if (!L_77)
				{
					goto IL_01e6_1;
				}
			}
			{
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_78 = V_15;
				NullCheck(L_78);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79;
				L_79 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(7, L_78);
				NullCheck(L_79);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = V_5;
				NullCheck(L_80);
				if ((((int32_t)((int32_t)(((RuntimeArray*)L_79)->max_length))) <= ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_80)->max_length))>>3)))))
				{
					goto IL_01e6_1;
				}
			}
			{
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_81 = V_15;
				__this->___signingCertificate = L_81;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___signingCertificate), (void*)L_81);
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_82 = V_15;
				NullCheck(L_82);
				RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_83;
				L_83 = VirtualFuncInvoker0< RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* >::Invoke(8, L_82);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = V_4;
				String_t* L_85 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = V_5;
				NullCheck(((RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C*)CastclassSealed((RuntimeObject*)L_83, RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var)));
				bool L_87;
				L_87 = RSACryptoServiceProvider_VerifyHash_m8638C767565FA34974E2537EA44FBD30AE796ECE(((RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C*)CastclassSealed((RuntimeObject*)L_83, RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var)), L_84, L_85, L_86, NULL);
				if (!L_87)
				{
					goto IL_01e6_1;
				}
			}
			{
				X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* L_88 = __this->___signerChain;
				X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* L_89 = __this->___coll;
				NullCheck(L_88);
				X509Chain_LoadCertificates_m5EA569474D1608E1292B8CF39917841C20278825(L_88, L_89, NULL);
				X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* L_90 = __this->___signerChain;
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_91 = V_15;
				NullCheck(L_90);
				bool L_92;
				L_92 = X509Chain_Build_m664E7F7A48510E8F5D538A932D1D5E6EC0095C33(L_90, L_91, NULL);
				__this->___trustedRoot = L_92;
				goto IL_0206;
			}

IL_01e6_1:
			{
				X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_93 = V_14;
				NullCheck(L_93);
				bool L_94;
				L_94 = X509CertificateEnumerator_MoveNext_mAB0C32FB96AD574439B87E0E7D2553CBD7DF37C7(L_93, NULL);
				if (L_94)
				{
					goto IL_0178_1;
				}
			}
			{
				goto IL_0206;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0206:
	{
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_95 = ___0_sd;
		NullCheck(L_95);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_96;
		L_96 = SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline(L_95, NULL);
		NullCheck(L_96);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_97;
		L_97 = SignerInfo_get_UnauthenticatedAttributes_m718FE21E74C9898E7B4060A5BE1264C68D3171FA_inline(L_96, NULL);
		NullCheck(L_97);
		int32_t L_98;
		L_98 = VirtualFuncInvoker0< int32_t >::Invoke(22, L_97);
		if (L_98)
		{
			goto IL_0221;
		}
	}
	{
		__this->___trustedTimestampRoot = (bool)1;
		goto IL_0291;
	}

IL_0221:
	{
		V_16 = 0;
		goto IL_027d;
	}

IL_0226:
	{
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_99 = ___0_sd;
		NullCheck(L_99);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_100;
		L_100 = SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline(L_99, NULL);
		NullCheck(L_100);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_101;
		L_101 = SignerInfo_get_UnauthenticatedAttributes_m718FE21E74C9898E7B4060A5BE1264C68D3171FA_inline(L_100, NULL);
		int32_t L_102 = V_16;
		NullCheck(L_101);
		RuntimeObject* L_103;
		L_103 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(27, L_101, L_102);
		V_17 = ((ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)CastclassClass((RuntimeObject*)L_103, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var));
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_104 = V_17;
		NullCheck(L_104);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_105;
		L_105 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_104, 0, NULL);
		String_t* L_106;
		L_106 = ASN1Convert_ToOid_mBCE4FD3970C556190FB00A6AD409A6ABB4C627D8(L_105, NULL);
		bool L_107;
		L_107 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_106, _stringLiteral46042EA5661F92B06849C13B0ACFBB825CABF696, NULL);
		if (!L_107)
		{
			goto IL_0277;
		}
	}
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_108 = V_17;
		NullCheck(L_108);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_109;
		L_109 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_108, 1, NULL);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_110 = (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505*)il2cpp_codegen_object_new(SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505_il2cpp_TypeInfo_var);
		SignerInfo__ctor_mDB114E56EC2F9D5820B2F48A00CF14972B3BCCED(L_110, L_109, NULL);
		V_18 = L_110;
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_111 = V_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_5;
		bool L_113;
		L_113 = AuthenticodeDeformatter_VerifyCounterSignature_mCC865AF6E1CE3E6917FF161182D64EDCFE94DBCD(__this, L_111, L_112, NULL);
		__this->___trustedTimestampRoot = L_113;
	}

IL_0277:
	{
		int32_t L_114 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_027d:
	{
		int32_t L_115 = V_16;
		SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* L_116 = ___0_sd;
		NullCheck(L_116);
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_117;
		L_117 = SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline(L_116, NULL);
		NullCheck(L_117);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_118;
		L_118 = SignerInfo_get_UnauthenticatedAttributes_m718FE21E74C9898E7B4060A5BE1264C68D3171FA_inline(L_117, NULL);
		NullCheck(L_118);
		int32_t L_119;
		L_119 = VirtualFuncInvoker0< int32_t >::Invoke(22, L_118);
		if ((((int32_t)L_115) < ((int32_t)L_119)))
		{
			goto IL_0226;
		}
	}

IL_0291:
	{
		bool L_120 = __this->___trustedRoot;
		if (!L_120)
		{
			goto IL_02a0;
		}
	}
	{
		bool L_121 = __this->___trustedTimestampRoot;
		return L_121;
	}

IL_02a0:
	{
		return (bool)0;
	}
}
// Method Definition Index: 108175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AuthenticodeDeformatter_VerifyCounterSignature_mCC865AF6E1CE3E6917FF161182D64EDCFE94DBCD (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* ___0_cs, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_signature, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12C0D00507D5556F04E6640916CA4AAF502616A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral244C3A134C2AC035AB58EF188A0D0B4BA1CEFA31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38A29F0742E6F746BEAE82B7874F2F4A23D91741);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral416683232C98B46D3CB67F7E22FF1BE125144CB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE0379382C2810C1AED5C5B0021E7B8221741E17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD9C7849851C546319ED5DCC821A7B730DE8FF73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE64E6B72E9C44522A1D99B5C6A7F27EF33B44410);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_1 = NULL;
	String_t* V_2 = NULL;
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	String_t* V_7 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	int32_t V_9 = 0;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_10 = NULL;
	String_t* V_11 = NULL;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_14 = NULL;
	RuntimeObject* V_15 = NULL;
	X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* V_16 = NULL;
	X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* V_17 = NULL;
	RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* V_18 = NULL;
	bool V_19 = false;
	{
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_0 = ___0_cs;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = SignerInfo_get_Version_m0CFF6A1B831986936100F7F4A27D6386D65CFB37_inline(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		V_0 = (String_t*)NULL;
		V_1 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)NULL;
		V_9 = 0;
		goto IL_00ac;
	}

IL_0017:
	{
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_2 = ___0_cs;
		NullCheck(L_2);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3;
		L_3 = SignerInfo_get_AuthenticatedAttributes_m52500C3AC3793C89F0296BBEF64698F2ED20B8F4_inline(L_2, NULL);
		int32_t L_4 = V_9;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(27, L_3, L_4);
		V_10 = ((ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)CastclassClass((RuntimeObject*)L_5, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var));
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_6 = V_10;
		NullCheck(L_6);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_7;
		L_7 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_6, 0, NULL);
		String_t* L_8;
		L_8 = ASN1Convert_ToOid_mBCE4FD3970C556190FB00A6AD409A6ABB4C627D8(L_7, NULL);
		V_11 = L_8;
		String_t* L_9 = V_11;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral416683232C98B46D3CB67F7E22FF1BE125144CB7, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_11 = V_11;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral244C3A134C2AC035AB58EF188A0D0B4BA1CEFA31, NULL);
		if (L_12)
		{
			goto IL_007c;
		}
	}
	{
		String_t* L_13 = V_11;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral38A29F0742E6F746BEAE82B7874F2F4A23D91741, NULL);
		if (L_14)
		{
			goto IL_008d;
		}
	}
	{
		goto IL_00a6;
	}

IL_0066:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_15 = V_10;
		NullCheck(L_15);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_16;
		L_16 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_15, 1, NULL);
		NullCheck(L_16);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_17;
		L_17 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_16, 0, NULL);
		String_t* L_18;
		L_18 = ASN1Convert_ToOid_mBCE4FD3970C556190FB00A6AD409A6ABB4C627D8(L_17, NULL);
		V_0 = L_18;
		goto IL_00a6;
	}

IL_007c:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_19 = V_10;
		NullCheck(L_19);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_20;
		L_20 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_19, 1, NULL);
		NullCheck(L_20);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_21;
		L_21 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_20, 0, NULL);
		V_1 = L_21;
		goto IL_00a6;
	}

IL_008d:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_22 = V_10;
		NullCheck(L_22);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_23;
		L_23 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_22, 1, NULL);
		NullCheck(L_23);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_24;
		L_24 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_23, 0, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_25;
		L_25 = ASN1Convert_ToDateTime_m2D520694D39F2C86F72ECB24EF48F58B8C57AA75(L_24, NULL);
		__this->___timestamp = L_25;
	}

IL_00a6:
	{
		int32_t L_26 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00ac:
	{
		int32_t L_27 = V_9;
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_28 = ___0_cs;
		NullCheck(L_28);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_29;
		L_29 = SignerInfo_get_AuthenticatedAttributes_m52500C3AC3793C89F0296BBEF64698F2ED20B8F4_inline(L_28, NULL);
		NullCheck(L_29);
		int32_t L_30;
		L_30 = VirtualFuncInvoker0< int32_t >::Invoke(22, L_29);
		if ((((int32_t)L_27) < ((int32_t)L_30)))
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_31 = V_0;
		bool L_32;
		L_32 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_31, _stringLiteralE64E6B72E9C44522A1D99B5C6A7F27EF33B44410, NULL);
		if (!L_32)
		{
			goto IL_00cd;
		}
	}
	{
		return (bool)0;
	}

IL_00cd:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_33 = V_1;
		if (L_33)
		{
			goto IL_00d2;
		}
	}
	{
		return (bool)0;
	}

IL_00d2:
	{
		V_2 = (String_t*)NULL;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = ASN1_get_Length_mC03E8FE25B4BD7B97EA3D8591E01A457F491C7FE(L_34, NULL);
		V_12 = L_35;
		int32_t L_36 = V_12;
		if ((((int32_t)L_36) > ((int32_t)((int32_t)20))))
		{
			goto IL_00f0;
		}
	}
	{
		int32_t L_37 = V_12;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)16))))
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_38 = V_12;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)20))))
		{
			goto IL_010c;
		}
	}
	{
		goto IL_012a;
	}

IL_00f0:
	{
		int32_t L_39 = V_12;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)32))))
		{
			goto IL_0114;
		}
	}
	{
		int32_t L_40 = V_12;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)48))))
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_41 = V_12;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)64))))
		{
			goto IL_0124;
		}
	}
	{
		goto IL_012a;
	}

IL_0104:
	{
		V_2 = _stringLiteralCE0379382C2810C1AED5C5B0021E7B8221741E17;
		goto IL_012a;
	}

IL_010c:
	{
		V_2 = _stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B;
		goto IL_012a;
	}

IL_0114:
	{
		V_2 = _stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD;
		goto IL_012a;
	}

IL_011c:
	{
		V_2 = _stringLiteral12C0D00507D5556F04E6640916CA4AAF502616A1;
		goto IL_012a;
	}

IL_0124:
	{
		V_2 = _stringLiteralDD9C7849851C546319ED5DCC821A7B730DE8FF73;
	}

IL_012a:
	{
		String_t* L_42 = V_2;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_43;
		L_43 = HashAlgorithm_Create_mCCF58B59C5F93DE5220039DDDEE7486C8D104AFC(L_42, NULL);
		V_3 = L_43;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_44 = V_1;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_45 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___1_signature;
		NullCheck(L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47;
		L_47 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_45, L_46, NULL);
		NullCheck(L_44);
		bool L_48;
		L_48 = ASN1_CompareValue_m7397F4657555C6ACAF6622DE143C89E9E7593554(L_44, L_47, NULL);
		if (L_48)
		{
			goto IL_0142;
		}
	}
	{
		return (bool)0;
	}

IL_0142:
	{
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_49 = ___0_cs;
		NullCheck(L_49);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
		L_50 = SignerInfo_get_Signature_m6FA43681D705A53BA0857AF55624483A9AE94CA8(L_49, NULL);
		V_4 = L_50;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_51 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114(L_51, (uint8_t)((int32_t)49), NULL);
		V_5 = L_51;
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_52 = ___0_cs;
		NullCheck(L_52);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_53;
		L_53 = SignerInfo_get_AuthenticatedAttributes_m52500C3AC3793C89F0296BBEF64698F2ED20B8F4_inline(L_52, NULL);
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(36, L_53);
		V_13 = L_54;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0185:
			{
				{
					RuntimeObject* L_55 = V_13;
					V_15 = ((RuntimeObject*)IsInst((RuntimeObject*)L_55, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_56 = V_15;
					if (!L_56)
					{
						goto IL_0199;
					}
				}
				{
					RuntimeObject* L_57 = V_15;
					NullCheck(L_57);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_57);
				}

IL_0199:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_017a_1;
			}

IL_0162_1:
			{
				RuntimeObject* L_58 = V_13;
				NullCheck(L_58);
				RuntimeObject* L_59;
				L_59 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_58);
				V_14 = ((ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)CastclassClass((RuntimeObject*)L_59, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var));
				ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_60 = V_5;
				ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_61 = V_14;
				NullCheck(L_60);
				ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_62;
				L_62 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_60, L_61, NULL);
			}

IL_017a_1:
			{
				RuntimeObject* L_63 = V_13;
				NullCheck(L_63);
				bool L_64;
				L_64 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_63);
				if (L_64)
				{
					goto IL_0162_1;
				}
			}
			{
				goto IL_019a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_019a:
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_65 = V_3;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_66 = V_5;
		NullCheck(L_66);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67;
		L_67 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4, L_66);
		NullCheck(L_65);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68;
		L_68 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_65, L_67, NULL);
		V_6 = L_68;
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_69 = ___0_cs;
		NullCheck(L_69);
		String_t* L_70;
		L_70 = SignerInfo_get_IssuerName_m30347CCCF2ED4EF05618DD9AF4F71030E4A5A324_inline(L_69, NULL);
		V_7 = L_70;
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_71 = ___0_cs;
		NullCheck(L_71);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72;
		L_72 = SignerInfo_get_SerialNumber_m6B855067A7C4CEF6758805C18E8417729BA62BD7(L_71, NULL);
		V_8 = L_72;
		X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* L_73 = __this->___coll;
		NullCheck(L_73);
		X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_74;
		L_74 = X509CertificateCollection_GetEnumerator_m602E7163983BF2C8F8B5C09652D5E74771969B56(L_73, NULL);
		V_16 = L_74;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0249:
			{
				{
					X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_75 = V_16;
					V_15 = ((RuntimeObject*)IsInst((RuntimeObject*)L_75, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_76 = V_15;
					if (!L_76)
					{
						goto IL_025d;
					}
				}
				{
					RuntimeObject* L_77 = V_15;
					NullCheck(L_77);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_77);
				}

IL_025d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_023e_1;
			}

IL_01c8_1:
			{
				X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_78 = V_16;
				NullCheck(L_78);
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_79;
				L_79 = X509CertificateEnumerator_get_Current_mA12833D7DAE7B1E3FB58D8596D266CA30A6BCD69(L_78, NULL);
				V_17 = L_79;
				String_t* L_80 = V_7;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = V_8;
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_82 = V_17;
				bool L_83;
				L_83 = AuthenticodeDeformatter_CompareIssuerSerial_m3EE0CDFEE995FAB1C96A8B358D15F1D5EB4F2413(__this, L_80, L_81, L_82, NULL);
				if (!L_83)
				{
					goto IL_023e_1;
				}
			}
			{
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_84 = V_17;
				NullCheck(L_84);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85;
				L_85 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(7, L_84);
				NullCheck(L_85);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = V_4;
				NullCheck(L_86);
				if ((((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_86)->max_length)))))
				{
					goto IL_023e_1;
				}
			}
			{
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_87 = V_17;
				NullCheck(L_87);
				RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_88;
				L_88 = VirtualFuncInvoker0< RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* >::Invoke(8, L_87);
				V_18 = ((RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C*)CastclassSealed((RuntimeObject*)L_88, RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var));
				RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* L_89 = (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4*)il2cpp_codegen_object_new(RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4_il2cpp_TypeInfo_var);
				RSAManaged__ctor_m3DC50713376908C5D1B7EDE7662070DBC185597A(L_89, NULL);
				RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* L_90 = L_89;
				RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_91 = V_18;
				NullCheck(L_91);
				RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_92;
				L_92 = VirtualFuncInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF, bool >::Invoke(11, L_91, (bool)0);
				NullCheck(L_90);
				VirtualActionInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF >::Invoke(12, L_90, L_92);
				HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_93 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = V_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = V_4;
				il2cpp_codegen_runtime_class_init_inline(PKCS1_tAD4811B4E17753E9D9DD7927ECB247EBC70E6B79_il2cpp_TypeInfo_var);
				bool L_96;
				L_96 = PKCS1_Verify_v15_m00B9330B8AA9E623DF4EBFAEEE73BA062CC2BBA1(L_90, L_93, L_94, L_95, (bool)1, NULL);
				if (!L_96)
				{
					goto IL_023e_1;
				}
			}
			{
				X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* L_97 = __this->___timestampChain;
				X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* L_98 = __this->___coll;
				NullCheck(L_97);
				X509Chain_LoadCertificates_m5EA569474D1608E1292B8CF39917841C20278825(L_97, L_98, NULL);
				X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* L_99 = __this->___timestampChain;
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_100 = V_17;
				NullCheck(L_99);
				bool L_101;
				L_101 = X509Chain_Build_m664E7F7A48510E8F5D538A932D1D5E6EC0095C33(L_99, L_100, NULL);
				V_19 = L_101;
				goto IL_0260;
			}

IL_023e_1:
			{
				X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_102 = V_16;
				NullCheck(L_102);
				bool L_103;
				L_103 = X509CertificateEnumerator_MoveNext_mAB0C32FB96AD574439B87E0E7D2553CBD7DF37C7(L_102, NULL);
				if (L_103)
				{
					goto IL_01c8_1;
				}
			}
			{
				goto IL_025e;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_025e:
	{
		return (bool)0;
	}

IL_0260:
	{
		bool L_104 = V_19;
		return L_104;
	}
}
// Method Definition Index: 108176
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeDeformatter_Reset_mD15DE78C062103550A42BEE536E78F9526585B90 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___filename = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___filename), (void*)(String_t*)NULL);
		__this->___rawdata = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rawdata), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___entry = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entry), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___hash = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hash), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___signedHash = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signedHash), (void*)(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)NULL);
		__this->___signingCertificate = (X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signingCertificate), (void*)(X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356*)NULL);
		__this->___reason = (-1);
		__this->___trustedRoot = (bool)0;
		__this->___trustedTimestampRoot = (bool)0;
		X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* L_0 = __this->___signerChain;
		NullCheck(L_0);
		X509Chain_Reset_m55EC23EC313B197F439649DF941228B8D799645F(L_0, NULL);
		X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* L_1 = __this->___timestampChain;
		NullCheck(L_1);
		X509Chain_Reset_m55EC23EC313B197F439649DF941228B8D799645F(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue;
		__this->___timestamp = L_2;
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
// Method Definition Index: 108177
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, int32_t ___0_sign, uint32_t ___1_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___length = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		uint32_t L_0 = ___1_len;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___data = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data), (void*)L_1);
		uint32_t L_2 = ___1_len;
		__this->___length = L_2;
		return;
	}
}
// Method Definition Index: 108178
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m42B232CF6F76C15DAA3C02C3F5DE1B1F7C7BBC51 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___length = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data;
		NullCheck((RuntimeArray*)L_1);
		RuntimeObject* L_2;
		L_2 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_1, NULL);
		__this->___data = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data), (void*)((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var)));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = ___0_bi;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___length;
		__this->___length = L_4;
		return;
	}
}
// Method Definition Index: 108179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mD26E0224E82674AFA9A6E4BF4F0674BB0B7BECBF (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, uint32_t ___1_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		__this->___length = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		uint32_t L_0 = ___1_len;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___data = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data), (void*)L_1);
		V_0 = 0;
		goto IL_0031;
	}

IL_001d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___data;
		uint32_t L_3 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = ___0_bi;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data;
		uint32_t L_6 = V_0;
		NullCheck(L_5);
		uint32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_8);
		uint32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, 1));
	}

IL_0031:
	{
		uint32_t L_10 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11 = ___0_bi;
		NullCheck(L_11);
		uint32_t L_12 = L_11->___length;
		if ((!(((uint32_t)L_10) >= ((uint32_t)L_12))))
		{
			goto IL_001d;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13 = ___0_bi;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___length;
		__this->___length = L_14;
		return;
	}
}
// Method Definition Index: 108180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		__this->___length = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_inData;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0019;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		___0_inData = L_1;
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_inData;
		NullCheck(L_2);
		__this->___length = ((int32_t)((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))>>2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_inData;
		NullCheck(L_3);
		V_0 = ((int32_t)(((int32_t)(((RuntimeArray*)L_3)->max_length))&3));
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_5 = __this->___length;
		__this->___length = ((int32_t)il2cpp_codegen_add((int32_t)L_5, 1));
	}

IL_003b:
	{
		uint32_t L_6 = __this->___length;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___data = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_inData;
		NullCheck(L_8);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), 1));
		V_2 = 0;
		goto IL_0083;
	}

IL_0056:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = __this->___data;
		int32_t L_10 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_inData;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 3));
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_inData;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_16, 2));
		uint8_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___0_inData;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___0_inData;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_14<<((int32_t)24)))|((int32_t)((int32_t)L_18<<((int32_t)16)))))|((int32_t)((int32_t)L_22<<8))))|(int32_t)L_26)));
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_27, 4));
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0083:
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) >= ((int32_t)3)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_30 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_30, 1)))
		{
			case 0:
			{
				goto IL_009d;
			}
			case 1:
			{
				goto IL_00b1;
			}
			case 2:
			{
				goto IL_00cb;
			}
		}
	}
	{
		goto IL_00ea;
	}

IL_009d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->___data;
		uint32_t L_32 = __this->___length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___0_inData;
		NullCheck(L_33);
		int32_t L_34 = 0;
		uint8_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_32, 1))), (uint32_t)L_35);
		goto IL_00ea;
	}

IL_00b1:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = __this->___data;
		uint32_t L_37 = __this->___length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___0_inData;
		NullCheck(L_38);
		int32_t L_39 = 0;
		uint8_t L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___0_inData;
		NullCheck(L_41);
		int32_t L_42 = 1;
		uint8_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_37, 1))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_40<<8))|(int32_t)L_43)));
		goto IL_00ea;
	}

IL_00cb:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = __this->___data;
		uint32_t L_45 = __this->___length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___0_inData;
		NullCheck(L_46);
		int32_t L_47 = 0;
		uint8_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = ___0_inData;
		NullCheck(L_49);
		int32_t L_50 = 1;
		uint8_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___0_inData;
		NullCheck(L_52);
		int32_t L_53 = 2;
		uint8_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_45, 1))), (uint32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_48<<((int32_t)16)))|((int32_t)((int32_t)L_51<<8))))|(int32_t)L_54)));
	}

IL_00ea:
	{
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(__this, NULL);
		return;
	}
}
// Method Definition Index: 108181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m9AFFDE2505C2B712D5F89EF501A2D163B7855E02 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___0_ui, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___length = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		uint32_t L_2 = ___0_ui;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_2);
		__this->___data = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data), (void*)L_1);
		return;
	}
}
// Method Definition Index: 108182
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Implicit_m953448132663D58B45AF679B003D0BBC92FEBB49 (uint32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_value;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m9AFFDE2505C2B712D5F89EF501A2D163B7855E02(L_1, L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 108183
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6 (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_value;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2 = ___0_value;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m9AFFDE2505C2B712D5F89EF501A2D163B7855E02(L_3, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 108184
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Subtraction_m2017F0245B56CE2D6245757B43DDA997625581CA (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___1_bi2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BigInteger_op_Equality_m3D8FFD303A14BBC17B7423CE9EEC513700BF921F(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___0_bi1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m42B232CF6F76C15DAA3C02C3F5DE1B1F7C7BBC51(L_3, L_2, NULL);
		return L_3;
	}

IL_0010:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = ___0_bi1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BigInteger_op_Equality_m3D8FFD303A14BBC17B7423CE9EEC513700BF921F(L_4, 0, NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_6 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F711231B5142B5CF16AF94E2BBD10112DFDFD46)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Subtraction_m2017F0245B56CE2D6245757B43DDA997625581CA_RuntimeMethod_var)));
	}

IL_0024:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ___0_bi1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = ___1_bi2;
		int32_t L_9;
		L_9 = Kernel_Compare_mB84E41B7046C951E360FB9DA11A4BFA5A0E66611(L_7, L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (-1))))
		{
			case 0:
			{
				goto IL_0051;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0049;
			}
		}
	}
	{
		goto IL_005c;
	}

IL_0042:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11;
		L_11 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(0, NULL);
		return L_11;
	}

IL_0049:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_12 = ___0_bi1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13 = ___1_bi2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_14;
		L_14 = Kernel_Subtract_mEA9B4A2546B4EBBEF7FAB54CD8F33F2283E08A5C(L_12, L_13, NULL);
		return L_14;
	}

IL_0051:
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_15 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F711231B5142B5CF16AF94E2BBD10112DFDFD46)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Subtraction_m2017F0245B56CE2D6245757B43DDA997625581CA_RuntimeMethod_var)));
	}

IL_005c:
	{
		Exception_t* L_16 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Subtraction_m2017F0245B56CE2D6245757B43DDA997625581CA_RuntimeMethod_var)));
	}
}
// Method Definition Index: 108185
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BigInteger_op_Modulus_m614BB6B5B40C256436BB94EA2B8391C298260F47 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, uint32_t ___1_ui, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi;
		uint32_t L_1 = ___1_ui;
		uint32_t L_2;
		L_2 = Kernel_DwordMod_m1B3830BC4779D5B4BEBC37E1BF320F500C20CC0E(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 108186
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Modulus_m5AC5D8DD148908E30BA188BC50E6B2F0E75545CD (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___1_bi2;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_2;
		L_2 = Kernel_multiByteDivide_m32F2ED53F2DEC2DE630E0BDD5AA4A4BC462CD7EF(L_0, L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 108187
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Division_m440FC499D6242819F93B60269F50546F85790C6A (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___1_bi2;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_2;
		L_2 = Kernel_multiByteDivide_m32F2ED53F2DEC2DE630E0BDD5AA4A4BC462CD7EF(L_0, L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 108188
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Multiply_mEDE5A32D2745927133F814E397EA4E628A60C549 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BigInteger_op_Equality_m3D8FFD303A14BBC17B7423CE9EEC513700BF921F(L_0, 0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___1_bi2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigInteger_op_Equality_m3D8FFD303A14BBC17B7423CE9EEC513700BF921F(L_2, 0, NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4;
		L_4 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(0, NULL);
		return L_4;
	}

IL_0019:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = ___0_bi1;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data;
		NullCheck(L_6);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ___0_bi1;
		NullCheck(L_7);
		uint32_t L_8 = L_7->___length;
		if ((((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) >= ((int64_t)((int64_t)(uint64_t)((uint32_t)L_8)))))
		{
			goto IL_0036;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_9 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5F6CA27A9C002B63386F4AB67AC0CE31874F8329)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Multiply_mEDE5A32D2745927133F814E397EA4E628A60C549_RuntimeMethod_var)));
	}

IL_0036:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10 = ___1_bi2;
		NullCheck(L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___data;
		NullCheck(L_11);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_12 = ___1_bi2;
		NullCheck(L_12);
		uint32_t L_13 = L_12->___length;
		if ((((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))) >= ((int64_t)((int64_t)(uint64_t)((uint32_t)L_13)))))
		{
			goto IL_0053;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_14 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral387F7E2809830195F02BCCAE39C49D389AC99CAA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_op_Multiply_mEDE5A32D2745927133F814E397EA4E628A60C549_RuntimeMethod_var)));
	}

IL_0053:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_15 = ___0_bi1;
		NullCheck(L_15);
		uint32_t L_16 = L_15->___length;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_17 = ___1_bi2;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___length;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_19, 1, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_18)), NULL);
		V_0 = L_19;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_20 = ___0_bi1;
		NullCheck(L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = L_20->___data;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_22 = ___0_bi1;
		NullCheck(L_22);
		uint32_t L_23 = L_22->___length;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_24 = ___1_bi2;
		NullCheck(L_24);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = L_24->___data;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_26 = ___1_bi2;
		NullCheck(L_26);
		uint32_t L_27 = L_26->___length;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_0;
		NullCheck(L_28);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = L_28->___data;
		Kernel_Multiply_mF725E33ADE4B9849626BB9F011C45E1EE7A5FBB7(L_21, 0, L_23, L_25, 0, L_27, L_29, 0, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30 = V_0;
		NullCheck(L_30);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_30, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = V_0;
		return L_31;
	}
}
// Method Definition Index: 108189
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_LeftShift_m0450D740864BE2C62DFC1A0777498E518A2E6A73 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, int32_t ___1_shiftVal, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi1;
		int32_t L_1 = ___1_shiftVal;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2;
		L_2 = Kernel_LeftShift_mE40ED9013AB88A02A79C7640DA3FA1F320ED86F0(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 108190
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_RightShift_m9ABBE9016A201283D5DF10CD67D5302510F86224 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, int32_t ___1_shiftVal, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi1;
		int32_t L_1 = ___1_shiftVal;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2;
		L_2 = Kernel_RightShift_m3EF3092A11D1C9680419B275A8349E56CC4BEC5C(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 108191
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* BigInteger_get_Rng_m200DBFEDB3D711658BDB3796FE3B805956058A07 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* L_0 = ((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___rng;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* L_1;
		L_1 = RandomNumberGenerator_Create_m10E13D4B5CF93E2EBB1BE9226488C919FFAC3340(NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___rng = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___rng), (void*)L_1);
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* L_2 = ((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___rng;
		return L_2;
	}
}
// Method Definition Index: 108192
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_GenerateRandom_m01DB8F5756F75D8B9810F25D871EC04D41069E4E (int32_t ___0_bits, RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* ___1_rng, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	uint32_t V_4 = 0;
	{
		int32_t L_0 = ___0_bits;
		V_0 = ((int32_t)(L_0>>5));
		int32_t L_1 = ___0_bits;
		V_1 = ((int32_t)(L_1&((int32_t)31)));
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0010:
	{
		int32_t L_4 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_5, 1, ((int32_t)il2cpp_codegen_add(L_4, 1)), NULL);
		V_2 = L_5;
		int32_t L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_6<<2)));
		V_3 = L_7;
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* L_8 = ___1_rng;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_3;
		NullCheck(L_8);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6, L_8, L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11 = V_2;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___data;
		int32_t L_13 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_10, 0, (RuntimeArray*)L_12, 0, ((int32_t)(L_13<<2)), NULL);
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_15 = V_1;
		V_4 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_15, 1))&((int32_t)31)))));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_16 = V_2;
		NullCheck(L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16->___data;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		uint32_t* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_18, 1)))));
		int32_t L_20 = *((uint32_t*)L_19);
		uint32_t L_21 = V_4;
		*((int32_t*)L_19) = (int32_t)((int32_t)(L_20|(int32_t)L_21));
		int32_t L_22 = V_1;
		V_4 = ((int32_t)((uint32_t)(-1)>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_22))&((int32_t)31)))));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_23 = V_2;
		NullCheck(L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = L_23->___data;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		uint32_t* L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_25, 1)))));
		int32_t L_27 = *((uint32_t*)L_26);
		uint32_t L_28 = V_4;
		*((int32_t*)L_26) = (int32_t)((int32_t)(L_27&(int32_t)L_28));
		goto IL_0094;
	}

IL_007d:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_29 = V_2;
		NullCheck(L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = L_29->___data;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		uint32_t* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_31, 1)))));
		int32_t L_33 = *((uint32_t*)L_32);
		*((int32_t*)L_32) = (int32_t)((int32_t)(L_33|((int32_t)-2147483648LL)));
	}

IL_0094:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_34 = V_2;
		NullCheck(L_34);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_34, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_35 = V_2;
		return L_35;
	}
}
// Method Definition Index: 108193
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_GenerateRandom_m5350D6E9C3AAE96153C46D80880F1CE43BB9DA9C (int32_t ___0_bits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_bits;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* L_1;
		L_1 = BigInteger_get_Rng_m200DBFEDB3D711658BDB3796FE3B805956058A07(NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2;
		L_2 = BigInteger_GenerateRandom_m01DB8F5756F75D8B9810F25D871EC04D41069E4E(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 108194
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data;
		uint32_t L_1 = __this->___length;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1));
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		V_1 = ((int32_t)-2147483648LL);
		V_2 = ((int32_t)32);
		goto IL_0029;
	}

IL_0021:
	{
		uint32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1));
		uint32_t L_5 = V_1;
		V_1 = ((int32_t)((uint32_t)L_5>>1));
	}

IL_0029:
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) > ((uint32_t)0))))
		{
			goto IL_0032;
		}
	}
	{
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_1;
		if (!((int32_t)((int32_t)L_7&(int32_t)L_8)))
		{
			goto IL_0021;
		}
	}

IL_0032:
	{
		uint32_t L_9 = V_2;
		uint32_t L_10 = __this->___length;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, ((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, 1))<<5))));
		uint32_t L_11 = V_2;
		return L_11;
	}
}
// Method Definition Index: 108195
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, int32_t ___0_bitNum, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint32_t V_2 = 0;
	{
		int32_t L_0 = ___0_bitNum;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_1 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32C78D941B97C930AACD7D6E8DB23C25EEB4F0DC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2 = ___0_bitNum;
		V_0 = ((int32_t)((uint32_t)L_2>>5));
		int32_t L_3 = ___0_bitNum;
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)(L_3&((int32_t)31))));
		uint8_t L_4 = V_1;
		V_2 = ((int32_t)(1<<((int32_t)((int32_t)L_4&((int32_t)31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___data;
		uint32_t L_6 = V_0;
		NullCheck(L_5);
		uint32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		uint32_t L_9 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___data;
		uint32_t L_11 = V_0;
		NullCheck(L_10);
		uint32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		return (bool)((((int32_t)((int32_t)((int32_t)L_8|(int32_t)L_9))) == ((int32_t)L_13))? 1 : 0);
	}
}
// Method Definition Index: 108196
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_SetBit_m3E67DE35B0E691FCB886C60252CAAFC3FCB92A39 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___0_bitNum, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_bitNum;
		BigInteger_SetBit_m60B275C4579C541B806FECB49EBBDA1579DA70BE(__this, L_0, (bool)1, NULL);
		return;
	}
}
// Method Definition Index: 108197
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_SetBit_m60B275C4579C541B806FECB49EBBDA1579DA70BE (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___0_bitNum, bool ___1_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___0_bitNum;
		V_0 = ((int32_t)((uint32_t)L_0>>5));
		uint32_t L_1 = V_0;
		uint32_t L_2 = __this->___length;
		if ((!(((uint32_t)L_1) < ((uint32_t)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_3 = ___0_bitNum;
		V_1 = ((int32_t)(1<<((int32_t)(((int32_t)((int32_t)L_3&((int32_t)31)))&((int32_t)31)))));
		bool L_4 = ___1_value;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___data;
		uint32_t L_6 = V_0;
		NullCheck(L_5);
		uint32_t* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		int32_t L_8 = *((uint32_t*)L_7);
		uint32_t L_9 = V_1;
		*((int32_t*)L_7) = (int32_t)((int32_t)(L_8|(int32_t)L_9));
		return;
	}

IL_002c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___data;
		uint32_t L_11 = V_0;
		NullCheck(L_10);
		uint32_t* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)));
		int32_t L_13 = *((uint32_t*)L_12);
		uint32_t L_14 = V_1;
		*((int32_t*)L_12) = (int32_t)((int32_t)(L_13&((~((int32_t)L_14)))));
	}

IL_003e:
	{
		return;
	}
}
// Method Definition Index: 108198
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_LowestSetBit_m6443AF5F1F7C864A65365DD731FC7DAC1495DE20 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BigInteger_op_Equality_m3D8FFD303A14BBC17B7423CE9EEC513700BF921F(__this, 0, NULL);
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		V_0 = 0;
		goto IL_0013;
	}

IL_000f:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0013:
	{
		int32_t L_2 = V_0;
		bool L_3;
		L_3 = BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 108199
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BigInteger_op_Equality_m3D8FFD303A14BBC17B7423CE9EEC513700BF921F(__this, 0, NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		return L_1;
	}

IL_0010:
	{
		int32_t L_2;
		L_2 = BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551(__this, NULL);
		int32_t L_3 = L_2;
		V_0 = ((int32_t)(L_3>>3));
		if (!((int32_t)(L_3&7)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0022:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_1 = L_6;
		int32_t L_7 = V_0;
		V_2 = ((int32_t)(L_7&3));
		int32_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0032;
		}
	}
	{
		V_2 = 4;
	}

IL_0032:
	{
		V_3 = 0;
		uint32_t L_9 = __this->___length;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, 1));
		goto IL_007e;
	}

IL_0040:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___data;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		int32_t L_14 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_006d;
	}

IL_0052:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		int32_t L_16 = V_3;
		int32_t L_17 = V_6;
		uint32_t L_18 = V_5;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_16, L_17))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_18&((int32_t)255)))));
		uint32_t L_19 = V_5;
		V_5 = ((int32_t)((uint32_t)L_19>>8));
		int32_t L_20 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
	}

IL_006d:
	{
		int32_t L_21 = V_6;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
		V_2 = 4;
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
	}

IL_007e:
	{
		int32_t L_25 = V_4;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_1;
		return L_26;
	}
}
// Method Definition Index: 108200
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_m3D8FFD303A14BBC17B7423CE9EEC513700BF921F (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, uint32_t ___1_ui, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi1;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___0_bi1;
		NullCheck(L_2);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_2, NULL);
	}

IL_000f:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = ___0_bi1;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___length;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0024;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = ___0_bi1;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data;
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		uint32_t L_9 = ___1_ui;
		return (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
// Method Definition Index: 108201
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_mDDDA5BA9BF336633ADBD56F97601ACF81C0133FF (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, uint32_t ___1_ui, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi1;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___0_bi1;
		NullCheck(L_2);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_2, NULL);
	}

IL_000f:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = ___0_bi1;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___length;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = ___0_bi1;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data;
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		uint32_t L_9 = ___1_ui;
		return (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0027:
	{
		return (bool)1;
	}
}
// Method Definition Index: 108202
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mECF42AF9013ADE8D8274E7485C7BA23E4BFFEC60 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___1_bi2;
		if ((!(((RuntimeObject*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_0) == ((RuntimeObject*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___0_bi1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigInteger_op_Equality_mECF42AF9013ADE8D8274E7485C7BA23E4BFFEC60((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, L_2, NULL);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = ___1_bi2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BigInteger_op_Equality_mECF42AF9013ADE8D8274E7485C7BA23E4BFFEC60((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, L_4, NULL);
		if (!L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (bool)0;
	}

IL_001a:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = ___0_bi1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ___1_bi2;
		int32_t L_8;
		L_8 = Kernel_Compare_mB84E41B7046C951E360FB9DA11A4BFA5A0E66611(L_6, L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 108203
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_m2AB984FD1240CAD1831070279D41DD97EB632DC7 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___1_bi2;
		if ((!(((RuntimeObject*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_0) == ((RuntimeObject*)(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)0;
	}

IL_0006:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___0_bi1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigInteger_op_Equality_mECF42AF9013ADE8D8274E7485C7BA23E4BFFEC60((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, L_2, NULL);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = ___1_bi2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BigInteger_op_Equality_mECF42AF9013ADE8D8274E7485C7BA23E4BFFEC60((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, L_4, NULL);
		if (!L_5)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (bool)1;
	}

IL_001a:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = ___0_bi1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ___1_bi2;
		int32_t L_8;
		L_8 = Kernel_Compare_mB84E41B7046C951E360FB9DA11A4BFA5A0E66611(L_6, L_7, NULL);
		return (bool)((!(((uint32_t)L_8) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 108204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThan_m4102428737E020DEF999F9A2320F2C8962C4947C (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___1_bi2;
		int32_t L_2;
		L_2 = Kernel_Compare_mB84E41B7046C951E360FB9DA11A4BFA5A0E66611(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 108205
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m5334E5102F45FBABAB12A790BB67FEC735A62C25 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___1_bi2;
		int32_t L_2;
		L_2 = Kernel_Compare_mB84E41B7046C951E360FB9DA11A4BFA5A0E66611(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 108206
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_m84F5223CE33D7E4B977B30D32E87AD7D5051DB4F (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___1_bi2;
		int32_t L_2;
		L_2 = Kernel_Compare_mB84E41B7046C951E360FB9DA11A4BFA5A0E66611(L_0, L_1, NULL);
		return (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 108207
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThanOrEqual_mFB395E4E35C3E672EB2B1D485FA9E621D769D68A (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___1_bi2;
		int32_t L_2;
		L_2 = Kernel_Compare_mB84E41B7046C951E360FB9DA11A4BFA5A0E66611(L_0, L_1, NULL);
		return (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 108208
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m02A324A776BF09756B1BB3B6BFF6DBD7EA98852D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___0_radix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB700205FF65F52AA739D18D7B8B0C06536C7C99);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_radix;
		String_t* L_1;
		L_1 = BigInteger_ToString_m007BCE771B1D0C61761EF1F3D98B8C508EC6DF9D(__this, L_0, _stringLiteralCB700205FF65F52AA739D18D7B8B0C06536C7C99, NULL);
		return L_1;
	}
}
// Method Definition Index: 108209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m007BCE771B1D0C61761EF1F3D98B8C508EC6DF9D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, uint32_t ___0_radix, String_t* ___1_characterSet, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_1 = NULL;
	uint32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		String_t* L_0 = ___1_characterSet;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		uint32_t L_2 = ___0_radix;
		if ((((int64_t)((int64_t)L_1)) >= ((int64_t)((int64_t)(uint64_t)((uint32_t)L_2)))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B8103E2B806098B7F46CF08C6D72C8755B125FC)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral320DA2233DCCC5359A1A5EA863847EB34DE6BD1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_ToString_m007BCE771B1D0C61761EF1F3D98B8C508EC6DF9D_RuntimeMethod_var)));
	}

IL_001b:
	{
		uint32_t L_4 = ___0_radix;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7574434A66B8CE95810DD546D39A94210FA34C93)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80581756DEDCE88293CE555E5A87B00CD4001098)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BigInteger_ToString_m007BCE771B1D0C61761EF1F3D98B8C508EC6DF9D_RuntimeMethod_var)));
	}

IL_002f:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BigInteger_op_Equality_m3D8FFD303A14BBC17B7423CE9EEC513700BF921F(__this, 0, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		return _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
	}

IL_003e:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = BigInteger_op_Equality_m3D8FFD303A14BBC17B7423CE9EEC513700BF921F(__this, 1, NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		return _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
	}

IL_004d:
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m42B232CF6F76C15DAA3C02C3F5DE1B1F7C7BBC51(L_8, __this, NULL);
		V_1 = L_8;
		goto IL_007a;
	}

IL_005c:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = V_1;
		uint32_t L_10 = ___0_radix;
		uint32_t L_11;
		L_11 = Kernel_SingleByteDivideInPlace_mD9E56BF746E318BEDECEC4280A829A63EAD28F09(L_9, L_10, NULL);
		V_2 = L_11;
		String_t* L_12 = ___1_characterSet;
		uint32_t L_13 = V_2;
		NullCheck(L_12);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, L_13, NULL);
		V_3 = L_14;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		String_t* L_15;
		L_15 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		String_t* L_16 = V_0;
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_15, L_16, NULL);
		V_0 = L_17;
	}

IL_007a:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = BigInteger_op_Inequality_mDDDA5BA9BF336633ADBD56F97601ACF81C0133FF(L_18, 0, NULL);
		if (L_19)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_20 = V_0;
		return L_20;
	}
}
// Method Definition Index: 108210
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) 
{
	{
		goto IL_0010;
	}

IL_0002:
	{
		uint32_t L_0 = __this->___length;
		__this->___length = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1));
	}

IL_0010:
	{
		uint32_t L_1 = __this->___length;
		if ((!(((uint32_t)L_1) > ((uint32_t)0))))
		{
			goto IL_002a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___data;
		uint32_t L_3 = __this->___length;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 1));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_0002;
		}
	}

IL_002a:
	{
		uint32_t L_6 = __this->___length;
		if (L_6)
		{
			goto IL_0040;
		}
	}
	{
		uint32_t L_7 = __this->___length;
		__this->___length = ((int32_t)il2cpp_codegen_add((int32_t)L_7, 1));
	}

IL_0040:
	{
		return;
	}
}
// Method Definition Index: 108211
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Clear_m1BFEB305789595395EEB68C5150A5331E0207323 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)0);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		uint32_t L_4 = __this->___length;
		if ((((int64_t)((int64_t)L_3)) < ((int64_t)((int64_t)(uint64_t)((uint32_t)L_4)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 108212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_GetHashCode_mEAB87BB7A4882FEAF1D7D65B6713E31C0A6F07EE (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0015;
	}

IL_0006:
	{
		uint32_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___data;
		uint32_t L_2 = V_1;
		NullCheck(L_1);
		uint32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int32_t)((int32_t)L_0^(int32_t)L_4));
		uint32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, 1));
	}

IL_0015:
	{
		uint32_t L_6 = V_1;
		uint32_t L_7 = __this->___length;
		if ((!(((uint32_t)L_6) >= ((uint32_t)L_7))))
		{
			goto IL_0006;
		}
	}
	{
		uint32_t L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 108213
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_m80A151A5EF5ABF1F5FF16660E78042B85241E3E9 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = BigInteger_ToString_m02A324A776BF09756B1BB3B6BFF6DBD7EA98852D(__this, ((int32_t)10), NULL);
		return L_0;
	}
}
// Method Definition Index: 108214
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Equals_mEC32AE6F06C0C113291158D434ED2A92B07E6453 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_o;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_o;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_defaults.int32_class)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_2 = ___0_o;
		if ((((int32_t)((*(int32_t*)UnBox(L_2, il2cpp_defaults.int32_class)))) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___0_o;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = BigInteger_op_Equality_m3D8FFD303A14BBC17B7423CE9EEC513700BF921F(__this, ((*(uint32_t*)UnBox(L_3, il2cpp_defaults.uint32_class))), NULL);
		return L_4;
	}

IL_0023:
	{
		return (bool)0;
	}

IL_0025:
	{
		RuntimeObject* L_5 = ___0_o;
		V_0 = ((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)IsInstClass((RuntimeObject*)L_5, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = BigInteger_op_Equality_mECF42AF9013ADE8D8274E7485C7BA23E4BFFEC60(L_6, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = V_0;
		int32_t L_9;
		L_9 = Kernel_Compare_mB84E41B7046C951E360FB9DA11A4BFA5A0E66611(__this, L_8, NULL);
		return (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 108215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_ModInverse_m7E87B8BE468B504ED2BD533629D4E9089E5768E5 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_modulus, const RuntimeMethod* method) 
{
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_modulus;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1;
		L_1 = Kernel_modInverse_m9B85AEE3C824216F039E1B5D7EFAE04F71D2A1BB(__this, L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 108216
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_exp, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___1_n;
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* L_1 = (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF*)il2cpp_codegen_object_new(ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var);
		ModulusRing__ctor_mA5C74C954C8ABD6F9843F41BBF197F7F00F8D00A(L_1, L_0, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___0_exp;
		NullCheck(L_1);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3;
		L_3 = ModulusRing_Pow_mE14DBD510D57E2A1CF1BFB2B237439A8EB08A418(L_1, __this, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 108217
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_GeneratePseudoPrime_m8DFE2FCECB4B1D3671A53358F702F00F359EFCCE (int32_t ___0_bits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175* L_0 = (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175*)il2cpp_codegen_object_new(SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175_il2cpp_TypeInfo_var);
		SequentialSearchPrimeGeneratorBase__ctor_mFE1A43FA14390E871ED0C9025B57B84D9A7AA754(L_0, NULL);
		int32_t L_1 = ___0_bits;
		NullCheck(L_0);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2;
		L_2 = VirtualFuncInvoker1< BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, int32_t >::Invoke(7, L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 108218
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger_Incr2_mE5DCADCC1DEDD4F3E48E326940D3C926E1A37808 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___data;
		NullCheck(L_0);
		uint32_t* L_1 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_2 = *((uint32_t*)L_1);
		*((int32_t*)L_1) = (int32_t)((int32_t)il2cpp_codegen_add(L_2, 2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___data;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((!(((uint32_t)L_5) < ((uint32_t)2))))
		{
			goto IL_006b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->___data;
		int32_t L_7 = V_0;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		V_0 = L_8;
		NullCheck(L_6);
		uint32_t* L_9 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)));
		int32_t L_10 = *((uint32_t*)L_9);
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, 1));
		goto IL_0046;
	}

IL_0035:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = __this->___data;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		uint32_t* L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)));
		int32_t L_14 = *((uint32_t*)L_13);
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0046:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->___data;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint32_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if (!L_19)
		{
			goto IL_0035;
		}
	}
	{
		uint32_t L_20 = __this->___length;
		int32_t L_21 = V_0;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_006b;
		}
	}
	{
		uint32_t L_22 = __this->___length;
		__this->___length = ((int32_t)il2cpp_codegen_add((int32_t)L_22, 1));
	}

IL_006b:
	{
		return;
	}
}
// Method Definition Index: 108219
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__cctor_mFA00C7DFC5EA828985D4858C25534222BC0F94B7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____25E3E48132FBDBE9B7C0C6C54D7C10A5DE12A105AA3E5DE2A0DC808BF245B7A5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)783));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t55FC1D237A87005A39D205736AE27F4711007813____25E3E48132FBDBE9B7C0C6C54D7C10A5DE12A105AA3E5DE2A0DC808BF245B7A5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___smallPrimes = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___smallPrimes), (void*)L_1);
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
// Method Definition Index: 108220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulusRing__ctor_mA5C74C954C8ABD6F9843F41BBF197F7F00F8D00A (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_modulus, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_modulus;
		__this->___mod = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mod), (void*)L_0);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = __this->___mod;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___length;
		V_0 = ((int32_t)((int32_t)L_2<<1));
		uint32_t L_3 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_4, 1, ((int32_t)il2cpp_codegen_add((int32_t)L_3, 1)), NULL);
		__this->___constant = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___constant), (void*)L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = __this->___constant;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data;
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint32_t)1);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = __this->___constant;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = __this->___mod;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10;
		L_10 = BigInteger_op_Division_m440FC499D6242819F93B60269F50546F85790C6A(L_8, L_9, NULL);
		__this->___constant = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___constant), (void*)L_10);
		return;
	}
}
// Method Definition Index: 108221
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModulusRing_BarrettReduction_mA753465B3A0DC2E9DEC32D345C24DCA1B56115D5 (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_4 = NULL;
	uint32_t V_5 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_7 = NULL;
	uint32_t G_B7_0 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = __this->___mod;
		V_0 = L_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = V_0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___length;
		V_1 = L_2;
		uint32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, 1));
		uint32_t L_4 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = ___0_x;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___length;
		uint32_t L_7 = V_1;
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = ___0_x;
		NullCheck(L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___data;
		NullCheck(L_9);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10 = ___0_x;
		NullCheck(L_10);
		uint32_t L_11 = L_10->___length;
		if ((((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))) >= ((int64_t)((int64_t)(uint64_t)((uint32_t)L_11)))))
		{
			goto IL_003d;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_12 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD50495FC91A1C7AEC9A992D5D9500D59B15669C1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModulusRing_BarrettReduction_mA753465B3A0DC2E9DEC32D345C24DCA1B56115D5_RuntimeMethod_var)));
	}

IL_003d:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13 = ___0_x;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___length;
		uint32_t L_15 = V_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_16 = __this->___constant;
		NullCheck(L_16);
		uint32_t L_17 = L_16->___length;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_18 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_18, 1, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), (int32_t)L_17)), NULL);
		V_4 = L_18;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19 = ___0_x;
		NullCheck(L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = L_19->___data;
		uint32_t L_21 = V_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_22 = ___0_x;
		NullCheck(L_22);
		uint32_t L_23 = L_22->___length;
		uint32_t L_24 = V_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_25 = __this->___constant;
		NullCheck(L_25);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = L_25->___data;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = __this->___constant;
		NullCheck(L_27);
		uint32_t L_28 = L_27->___length;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_29 = V_4;
		NullCheck(L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = L_29->___data;
		Kernel_Multiply_mF725E33ADE4B9849626BB9F011C45E1EE7A5FBB7(L_20, L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24)), L_26, 0, L_28, L_30, 0, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ___0_x;
		NullCheck(L_31);
		uint32_t L_32 = L_31->___length;
		uint32_t L_33 = V_2;
		if ((!(((uint32_t)L_32) <= ((uint32_t)L_33))))
		{
			goto IL_009d;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_34 = ___0_x;
		NullCheck(L_34);
		uint32_t L_35 = L_34->___length;
		G_B7_0 = L_35;
		goto IL_009e;
	}

IL_009d:
	{
		uint32_t L_36 = V_2;
		G_B7_0 = L_36;
	}

IL_009e:
	{
		V_5 = G_B7_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_37 = ___0_x;
		uint32_t L_38 = V_5;
		NullCheck(L_37);
		L_37->___length = L_38;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_39 = ___0_x;
		NullCheck(L_39);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_39, NULL);
		uint32_t L_40 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_41 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_41, 1, L_40, NULL);
		V_6 = L_41;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_42 = V_4;
		NullCheck(L_42);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = L_42->___data;
		uint32_t L_44 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_45 = V_4;
		NullCheck(L_45);
		uint32_t L_46 = L_45->___length;
		uint32_t L_47 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_48 = V_0;
		NullCheck(L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = L_48->___data;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_50 = V_0;
		NullCheck(L_50);
		uint32_t L_51 = L_50->___length;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_52 = V_6;
		NullCheck(L_52);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = L_52->___data;
		uint32_t L_54 = V_2;
		Kernel_MultiplyMod2p32pmod_mD9A826628E622F9BF45520DE5A6C0BD53DD2AD9E(L_43, L_44, ((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)L_47)), L_49, 0, L_51, L_53, 0, L_54, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_55 = V_6;
		NullCheck(L_55);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_55, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_56 = V_6;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_57 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = BigInteger_op_LessThanOrEqual_mFB395E4E35C3E672EB2B1D485FA9E621D769D68A(L_56, L_57, NULL);
		if (!L_58)
		{
			goto IL_00fe;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_59 = ___0_x;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_60 = V_6;
		Kernel_MinusEq_m634A25656C7AD0F7C521B23BE30425B788030B91(L_59, L_60, NULL);
		goto IL_012d;
	}

IL_00fe:
	{
		uint32_t L_61 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_62 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_62, 1, ((int32_t)il2cpp_codegen_add((int32_t)L_61, 1)), NULL);
		V_7 = L_62;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_63 = V_7;
		NullCheck(L_63);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = L_63->___data;
		uint32_t L_65 = V_2;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (uint32_t)1);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_66 = V_7;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_67 = V_6;
		Kernel_MinusEq_m634A25656C7AD0F7C521B23BE30425B788030B91(L_66, L_67, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_68 = ___0_x;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_69 = V_7;
		Kernel_PlusEq_mA092738CB4B501B664F314715C7C74FC03384AE3(L_68, L_69, NULL);
		goto IL_012d;
	}

IL_0126:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_70 = ___0_x;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_71 = V_0;
		Kernel_MinusEq_m634A25656C7AD0F7C521B23BE30425B788030B91(L_70, L_71, NULL);
	}

IL_012d:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_72 = ___0_x;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_73 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = BigInteger_op_GreaterThanOrEqual_m84F5223CE33D7E4B977B30D32E87AD7D5051DB4F(L_72, L_73, NULL);
		if (L_74)
		{
			goto IL_0126;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 108222
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ModulusRing_Multiply_mDBAD6831070EE1661E3B7EEC4786A515DE5C229A (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_a, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BigInteger_op_Equality_m3D8FFD303A14BBC17B7423CE9EEC513700BF921F(L_0, 0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigInteger_op_Equality_m3D8FFD303A14BBC17B7423CE9EEC513700BF921F(L_2, 0, NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4;
		L_4 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(0, NULL);
		return L_4;
	}

IL_0019:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = ___0_a;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = __this->___mod;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = BigInteger_op_GreaterThan_m4102428737E020DEF999F9A2320F2C8962C4947C(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = ___0_a;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = __this->___mod;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10;
		L_10 = BigInteger_op_Modulus_m5AC5D8DD148908E30BA188BC50E6B2F0E75545CD(L_8, L_9, NULL);
		___0_a = L_10;
	}

IL_0035:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11 = ___1_b;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_12 = __this->___mod;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = BigInteger_op_GreaterThan_m4102428737E020DEF999F9A2320F2C8962C4947C(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_14 = ___1_b;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_15 = __this->___mod;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_16;
		L_16 = BigInteger_op_Modulus_m5AC5D8DD148908E30BA188BC50E6B2F0E75545CD(L_14, L_15, NULL);
		___1_b = L_16;
	}

IL_0051:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_17 = ___0_a;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_18 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19;
		L_19 = BigInteger_op_Multiply_mEDE5A32D2745927133F814E397EA4E628A60C549(L_17, L_18, NULL);
		V_0 = L_19;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_20 = V_0;
		ModulusRing_BarrettReduction_mA753465B3A0DC2E9DEC32D345C24DCA1B56115D5(__this, L_20, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_21 = V_0;
		return L_21;
	}
}
// Method Definition Index: 108223
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ModulusRing_Difference_mE4B31BBB8F73710EC6AA7D3F87719672EF683AAD (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_a, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_1 = NULL;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_a;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___1_b;
		int32_t L_2;
		L_2 = Kernel_Compare_mB84E41B7046C951E360FB9DA11A4BFA5A0E66611(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (-1))))
		{
			case 0:
			{
				goto IL_002f;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_0025;
			}
		}
	}
	{
		goto IL_0039;
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4;
		L_4 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(0, NULL);
		return L_4;
	}

IL_0025:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = ___0_a;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = ___1_b;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7;
		L_7 = BigInteger_op_Subtraction_m2017F0245B56CE2D6245757B43DDA997625581CA(L_5, L_6, NULL);
		V_1 = L_7;
		goto IL_003f;
	}

IL_002f:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = ___1_b;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = ___0_a;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10;
		L_10 = BigInteger_op_Subtraction_m2017F0245B56CE2D6245757B43DDA997625581CA(L_8, L_9, NULL);
		V_1 = L_10;
		goto IL_003f;
	}

IL_0039:
	{
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModulusRing_Difference_mE4B31BBB8F73710EC6AA7D3F87719672EF683AAD_RuntimeMethod_var)));
	}

IL_003f:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_12 = V_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13 = __this->___mod;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = BigInteger_op_GreaterThanOrEqual_m84F5223CE33D7E4B977B30D32E87AD7D5051DB4F(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0078;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_15 = V_1;
		NullCheck(L_15);
		uint32_t L_16 = L_15->___length;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_17 = __this->___mod;
		NullCheck(L_17);
		uint32_t L_18 = L_17->___length;
		if ((!(((uint32_t)L_16) >= ((uint32_t)((int32_t)((int32_t)L_18<<1))))))
		{
			goto IL_0071;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19 = V_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_20 = __this->___mod;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_21;
		L_21 = BigInteger_op_Modulus_m5AC5D8DD148908E30BA188BC50E6B2F0E75545CD(L_19, L_20, NULL);
		V_1 = L_21;
		goto IL_0078;
	}

IL_0071:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_22 = V_1;
		ModulusRing_BarrettReduction_mA753465B3A0DC2E9DEC32D345C24DCA1B56115D5(__this, L_22, NULL);
	}

IL_0078:
	{
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0089;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_24 = __this->___mod;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_25 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_26;
		L_26 = BigInteger_op_Subtraction_m2017F0245B56CE2D6245757B43DDA997625581CA(L_24, L_25, NULL);
		V_1 = L_26;
	}

IL_0089:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = V_1;
		return L_27;
	}
}
// Method Definition Index: 108224
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ModulusRing_Pow_mE14DBD510D57E2A1CF1BFB2B237439A8EB08A418 (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_a, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_k, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_1 = NULL;
	int32_t V_2 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m9AFFDE2505C2B712D5F89EF501A2D163B7855E02(L_0, 1, NULL);
		V_0 = L_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___1_k;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BigInteger_op_Equality_m3D8FFD303A14BBC17B7423CE9EEC513700BF921F(L_1, 0, NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = ___0_a;
		V_1 = L_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = ___1_k;
		NullCheck(L_5);
		bool L_6;
		L_6 = BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_001f;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ___0_a;
		V_0 = L_7;
	}

IL_001f:
	{
		V_2 = 1;
		goto IL_0042;
	}

IL_0023:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = V_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = V_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10;
		L_10 = ModulusRing_Multiply_mDBAD6831070EE1661E3B7EEC4786A515DE5C229A(__this, L_8, L_9, NULL);
		V_1 = L_10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11 = ___1_k;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		bool L_13;
		L_13 = BigInteger_TestBit_m2EAAC171F87CAB5FEDA0DEC79A83A68E56762C35(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003e;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_14 = V_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_15 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_16;
		L_16 = ModulusRing_Multiply_mDBAD6831070EE1661E3B7EEC4786A515DE5C229A(__this, L_14, L_15, NULL);
		V_0 = L_16;
	}

IL_003e:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0042:
	{
		int32_t L_18 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19 = ___1_k;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551(L_19, NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0023;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_21 = V_0;
		return L_21;
	}
}
// Method Definition Index: 108225
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ModulusRing_Pow_m9F2BB905682A6999D33B598EE7A61755DC240C6D (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* __this, uint32_t ___0_b, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_exp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_b;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m9AFFDE2505C2B712D5F89EF501A2D163B7855E02(L_1, L_0, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___1_exp;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3;
		L_3 = ModulusRing_Pow_mE14DBD510D57E2A1CF1BFB2B237439A8EB08A418(__this, L_1, L_2, NULL);
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
// Method Definition Index: 108226
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* Kernel_Subtract_mEA9B4A2546B4EBBEF7FAB54CD8F33F2283E08A5C (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_big, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_small, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_big;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_2, 1, L_1, NULL);
		V_0 = L_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = V_0;
		NullCheck(L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3->___data;
		V_1 = L_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = ___0_big;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___data;
		V_2 = L_6;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ___1_small;
		NullCheck(L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___data;
		V_3 = L_8;
		V_4 = 0;
		V_5 = 0;
	}

IL_0028:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_3;
		uint32_t L_10 = V_4;
		NullCheck(L_9);
		uint32_t L_11 = L_10;
		uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_6 = L_12;
		uint32_t L_13 = V_6;
		uint32_t L_14 = V_5;
		int32_t L_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14));
		V_6 = L_15;
		uint32_t L_16 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_1;
		uint32_t L_18 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		uint32_t L_20 = V_4;
		NullCheck(L_19);
		uint32_t L_21 = L_20;
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		uint32_t L_23 = V_6;
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23));
		V_7 = L_24;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint32_t)L_24);
		uint32_t L_25 = V_7;
		uint32_t L_26 = V_6;
		if (!((int32_t)(((!(((uint32_t)L_15) >= ((uint32_t)L_16)))? 1 : 0)|((!(((uint32_t)L_25) <= ((uint32_t)((~((int32_t)L_26))))))? 1 : 0))))
		{
			goto IL_0057;
		}
	}
	{
		V_5 = 1;
		goto IL_005a;
	}

IL_0057:
	{
		V_5 = 0;
	}

IL_005a:
	{
		uint32_t L_27 = V_4;
		int32_t L_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, 1));
		V_4 = L_28;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_29 = ___1_small;
		NullCheck(L_29);
		uint32_t L_30 = L_29->___length;
		if ((!(((uint32_t)L_28) >= ((uint32_t)L_30))))
		{
			goto IL_0028;
		}
	}
	{
		uint32_t L_31 = V_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32 = ___0_big;
		NullCheck(L_32);
		uint32_t L_33 = L_32->___length;
		if ((((int32_t)L_31) == ((int32_t)L_33)))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_34 = V_5;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_00a1;
		}
	}

IL_0078:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_1;
		uint32_t L_36 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_2;
		uint32_t L_38 = V_4;
		NullCheck(L_37);
		uint32_t L_39 = L_38;
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, 1)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = V_2;
		uint32_t L_42 = V_4;
		uint32_t L_43 = L_42;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, 1));
		NullCheck(L_41);
		uint32_t L_44 = L_43;
		uint32_t L_45 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if (L_45)
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_46 = V_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_47 = ___0_big;
		NullCheck(L_47);
		uint32_t L_48 = L_47->___length;
		if ((!(((uint32_t)L_46) >= ((uint32_t)L_48))))
		{
			goto IL_0078;
		}
	}

IL_0097:
	{
		uint32_t L_49 = V_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_50 = ___0_big;
		NullCheck(L_50);
		uint32_t L_51 = L_50->___length;
		if ((((int32_t)L_49) == ((int32_t)L_51)))
		{
			goto IL_00b8;
		}
	}

IL_00a1:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_1;
		uint32_t L_53 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = V_2;
		uint32_t L_55 = V_4;
		NullCheck(L_54);
		uint32_t L_56 = L_55;
		uint32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (uint32_t)L_57);
		uint32_t L_58 = V_4;
		int32_t L_59 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, 1));
		V_4 = L_59;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_60 = ___0_big;
		NullCheck(L_60);
		uint32_t L_61 = L_60->___length;
		if ((!(((uint32_t)L_59) >= ((uint32_t)L_61))))
		{
			goto IL_00a1;
		}
	}

IL_00b8:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_62 = V_0;
		NullCheck(L_62);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_62, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_63 = V_0;
		return L_63;
	}
}
// Method Definition Index: 108227
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_MinusEq_m634A25656C7AD0F7C521B23BE30425B788030B91 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_big, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_small, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_big;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___data;
		V_0 = L_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___1_small;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___data;
		V_1 = L_3;
		V_2 = 0;
		V_3 = 0;
	}

IL_0012:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_1;
		uint32_t L_5 = V_2;
		NullCheck(L_4);
		uint32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		uint32_t L_8 = V_4;
		uint32_t L_9 = V_3;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9));
		V_4 = L_10;
		uint32_t L_11 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		uint32_t L_13 = V_2;
		NullCheck(L_12);
		uint32_t* L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)));
		int32_t L_15 = *((uint32_t*)L_14);
		uint32_t L_16 = V_4;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_15, (int32_t)L_16));
		V_5 = L_17;
		*((int32_t*)L_14) = (int32_t)L_17;
		uint32_t L_18 = V_5;
		uint32_t L_19 = V_4;
		if (!((int32_t)(((!(((uint32_t)L_10) >= ((uint32_t)L_11)))? 1 : 0)|((!(((uint32_t)L_18) <= ((uint32_t)((~((int32_t)L_19))))))? 1 : 0))))
		{
			goto IL_003f;
		}
	}
	{
		V_3 = 1;
		goto IL_0041;
	}

IL_003f:
	{
		V_3 = 0;
	}

IL_0041:
	{
		uint32_t L_20 = V_2;
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, 1));
		V_2 = L_21;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_22 = ___1_small;
		NullCheck(L_22);
		uint32_t L_23 = L_22->___length;
		if ((!(((uint32_t)L_21) >= ((uint32_t)L_23))))
		{
			goto IL_0012;
		}
	}
	{
		uint32_t L_24 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_25 = ___0_big;
		NullCheck(L_25);
		uint32_t L_26 = L_25->___length;
		if ((((int32_t)L_24) == ((int32_t)L_26)))
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_27 = V_3;
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_0089;
		}
	}

IL_005b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_0;
		uint32_t L_29 = V_2;
		NullCheck(L_28);
		uint32_t* L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)));
		int32_t L_31 = *((uint32_t*)L_30);
		*((int32_t*)L_30) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_31, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_0;
		uint32_t L_33 = V_2;
		uint32_t L_34 = L_33;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, 1));
		NullCheck(L_32);
		uint32_t L_35 = L_34;
		uint32_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		if (L_36)
		{
			goto IL_0089;
		}
	}
	{
		uint32_t L_37 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_38 = ___0_big;
		NullCheck(L_38);
		uint32_t L_39 = L_38->___length;
		if ((!(((uint32_t)L_37) >= ((uint32_t)L_39))))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_0089;
	}

IL_007b:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_40 = ___0_big;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_41 = L_40;
		NullCheck(L_41);
		uint32_t L_42 = L_41->___length;
		NullCheck(L_41);
		L_41->___length = ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, 1));
	}

IL_0089:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_43 = ___0_big;
		NullCheck(L_43);
		uint32_t L_44 = L_43->___length;
		if ((!(((uint32_t)L_44) > ((uint32_t)0))))
		{
			goto IL_00a3;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_45 = ___0_big;
		NullCheck(L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = L_45->___data;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_47 = ___0_big;
		NullCheck(L_47);
		uint32_t L_48 = L_47->___length;
		NullCheck(L_46);
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, 1));
		uint32_t L_50 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		if (!L_50)
		{
			goto IL_007b;
		}
	}

IL_00a3:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_51 = ___0_big;
		NullCheck(L_51);
		uint32_t L_52 = L_51->___length;
		if (L_52)
		{
			goto IL_00b9;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_53 = ___0_big;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_54 = L_53;
		NullCheck(L_54);
		uint32_t L_55 = L_54->___length;
		NullCheck(L_54);
		L_54->___length = ((int32_t)il2cpp_codegen_add((int32_t)L_55, 1));
	}

IL_00b9:
	{
		return;
	}
}
// Method Definition Index: 108228
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_PlusEq_mA092738CB4B501B664F314715C7C74FC03384AE3 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	bool V_5 = false;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	uint64_t V_7 = 0;
	bool V_8 = false;
	uint32_t V_9 = 0;
	{
		V_4 = 0;
		V_5 = (bool)0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi1;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___1_bi2;
		NullCheck(L_2);
		uint32_t L_3 = L_2->___length;
		if ((!(((uint32_t)L_1) < ((uint32_t)L_3))))
		{
			goto IL_0035;
		}
	}
	{
		V_5 = (bool)1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = ___1_bi2;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data;
		V_0 = L_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = ___1_bi2;
		NullCheck(L_6);
		uint32_t L_7 = L_6->___length;
		V_3 = L_7;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = ___0_bi1;
		NullCheck(L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___data;
		V_1 = L_9;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10 = ___0_bi1;
		NullCheck(L_10);
		uint32_t L_11 = L_10->___length;
		V_2 = L_11;
		goto IL_0051;
	}

IL_0035:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_12 = ___0_bi1;
		NullCheck(L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___data;
		V_0 = L_13;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_14 = ___0_bi1;
		NullCheck(L_14);
		uint32_t L_15 = L_14->___length;
		V_3 = L_15;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_16 = ___1_bi2;
		NullCheck(L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16->___data;
		V_1 = L_17;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_18 = ___1_bi2;
		NullCheck(L_18);
		uint32_t L_19 = L_18->___length;
		V_2 = L_19;
	}

IL_0051:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_20 = ___0_bi1;
		NullCheck(L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = L_20->___data;
		V_6 = L_21;
		V_7 = ((int64_t)0);
	}

IL_005d:
	{
		uint64_t L_22 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		uint32_t L_24 = V_4;
		NullCheck(L_23);
		uint32_t L_25 = L_24;
		uint32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_1;
		uint32_t L_28 = V_4;
		NullCheck(L_27);
		uint32_t L_29 = L_28;
		uint32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_22, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_26)), ((int64_t)(uint64_t)((uint32_t)L_30))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_6;
		uint32_t L_32 = V_4;
		uint64_t L_33 = V_7;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (uint32_t)((int32_t)(uint32_t)L_33));
		uint64_t L_34 = V_7;
		V_7 = ((int64_t)((uint64_t)L_34>>((int32_t)32)));
		uint32_t L_35 = V_4;
		int32_t L_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, 1));
		V_4 = L_36;
		uint32_t L_37 = V_2;
		if ((!(((uint32_t)L_36) >= ((uint32_t)L_37))))
		{
			goto IL_005d;
		}
	}
	{
		uint64_t L_38 = V_7;
		V_8 = (bool)((!(((uint64_t)L_38) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t L_40 = V_4;
		uint32_t L_41 = V_3;
		if ((!(((uint32_t)L_40) < ((uint32_t)L_41))))
		{
			goto IL_00bb;
		}
	}

IL_0097:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_6;
		uint32_t L_43 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_0;
		uint32_t L_45 = V_4;
		NullCheck(L_44);
		uint32_t L_46 = L_45;
		uint32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		int32_t L_48 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, 1));
		V_9 = L_48;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (uint32_t)L_48);
		uint32_t L_49 = V_9;
		V_8 = (bool)((((int32_t)L_49) == ((int32_t)0))? 1 : 0);
		uint32_t L_50 = V_4;
		int32_t L_51 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, 1));
		V_4 = L_51;
		uint32_t L_52 = V_3;
		bool L_53 = V_8;
		if (((int32_t)(((!(((uint32_t)L_51) >= ((uint32_t)L_52)))? 1 : 0)&(int32_t)L_53)))
		{
			goto IL_0097;
		}
	}

IL_00bb:
	{
		bool L_54 = V_8;
		if (!L_54)
		{
			goto IL_00d3;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = V_6;
		uint32_t L_56 = V_4;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (uint32_t)1);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_57 = ___0_bi1;
		uint32_t L_58 = V_4;
		int32_t L_59 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, 1));
		V_4 = L_59;
		NullCheck(L_57);
		L_57->___length = L_59;
		return;
	}

IL_00d3:
	{
		bool L_60 = V_5;
		if (!L_60)
		{
			goto IL_00f1;
		}
	}
	{
		uint32_t L_61 = V_4;
		uint32_t L_62 = V_3;
		if ((!(((uint32_t)L_61) < ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_62, 1))))))
		{
			goto IL_00f1;
		}
	}

IL_00de:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = V_6;
		uint32_t L_64 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_0;
		uint32_t L_66 = V_4;
		NullCheck(L_65);
		uint32_t L_67 = L_66;
		uint32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint32_t)L_68);
		uint32_t L_69 = V_4;
		int32_t L_70 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, 1));
		V_4 = L_70;
		uint32_t L_71 = V_3;
		if ((!(((uint32_t)L_70) >= ((uint32_t)L_71))))
		{
			goto IL_00de;
		}
	}

IL_00f1:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_72 = ___0_bi1;
		uint32_t L_73 = V_3;
		NullCheck(L_72);
		L_72->___length = ((int32_t)il2cpp_codegen_add((int32_t)L_73, 1));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_74 = ___0_bi1;
		NullCheck(L_74);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_74, NULL);
		return;
	}
}
// Method Definition Index: 108229
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Kernel_Compare_mB84E41B7046C951E360FB9DA11A4BFA5A0E66611 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi1;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length;
		V_0 = L_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___1_bi2;
		NullCheck(L_2);
		uint32_t L_3 = L_2->___length;
		V_1 = L_3;
		goto IL_0014;
	}

IL_0010:
	{
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1));
	}

IL_0014:
	{
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) > ((uint32_t)0))))
		{
			goto IL_002a;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = ___0_bi1;
		NullCheck(L_6);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6->___data;
		uint32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 1));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if (!L_10)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		uint32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, 1));
	}

IL_002a:
	{
		uint32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) > ((uint32_t)0))))
		{
			goto IL_003a;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13 = ___1_bi2;
		NullCheck(L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13->___data;
		uint32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if (!L_17)
		{
			goto IL_0026;
		}
	}

IL_003a:
	{
		uint32_t L_18 = V_0;
		if (L_18)
		{
			goto IL_0042;
		}
	}
	{
		uint32_t L_19 = V_1;
		if (L_19)
		{
			goto IL_0042;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0042:
	{
		uint32_t L_20 = V_0;
		uint32_t L_21 = V_1;
		if ((!(((uint32_t)L_20) < ((uint32_t)L_21))))
		{
			goto IL_0048;
		}
	}
	{
		return (int32_t)((-1));
	}

IL_0048:
	{
		uint32_t L_22 = V_0;
		uint32_t L_23 = V_1;
		if ((!(((uint32_t)L_22) > ((uint32_t)L_23))))
		{
			goto IL_004e;
		}
	}
	{
		return (int32_t)(1);
	}

IL_004e:
	{
		uint32_t L_24 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, 1));
		goto IL_0058;
	}

IL_0054:
	{
		uint32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, 1));
	}

IL_0058:
	{
		uint32_t L_26 = V_2;
		if (!L_26)
		{
			goto IL_006d;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = ___0_bi1;
		NullCheck(L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = L_27->___data;
		uint32_t L_29 = V_2;
		NullCheck(L_28);
		uint32_t L_30 = L_29;
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32 = ___1_bi2;
		NullCheck(L_32);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = L_32->___data;
		uint32_t L_34 = V_2;
		NullCheck(L_33);
		uint32_t L_35 = L_34;
		uint32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		if ((((int32_t)L_31) == ((int32_t)L_36)))
		{
			goto IL_0054;
		}
	}

IL_006d:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_37 = ___0_bi1;
		NullCheck(L_37);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = L_37->___data;
		uint32_t L_39 = V_2;
		NullCheck(L_38);
		uint32_t L_40 = L_39;
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_42 = ___1_bi2;
		NullCheck(L_42);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = L_42->___data;
		uint32_t L_44 = V_2;
		NullCheck(L_43);
		uint32_t L_45 = L_44;
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		if ((!(((uint32_t)L_41) < ((uint32_t)L_46))))
		{
			goto IL_0081;
		}
	}
	{
		return (int32_t)((-1));
	}

IL_0081:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_47 = ___0_bi1;
		NullCheck(L_47);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = L_47->___data;
		uint32_t L_49 = V_2;
		NullCheck(L_48);
		uint32_t L_50 = L_49;
		uint32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_52 = ___1_bi2;
		NullCheck(L_52);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = L_52->___data;
		uint32_t L_54 = V_2;
		NullCheck(L_53);
		uint32_t L_55 = L_54;
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		if ((!(((uint32_t)L_51) > ((uint32_t)L_56))))
		{
			goto IL_0095;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0095:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 108230
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_SingleByteDivideInPlace_mD9E56BF746E318BEDECEC4280A829A63EAD28F09 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_n, uint32_t ___1_d, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_n;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length;
		V_1 = L_1;
		goto IL_002f;
	}

IL_000c:
	{
		uint64_t L_2 = V_0;
		V_0 = ((int64_t)((int64_t)L_2<<((int32_t)32)));
		uint64_t L_3 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = ___0_n;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data;
		uint32_t L_6 = V_1;
		NullCheck(L_5);
		uint32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)((int64_t)L_3|((int64_t)(uint64_t)((uint32_t)L_8))));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = ___0_n;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___data;
		uint32_t L_11 = V_1;
		uint64_t L_12 = V_0;
		uint32_t L_13 = ___1_d;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_12/(uint64_t)(int64_t)((int64_t)(uint64_t)((uint32_t)L_13))))));
		uint64_t L_14 = V_0;
		uint32_t L_15 = ___1_d;
		V_0 = ((int64_t)((uint64_t)(int64_t)L_14%(uint64_t)(int64_t)((int64_t)(uint64_t)((uint32_t)L_15))));
	}

IL_002f:
	{
		uint32_t L_16 = V_1;
		uint32_t L_17 = L_16;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, 1));
		if ((!(((uint32_t)L_17) <= ((uint32_t)0))))
		{
			goto IL_000c;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_18 = ___0_n;
		NullCheck(L_18);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_18, NULL);
		uint64_t L_19 = V_0;
		return ((int32_t)(uint32_t)L_19);
	}
}
// Method Definition Index: 108231
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_DwordMod_m1B3830BC4779D5B4BEBC37E1BF320F500C20CC0E (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_n, uint32_t ___1_d, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_n;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length;
		V_1 = L_1;
		goto IL_0022;
	}

IL_000c:
	{
		uint64_t L_2 = V_0;
		V_0 = ((int64_t)((int64_t)L_2<<((int32_t)32)));
		uint64_t L_3 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = ___0_n;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___data;
		uint32_t L_6 = V_1;
		NullCheck(L_5);
		uint32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)((int64_t)L_3|((int64_t)(uint64_t)((uint32_t)L_8))));
		uint64_t L_9 = V_0;
		uint32_t L_10 = ___1_d;
		V_0 = ((int64_t)((uint64_t)(int64_t)L_9%(uint64_t)(int64_t)((int64_t)(uint64_t)((uint32_t)L_10))));
	}

IL_0022:
	{
		uint32_t L_11 = V_1;
		uint32_t L_12 = L_11;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 1));
		if ((!(((uint32_t)L_12) <= ((uint32_t)0))))
		{
			goto IL_000c;
		}
	}
	{
		uint64_t L_13 = V_0;
		return ((int32_t)(uint32_t)L_13);
	}
}
// Method Definition Index: 108232
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* Kernel_DwordDivMod_m5977404465381995E14EF36BE94500F6D18458B7 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_n, uint32_t ___1_d, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	uint64_t V_1 = 0;
	uint32_t V_2 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_3 = NULL;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_n;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_2, 1, L_1, NULL);
		V_0 = L_2;
		V_1 = ((int64_t)0);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = ___0_n;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___length;
		V_2 = L_4;
		goto IL_003c;
	}

IL_0019:
	{
		uint64_t L_5 = V_1;
		V_1 = ((int64_t)((int64_t)L_5<<((int32_t)32)));
		uint64_t L_6 = V_1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ___0_n;
		NullCheck(L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___data;
		uint32_t L_9 = V_2;
		NullCheck(L_8);
		uint32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int64_t)((int64_t)L_6|((int64_t)(uint64_t)((uint32_t)L_11))));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_12 = V_0;
		NullCheck(L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___data;
		uint32_t L_14 = V_2;
		uint64_t L_15 = V_1;
		uint32_t L_16 = ___1_d;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_15/(uint64_t)(int64_t)((int64_t)(uint64_t)((uint32_t)L_16))))));
		uint64_t L_17 = V_1;
		uint32_t L_18 = ___1_d;
		V_1 = ((int64_t)((uint64_t)(int64_t)L_17%(uint64_t)(int64_t)((int64_t)(uint64_t)((uint32_t)L_18))));
	}

IL_003c:
	{
		uint32_t L_19 = V_2;
		uint32_t L_20 = L_19;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, 1));
		if ((!(((uint32_t)L_20) <= ((uint32_t)0))))
		{
			goto IL_0019;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_21 = V_0;
		NullCheck(L_21);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_21, NULL);
		uint64_t L_22 = V_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_23;
		L_23 = BigInteger_op_Implicit_m953448132663D58B45AF679B003D0BBC92FEBB49(((int32_t)(uint32_t)L_22), NULL);
		V_3 = L_23;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_24 = (BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)SZArrayNew(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_25 = L_24;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_26 = V_0;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_26);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_27 = L_25;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_3;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_28);
		return L_27;
	}
}
// Method Definition Index: 108233
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* Kernel_multiByteDivide_m32F2ED53F2DEC2DE630E0BDD5AA4A4BC462CD7EF (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi1, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_bi2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_7 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* V_13 = NULL;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	int32_t V_18 = 0;
	uint64_t V_19 = 0;
	uint32_t V_20 = 0;
	uint64_t V_21 = 0;
	BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* V_22 = NULL;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___1_bi2;
		int32_t L_2;
		L_2 = Kernel_Compare_mB84E41B7046C951E360FB9DA11A4BFA5A0E66611(L_0, L_1, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0023;
		}
	}
	{
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_3 = (BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)SZArrayNew(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5;
		L_5 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(0, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_5);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_6 = L_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ___0_bi1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m42B232CF6F76C15DAA3C02C3F5DE1B1F7C7BBC51(L_8, L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_8);
		return L_6;
	}

IL_0023:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = ___0_bi1;
		NullCheck(L_9);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_9, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10 = ___1_bi2;
		NullCheck(L_10);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_10, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11 = ___1_bi2;
		NullCheck(L_11);
		uint32_t L_12 = L_11->___length;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0047;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13 = ___0_bi1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_14 = ___1_bi2;
		NullCheck(L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = L_14->___data;
		NullCheck(L_15);
		int32_t L_16 = 0;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_18;
		L_18 = Kernel_DwordDivMod_m5977404465381995E14EF36BE94500F6D18458B7(L_13, L_17, NULL);
		return L_18;
	}

IL_0047:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19 = ___0_bi1;
		NullCheck(L_19);
		uint32_t L_20 = L_19->___length;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, 1));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_21 = ___1_bi2;
		NullCheck(L_21);
		uint32_t L_22 = L_21->___length;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, 1));
		V_2 = ((int32_t)-2147483648LL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_23 = ___1_bi2;
		NullCheck(L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = L_23->___data;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_25 = ___1_bi2;
		NullCheck(L_25);
		uint32_t L_26 = L_25->___length;
		NullCheck(L_24);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, 1));
		uint32_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_3 = L_28;
		V_4 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_29 = ___0_bi1;
		NullCheck(L_29);
		uint32_t L_30 = L_29->___length;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ___1_bi2;
		NullCheck(L_31);
		uint32_t L_32 = L_31->___length;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_32));
		goto IL_008d;
	}

IL_0083:
	{
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		uint32_t L_34 = V_2;
		V_2 = ((int32_t)((uint32_t)L_34>>1));
	}

IL_008d:
	{
		uint32_t L_35 = V_2;
		if (!L_35)
		{
			goto IL_0095;
		}
	}
	{
		uint32_t L_36 = V_3;
		uint32_t L_37 = V_2;
		if (!((int32_t)((int32_t)L_36&(int32_t)L_37)))
		{
			goto IL_0083;
		}
	}

IL_0095:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_38 = ___0_bi1;
		NullCheck(L_38);
		uint32_t L_39 = L_38->___length;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_40 = ___1_bi2;
		NullCheck(L_40);
		uint32_t L_41 = L_40->___length;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_42 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_42, 1, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_41)), 1)), NULL);
		V_6 = L_42;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_43 = ___0_bi1;
		int32_t L_44 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_45;
		L_45 = BigInteger_op_LeftShift_m0450D740864BE2C62DFC1A0777498E518A2E6A73(L_43, L_44, NULL);
		V_7 = L_45;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_46 = V_7;
		NullCheck(L_46);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = L_46->___data;
		V_8 = L_47;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_48 = ___1_bi2;
		int32_t L_49 = V_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_50;
		L_50 = BigInteger_op_LeftShift_m0450D740864BE2C62DFC1A0777498E518A2E6A73(L_48, L_49, NULL);
		___1_bi2 = L_50;
		uint32_t L_51 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_52 = ___1_bi2;
		NullCheck(L_52);
		uint32_t L_53 = L_52->___length;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)L_53));
		uint32_t L_54 = V_0;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, 1));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_55 = ___1_bi2;
		NullCheck(L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = L_55->___data;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_57 = ___1_bi2;
		NullCheck(L_57);
		uint32_t L_58 = L_57->___length;
		NullCheck(L_56);
		int32_t L_59 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_58, 1));
		uint32_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_11 = L_60;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_61 = ___1_bi2;
		NullCheck(L_61);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = L_61->___data;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_63 = ___1_bi2;
		NullCheck(L_63);
		uint32_t L_64 = L_63->___length;
		NullCheck(L_62);
		int32_t L_65 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_64, 2));
		uint32_t L_66 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_12 = ((int64_t)(uint64_t)((uint32_t)L_66));
		goto IL_0233;
	}

IL_0100:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = V_8;
		int32_t L_68 = V_10;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		uint32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = V_8;
		int32_t L_72 = V_10;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		int64_t L_75 = ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)((uint32_t)L_70))<<((int32_t)32))), ((int64_t)(uint64_t)((uint32_t)L_74))));
		uint32_t L_76 = V_11;
		V_14 = ((int64_t)((uint64_t)(int64_t)L_75/(uint64_t)(int64_t)((int64_t)(uint64_t)((uint32_t)L_76))));
		uint32_t L_77 = V_11;
		V_15 = ((int64_t)((uint64_t)(int64_t)L_75%(uint64_t)(int64_t)((int64_t)(uint64_t)((uint32_t)L_77))));
	}

IL_011f:
	{
		uint64_t L_78 = V_14;
		if ((((int64_t)L_78) == ((int64_t)((int64_t)4294967296LL))))
		{
			goto IL_0141;
		}
	}
	{
		uint64_t L_79 = V_14;
		uint64_t L_80 = V_12;
		uint64_t L_81 = V_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = V_8;
		int32_t L_83 = V_10;
		NullCheck(L_82);
		int32_t L_84 = ((int32_t)il2cpp_codegen_subtract(L_83, 2));
		uint32_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_79, (int64_t)L_80))) > ((uint64_t)((int64_t)il2cpp_codegen_add(((int64_t)((int64_t)L_81<<((int32_t)32))), ((int64_t)(uint64_t)((uint32_t)L_85))))))))
		{
			goto IL_015d;
		}
	}

IL_0141:
	{
		uint64_t L_86 = V_14;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_86, ((int64_t)1)));
		uint64_t L_87 = V_15;
		uint32_t L_88 = V_11;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_87, ((int64_t)(uint64_t)((uint32_t)L_88))));
		uint64_t L_89 = V_15;
		if ((!(((uint64_t)L_89) >= ((uint64_t)((int64_t)4294967296LL)))))
		{
			goto IL_011f;
		}
	}

IL_015d:
	{
		V_17 = 0;
		int32_t L_90 = V_10;
		int32_t L_91 = V_1;
		V_18 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_90, L_91)), 1));
		V_19 = ((int64_t)0);
		uint64_t L_92 = V_14;
		V_20 = ((int32_t)(uint32_t)L_92);
	}

IL_0171:
	{
		uint64_t L_93 = V_19;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_94 = ___1_bi2;
		NullCheck(L_94);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = L_94->___data;
		uint32_t L_96 = V_17;
		NullCheck(L_95);
		uint32_t L_97 = L_96;
		uint32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		uint32_t L_99 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_93, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_98)), ((int64_t)(uint64_t)((uint32_t)L_99))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = V_8;
		int32_t L_101 = V_18;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		uint32_t L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_16 = L_103;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = V_8;
		int32_t L_105 = V_18;
		NullCheck(L_104);
		uint32_t* L_106 = ((L_104)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_105)));
		int32_t L_107 = *((uint32_t*)L_106);
		uint64_t L_108 = V_19;
		*((int32_t*)L_106) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_107, ((int32_t)(uint32_t)L_108)));
		uint64_t L_109 = V_19;
		V_19 = ((int64_t)((uint64_t)L_109>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = V_8;
		int32_t L_111 = V_18;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		uint32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		uint32_t L_114 = V_16;
		if ((!(((uint32_t)L_113) > ((uint32_t)L_114))))
		{
			goto IL_01b2;
		}
	}
	{
		uint64_t L_115 = V_19;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_115, ((int64_t)1)));
	}

IL_01b2:
	{
		uint32_t L_116 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, 1));
		int32_t L_117 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_117, 1));
		uint32_t L_118 = V_17;
		int32_t L_119 = V_1;
		if ((((int64_t)((int64_t)(uint64_t)((uint32_t)L_118))) < ((int64_t)((int64_t)L_119))))
		{
			goto IL_0171;
		}
	}
	{
		int32_t L_120 = V_10;
		int32_t L_121 = V_1;
		V_18 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_120, L_121)), 1));
		V_17 = 0;
		uint64_t L_122 = V_19;
		if (!L_122)
		{
			goto IL_0216;
		}
	}
	{
		uint32_t L_123 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_123, 1));
		V_21 = ((int64_t)0);
	}

IL_01de:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_124 = V_8;
		int32_t L_125 = V_18;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		uint32_t L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_128 = ___1_bi2;
		NullCheck(L_128);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_129 = L_128->___data;
		uint32_t L_130 = V_17;
		NullCheck(L_129);
		uint32_t L_131 = L_130;
		uint32_t L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		uint64_t L_133 = V_21;
		V_21 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_127)), ((int64_t)(uint64_t)((uint32_t)L_132)))), (int64_t)L_133));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_134 = V_8;
		int32_t L_135 = V_18;
		uint64_t L_136 = V_21;
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(L_135), (uint32_t)((int32_t)(uint32_t)L_136));
		uint64_t L_137 = V_21;
		V_21 = ((int64_t)((uint64_t)L_137>>((int32_t)32)));
		uint32_t L_138 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_138, 1));
		int32_t L_139 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_139, 1));
		uint32_t L_140 = V_17;
		int32_t L_141 = V_1;
		if ((((int64_t)((int64_t)(uint64_t)((uint32_t)L_140))) < ((int64_t)((int64_t)L_141))))
		{
			goto IL_01de;
		}
	}

IL_0216:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_142 = V_6;
		NullCheck(L_142);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = L_142->___data;
		int32_t L_144 = V_5;
		int32_t L_145 = L_144;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_145, 1));
		uint32_t L_146 = V_20;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(L_145), (uint32_t)L_146);
		int32_t L_147 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_147, 1));
		int32_t L_148 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_148, 1));
	}

IL_0233:
	{
		int32_t L_149 = V_9;
		if ((((int32_t)L_149) > ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_150 = V_6;
		NullCheck(L_150);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_150, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_151 = V_7;
		NullCheck(L_151);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_151, NULL);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_152 = (BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)SZArrayNew(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_153 = L_152;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_154 = V_6;
		NullCheck(L_153);
		ArrayElementTypeCheck (L_153, L_154);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_154);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_155 = L_153;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_156 = V_7;
		NullCheck(L_155);
		ArrayElementTypeCheck (L_155, L_156);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_156);
		V_13 = L_155;
		int32_t L_157 = V_4;
		if (!L_157)
		{
			goto IL_0272;
		}
	}
	{
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_158 = V_13;
		V_22 = L_158;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_159 = V_22;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_160 = V_22;
		NullCheck(L_160);
		int32_t L_161 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_162 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		int32_t L_163 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_164;
		L_164 = BigInteger_op_RightShift_m9ABBE9016A201283D5DF10CD67D5302510F86224(L_162, L_163, NULL);
		NullCheck(L_159);
		ArrayElementTypeCheck (L_159, L_164);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_164);
	}

IL_0272:
	{
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_165 = V_13;
		return L_165;
	}
}
// Method Definition Index: 108234
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* Kernel_LeftShift_mE40ED9013AB88A02A79C7640DA3FA1F320ED86F0 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, int32_t ___1_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kernel_LeftShift_mE40ED9013AB88A02A79C7640DA3FA1F320ED86F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		int32_t L_0 = ___1_n;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___0_bi;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___0_bi;
		NullCheck(L_2);
		uint32_t L_3 = L_2->___length;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_mD26E0224E82674AFA9A6E4BF4F0674BB0B7BECBF(L_4, L_1, ((int32_t)il2cpp_codegen_add((int32_t)L_3, 1)), NULL);
		return L_4;
	}

IL_0012:
	{
		int32_t L_5 = ___1_n;
		V_0 = ((int32_t)(L_5>>5));
		int32_t L_6 = ___1_n;
		___1_n = ((int32_t)(L_6&((int32_t)31)));
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ___0_bi;
		NullCheck(L_7);
		uint32_t L_8 = L_7->___length;
		int32_t L_9 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_10 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_10, 1, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_8, 1)), L_9)), NULL);
		V_1 = L_10;
		V_2 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11 = ___0_bi;
		NullCheck(L_11);
		uint32_t L_12 = L_11->___length;
		V_3 = L_12;
		int32_t L_13 = ___1_n;
		if (!L_13)
		{
			goto IL_009d;
		}
	}
	{
		V_5 = 0;
		goto IL_006f;
	}

IL_003e:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_14 = ___0_bi;
		NullCheck(L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = L_14->___data;
		uint32_t L_16 = V_2;
		NullCheck(L_15);
		uint32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_4 = L_18;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19 = V_1;
		NullCheck(L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = L_19->___data;
		uint32_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_21)), ((int64_t)L_22)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_LeftShift_mE40ED9013AB88A02A79C7640DA3FA1F320ED86F0_RuntimeMethod_var);
		uint32_t L_23 = V_4;
		int32_t L_24 = ___1_n;
		uint32_t L_25 = V_5;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_21)), ((int64_t)L_22))))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_23<<((int32_t)(L_24&((int32_t)31)))))|(int32_t)L_25)));
		uint32_t L_26 = V_4;
		int32_t L_27 = ___1_n;
		V_5 = ((int32_t)((uint32_t)L_26>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_27))&((int32_t)31)))));
		uint32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, 1));
	}

IL_006f:
	{
		uint32_t L_29 = V_2;
		uint32_t L_30 = V_3;
		if ((!(((uint32_t)L_29) >= ((uint32_t)L_30))))
		{
			goto IL_003e;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = V_1;
		NullCheck(L_31);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = L_31->___data;
		uint32_t L_33 = V_2;
		int32_t L_34 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_33)), ((int64_t)L_34)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_LeftShift_mE40ED9013AB88A02A79C7640DA3FA1F320ED86F0_RuntimeMethod_var);
		uint32_t L_35 = V_5;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_33)), ((int64_t)L_34))))), (uint32_t)L_35);
		goto IL_00a1;
	}

IL_0084:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_36 = V_1;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___data;
		uint32_t L_38 = V_2;
		int32_t L_39 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_38)), ((int64_t)L_39)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_LeftShift_mE40ED9013AB88A02A79C7640DA3FA1F320ED86F0_RuntimeMethod_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_40 = ___0_bi;
		NullCheck(L_40);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = L_40->___data;
		uint32_t L_42 = V_2;
		NullCheck(L_41);
		uint32_t L_43 = L_42;
		uint32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_38)), ((int64_t)L_39))))), (uint32_t)L_44);
		uint32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, 1));
	}

IL_009d:
	{
		uint32_t L_46 = V_2;
		uint32_t L_47 = V_3;
		if ((!(((uint32_t)L_46) >= ((uint32_t)L_47))))
		{
			goto IL_0084;
		}
	}

IL_00a1:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_48 = V_1;
		NullCheck(L_48);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_48, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_49 = V_1;
		return L_49;
	}
}
// Method Definition Index: 108235
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* Kernel_RightShift_m3EF3092A11D1C9680419B275A8349E56CC4BEC5C (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, int32_t ___1_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kernel_RightShift_m3EF3092A11D1C9680419B275A8349E56CC4BEC5C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		int32_t L_0 = ___1_n;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___0_bi;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m42B232CF6F76C15DAA3C02C3F5DE1B1F7C7BBC51(L_2, L_1, NULL);
		return L_2;
	}

IL_000a:
	{
		int32_t L_3 = ___1_n;
		V_0 = ((int32_t)(L_3>>5));
		int32_t L_4 = ___1_n;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_5 = ___0_bi;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___length;
		int32_t L_7 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger__ctor_m49DCBBD82981761C45EBC2350A1F16DB886E5F50(L_8, 1, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, L_7)), 1)), NULL);
		V_1 = L_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = V_1;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___data;
		NullCheck(L_10);
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), 1));
		if (!((int32_t)(L_4&((int32_t)31))))
		{
			goto IL_007e;
		}
	}
	{
		V_4 = 0;
		goto IL_005f;
	}

IL_0035:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11 = ___0_bi;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___data;
		uint32_t L_13 = V_2;
		int32_t L_14 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_13)), ((int64_t)L_14)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_RightShift_m3EF3092A11D1C9680419B275A8349E56CC4BEC5C_RuntimeMethod_var);
		NullCheck(L_12);
		intptr_t L_15 = ((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_13)), ((int64_t)L_14))));
		uint32_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_3 = L_16;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_17 = V_1;
		NullCheck(L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___data;
		uint32_t L_19 = V_2;
		uint32_t L_20 = V_3;
		int32_t L_21 = ___1_n;
		uint32_t L_22 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_20>>((int32_t)(L_21&((int32_t)31)))))|(int32_t)L_22)));
		uint32_t L_23 = V_3;
		int32_t L_24 = ___1_n;
		V_4 = ((int32_t)((int32_t)L_23<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_24))&((int32_t)31)))));
	}

IL_005f:
	{
		uint32_t L_25 = V_2;
		uint32_t L_26 = L_25;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, 1));
		if ((!(((uint32_t)L_26) <= ((uint32_t)0))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0086;
	}

IL_0069:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = V_1;
		NullCheck(L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = L_27->___data;
		uint32_t L_29 = V_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30 = ___0_bi;
		NullCheck(L_30);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = L_30->___data;
		uint32_t L_32 = V_2;
		int32_t L_33 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_32)), ((int64_t)L_33)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Kernel_RightShift_m3EF3092A11D1C9680419B275A8349E56CC4BEC5C_RuntimeMethod_var);
		NullCheck(L_31);
		intptr_t L_34 = ((intptr_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)L_32)), ((int64_t)L_33))));
		uint32_t L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint32_t)L_35);
	}

IL_007e:
	{
		uint32_t L_36 = V_2;
		uint32_t L_37 = L_36;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, 1));
		if ((!(((uint32_t)L_37) <= ((uint32_t)0))))
		{
			goto IL_0069;
		}
	}

IL_0086:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_38 = V_1;
		NullCheck(L_38);
		BigInteger_Normalize_mC7C8E5FF4D3DE66DE886D541352D3A091D84DC47(L_38, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_39 = V_1;
		return L_39;
	}
}
// Method Definition Index: 108236
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_Multiply_mF725E33ADE4B9849626BB9F011C45E1EE7A5FBB7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, uint32_t ___1_xOffset, uint32_t ___2_xLen, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_y, uint32_t ___4_yOffset, uint32_t ___5_yLen, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___6_d, uint32_t ___7_dOffset, const RuntimeMethod* method) 
{
	uint32_t* V_0 = NULL;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint32_t* V_7 = NULL;
	uint32_t* V_8 = NULL;
	uint32_t* V_9 = NULL;
	uint32_t* V_10 = NULL;
	uint64_t V_11 = 0;
	uint32_t* V_12 = NULL;
	uint32_t* V_13 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		V_3 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_3;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint32_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_3;
		NullCheck(L_3);
		V_0 = (uint32_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___3_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4;
		V_4 = L_5;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_4;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		V_1 = (uint32_t*)((uintptr_t)0);
		goto IL_0033;
	}

IL_0029:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_4;
		NullCheck(L_7);
		V_1 = (uint32_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0033:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___6_d;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8;
		V_5 = L_9;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_5;
		NullCheck(L_10);
		if (((int32_t)(((RuntimeArray*)L_10)->max_length)))
		{
			goto IL_0045;
		}
	}

IL_0040:
	{
		V_2 = (uint32_t*)((uintptr_t)0);
		goto IL_004f;
	}

IL_0045:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_5;
		NullCheck(L_11);
		V_2 = (uint32_t*)((uintptr_t)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_004f:
	{
		uint32_t* L_12 = V_0;
		uint32_t L_13 = ___1_xOffset;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_13)), ((int64_t)4))))));
		uint32_t* L_14 = V_6;
		uint32_t L_15 = ___2_xLen;
		V_7 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_15)), ((int64_t)4))))));
		uint32_t* L_16 = V_1;
		uint32_t L_17 = ___4_yOffset;
		V_8 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_17)), ((int64_t)4))))));
		uint32_t* L_18 = V_8;
		uint32_t L_19 = ___5_yLen;
		V_9 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_19)), ((int64_t)4))))));
		uint32_t* L_20 = V_2;
		uint32_t L_21 = ___7_dOffset;
		V_10 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_21)), ((int64_t)4))))));
		goto IL_00e3;
	}

IL_0088:
	{
		uint32_t* L_22 = V_6;
		int32_t L_23 = (*(L_22));
		if (!L_23)
		{
			goto IL_00d7;
		}
	}
	{
		V_11 = ((int64_t)0);
		uint32_t* L_24 = V_10;
		V_12 = L_24;
		uint32_t* L_25 = V_8;
		V_13 = L_25;
		goto IL_00c7;
	}

IL_009b:
	{
		uint64_t L_26 = V_11;
		uint32_t* L_27 = V_6;
		int32_t L_28 = (*(L_27));
		uint32_t* L_29 = V_13;
		int32_t L_30 = (*(L_29));
		uint32_t* L_31 = V_12;
		int32_t L_32 = (*(L_31));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_28)), ((int64_t)(uint64_t)((uint32_t)L_30)))), ((int64_t)(uint64_t)((uint32_t)L_32))))));
		uint32_t* L_33 = V_12;
		uint64_t L_34 = V_11;
		*((int32_t*)L_33) = (int32_t)((int32_t)(uint32_t)L_34);
		uint64_t L_35 = V_11;
		V_11 = ((int64_t)((uint64_t)L_35>>((int32_t)32)));
		uint32_t* L_36 = V_13;
		V_13 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_36, 4));
		uint32_t* L_37 = V_12;
		V_12 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_37, 4));
	}

IL_00c7:
	{
		uint32_t* L_38 = V_13;
		uint32_t* L_39 = V_9;
		if ((!(((uintptr_t)L_38) >= ((uintptr_t)L_39))))
		{
			goto IL_009b;
		}
	}
	{
		uint64_t L_40 = V_11;
		if (!L_40)
		{
			goto IL_00d7;
		}
	}
	{
		uint32_t* L_41 = V_12;
		uint64_t L_42 = V_11;
		*((int32_t*)L_41) = (int32_t)((int32_t)(uint32_t)L_42);
	}

IL_00d7:
	{
		uint32_t* L_43 = V_6;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_43, 4));
		uint32_t* L_44 = V_10;
		V_10 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_44, 4));
	}

IL_00e3:
	{
		uint32_t* L_45 = V_6;
		uint32_t* L_46 = V_7;
		if ((!(((uintptr_t)L_45) >= ((uintptr_t)L_46))))
		{
			goto IL_0088;
		}
	}
	{
		V_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		return;
	}
}
// Method Definition Index: 108237
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kernel_MultiplyMod2p32pmod_mD9A826628E622F9BF45520DE5A6C0BD53DD2AD9E (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOffset, int32_t ___2_xLen, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_y, int32_t ___4_yOffest, int32_t ___5_yLen, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___6_d, int32_t ___7_dOffset, int32_t ___8_mod, const RuntimeMethod* method) 
{
	uint32_t* V_0 = NULL;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint32_t* V_7 = NULL;
	uint32_t* V_8 = NULL;
	uint32_t* V_9 = NULL;
	uint32_t* V_10 = NULL;
	uint32_t* V_11 = NULL;
	uint64_t V_12 = 0;
	uint32_t* V_13 = NULL;
	uint32_t* V_14 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		V_3 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_3;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint32_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_3;
		NullCheck(L_3);
		V_0 = (uint32_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___3_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4;
		V_4 = L_5;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_4;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		V_1 = (uint32_t*)((uintptr_t)0);
		goto IL_0033;
	}

IL_0029:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_4;
		NullCheck(L_7);
		V_1 = (uint32_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0033:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___6_d;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8;
		V_5 = L_9;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_5;
		NullCheck(L_10);
		if (((int32_t)(((RuntimeArray*)L_10)->max_length)))
		{
			goto IL_0045;
		}
	}

IL_0040:
	{
		V_2 = (uint32_t*)((uintptr_t)0);
		goto IL_004f;
	}

IL_0045:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_5;
		NullCheck(L_11);
		V_2 = (uint32_t*)((uintptr_t)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_004f:
	{
		uint32_t* L_12 = V_0;
		int32_t L_13 = ___1_xOffset;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), 4))));
		uint32_t* L_14 = V_6;
		int32_t L_15 = ___2_xLen;
		V_7 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), 4))));
		uint32_t* L_16 = V_1;
		int32_t L_17 = ___4_yOffest;
		V_8 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))));
		uint32_t* L_18 = V_8;
		int32_t L_19 = ___5_yLen;
		V_9 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))));
		uint32_t* L_20 = V_2;
		int32_t L_21 = ___7_dOffset;
		V_10 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))));
		uint32_t* L_22 = V_10;
		int32_t L_23 = ___8_mod;
		V_11 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))));
		goto IL_00ef;
	}

IL_0088:
	{
		uint32_t* L_24 = V_6;
		int32_t L_25 = (*(L_24));
		if (!L_25)
		{
			goto IL_00e3;
		}
	}
	{
		V_12 = ((int64_t)0);
		uint32_t* L_26 = V_10;
		V_13 = L_26;
		uint32_t* L_27 = V_8;
		V_14 = L_27;
		goto IL_00c7;
	}

IL_009b:
	{
		uint64_t L_28 = V_12;
		uint32_t* L_29 = V_6;
		int32_t L_30 = (*(L_29));
		uint32_t* L_31 = V_14;
		int32_t L_32 = (*(L_31));
		uint32_t* L_33 = V_13;
		int32_t L_34 = (*(L_33));
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_28, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)((uint32_t)L_30)), ((int64_t)(uint64_t)((uint32_t)L_32)))), ((int64_t)(uint64_t)((uint32_t)L_34))))));
		uint32_t* L_35 = V_13;
		uint64_t L_36 = V_12;
		*((int32_t*)L_35) = (int32_t)((int32_t)(uint32_t)L_36);
		uint64_t L_37 = V_12;
		V_12 = ((int64_t)((uint64_t)L_37>>((int32_t)32)));
		uint32_t* L_38 = V_14;
		V_14 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_38, 4));
		uint32_t* L_39 = V_13;
		V_13 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_39, 4));
	}

IL_00c7:
	{
		uint32_t* L_40 = V_14;
		uint32_t* L_41 = V_9;
		if ((!(((uintptr_t)L_40) < ((uintptr_t)L_41))))
		{
			goto IL_00d3;
		}
	}
	{
		uint32_t* L_42 = V_13;
		uint32_t* L_43 = V_11;
		if ((!(((uintptr_t)L_42) >= ((uintptr_t)L_43))))
		{
			goto IL_009b;
		}
	}

IL_00d3:
	{
		uint64_t L_44 = V_12;
		if (!L_44)
		{
			goto IL_00e3;
		}
	}
	{
		uint32_t* L_45 = V_13;
		uint32_t* L_46 = V_11;
		if ((!(((uintptr_t)L_45) < ((uintptr_t)L_46))))
		{
			goto IL_00e3;
		}
	}
	{
		uint32_t* L_47 = V_13;
		uint64_t L_48 = V_12;
		*((int32_t*)L_47) = (int32_t)((int32_t)(uint32_t)L_48);
	}

IL_00e3:
	{
		uint32_t* L_49 = V_6;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_49, 4));
		uint32_t* L_50 = V_10;
		V_10 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_50, 4));
	}

IL_00ef:
	{
		uint32_t* L_51 = V_6;
		uint32_t* L_52 = V_7;
		if ((!(((uintptr_t)L_51) >= ((uintptr_t)L_52))))
		{
			goto IL_0088;
		}
	}
	{
		V_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		return;
	}
}
// Method Definition Index: 108238
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Kernel_modInverse_m9AF7A04275E7EC3CB3BE97A0E49D303128551788 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, uint32_t ___1_modulus, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		uint32_t L_0 = ___1_modulus;
		V_0 = L_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1 = ___0_bi;
		uint32_t L_2 = ___1_modulus;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		uint32_t L_3;
		L_3 = BigInteger_op_Modulus_m614BB6B5B40C256436BB94EA2B8391C298260F47(L_1, L_2, NULL);
		V_1 = L_3;
		V_2 = 0;
		V_3 = 1;
		goto IL_0039;
	}

IL_0010:
	{
		uint32_t L_4 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		uint32_t L_5 = V_3;
		return L_5;
	}

IL_0016:
	{
		uint32_t L_6 = V_2;
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, ((int32_t)il2cpp_codegen_multiply(((int32_t)((uint32_t)(int32_t)L_7/(uint32_t)(int32_t)L_8)), (int32_t)L_9))));
		uint32_t L_10 = V_0;
		uint32_t L_11 = V_1;
		V_0 = ((int32_t)((uint32_t)(int32_t)L_10%(uint32_t)(int32_t)L_11));
		uint32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_13 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		uint32_t L_14 = ___1_modulus;
		uint32_t L_15 = V_2;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15));
	}

IL_002d:
	{
		uint32_t L_16 = V_3;
		uint32_t L_17 = V_1;
		uint32_t L_18 = V_0;
		uint32_t L_19 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, ((int32_t)il2cpp_codegen_multiply(((int32_t)((uint32_t)(int32_t)L_17/(uint32_t)(int32_t)L_18)), (int32_t)L_19))));
		uint32_t L_20 = V_1;
		uint32_t L_21 = V_0;
		V_1 = ((int32_t)((uint32_t)(int32_t)L_20%(uint32_t)(int32_t)L_21));
	}

IL_0039:
	{
		uint32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0010;
		}
	}

IL_003c:
	{
		return 0;
	}
}
// Method Definition Index: 108239
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* Kernel_modInverse_m9B85AEE3C824216F039E1B5D7EFAE04F71D2A1BB (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_modulus, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* V_0 = NULL;
	BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* V_1 = NULL;
	BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* V_2 = NULL;
	int32_t V_3 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_4 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_5 = NULL;
	ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* V_6 = NULL;
	BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* V_7 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_8 = NULL;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___1_modulus;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___length;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = ___0_bi;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = ___1_modulus;
		NullCheck(L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3->___data;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint32_t L_7;
		L_7 = Kernel_modInverse_m9AF7A04275E7EC3CB3BE97A0E49D303128551788(L_2, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_op_Implicit_m953448132663D58B45AF679B003D0BBC92FEBB49(L_7, NULL);
		return L_8;
	}

IL_001d:
	{
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_9 = (BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)SZArrayNew(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_10 = L_9;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11;
		L_11 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(0, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_11);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_12 = L_10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13;
		L_13 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(1, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_13);
		V_0 = L_12;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_14 = (BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)SZArrayNew(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_14;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_15 = (BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66*)SZArrayNew(BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_16 = L_15;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_17;
		L_17 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(0, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_17);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_18 = L_16;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19;
		L_19 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(0, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_19);
		V_2 = L_18;
		V_3 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_20 = ___1_modulus;
		V_4 = L_20;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_21 = ___0_bi;
		V_5 = L_21;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_22 = ___1_modulus;
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* L_23 = (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF*)il2cpp_codegen_object_new(ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var);
		ModulusRing__ctor_mA5C74C954C8ABD6F9843F41BBF197F7F00F8D00A(L_23, L_22, NULL);
		V_6 = L_23;
		goto IL_00c1;
	}

IL_0068:
	{
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) <= ((int32_t)1)))
		{
			goto IL_008e;
		}
	}
	{
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* L_25 = V_6;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_35;
		L_35 = BigInteger_op_Multiply_mEDE5A32D2745927133F814E397EA4E628A60C549(L_31, L_34, NULL);
		NullCheck(L_25);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_36;
		L_36 = ModulusRing_Difference_mE4B31BBB8F73710EC6AA7D3F87719672EF683AAD(L_25, L_28, L_35, NULL);
		V_8 = L_36;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_37 = V_0;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_40);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_41 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_42 = V_8;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_42);
	}

IL_008e:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_43 = V_4;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_44 = V_5;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_45;
		L_45 = Kernel_multiByteDivide_m32F2ED53F2DEC2DE630E0BDD5AA4A4BC462CD7EF(L_43, L_44, NULL);
		V_7 = L_45;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_46 = V_1;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_47 = V_1;
		NullCheck(L_47);
		int32_t L_48 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_49);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_50 = V_1;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_51 = V_7;
		NullCheck(L_51);
		int32_t L_52 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_53);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_53);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_54 = V_2;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_55 = V_2;
		NullCheck(L_55);
		int32_t L_56 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_57);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_57);
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_58 = V_2;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_59 = V_7;
		NullCheck(L_59);
		int32_t L_60 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_61);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)L_61);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_62 = V_5;
		V_4 = L_62;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_63 = V_7;
		NullCheck(L_63);
		int32_t L_64 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_5 = L_65;
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_00c1:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_67 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = BigInteger_op_Inequality_mDDDA5BA9BF336633ADBD56F97601ACF81C0133FF(L_67, 0, NULL);
		if (L_68)
		{
			goto IL_0068;
		}
	}
	{
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_69 = V_2;
		NullCheck(L_69);
		int32_t L_70 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_72;
		L_72 = BigInteger_op_Inequality_mDDDA5BA9BF336633ADBD56F97601ACF81C0133FF(L_71, 1, NULL);
		if (!L_72)
		{
			goto IL_00e1;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_73 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_73, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5F0552FD39D0662CC057CFE2B43FEC612634CD8B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_73, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Kernel_modInverse_m9B85AEE3C824216F039E1B5D7EFAE04F71D2A1BB_RuntimeMethod_var)));
	}

IL_00e1:
	{
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* L_74 = V_6;
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_75 = V_0;
		NullCheck(L_75);
		int32_t L_76 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_78 = V_0;
		NullCheck(L_78);
		int32_t L_79 = 1;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		BigIntegerU5BU5D_tB5A6C1C4DEB91985214E9A9539A8C6FD16468E66* L_81 = V_1;
		NullCheck(L_81);
		int32_t L_82 = 0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_84;
		L_84 = BigInteger_op_Multiply_mEDE5A32D2745927133F814E397EA4E628A60C549(L_80, L_83, NULL);
		NullCheck(L_74);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_85;
		L_85 = ModulusRing_Difference_mE4B31BBB8F73710EC6AA7D3F87719672EF683AAD(L_74, L_77, L_84, NULL);
		return L_85;
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
bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_Multicast(PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, int32_t ___1_confidence, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* currentDelegate = reinterpret_cast<PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_bi, ___1_confidence, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenInst(PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, int32_t ___1_confidence, const RuntimeMethod* method)
{
	NullCheck(___0_bi);
	typedef bool (*FunctionPointerType) (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_bi, ___1_confidence, method);
}
bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenStatic(PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, int32_t ___1_confidence, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_bi, ___1_confidence, method);
}
bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenVirtual(PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, int32_t ___1_confidence, const RuntimeMethod* method)
{
	NullCheck(___0_bi);
	return VirtualFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_bi, ___1_confidence);
}
bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenInterface(PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, int32_t ___1_confidence, const RuntimeMethod* method)
{
	NullCheck(___0_bi);
	return InterfaceFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_bi, ___1_confidence);
}
bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenGenericVirtual(PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, int32_t ___1_confidence, const RuntimeMethod* method)
{
	NullCheck(___0_bi);
	return GenericVirtualFuncInvoker1< bool, int32_t >::Invoke(method, ___0_bi, ___1_confidence);
}
bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenGenericInterface(PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, int32_t ___1_confidence, const RuntimeMethod* method)
{
	NullCheck(___0_bi);
	return GenericInterfaceFuncInvoker1< bool, int32_t >::Invoke(method, ___0_bi, ___1_confidence);
}
// Method Definition Index: 108240
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimalityTest__ctor_m73483F9E5D166F74E0340F479376C61D9280266A (PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
			__this->___invoke_impl = (intptr_t)&PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenStatic;
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
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_Multicast;
}
// Method Definition Index: 108241
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552 (PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, int32_t ___1_confidence, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_bi, ___1_confidence, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 108242
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimalityTests_GetSPPRounds_mE93C23146823DD9BB19FF2588CACB3EA32D5E845 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, int32_t ___1_confidence, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_bi;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)100))))
		{
			goto IL_0011;
		}
	}
	{
		V_1 = ((int32_t)27);
		goto IL_008f;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)150))))
		{
			goto IL_001e;
		}
	}
	{
		V_1 = ((int32_t)18);
		goto IL_008f;
	}

IL_001e:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)200))))
		{
			goto IL_002b;
		}
	}
	{
		V_1 = ((int32_t)15);
		goto IL_008f;
	}

IL_002b:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)250))))
		{
			goto IL_0038;
		}
	}
	{
		V_1 = ((int32_t)12);
		goto IL_008f;
	}

IL_0038:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)300))))
		{
			goto IL_0045;
		}
	}
	{
		V_1 = ((int32_t)9);
		goto IL_008f;
	}

IL_0045:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)350))))
		{
			goto IL_0051;
		}
	}
	{
		V_1 = 8;
		goto IL_008f;
	}

IL_0051:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)400))))
		{
			goto IL_005d;
		}
	}
	{
		V_1 = 7;
		goto IL_008f;
	}

IL_005d:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) > ((int32_t)((int32_t)500))))
		{
			goto IL_0069;
		}
	}
	{
		V_1 = 6;
		goto IL_008f;
	}

IL_0069:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)600))))
		{
			goto IL_0075;
		}
	}
	{
		V_1 = 5;
		goto IL_008f;
	}

IL_0075:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)800))))
		{
			goto IL_0081;
		}
	}
	{
		V_1 = 4;
		goto IL_008f;
	}

IL_0081:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)1250))))
		{
			goto IL_008d;
		}
	}
	{
		V_1 = 3;
		goto IL_008f;
	}

IL_008d:
	{
		V_1 = 2;
	}

IL_008f:
	{
		int32_t L_13 = ___1_confidence;
		switch (L_13)
		{
			case 0:
			{
				goto IL_00af;
			}
			case 1:
			{
				goto IL_00ba;
			}
			case 2:
			{
				goto IL_00c5;
			}
			case 3:
			{
				goto IL_00c7;
			}
			case 4:
			{
				goto IL_00cb;
			}
			case 5:
			{
				goto IL_00cf;
			}
		}
	}
	{
		goto IL_00da;
	}

IL_00af:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)(L_14>>2));
		int32_t L_15 = V_1;
		if (L_15)
		{
			goto IL_00b8;
		}
	}
	{
		return 1;
	}

IL_00b8:
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_00ba:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)(L_17>>1));
		int32_t L_18 = V_1;
		if (L_18)
		{
			goto IL_00c3;
		}
	}
	{
		return 1;
	}

IL_00c3:
	{
		int32_t L_19 = V_1;
		return L_19;
	}

IL_00c5:
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_00c7:
	{
		int32_t L_21 = V_1;
		return ((int32_t)(L_21<<1));
	}

IL_00cb:
	{
		int32_t L_22 = V_1;
		return ((int32_t)(L_22<<2));
	}

IL_00cf:
	{
		Exception_t* L_23 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3227BC5517316F41D601A40DC84532F3C724DC04)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrimalityTests_GetSPPRounds_mE93C23146823DD9BB19FF2588CACB3EA32D5E845_RuntimeMethod_var)));
	}

IL_00da:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_24 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PrimalityTests_GetSPPRounds_mE93C23146823DD9BB19FF2588CACB3EA32D5E845_RuntimeMethod_var)));
	}
}
// Method Definition Index: 108243
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimalityTests_RabinMillerTest_m69936AC3B0635D2E4145DCA9CD2A7E8F63B8CFC4 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_n, int32_t ___1_confidence, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_2 = NULL;
	int32_t V_3 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_4 = NULL;
	ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	int32_t V_7 = 0;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_8 = NULL;
	int32_t V_9 = 0;
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_0 = ___0_n;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3;
		L_3 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_2, NULL);
		int32_t L_4 = ___1_confidence;
		int32_t L_5;
		L_5 = PrimalityTests_GetSPPRounds_mE93C23146823DD9BB19FF2588CACB3EA32D5E845(L_3, L_4, NULL);
		V_1 = L_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6 = ___0_n;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7;
		L_7 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(1, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_op_Subtraction_m2017F0245B56CE2D6245757B43DDA997625581CA(L_6, L_7, NULL);
		V_2 = L_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = BigInteger_LowestSetBit_m6443AF5F1F7C864A65365DD731FC7DAC1495DE20(L_9, NULL);
		V_3 = L_10;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_11 = V_2;
		int32_t L_12 = V_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_13;
		L_13 = BigInteger_op_RightShift_m9ABBE9016A201283D5DF10CD67D5302510F86224(L_11, L_12, NULL);
		V_4 = L_13;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_14 = ___0_n;
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* L_15 = (ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF*)il2cpp_codegen_object_new(ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF_il2cpp_TypeInfo_var);
		ModulusRing__ctor_mA5C74C954C8ABD6F9843F41BBF197F7F00F8D00A(L_15, L_14, NULL);
		V_5 = L_15;
		V_6 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_16 = ___0_n;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = BigInteger_BitCount_m6FD831E1BA71E84748B08A7A5B1FFE9AB2C62551(L_16, NULL);
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)100))))
		{
			goto IL_0052;
		}
	}
	{
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* L_18 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19 = V_4;
		NullCheck(L_18);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_20;
		L_20 = ModulusRing_Pow_m9F2BB905682A6999D33B598EE7A61755DC240C6D(L_18, 2, L_19, NULL);
		V_6 = L_20;
	}

IL_0052:
	{
		V_7 = 0;
		goto IL_00ed;
	}

IL_005a:
	{
		int32_t L_21 = V_7;
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_22 = V_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = BigInteger_op_Equality_mECF42AF9013ADE8D8274E7485C7BA23E4BFFEC60(L_22, (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL, NULL);
		if (!L_23)
		{
			goto IL_009a;
		}
	}

IL_0069:
	{
		V_8 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)NULL;
	}

IL_006c:
	{
		int32_t L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_25;
		L_25 = BigInteger_GenerateRandom_m5350D6E9C3AAE96153C46D80880F1CE43BB9DA9C(L_24, NULL);
		V_8 = L_25;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_26 = V_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27;
		L_27 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(2, NULL);
		bool L_28;
		L_28 = BigInteger_op_LessThanOrEqual_mFB395E4E35C3E672EB2B1D485FA9E621D769D68A(L_26, L_27, NULL);
		if (!L_28)
		{
			goto IL_008d;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_29 = V_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = BigInteger_op_GreaterThanOrEqual_m84F5223CE33D7E4B977B30D32E87AD7D5051DB4F(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_006c;
		}
	}

IL_008d:
	{
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* L_32 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_33 = V_8;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_34 = V_4;
		NullCheck(L_32);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_35;
		L_35 = ModulusRing_Pow_mE14DBD510D57E2A1CF1BFB2B237439A8EB08A418(L_32, L_33, L_34, NULL);
		V_6 = L_35;
	}

IL_009a:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_36 = V_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = BigInteger_op_Equality_m3D8FFD303A14BBC17B7423CE9EEC513700BF921F(L_36, 1, NULL);
		if (L_37)
		{
			goto IL_00e7;
		}
	}
	{
		V_9 = 0;
		goto IL_00cc;
	}

IL_00a9:
	{
		ModulusRing_t36B2B07F423E7F48C1DED40CAC3603909C4322EF* L_38 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_39 = V_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_40;
		L_40 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(2, NULL);
		NullCheck(L_38);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_41;
		L_41 = ModulusRing_Pow_mE14DBD510D57E2A1CF1BFB2B237439A8EB08A418(L_38, L_39, L_40, NULL);
		V_6 = L_41;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_42 = V_6;
		bool L_43;
		L_43 = BigInteger_op_Equality_m3D8FFD303A14BBC17B7423CE9EEC513700BF921F(L_42, 1, NULL);
		if (!L_43)
		{
			goto IL_00c6;
		}
	}
	{
		return (bool)0;
	}

IL_00c6:
	{
		int32_t L_44 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00cc:
	{
		int32_t L_45 = V_9;
		int32_t L_46 = V_3;
		if ((((int32_t)L_45) >= ((int32_t)L_46)))
		{
			goto IL_00db;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_47 = V_6;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_48 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = BigInteger_op_Inequality_m2AB984FD1240CAD1831070279D41DD97EB632DC7(L_47, L_48, NULL);
		if (L_49)
		{
			goto IL_00a9;
		}
	}

IL_00db:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_50 = V_6;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_51 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = BigInteger_op_Inequality_m2AB984FD1240CAD1831070279D41DD97EB632DC7(L_50, L_51, NULL);
		if (!L_52)
		{
			goto IL_00e7;
		}
	}
	{
		return (bool)0;
	}

IL_00e7:
	{
		int32_t L_53 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_00ed:
	{
		int32_t L_54 = V_7;
		int32_t L_55 = V_1;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_005a;
		}
	}
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
// Method Definition Index: 108244
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimeGeneratorBase_get_Confidence_m8A53DA3C670504B629434C990508D4B77642B875 (PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(2);
	}
}
// Method Definition Index: 108245
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* PrimeGeneratorBase_get_PrimalityTest_m96C5E1866F96043982AF493BE7EAB5969F770E1D (PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimalityTests_RabinMillerTest_m69936AC3B0635D2E4145DCA9CD2A7E8F63B8CFC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* L_0 = (PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B*)il2cpp_codegen_object_new(PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B_il2cpp_TypeInfo_var);
		PrimalityTest__ctor_m73483F9E5D166F74E0340F479376C61D9280266A(L_0, NULL, (intptr_t)((void*)PrimalityTests_RabinMillerTest_m69936AC3B0635D2E4145DCA9CD2A7E8F63B8CFC4_RuntimeMethod_var), NULL);
		return L_0;
	}
}
// Method Definition Index: 108246
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimeGeneratorBase_get_TrialDivisionBounds_m706A348C994861A2B92CE9156FE20DCF7474E286 (PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)4000);
	}
}
// Method Definition Index: 108248
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimeGeneratorBase__ctor_mECF0CD5B964A7E6FCE4F504719164114B8A678E9 (PrimeGeneratorBase_tF3B59CDEC773B15DE6B497796F6776E493C9E372* __this, const RuntimeMethod* method) 
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
// Method Definition Index: 108249
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* SequentialSearchPrimeGeneratorBase_GenerateSearchBase_mD12A7AC0A052FA228E0F4918BBA1B2B59AD605CE (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175* __this, int32_t ___0_bits, RuntimeObject* ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_bits;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1;
		L_1 = BigInteger_GenerateRandom_m5350D6E9C3AAE96153C46D80880F1CE43BB9DA9C(L_0, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2 = L_1;
		NullCheck(L_2);
		BigInteger_SetBit_m3E67DE35B0E691FCB886C60252CAAFC3FCB92A39(L_2, 0, NULL);
		return L_2;
	}
}
// Method Definition Index: 108250
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m6AC834873702FE49B85FB261931CA31BC239FFCD (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175* __this, int32_t ___0_bits, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_bits;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_1;
		L_1 = VirtualFuncInvoker2< BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, int32_t, RuntimeObject* >::Invoke(9, __this, L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 108251
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m6599A58FA9EBD14FEB9D18073419FF8341365B8B (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175* __this, int32_t ___0_bits, RuntimeObject* ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___0_bits;
		RuntimeObject* L_1 = ___1_context;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_2;
		L_2 = VirtualFuncInvoker2< BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, int32_t, RuntimeObject* >::Invoke(8, __this, L_0, L_1);
		V_0 = L_2;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = BigInteger_op_Modulus_m614BB6B5B40C256436BB94EA2B8391C298260F47(L_3, ((int32_t)-1060120681), NULL);
		V_1 = L_4;
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6, __this);
		V_2 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ((BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var))->___smallPrimes;
		V_3 = L_6;
	}

IL_0022:
	{
		uint32_t L_7 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_7%(uint32_t)(int32_t)3)))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_8 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_8%(uint32_t)(int32_t)5)))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_9 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_9%(uint32_t)(int32_t)7)))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_10 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_10%(uint32_t)(int32_t)((int32_t)11))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_11 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_11%(uint32_t)(int32_t)((int32_t)13))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_12 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_12%(uint32_t)(int32_t)((int32_t)17))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_13 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_13%(uint32_t)(int32_t)((int32_t)19))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_14 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_14%(uint32_t)(int32_t)((int32_t)23))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_15 = V_1;
		if (!((int32_t)((uint32_t)(int32_t)L_15%(uint32_t)(int32_t)((int32_t)29))))
		{
			goto IL_009d;
		}
	}
	{
		V_4 = ((int32_t)10);
		goto IL_006d;
	}

IL_005b:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_16 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_3;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		uint32_t L_21;
		L_21 = BigInteger_op_Modulus_m614BB6B5B40C256436BB94EA2B8391C298260F47(L_16, L_20, NULL);
		if (!L_21)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_006d:
	{
		int32_t L_23 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_3;
		NullCheck(L_24);
		if ((((int32_t)L_23) >= ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_007d;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		uint32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = V_2;
		if ((((int64_t)((int64_t)(uint64_t)((uint32_t)L_28))) <= ((int64_t)((int64_t)L_29))))
		{
			goto IL_005b;
		}
	}

IL_007d:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30 = V_0;
		RuntimeObject* L_31 = ___1_context;
		bool L_32;
		L_32 = VirtualFuncInvoker2< bool, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, RuntimeObject* >::Invoke(10, __this, L_30, L_31);
		if (!L_32)
		{
			goto IL_009d;
		}
	}
	{
		PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* L_33;
		L_33 = VirtualFuncInvoker0< PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* >::Invoke(5, __this);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_34 = V_0;
		int32_t L_35;
		L_35 = VirtualFuncInvoker0< int32_t >::Invoke(4, __this);
		NullCheck(L_33);
		bool L_36;
		L_36 = PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_inline(L_33, L_34, L_35, NULL);
		if (!L_36)
		{
			goto IL_009d;
		}
	}
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_37 = V_0;
		return L_37;
	}

IL_009d:
	{
		uint32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, 2));
		uint32_t L_39 = V_1;
		if ((!(((uint32_t)L_39) >= ((uint32_t)((int32_t)-1060120681)))))
		{
			goto IL_00b1;
		}
	}
	{
		uint32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, ((int32_t)-1060120681)));
	}

IL_00b1:
	{
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_41 = V_0;
		NullCheck(L_41);
		BigInteger_Incr2_mE5DCADCC1DEDD4F3E48E326940D3C926E1A37808(L_41, NULL);
		goto IL_0022;
	}
}
// Method Definition Index: 108252
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m2682AEC2B91FC89D1EB0799BFE5DA4C0F7F8C1D0 (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, RuntimeObject* ___1_context, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// Method Definition Index: 108253
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequentialSearchPrimeGeneratorBase__ctor_mFE1A43FA14390E871ED0C9025B57B84D9A7AA754 (SequentialSearchPrimeGeneratorBase_t8A6B934B933C9FB775BAB1447E9B3B2F9C949175* __this, const RuntimeMethod* method) 
{
	{
		PrimeGeneratorBase__ctor_mECF0CD5B964A7E6FCE4F504719164114B8A678E9(__this, NULL);
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
// Method Definition Index: 108254
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mC7DC26EF4301846E2947FBD7916A16E88C887055 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
// Method Definition Index: 107935
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ContentInfo_get_ContentType_m4ACE1C1CD7330D35EF0C2C422CF48E3BA0FFD7D1_inline (ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___contentType;
		return L_0;
	}
}
// Method Definition Index: 107933
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ContentInfo_get_Content_m85ECCB3CF732981E207598428EF008D95F754F98_inline (ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* __this, const RuntimeMethod* method) 
{
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_0 = __this->___content;
		return L_0;
	}
}
// Method Definition Index: 107944
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* SignedData_get_ContentInfo_m91409FC043E8C6FF741A922FC69BB9E98B5B7F09_inline (SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* __this, const RuntimeMethod* method) 
{
	{
		ContentInfo_t5742C43EE0907BEA6330E14F18C4885A874797FE* L_0 = __this->___contentInfo;
		return L_0;
	}
}
// Method Definition Index: 107943
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* SignedData_get_Certificates_m2F2280AA69C4903FD8CAA75FAECEFC7586EF6D7E_inline (SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* __this, const RuntimeMethod* method) 
{
	{
		X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* L_0 = __this->___certs;
		return L_0;
	}
}
// Method Definition Index: 107946
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* SignedData_get_SignerInfo_mAE14D45F3CE393345D41AD231A382765E551D604_inline (SignedData_t3F2C8F79336563E389C9B885D6393D4300A6783B* __this, const RuntimeMethod* method) 
{
	{
		SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* L_0 = __this->___signerInfo;
		return L_0;
	}
}
// Method Definition Index: 107952
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* SignerInfo_get_AuthenticatedAttributes_m52500C3AC3793C89F0296BBEF64698F2ED20B8F4_inline (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___authenticatedAttributes;
		return L_0;
	}
}
// Method Definition Index: 107950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SignerInfo_get_IssuerName_m30347CCCF2ED4EF05618DD9AF4F71030E4A5A324_inline (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___issuer;
		return L_0;
	}
}
// Method Definition Index: 107956
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* SignerInfo_get_UnauthenticatedAttributes_m718FE21E74C9898E7B4060A5BE1264C68D3171FA_inline (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->___unauthenticatedAttributes;
		return L_0;
	}
}
// Method Definition Index: 107957
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t SignerInfo_get_Version_m0CFF6A1B831986936100F7F4A27D6386D65CFB37_inline (SignerInfo_t1D335355B15E47705EAEA3E503BF54F31625E505* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___version;
		return L_0;
	}
}
// Method Definition Index: 694
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
// Method Definition Index: 108241
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PrimalityTest_Invoke_m7E9F9413908598A1270792B565D71288027AA552_inline (PrimalityTest_t98F5593C48D07FB794D7D850D117AF6A4729A35B* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_bi, int32_t ___1_confidence, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_bi, ___1_confidence, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
