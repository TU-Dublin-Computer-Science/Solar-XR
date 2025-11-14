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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A;
struct BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IDictionaryU5BU5D_t604DB404DAEF595B12A45890E1D58CF8FF54116C;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B;
struct BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1;
struct CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F;
struct DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E;
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
struct FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD;
struct ICharStream_tEE477BBD87D8E66B57909DDE3EBCA406431F031D;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D;
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
struct IToken_t620DE9D086BA75DE074EF126922C24743D268A42;
struct ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047;
struct ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D;
struct IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1;
struct LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465;
struct LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1;
struct NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0;
struct NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957;
struct Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849;
struct ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035;
struct RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55;
struct RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58;
struct String_t;
struct StringBuilder_t;
struct TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC;
struct Type_t;
struct UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E;
struct ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E;
struct DFA14_tFBA7EA500275A28066C470E71FC8925CB701A61E;
struct DFA7_t48436D7F9C5212F53AFF4FE9B76204B5E5AE74AB;
struct additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9;
struct arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B;
struct bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD;
struct bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C;
struct bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F;
struct booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033;
struct conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257;
struct equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957;
struct expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C;
struct identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D;
struct logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402;
struct multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE;
struct ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6;
struct primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55;
struct relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE;
struct shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71;
struct unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64;
struct value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA;

IL2CPP_EXTERN_C RuntimeClass* BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0015A3CE03B062AA77C4DBEDB33AF749FADBB80E;
IL2CPP_EXTERN_C String_t* _stringLiteral0AC045CDB107222D470290520872F98BAD304712;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
IL2CPP_EXTERN_C String_t* _stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46;
IL2CPP_EXTERN_C String_t* _stringLiteral15FB8A04339464F72B79BAF171F17EF1E153CA52;
IL2CPP_EXTERN_C String_t* _stringLiteral1603453E15E296D9A743367FA75358E71A294BFE;
IL2CPP_EXTERN_C String_t* _stringLiteral1715ACFA0FE6E68AD2558687210B00F466D58074;
IL2CPP_EXTERN_C String_t* _stringLiteral17D8C2CC055B5CA7D4070232202825730C7B58FD;
IL2CPP_EXTERN_C String_t* _stringLiteral1B1EB7B676D45EEA70B706E25988B5A063563F3D;
IL2CPP_EXTERN_C String_t* _stringLiteral1B9D3CF4697EAF2BF914545D4E803CF9FCA58F66;
IL2CPP_EXTERN_C String_t* _stringLiteral210A6A07AB8F66B3554669378F6148D2C7F62920;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral275367C97244B25D213BEB98B8BBB65D932C1402;
IL2CPP_EXTERN_C String_t* _stringLiteral2FDB12CAF040DE0941DCA5DA173D724FBE249CE3;
IL2CPP_EXTERN_C String_t* _stringLiteral2FF5C38C83E12CB32E44510BAAD2BAB11392D5C1;
IL2CPP_EXTERN_C String_t* _stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01;
IL2CPP_EXTERN_C String_t* _stringLiteral3514C58630DD3A6AAA4E293DC756A913B746BFAC;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3D280E7E733EC7E25A38F3C52ADCAF04C3DA0CD9;
IL2CPP_EXTERN_C String_t* _stringLiteral3DBD56A88F354EACFAFE433FC930A93888C30822;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral43E23BD061A3CB2D12511D97BE7338010A8B05AD;
IL2CPP_EXTERN_C String_t* _stringLiteral4809E30105820D7F0D6338C0181D9A191EAE18E2;
IL2CPP_EXTERN_C String_t* _stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922;
IL2CPP_EXTERN_C String_t* _stringLiteral51A0BD638EC24062E1BB5CBBDC0CEBB6BFB167A5;
IL2CPP_EXTERN_C String_t* _stringLiteral52C5BFED2F51E0C6CACDAF9E8C08D8A4902F5098;
IL2CPP_EXTERN_C String_t* _stringLiteral54C6E9459BC790C5A4A3CE1930E3327212EA442D;
IL2CPP_EXTERN_C String_t* _stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D;
IL2CPP_EXTERN_C String_t* _stringLiteral57E1275F35D877D6D4A594D1086A8E00459D30F7;
IL2CPP_EXTERN_C String_t* _stringLiteral5805A0FB324E5C6CEA6CC362E56DB2C5050CB030;
IL2CPP_EXTERN_C String_t* _stringLiteral5FDE879CBB29EDDD1BF6CA7C9074367D90619E3B;
IL2CPP_EXTERN_C String_t* _stringLiteral64145A4C661B03833CF2373FA0DDE5515EFED5DD;
IL2CPP_EXTERN_C String_t* _stringLiteral64DDEE858A91B7DDB44761D703E5A2FD737BCAA9;
IL2CPP_EXTERN_C String_t* _stringLiteral685C18BAB6BF03ED87AC8FE6593F9316E98BEC43;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral79046067E4AC983F0D2A6ACA479A10CE278A49BF;
IL2CPP_EXTERN_C String_t* _stringLiteral7AC264B8BFBB8CA05857A9F56C49ED4018187AEC;
IL2CPP_EXTERN_C String_t* _stringLiteral7C9A05991CF6AF87C1471CE7038482BC0F7AA079;
IL2CPP_EXTERN_C String_t* _stringLiteral820BC9D70EA6AE8245DB4DEA096E572E9B9A86DC;
IL2CPP_EXTERN_C String_t* _stringLiteral839BD4C6746730E90C7A6AF91609B7A7DB0BF49E;
IL2CPP_EXTERN_C String_t* _stringLiteral88DE3AE5D1539B4DC69F188BF0BA71D156A2A987;
IL2CPP_EXTERN_C String_t* _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1;
IL2CPP_EXTERN_C String_t* _stringLiteral8F89784DF2CB8ABD4A4F34F5A767DF3253A9AAFE;
IL2CPP_EXTERN_C String_t* _stringLiteral92E65E5CB9CBDB07BF05CBC3BE7E58875C404B95;
IL2CPP_EXTERN_C String_t* _stringLiteral9452A87FAA0073A5238C5BF8FBCAE0BFB2A7512D;
IL2CPP_EXTERN_C String_t* _stringLiteral9624DEBBCD14C2B589D0526FE720B99449CA1D13;
IL2CPP_EXTERN_C String_t* _stringLiteral97C0D56A99BE644C010699AC74FC430DB8BB99BC;
IL2CPP_EXTERN_C String_t* _stringLiteral9B2D833B107F93D5FC776077FE8509021DCC803E;
IL2CPP_EXTERN_C String_t* _stringLiteral9B7A4CD5FB9998F395948B8ACBE2F69A22B8050D;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF7C23368DD03F81E3F20769FF59E1F33045650;
IL2CPP_EXTERN_C String_t* _stringLiteralA18E784C84762DFFFFA0DCFDA6BBAABEF55A100A;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA3EF4E53D10409FFAE3D189EFA705AC02447DFB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA539038315AABE91ABF55F3F1AEE619EEBFC183A;
IL2CPP_EXTERN_C String_t* _stringLiteralA85E05BB895F5849332207594AD5147BCBB176DE;
IL2CPP_EXTERN_C String_t* _stringLiteralAC47381A312D0BE38226537F85448FFF2264564C;
IL2CPP_EXTERN_C String_t* _stringLiteralADB95DDF09353FBDD17E9890451F2F88C7F3AF20;
IL2CPP_EXTERN_C String_t* _stringLiteralBC93B6A90A4449B00C828AA910BA86B821FF7C5B;
IL2CPP_EXTERN_C String_t* _stringLiteralBF8B5610C2E749CDA971813F2601B7DDAF980B54;
IL2CPP_EXTERN_C String_t* _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924;
IL2CPP_EXTERN_C String_t* _stringLiteralC1D00124B0DDEC6154F3EF1FC1B1C8935E12B7F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC34ADFCB666054F3E69F6563783A6CF71501C1FD;
IL2CPP_EXTERN_C String_t* _stringLiteralC3CD665F87FC6202F03A4DC9229A0C7766E7A77C;
IL2CPP_EXTERN_C String_t* _stringLiteralC738BB6B953584EFB12E75585300B76B1BD237EE;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FB3AADE865E6D34A8377CFB1E0D3ADC4040BDC;
IL2CPP_EXTERN_C String_t* _stringLiteralCB4985E8F90C7FA1F0E650F37DD0D921D1BF99E6;
IL2CPP_EXTERN_C String_t* _stringLiteralCDF1B8C01FE1D4D3E80FBCE3178BE0FA050AC8D9;
IL2CPP_EXTERN_C String_t* _stringLiteralD4408813A01DBBB36D8DFAF744AB10024D68CCAE;
IL2CPP_EXTERN_C String_t* _stringLiteralD48F72658915912FA6CE055AB012D58CF5AB3612;
IL2CPP_EXTERN_C String_t* _stringLiteralD6A3D3FD460B612E06CEDB1D52101568E0019F15;
IL2CPP_EXTERN_C String_t* _stringLiteralD8BD06993FE0DC2B3159161D7E24A4B2B9BF138E;
IL2CPP_EXTERN_C String_t* _stringLiteralD9566034F4FB3DC59B12BB6CAA454DF680D03522;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA88A2D964F57B37C63183F5236085B715F076B8;
IL2CPP_EXTERN_C String_t* _stringLiteralDBAF93E807ED829BC77A5BC40002AF92E488B556;
IL2CPP_EXTERN_C String_t* _stringLiteralE0CFF3BC021C7A77F8C1BAFB2D406397F52AD882;
IL2CPP_EXTERN_C String_t* _stringLiteralE4D610383A110907EBBC6E764324DEE77D36FCE6;
IL2CPP_EXTERN_C String_t* _stringLiteralF34E659C4B872B7C5885697D738D61D1CF0D3E4E;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF4DEFACDDC6EDC45049E58865E8CC7A05C7AEA5B;
IL2CPP_EXTERN_C String_t* _stringLiteralF68BE93499EBDA525EAB969E88B05907332F6184;
IL2CPP_EXTERN_C String_t* _stringLiteralF8F7F2E55A1CD606D289F34C8A4DB8782887AA83;
IL2CPP_EXTERN_C String_t* _stringLiteralFC920BF5B48C73F1A2C760180F624A2192ADDA32;
IL2CPP_EXTERN_C String_t* _stringLiteralFF53E95B5FDF6317CD9E7F2EA730ACED9ECBE7F2;
IL2CPP_EXTERN_C String_t* _stringLiteralFFCD9D5AF3761817B9816A4316DE6CA4883E9975;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m954E487BCACC347B8820F48264C03739C2BA944F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m3991F6AFAC337479BBE03A1131E92A90A93EB572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB35E06D2B52402201915FCEF0BB0FC8012A2DE05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_additiveExpression_m6DB278A3FB63E67ACBA48722BA7B9FFA98321B50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_booleanAndExpression_mE3B01E6AE23C34C27F4C545C7808C9AE69243212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_conditionalExpression_mB49BC2847A4823A8EC0F35FD31660447571BFF12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_equalityExpression_m660CBE5AC5F60906C6433F77F9BCABB051A1AA73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_extractString_m73496B6994B86DAEB265F627BF23E76FB1B1E14F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_identifier_m697374C0E2B7BAF6C5DF801678F4C78CB13F3F53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_multiplicativeExpression_mE4985CD19B9128DDFF9FAEDF2A5D1ACB9BC4D2D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_primaryExpression_mD64C750787D69BB79620AF9347B994805740C039_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_relationalExpression_m0C3EDD10778FB21C34EDF679DB5F139A1D0555B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_shiftExpression_mB1135256D729B4899DC37EA2F7AD81EE5368103C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_unaryExpression_mC8B605980131E1E0AC78330D9A43790295E1B2A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_value_m9F984EDA6B75DB65D007A1F0EE951DCDBD60F870_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueExpression__ctor_mACD41125FFF375D20F709F1B2CB4B0002A8D2C97_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF  : public RuntimeObject
{
	LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* ____items;
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
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_t32B9240F30447D9E5C4951749F43B17B2E485B9D  : public RuntimeObject
{
};
struct BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B  : public RuntimeObject
{
	RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* ___state;
};
struct BaseTree_t93C88620BBC74C7117CD89A87723D83057772909  : public RuntimeObject
{
	RuntimeObject* ___children;
};
struct BaseTreeAdaptor_tC5D6F4BD7543FA9070CE10CCA68E30AB5EDB65AC  : public RuntimeObject
{
	RuntimeObject* ___treeToUniqueIDMap;
	int32_t ___uniqueNodeID;
};
struct BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6  : public RuntimeObject
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___bits;
};
struct DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F  : public RuntimeObject
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___eot;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___eof;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___min;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___max;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___accept;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___special;
	Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A* ___transition;
	int32_t ___decisionNumber;
	SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E* ___specialStateTransitionHandler;
	BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* ___recognizer;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};
struct LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465  : public RuntimeObject
{
};
struct LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes;
	String_t* ___positiveSign;
	String_t* ___negativeSign;
	String_t* ___numberDecimalSeparator;
	String_t* ___numberGroupSeparator;
	String_t* ___currencyGroupSeparator;
	String_t* ___currencyDecimalSeparator;
	String_t* ___currencySymbol;
	String_t* ___ansiCurrencySymbol;
	String_t* ___nanSymbol;
	String_t* ___positiveInfinitySymbol;
	String_t* ___negativeInfinitySymbol;
	String_t* ___percentDecimalSeparator;
	String_t* ___percentGroupSeparator;
	String_t* ___percentSymbol;
	String_t* ___perMilleSymbol;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits;
	int32_t ___m_dataItem;
	int32_t ___numberDecimalDigits;
	int32_t ___currencyDecimalDigits;
	int32_t ___currencyPositivePattern;
	int32_t ___currencyNegativePattern;
	int32_t ___numberNegativePattern;
	int32_t ___percentPositivePattern;
	int32_t ___percentNegativePattern;
	int32_t ___percentDecimalDigits;
	int32_t ___digitSubstitution;
	bool ___isReadOnly;
	bool ___m_useUserOverride;
	bool ___m_isInvariant;
	bool ___validForParseAsNumber;
	bool ___validForParseAsCurrency;
};
struct RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0  : public RuntimeObject
{
	BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588* ___following;
	int32_t ___followingStackPointer;
	bool ___errorRecovery;
	int32_t ___lastErrorIndex;
	bool ___failed;
	int32_t ___syntaxErrors;
	int32_t ___backtracking;
	IDictionaryU5BU5D_t604DB404DAEF595B12A45890E1D58CF8FF54116C* ___ruleMemo;
	RuntimeObject* ___token;
	int32_t ___tokenStartCharIndex;
	int32_t ___tokenStartLine;
	int32_t ___tokenStartCharPositionInLine;
	int32_t ___channel;
	int32_t ___type;
	String_t* ___text;
};
struct RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2  : public RuntimeObject
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
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
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
struct CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1  : public BaseTree_t93C88620BBC74C7117CD89A87723D83057772909
{
	int32_t ___startIndex;
	int32_t ___stopIndex;
	RuntimeObject* ___token;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___parent;
	int32_t ___childIndex;
};
struct CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F  : public BaseTreeAdaptor_tC5D6F4BD7543FA9070CE10CCA68E30AB5EDB65AC
{
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD  : public LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465
{
	IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* ___U3CIdentifierU3Ek__BackingField;
	LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* ___U3CExpressionsU3Ek__BackingField;
};
struct IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1  : public LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465
{
	String_t* ___U3CNameU3Ek__BackingField;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
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
struct Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE  : public BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B
{
	RuntimeObject* ___input;
};
struct ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	RuntimeObject* ____result;
	bool ___U3CHasResultU3Ek__BackingField;
};
struct Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849  : public BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B
{
	RuntimeObject* ___input;
};
struct ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035  : public RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2
{
	RuntimeObject* ___start;
	RuntimeObject* ___stop;
};
struct SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58  : public LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2
{
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ____numberFormatInfo;
	StringBuilder_t* ___U3CResultU3Ek__BackingField;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC  : public LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465
{
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___U3CLeftExpressionU3Ek__BackingField;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___U3CMiddleExpressionU3Ek__BackingField;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___U3CRightExpressionU3Ek__BackingField;
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D19163_t9893CA5B47FB83E714BF2D09D45B069DDEAC01D1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D19163_t9893CA5B47FB83E714BF2D09D45B069DDEAC01D1__padding[19163];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D53322_tD54060740AA39B4D874ECBDBEE9B08B96D3AA45D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D53322_tD54060740AA39B4D874ECBDBEE9B08B96D3AA45D__padding[53322];
	};
};
#pragma pack(pop, tp)
struct DFA14_tFBA7EA500275A28066C470E71FC8925CB701A61E  : public DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F
{
};
struct DFA7_t48436D7F9C5212F53AFF4FE9B76204B5E5AE74AB  : public DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F
{
};
struct BinaryExpressionType_t5C88EAB828EEECE90F6F0E6955A8FF90F495694F 
{
	int32_t ___value__;
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
struct NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5  : public Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE
{
	DFA7_t48436D7F9C5212F53AFF4FE9B76204B5E5AE74AB* ___dfa7;
	DFA14_tFBA7EA500275A28066C470E71FC8925CB701A61E* ___dfa14;
};
struct NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0  : public Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849
{
	RuntimeObject* ___adaptor;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CErrorsU3Ek__BackingField;
};
struct NumberStyles_t567C6CBC2A2B5B5A2C43B2855D158949984A810C 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	int32_t ___value__;
};
struct UnaryExpressionType_t829138CDF61258D25BBCA73BDE47A77444E3C0BA 
{
	int32_t ___value__;
};
struct ValueType_t3A8A944212A8E6FE5F8D48C84370521F50FD68B6 
{
	int32_t ___value__;
};
struct additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree;
};
struct arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* ___value;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree;
};
struct bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree;
};
struct bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree;
};
struct bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree;
};
struct booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree;
};
struct conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree;
};
struct equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree;
};
struct expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* ___value;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree;
};
struct identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* ___value;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree;
};
struct logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree;
};
struct multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree;
};
struct ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree;
};
struct primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree;
};
struct relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree;
};
struct shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree;
};
struct unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree;
};
struct value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* ___value;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree;
};
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};
struct BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B  : public LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465
{
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___U3CLeftExpressionU3Ek__BackingField;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___U3CRightExpressionU3Ek__BackingField;
	int32_t ___U3CTypeU3Ek__BackingField;
};
struct RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55  : public Exception_t
{
	RuntimeObject* ___input;
	int32_t ___index;
	RuntimeObject* ___token;
	RuntimeObject* ___node;
	int32_t ___c;
	int32_t ___line;
	int32_t ___charPositionInLine;
	bool ___approximateLineInfo;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E  : public LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465
{
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___U3CExpressionU3Ek__BackingField;
	int32_t ___U3CTypeU3Ek__BackingField;
};
struct ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7  : public LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465
{
	RuntimeObject* ___U3CValueU3Ek__BackingField;
	int32_t ___U3CTypeU3Ek__BackingField;
};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};
struct MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1  : public RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55
{
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___expecting;
};
struct NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC  : public RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55
{
	String_t* ___grammarDecisionDescription;
	int32_t ___decisionNumber;
	int32_t ___stateNumber;
};
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
struct List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF_StaticFields
{
	LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_t32B9240F30447D9E5C4951749F43B17B2E485B9D_StaticFields
{
	__StaticArrayInitTypeSizeU3D53322_tD54060740AA39B4D874ECBDBEE9B08B96D3AA45D ___AF26026E71D2DBE4EF51F4EFBC70C067D6256888B58CBDE2E5BAE409150276D9;
	__StaticArrayInitTypeSizeU3D19163_t9893CA5B47FB83E714BF2D09D45B069DDEAC01D1 ___E3062010615F9E0F7053638C9E6C0333B8039F8BFD75D087E70109C8E8500C03;
};
struct BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_StaticFields
{
	String_t* ___NEXT_TOKEN_RULE_NAME;
};
struct BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_StaticFields
{
	int32_t ___MOD_MASK;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty;
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo;
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
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue;
};
struct NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___DFA7_transitionS;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___DFA7_eot;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___DFA7_eof;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___DFA7_min;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___DFA7_max;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___DFA7_accept;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___DFA7_special;
	Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A* ___DFA7_transition;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___DFA14_transitionS;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___DFA14_eot;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___DFA14_eof;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___DFA14_min;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___DFA14_max;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___DFA14_accept;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___DFA14_special;
	Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A* ___DFA14_transition;
};
struct NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenNames;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numberFormatInfo;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_logicalExpression_in_ncalcExpression56;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_EOF_in_ncalcExpression58;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_conditionalExpression_in_logicalExpression78;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_19_in_logicalExpression84;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_conditionalExpression_in_logicalExpression88;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_20_in_logicalExpression90;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_conditionalExpression_in_logicalExpression94;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_booleanAndExpression_in_conditionalExpression121;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_set_in_conditionalExpression130;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_conditionalExpression_in_conditionalExpression146;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_bitwiseOrExpression_in_booleanAndExpression180;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_set_in_booleanAndExpression189;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_bitwiseOrExpression_in_booleanAndExpression205;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_bitwiseXOrExpression_in_bitwiseOrExpression237;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_25_in_bitwiseOrExpression246;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_bitwiseOrExpression_in_bitwiseOrExpression256;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression290;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_26_in_bitwiseXOrExpression299;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression309;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_equalityExpression_in_bitwiseAndExpression341;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_27_in_bitwiseAndExpression350;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_equalityExpression_in_bitwiseAndExpression360;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_relationalExpression_in_equalityExpression394;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_set_in_equalityExpression405;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_set_in_equalityExpression422;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_relationalExpression_in_equalityExpression441;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_shiftExpression_in_relationalExpression474;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_32_in_relationalExpression485;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_33_in_relationalExpression495;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_34_in_relationalExpression506;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_35_in_relationalExpression516;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_shiftExpression_in_relationalExpression528;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_additiveExpression_in_shiftExpression560;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_36_in_shiftExpression571;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_37_in_shiftExpression581;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_additiveExpression_in_shiftExpression593;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_multiplicativeExpression_in_additiveExpression625;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_38_in_additiveExpression636;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_39_in_additiveExpression646;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_multiplicativeExpression_in_additiveExpression658;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_unaryExpression_in_multiplicativeExpression690;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_40_in_multiplicativeExpression701;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_41_in_multiplicativeExpression711;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_42_in_multiplicativeExpression721;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_unaryExpression_in_multiplicativeExpression733;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_primaryExpression_in_unaryExpression760;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_set_in_unaryExpression771;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_primaryExpression_in_unaryExpression779;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_45_in_unaryExpression791;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_primaryExpression_in_unaryExpression794;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_39_in_unaryExpression805;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_primaryExpression_in_unaryExpression807;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_46_in_primaryExpression829;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_logicalExpression_in_primaryExpression831;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_47_in_primaryExpression833;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_value_in_primaryExpression843;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_identifier_in_primaryExpression851;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_arguments_in_primaryExpression856;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_INTEGER_in_value876;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_FLOAT_in_value884;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_STRING_in_value892;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_DATETIME_in_value901;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_TRUE_in_value908;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_FALSE_in_value916;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_ID_in_identifier934;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_NAME_in_identifier942;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_logicalExpression_in_expressionList966;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_48_in_expressionList973;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_logicalExpression_in_expressionList977;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_46_in_arguments1006;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_expressionList_in_arguments1010;
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_47_in_arguments1017;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
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
struct Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A  : public RuntimeArray
{
	ALIGN_FIELD (8) Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* m_Items[1];

	inline Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
struct LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B  : public RuntimeArray
{
	ALIGN_FIELD (8) LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* m_Items[1];

	inline LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA__ctor_mCE38E09A4533B61037DF20776BC22D1438D61C53 (DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognizerSharedState__ctor_m15A6D7A25E2A244035839024D7A03AF8BBDB5630 (RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCalcParser__ctor_mE3E1C167C20F1DAB752BB3E8930D298457BF079A (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, RuntimeObject* ___0_input, RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* ___1_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeAdaptor__ctor_m31806D904E560E7BA0F0267CE96CFCF867A5AC6D (CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m4FE6ADD0C253605D2E055630DF3B047F544B0429 (Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849* __this, RuntimeObject* ___0_input, RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* ___1_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCalcParser_InitializeCyclicDFAs_m0D9AB3C6A4145FE34A0CA9589752B41800CA19E8 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D (StringBuilder_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mC835E3C6004C07A7828640861C7E57DF6F42D0E9 (String_t* ___0_value, int32_t ___1_fromBase, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90 (StringBuilder_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679 (StringBuilder_t* __this, int32_t ___0_index, Il2CppChar ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_mBC97080D22543F9B12719E704A0C90AF84597A43 (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4 (String_t* __this, Il2CppChar ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_DisplayRecognitionError_m7EFC27074AA3274F788688E29BC8D48ADD2F19FD (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokenNames, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___1_e, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* NCalcParser_get_Errors_m9830250BEAD55AE399B54776A01EDA305F609F22_inline (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NCalcParser_set_Errors_mA917A8CA379FE5DD8B62A582FD3D196C5C36DD75_inline (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ncalcExpression_return__ctor_m422CF138036F78F966DAAC76FA5FF572615E7F8F (ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___0_fset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* NCalcParser_logicalExpression_m331B36AA673889BE071688BEEBE490840BACF985 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void logicalExpression_return__ctor_m7CEAB730B76250C43456F8505740F98C886B8AAD (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* NCalcParser_conditionalExpression_mB49BC2847A4823A8EC0F35FD31660447571BFF12 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression__ctor_mCB08337682715EEB37EE0D03996181A303FD3267 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___0_leftExpression, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___1_middleExpression, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___2_rightExpression, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void conditionalExpression_return__ctor_m426B2C4F035ED6EA2823C4B46845822BF796CC96 (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* NCalcParser_booleanAndExpression_mE3B01E6AE23C34C27F4C545C7808C9AE69243212 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedSetException__ctor_m86BBF2EDDE084B2481D65102A4D9A78A4F4F42A4 (MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* __this, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___0_expecting, RuntimeObject* ___1_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6 (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, int32_t ___0_type, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___1_leftExpression, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___2_rightExpression, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void booleanAndExpression_return__ctor_mFEAEFA25C564E27C239A57B0777976BA2BFEA086 (booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* NCalcParser_bitwiseOrExpression_mED019F59632FC2FC3760DDD2328ADB9F3DF614A8 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseOrExpression_return__ctor_m9AF5AE54B95A0454E1D5C5536EA2AAB50AC51630 (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* NCalcParser_bitwiseXOrExpression_m465CDDB79DF988DCD3ED8D7607F18142823508FF (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseXOrExpression_return__ctor_m541B10184341E638DDE6E5B26AE7B085DADFBAE3 (bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* NCalcParser_bitwiseAndExpression_m6053C71F216686575266D3E709ACFC95DD3DBBB3 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseAndExpression_return__ctor_m7B0C7223BC7F67092EBC55739953BD24CD5C9686 (bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* NCalcParser_equalityExpression_m660CBE5AC5F60906C6433F77F9BCABB051A1AA73 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void equalityExpression_return__ctor_m00B929AD146884433C96A1CDA91E593171A28D6A (equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* NCalcParser_relationalExpression_m0C3EDD10778FB21C34EDF679DB5F139A1D0555B5 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1 (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* __this, String_t* ___0_grammarDecisionDescription, int32_t ___1_decisionNumber, int32_t ___2_stateNumber, RuntimeObject* ___3_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void relationalExpression_return__ctor_m5A84A5D6F3647F41895F0281CB5087695BF44B64 (relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* NCalcParser_shiftExpression_mB1135256D729B4899DC37EA2F7AD81EE5368103C (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shiftExpression_return__ctor_mDA7571BFF156CDDEB994FEBA01C969A002837E9B (shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* NCalcParser_additiveExpression_m6DB278A3FB63E67ACBA48722BA7B9FFA98321B50 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void additiveExpression_return__ctor_m069149FDAE713F9A87A10851AD630B59C869CA53 (additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* NCalcParser_multiplicativeExpression_mE4985CD19B9128DDFF9FAEDF2A5D1ACB9BC4D2D5 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void multiplicativeExpression_return__ctor_m4EC6588201A9DD7527112016F99FD17611790A3C (multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* NCalcParser_unaryExpression_mC8B605980131E1E0AC78330D9A43790295E1B2A5 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unaryExpression_return__ctor_mE4FBA5CA64602B3C38981B648ED292D7B0C7DA98 (unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* NCalcParser_primaryExpression_mD64C750787D69BB79620AF9347B994805740C039 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression__ctor_m1FB2772CED5F7227987F4689D8697977BCA3C24E (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, int32_t ___0_type, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___1_expression, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void primaryExpression_return__ctor_mF0B4992409A94995D798FC05A446633E95165C65 (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* NCalcParser_value_m9F984EDA6B75DB65D007A1F0EE951DCDBD60F870 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* NCalcParser_identifier_m697374C0E2B7BAF6C5DF801678F4C78CB13F3F53 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* NCalcParser_arguments_m8382A07E7C283B57AF2D3DECF15F56C6B7708A7C (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
inline LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* List_1_ToArray_m3991F6AFAC337479BBE03A1131E92A90A93EB572 (List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* __this, const RuntimeMethod* method)
{
	return ((  LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* (*) (List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionExpression__ctor_m34989F1EE71A2A0D4ECD1FC2704A70E4FB460F2A (FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* __this, IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* ___0_identifier, LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* ___1_expressions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void value_return__ctor_m1D48771759774D00FCCB206334475E57EB8C2A8B (value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m7E0753DE1AD2DA756C691B84700449E413F7663A (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6 (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_mE330F904E914D7B454BB195668A6D89C5B5F13DD (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mA6BD954627BB3B2317D7BA7D4B29DCA53C660058 (String_t* ___0_s, int32_t ___1_style, RuntimeObject* ___2_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_mACD41125FFF375D20F709F1B2CB4B0002A8D2C97 (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NCalcParser_extractString_m73496B6994B86DAEB265F627BF23E76FB1B1E14F (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, String_t* ___0_text, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m64932619474457A2EC86AAFB6803242EAF683C9F (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_Parse_m2DE2BF8FC3E6A6FB695ACE7A2D39A812D1D806DB (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m5FA864D2F1EC21C1C0788F61CF5B2EB0A203D223 (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m3D94A47FFF8510B37262AD8CE50E6982153BA06A (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void identifier_return__ctor_m607079BF18B64935F5D65C179A1DD2EEBDD1DC64 (identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentifierExpression__ctor_mD7084F992382FC6882312FF559288E684E3F2196 (IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void expressionList_return__ctor_m2EA78AA8DAA3AC6FD1F1B998CA9BC362502D0FC7 (expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_mB35E06D2B52402201915FCEF0BB0FC8012A2DE05 (List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void List_1_Add_m954E487BCACC347B8820F48264C03739C2BA944F_inline (List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF*, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void arguments_return__ctor_mD57A323BD2933750E6A65521119CA6EE4B0F8384 (arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* NCalcParser_expressionList_m9714F81848953C3B58959B2E8FA232FC0856231C (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatInfo__ctor_m94502038B1DB45D50D1331C312DDAD0D80CD608C (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57 (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_bits_, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07 (ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParameterArgs_set_HasResult_m9CB8E148415DFDB780A5C5D0299E71AB596A76B8_inline (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogicalExpressionVisitor__ctor_m24C7C345ACEE6EADDD7106CAC9D789BFEBB0F3D9 (LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SerializationVisitor_set_Result_m1C2912A68EBF051E396DA3EC9A52BFED68A46A36_inline (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, StringBuilder_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatInfo_set_NumberDecimalSeparator_mEC8D7493863AD768CF6107DE7617811E1105DF10 (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_LeftExpression_mDE504809B2CDB09C513D85D62F681F3432EAEBE0_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___0_expression, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_MiddleExpression_m31BE5A457389B52577A93E6757D2291A3ABDDFA7_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_RightExpression_m3BB5D4B3540900E08217DBA3B4DCA150B3293825_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* BinaryExpression_get_LeftExpression_mD21818A59055D95C304B73471F9D4B782DB63B28_inline (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BinaryExpression_get_Type_m643CED48C4A086AB2E63036E53B64DD3D04D10A1_inline (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* BinaryExpression_get_RightExpression_m7CF8195F4CC8C4EEABB53A658BECE92ACEE3BD94_inline (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnaryExpression_get_Type_m1975DEB3A3A893A20EEF225A9B83A818812A457B_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* UnaryExpression_get_Expression_m048BC347DA44FFBA007ECA3B5C71B26C9A730EED_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ValueExpression_get_Type_mB8AC3CE9703854799ACF44BC217CE9F39ED933E5_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_Parse_mF59EB26DED52ED2D5E804452CFC9102E3347C10D (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Decimal_ToString_m08256316312F5D05FE3D099C083A99BC694F4762 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* FunctionExpression_get_Identifier_mC36B5723E1F5542170364200861FE75527686D3E_inline (FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IdentifierExpression_get_Name_mEC9209065D0E0A9E5877D0D7CE5C5F06317F27B2_inline (IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* FunctionExpression_get_Expressions_mDD1CA87B11D2BAE3D578441A3BC83657D0FB9819_inline (FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF (LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_LeftExpression_mA61386087E56C883FC1036D5C1A93347C2C0D7BF_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_MiddleExpression_m78AB85AA7179BE64D7C6EEC0D534DED8E16CBB03_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_RightExpression_m32C9F11F1B7C64A2853EA2D1EDAA0BC18D0E775E_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnaryExpression_set_Type_m99254492E0713042FF17F8993E77B00312BB5DE1_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnaryExpression_set_Expression_m458F59A7061112E5568F1C100D0655350B6E9029_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvaluationException__ctor_mC3545B04D76AEAFC2007507CC0D00D12D4CC6BFE (EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82100
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA7__ctor_m480844D7B704DBBF04490D7370F60A7575D595EF (DFA7_t48436D7F9C5212F53AFF4FE9B76204B5E5AE74AB* __this, BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* ___0_recognizer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1953>
		DFA__ctor_mCE38E09A4533B61037DF20776BC22D1438D61C53(__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1955>
		BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* L_0 = ___0_recognizer;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___recognizer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___recognizer), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1956>
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___decisionNumber = 7;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1957>
		il2cpp_codegen_runtime_class_init_inline(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA7_eot;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___eot = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___eot), (void*)L_1);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1958>
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA7_eof;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___eof = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___eof), (void*)L_2);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1959>
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA7_min;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___min = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___min), (void*)L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1960>
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA7_max;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___max = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___max), (void*)L_4);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1961>
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA7_accept;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___accept = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___accept), (void*)L_5);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1962>
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA7_special;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___special = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___special), (void*)L_6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1963>
		Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A* L_7 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA7_transition;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___transition = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___transition), (void*)L_7);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1964>
		return;
	}
}
// Method Definition Index: 82101
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DFA7_get_Description_m19196F07F2379EA1ABC106427AC48E682B53C28F (DFA7_t48436D7F9C5212F53AFF4FE9B76204B5E5AE74AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D280E7E733EC7E25A38F3C52ADCAF04C3DA0CD9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1970>
		V_0 = _stringLiteral3D280E7E733EC7E25A38F3C52ADCAF04C3DA0CD9;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1971>
		String_t* L_0 = V_0;
		return L_0;
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
// Method Definition Index: 82102
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA14__ctor_m183328D8536374AADA4DBC0BC8F28B00C618E551 (DFA14_tFBA7EA500275A28066C470E71FC8925CB701A61E* __this, BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* ___0_recognizer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1977>
		DFA__ctor_mCE38E09A4533B61037DF20776BC22D1438D61C53(__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1979>
		BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* L_0 = ___0_recognizer;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___recognizer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___recognizer), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1980>
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___decisionNumber = ((int32_t)14);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1981>
		il2cpp_codegen_runtime_class_init_inline(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA14_eot;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___eot = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___eot), (void*)L_1);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1982>
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA14_eof;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___eof = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___eof), (void*)L_2);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1983>
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA14_min;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___min = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___min), (void*)L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1984>
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA14_max;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___max = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___max), (void*)L_4);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1985>
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA14_accept;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___accept = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___accept), (void*)L_5);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1986>
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA14_special;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___special = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___special), (void*)L_6);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1987>
		Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A* L_7 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA14_transition;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___transition = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___transition), (void*)L_7);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1988>
		return;
	}
}
// Method Definition Index: 82103
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DFA14_get_Description_m06C7CA4921D7E33A63DF7F14C82BB39C8C18F946 (DFA14_tFBA7EA500275A28066C470E71FC8925CB701A61E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8F7F2E55A1CD606D289F34C8A4DB8782887AA83);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1994>
		V_0 = _stringLiteralF8F7F2E55A1CD606D289F34C8A4DB8782887AA83;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcLexer.cs:1995>
		String_t* L_0 = V_0;
		return L_0;
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
// Method Definition Index: 82104
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCalcParser__ctor_mED5BC8CDBB1F32ADF97E1FED23E75AE5DC64E464 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, RuntimeObject* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:19>
		RuntimeObject* L_0 = ___0_input;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_1 = (RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0*)il2cpp_codegen_object_new(RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0_il2cpp_TypeInfo_var);
		RecognizerSharedState__ctor_m15A6D7A25E2A244035839024D7A03AF8BBDB5630(L_1, NULL);
		NCalcParser__ctor_mE3E1C167C20F1DAB752BB3E8930D298457BF079A(__this, L_0, L_1, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:19>
		return;
	}
}
// Method Definition Index: 82105
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCalcParser__ctor_mE3E1C167C20F1DAB752BB3E8930D298457BF079A (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, RuntimeObject* ___0_input, RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:27>
		CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F* L_0 = (CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F*)il2cpp_codegen_object_new(CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F_il2cpp_TypeInfo_var);
		CommonTreeAdaptor__ctor_m31806D904E560E7BA0F0267CE96CFCF867A5AC6D(L_0, NULL);
		__this->___adaptor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptor), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:22>
		RuntimeObject* L_1 = ___0_input;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_2 = ___1_state;
		Parser__ctor_m4FE6ADD0C253605D2E055630DF3B047F544B0429(__this, L_1, L_2, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:24>
		NCalcParser_InitializeCyclicDFAs_m0D9AB3C6A4145FE34A0CA9589752B41800CA19E8(__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:25>
		return;
	}
}
// Method Definition Index: 82106
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NCalcParser_get_TreeAdaptor_mB994E084897ADA9171CD40C689793B2EDAF50706 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:33>
		RuntimeObject* L_0 = __this->___adaptor;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:34>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82107
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCalcParser_set_TreeAdaptor_mC31FE9465D094AB5A602502EAB74583C2E969D92 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:37>
		RuntimeObject* L_0 = ___0_value;
		__this->___adaptor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptor), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:38>
		return;
	}
}
// Method Definition Index: 82108
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NCalcParser_get_TokenNames_m49C500C0C895AD891859589294E383C2AA092155 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:45>
		il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___tokenNames;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:46>
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82109
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NCalcParser_get_GrammarFileName_m03E28EEC2B1558AED0960FEB5E278BEDA0ABEDC9 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3EF4E53D10409FFAE3D189EFA705AC02447DFB1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:53>
		V_0 = _stringLiteralA3EF4E53D10409FFAE3D189EFA705AC02447DFB1;
		goto IL_0009;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:54>
		String_t* L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 82110
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* NCalcParser_get_Errors_m9830250BEAD55AE399B54776A01EDA305F609F22 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:57>
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CErrorsU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82111
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCalcParser_set_Errors_mA917A8CA379FE5DD8B62A582FD3D196C5C36DD75 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:57>
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___0_value;
		__this->___U3CErrorsU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorsU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 82112
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCalcParser_InitializeCyclicDFAs_m0D9AB3C6A4145FE34A0CA9589752B41800CA19E8 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:63>
		return;
	}
}
// Method Definition Index: 82113
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NCalcParser_extractString_m73496B6994B86DAEB265F627BF23E76FB1B1E14F (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	Il2CppChar V_6 = 0x0;
	Il2CppChar V_7 = 0x0;
	Il2CppChar V_8 = 0x0;
	bool V_9 = false;
	String_t* V_10 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:67>
		String_t* L_0 = ___0_text;
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_1, L_0, NULL);
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:68>
		V_1 = 1;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:69>
		V_2 = (-1);
		goto IL_016c;
	}

IL_0011:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:73>
		StringBuilder_t* L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		V_3 = L_4;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:74>
		Il2CppChar L_5 = V_3;
		V_8 = L_5;
		Il2CppChar L_6 = V_8;
		V_7 = L_6;
		Il2CppChar L_7 = V_7;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_0042;
		}
	}
	{
		Il2CppChar L_8 = V_7;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)39))))
		{
			goto IL_012a;
		}
	}
	{
		goto IL_0034;
	}

IL_0034:
	{
		Il2CppChar L_9 = V_7;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_013d;
		}
	}
	{
		goto IL_0150;
	}

IL_0042:
	{
		Il2CppChar L_10 = V_7;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)110))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_004d;
	}

IL_004d:
	{
		Il2CppChar L_11 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_0104;
			}
			case 1:
			{
				goto IL_0150;
			}
			case 2:
			{
				goto IL_0117;
			}
			case 3:
			{
				goto IL_006c;
			}
		}
	}
	{
		goto IL_0150;
	}

IL_006c:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:77>
		StringBuilder_t* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Il2CppChar L_14;
		L_14 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_12, ((int32_t)il2cpp_codegen_add(L_13, 4)), NULL);
		Il2CppChar L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.char_class, &L_15);
		StringBuilder_t* L_17 = V_0;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Il2CppChar L_19;
		L_19 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_17, ((int32_t)il2cpp_codegen_add(L_18, 5)), NULL);
		Il2CppChar L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_defaults.char_class, &L_20);
		String_t* L_22;
		L_22 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_16, L_21, NULL);
		V_4 = L_22;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:78>
		StringBuilder_t* L_23 = V_0;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_23, ((int32_t)il2cpp_codegen_add(L_24, 2)), NULL);
		Il2CppChar L_26 = L_25;
		RuntimeObject* L_27 = Box(il2cpp_defaults.char_class, &L_26);
		StringBuilder_t* L_28 = V_0;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		Il2CppChar L_30;
		L_30 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_28, ((int32_t)il2cpp_codegen_add(L_29, 3)), NULL);
		Il2CppChar L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_defaults.char_class, &L_31);
		String_t* L_33;
		L_33 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_27, L_32, NULL);
		V_5 = L_33;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:79>
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_34;
		L_34 = Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = L_35;
		String_t* L_37 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_38;
		L_38 = Convert_ToByte_mC835E3C6004C07A7828640861C7E57DF6F42D0E9(L_37, ((int32_t)16), NULL);
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_38);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = L_36;
		String_t* L_40 = V_5;
		uint8_t L_41;
		L_41 = Convert_ToByte_mC835E3C6004C07A7828640861C7E57DF6F42D0E9(L_40, ((int32_t)16), NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_41);
		NullCheck(L_34);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_42;
		L_42 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(23, L_34, L_39);
		NullCheck(L_42);
		int32_t L_43 = 0;
		uint16_t L_44 = (uint16_t)(L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_6 = L_44;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:80>
		StringBuilder_t* L_45 = V_0;
		int32_t L_46 = V_2;
		NullCheck(L_45);
		StringBuilder_t* L_47;
		L_47 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_45, L_46, 6, NULL);
		int32_t L_48 = V_2;
		Il2CppChar L_49 = V_6;
		NullCheck(L_47);
		StringBuilder_t* L_50;
		L_50 = StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679(L_47, L_48, L_49, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:81>
		goto IL_0167;
	}

IL_00f1:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:83>
		StringBuilder_t* L_51 = V_0;
		int32_t L_52 = V_2;
		NullCheck(L_51);
		StringBuilder_t* L_53;
		L_53 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_51, L_52, 2, NULL);
		int32_t L_54 = V_2;
		NullCheck(L_53);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679(L_53, L_54, ((int32_t)10), NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:84>
		goto IL_0167;
	}

IL_0104:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:86>
		StringBuilder_t* L_56 = V_0;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		StringBuilder_t* L_58;
		L_58 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_56, L_57, 2, NULL);
		int32_t L_59 = V_2;
		NullCheck(L_58);
		StringBuilder_t* L_60;
		L_60 = StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679(L_58, L_59, ((int32_t)13), NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:87>
		goto IL_0167;
	}

IL_0117:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:89>
		StringBuilder_t* L_61 = V_0;
		int32_t L_62 = V_2;
		NullCheck(L_61);
		StringBuilder_t* L_63;
		L_63 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_61, L_62, 2, NULL);
		int32_t L_64 = V_2;
		NullCheck(L_63);
		StringBuilder_t* L_65;
		L_65 = StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679(L_63, L_64, ((int32_t)9), NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:90>
		goto IL_0167;
	}

IL_012a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:92>
		StringBuilder_t* L_66 = V_0;
		int32_t L_67 = V_2;
		NullCheck(L_66);
		StringBuilder_t* L_68;
		L_68 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_66, L_67, 2, NULL);
		int32_t L_69 = V_2;
		NullCheck(L_68);
		StringBuilder_t* L_70;
		L_70 = StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679(L_68, L_69, ((int32_t)39), NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:93>
		goto IL_0167;
	}

IL_013d:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:95>
		StringBuilder_t* L_71 = V_0;
		int32_t L_72 = V_2;
		NullCheck(L_71);
		StringBuilder_t* L_73;
		L_73 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_71, L_72, 2, NULL);
		int32_t L_74 = V_2;
		NullCheck(L_73);
		StringBuilder_t* L_75;
		L_75 = StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679(L_73, L_74, ((int32_t)92), NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:96>
		goto IL_0167;
	}

IL_0150:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:98>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		String_t* L_76;
		L_76 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		String_t* L_77;
		L_77 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5FDE879CBB29EDDD1BF6CA7C9074367D90619E3B)), L_76, NULL);
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_78 = (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)));
		RecognitionException__ctor_mBC97080D22543F9B12719E704A0C90AF84597A43(L_78, L_77, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_78, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_extractString_m73496B6994B86DAEB265F627BF23E76FB1B1E14F_RuntimeMethod_var)));
	}

IL_0167:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:101>
		int32_t L_79 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_016c:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:71>
		StringBuilder_t* L_80 = V_0;
		NullCheck(L_80);
		String_t* L_81;
		L_81 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_80);
		int32_t L_82 = V_1;
		NullCheck(L_81);
		int32_t L_83;
		L_83 = String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4(L_81, ((int32_t)92), L_82, NULL);
		int32_t L_84 = L_83;
		V_2 = L_84;
		V_9 = (bool)((((int32_t)((((int32_t)L_84) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_85 = V_9;
		if (L_85)
		{
			goto IL_0011;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:104>
		StringBuilder_t* L_86 = V_0;
		NullCheck(L_86);
		StringBuilder_t* L_87;
		L_87 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_86, 0, 1, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:105>
		StringBuilder_t* L_88 = V_0;
		StringBuilder_t* L_89 = V_0;
		NullCheck(L_89);
		int32_t L_90;
		L_90 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_89, NULL);
		NullCheck(L_88);
		StringBuilder_t* L_91;
		L_91 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_88, ((int32_t)il2cpp_codegen_subtract(L_90, 1)), 1, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:107>
		StringBuilder_t* L_92 = V_0;
		NullCheck(L_92);
		String_t* L_93;
		L_93 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_92);
		V_10 = L_93;
		goto IL_01ae;
	}

IL_01ae:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:108>
		String_t* L_94 = V_10;
		return L_94;
	}
}
// Method Definition Index: 82114
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCalcParser_DisplayRecognitionError_m74D1B1F8143AAB9B64BABE1662DCA47AF942D504 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokenNames, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:112>
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_tokenNames;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_1 = ___1_e;
		BaseRecognizer_DisplayRecognitionError_m7EFC27074AA3274F788688E29BC8D48ADD2F19FD(__this, L_0, L_1, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:114>
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2;
		L_2 = NCalcParser_get_Errors_m9830250BEAD55AE399B54776A01EDA305F609F22_inline(__this, NULL);
		V_2 = (bool)((((RuntimeObject*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:116>
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_4, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		NCalcParser_set_Errors_mA917A8CA379FE5DD8B62A582FD3D196C5C36DD75_inline(__this, L_4, NULL);
	}

IL_0025:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:119>
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_5 = ___1_e;
		String_t* L_6;
		L_6 = VirtualFuncInvoker1< String_t*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(13, __this, L_5);
		V_0 = L_6;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:120>
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_7 = ___1_e;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ___0_tokenNames;
		String_t* L_9;
		L_9 = VirtualFuncInvoker2< String_t*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(12, __this, L_7, L_8);
		V_1 = L_9;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:121>
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10;
		L_10 = NCalcParser_get_Errors_m9830250BEAD55AE399B54776A01EDA305F609F22_inline(__this, NULL);
		String_t* L_11 = V_1;
		String_t* L_12 = V_0;
		String_t* L_13;
		L_13 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_11, _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1, L_12, NULL);
		NullCheck(L_10);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_10, L_13, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:122>
		return;
	}
}
// Method Definition Index: 82115
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* NCalcParser_ncalcExpression_m2056D603298800CBA3D58C744399464FD978DACF (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* V_3 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_4 = NULL;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_5 = NULL;
	ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* G_B3_0 = NULL;
	ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* G_B4_1 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:128>
		ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_0 = (ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6*)il2cpp_codegen_object_new(ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6_il2cpp_TypeInfo_var);
		ncalcExpression_return__ctor_m422CF138036F78F966DAAC76FA5FF572615E7F8F(L_0, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:129>
		ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5, L_1, L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:131>
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:133>
		V_2 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:134>
		V_3 = (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:136>
		V_4 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0146:
			{
				return;
			}
		});
		try
		{
			try
			{
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:143>
					RuntimeObject* L_4 = __this->___adaptor;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:145>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_ncalcExpression56;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:146>
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_7;
					L_7 = NCalcParser_logicalExpression_m331B36AA673889BE071688BEEBE490840BACF985(__this, NULL);
					V_3 = L_7;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:147>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer;
					NullCheck(L_9);
					L_9->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:149>
					RuntimeObject* L_11 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_13 = V_3;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:150>
					RuntimeObject* L_15 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_16 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_EOF_in_ncalcExpression58;
					RuntimeObject* L_17;
					L_17 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_15, (-1), L_16);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:151>
					ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_18 = V_0;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_19 = V_3;
					if (L_19)
					{
						G_B3_0 = L_18;
						goto IL_008e_2;
					}
					G_B2_0 = L_18;
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_0094_2;
				}

IL_008e_2:
				{
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_20 = V_3;
					NullCheck(L_20);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_21 = L_20->___value;
					G_B4_0 = L_21;
					G_B4_1 = G_B3_0;
				}

IL_0094_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value), (void*)G_B4_0);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:154>
					ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_22 = V_0;
					RuntimeObject* L_23 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_23);
					RuntimeObject* L_24;
					L_24 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_23, (-1));
					NullCheck(L_22);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_22, L_24);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:156>
					ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_25 = V_0;
					RuntimeObject* L_26 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_27 = V_1;
					NullCheck(L_26);
					RuntimeObject* L_28;
					L_28 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_26, L_27);
					NullCheck(L_25);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_25, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_28, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:157>
					RuntimeObject* L_29 = __this->___adaptor;
					ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_30 = V_0;
					NullCheck(L_30);
					RuntimeObject* L_31;
					L_31 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_30);
					ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_32 = V_0;
					NullCheck(L_32);
					RuntimeObject* L_33;
					L_33 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_32);
					ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_34 = V_0;
					NullCheck(L_34);
					RuntimeObject* L_35;
					L_35 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_34);
					NullCheck(L_29);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_29, L_31, ((RuntimeObject*)Castclass((RuntimeObject*)L_33, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_35, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0144_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00f0_1;
				}
				throw e;
			}

CATCH_00f0_1:
			{
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_36 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:159>
				V_5 = L_36;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:161>
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_37 = V_5;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10, __this, L_37);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:162>
				RuntimeObject* L_38 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_39 = V_5;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16, __this, L_38, L_39);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:164>
				ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_40 = V_0;
				RuntimeObject* L_41 = __this->___adaptor;
				RuntimeObject* L_42 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_43 = V_0;
				NullCheck(L_43);
				RuntimeObject* L_44;
				L_44 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_43);
				RuntimeObject* L_45 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				NullCheck(L_45);
				RuntimeObject* L_46;
				L_46 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_45, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_47 = V_5;
				NullCheck(L_41);
				RuntimeObject* L_48;
				L_48 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_41, L_42, ((RuntimeObject*)Castclass((RuntimeObject*)L_44, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_46, L_47);
				NullCheck(L_40);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_40, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_48, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_0144_1;
			}

IL_0144_1:
			{
				goto IL_0149;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0149:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:167>
		ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_49 = V_0;
		V_6 = L_49;
		goto IL_014e;
	}

IL_014e:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:168>
		ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_50 = V_6;
		return L_50;
	}
}
// Method Definition Index: 82116
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* NCalcParser_logicalExpression_m331B36AA673889BE071688BEEBE490840BACF985 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* V_4 = NULL;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* V_5 = NULL;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* V_6 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_7 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_14 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* V_15 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B3_0 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B4_1 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B10_0 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B9_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B11_0 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B11_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B13_0 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B13_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B12_0 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B12_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B14_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B14_1 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B14_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B16_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B16_1 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B16_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B15_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B15_1 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B15_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B17_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B17_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B17_2 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B17_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:174>
		logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_0 = (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402*)il2cpp_codegen_object_new(logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402_il2cpp_TypeInfo_var);
		logicalExpression_return__ctor_m7CEAB730B76250C43456F8505740F98C886B8AAD(L_0, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:175>
		logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5, L_1, L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:177>
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:179>
		V_2 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:180>
		V_3 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:181>
		V_4 = (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:183>
		V_5 = (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:185>
		V_6 = (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:187>
		V_7 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:188>
		V_8 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0297:
			{
				return;
			}
		});
		try
		{
			try
			{
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:195>
					RuntimeObject* L_4 = __this->___adaptor;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:197>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_logicalExpression78;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:198>
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_7;
					L_7 = NCalcParser_conditionalExpression_mB49BC2847A4823A8EC0F35FD31660447571BFF12(__this, NULL);
					V_4 = L_7;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:199>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer;
					NullCheck(L_9);
					L_9->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:201>
					RuntimeObject* L_11 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_13 = V_4;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:202>
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_15 = V_0;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_16 = V_4;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_0085_2;
					}
					G_B2_0 = L_15;
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_008c_2;
				}

IL_0085_2:
				{
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_17 = V_4;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_008c_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value), (void*)G_B4_0);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:204>
					V_9 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:205>
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_10 = L_20;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:207>
					int32_t L_21 = V_10;
					V_11 = (bool)((((int32_t)L_21) == ((int32_t)((int32_t)19)))? 1 : 0);
					bool L_22 = V_11;
					if (!L_22)
					{
						goto IL_00b3_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:209>
					V_9 = 1;
				}

IL_00b3_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:211>
					int32_t L_23 = V_9;
					V_13 = L_23;
					int32_t L_24 = V_13;
					V_12 = L_24;
					int32_t L_25 = V_12;
					if ((((int32_t)L_25) == ((int32_t)1)))
					{
						goto IL_00c5_2;
					}
				}
				{
					goto IL_01ea_2;
				}

IL_00c5_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:216>
					RuntimeObject* L_26 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_27 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_19_in_logicalExpression84;
					RuntimeObject* L_28;
					L_28 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_26, ((int32_t)19), L_27);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_28, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:217>
					RuntimeObject* L_29 = __this->___adaptor;
					RuntimeObject* L_30 = V_2;
					NullCheck(L_29);
					RuntimeObject* L_31;
					L_31 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_29, L_30);
					V_7 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_31, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:218>
					RuntimeObject* L_32 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_33 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_34 = V_7;
					NullCheck(L_32);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_32, L_33, L_34);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:220>
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_35 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_logicalExpression88;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_35, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:221>
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_36;
					L_36 = NCalcParser_conditionalExpression_mB49BC2847A4823A8EC0F35FD31660447571BFF12(__this, NULL);
					V_5 = L_36;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:222>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_37 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_38 = L_37;
					NullCheck(L_38);
					int32_t L_39 = L_38->___followingStackPointer;
					NullCheck(L_38);
					L_38->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:224>
					RuntimeObject* L_40 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_41 = V_1;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_42 = V_5;
					NullCheck(L_42);
					RuntimeObject* L_43;
					L_43 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_42);
					NullCheck(L_40);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_40, L_41, L_43);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:225>
					RuntimeObject* L_44 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_45 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_20_in_logicalExpression90;
					RuntimeObject* L_46;
					L_46 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_44, ((int32_t)20), L_45);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_46, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:226>
					RuntimeObject* L_47 = __this->___adaptor;
					RuntimeObject* L_48 = V_3;
					NullCheck(L_47);
					RuntimeObject* L_49;
					L_49 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_47, L_48);
					V_8 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_49, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:227>
					RuntimeObject* L_50 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_51 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_52 = V_8;
					NullCheck(L_50);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_50, L_51, L_52);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:229>
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_53 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_logicalExpression94;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_53, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:230>
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_54;
					L_54 = NCalcParser_conditionalExpression_mB49BC2847A4823A8EC0F35FD31660447571BFF12(__this, NULL);
					V_6 = L_54;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:231>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_55 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_56 = L_55;
					NullCheck(L_56);
					int32_t L_57 = L_56->___followingStackPointer;
					NullCheck(L_56);
					L_56->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:233>
					RuntimeObject* L_58 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_59 = V_1;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_60 = V_6;
					NullCheck(L_60);
					RuntimeObject* L_61;
					L_61 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_60);
					NullCheck(L_58);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_58, L_59, L_61);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:234>
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_62 = V_0;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_63 = V_4;
					if (L_63)
					{
						G_B10_0 = L_62;
						goto IL_01ba_2;
					}
					G_B9_0 = L_62;
				}
				{
					G_B11_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B11_1 = G_B9_0;
					goto IL_01c1_2;
				}

IL_01ba_2:
				{
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_64 = V_4;
					NullCheck(L_64);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_65 = L_64->___value;
					G_B11_0 = L_65;
					G_B11_1 = G_B10_0;
				}

IL_01c1_2:
				{
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_66 = V_5;
					if (L_66)
					{
						G_B13_0 = G_B11_0;
						G_B13_1 = G_B11_1;
						goto IL_01c8_2;
					}
					G_B12_0 = G_B11_0;
					G_B12_1 = G_B11_1;
				}
				{
					G_B14_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B14_1 = G_B12_0;
					G_B14_2 = G_B12_1;
					goto IL_01cf_2;
				}

IL_01c8_2:
				{
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_67 = V_5;
					NullCheck(L_67);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_68 = L_67->___value;
					G_B14_0 = L_68;
					G_B14_1 = G_B13_0;
					G_B14_2 = G_B13_1;
				}

IL_01cf_2:
				{
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_69 = V_6;
					if (L_69)
					{
						G_B16_0 = G_B14_0;
						G_B16_1 = G_B14_1;
						G_B16_2 = G_B14_2;
						goto IL_01d6_2;
					}
					G_B15_0 = G_B14_0;
					G_B15_1 = G_B14_1;
					G_B15_2 = G_B14_2;
				}
				{
					G_B17_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B17_1 = G_B15_0;
					G_B17_2 = G_B15_1;
					G_B17_3 = G_B15_2;
					goto IL_01dd_2;
				}

IL_01d6_2:
				{
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_70 = V_6;
					NullCheck(L_70);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_71 = L_70->___value;
					G_B17_0 = L_71;
					G_B17_1 = G_B16_0;
					G_B17_2 = G_B16_1;
					G_B17_3 = G_B16_2;
				}

IL_01dd_2:
				{
					TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* L_72 = (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC*)il2cpp_codegen_object_new(TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC_il2cpp_TypeInfo_var);
					TernaryExpression__ctor_mCB08337682715EEB37EE0D03996181A303FD3267(L_72, G_B17_2, G_B17_1, G_B17_0, NULL);
					NullCheck(G_B17_3);
					G_B17_3->___value = L_72;
					Il2CppCodeGenWriteBarrier((void**)(&G_B17_3->___value), (void*)L_72);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:236>
					goto IL_01ea_2;
				}

IL_01ea_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:240>
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_73 = V_0;
					RuntimeObject* L_74 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_74);
					RuntimeObject* L_75;
					L_75 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_74, (-1));
					NullCheck(L_73);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_73, L_75);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:242>
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_76 = V_0;
					RuntimeObject* L_77 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_78 = V_1;
					NullCheck(L_77);
					RuntimeObject* L_79;
					L_79 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_77, L_78);
					NullCheck(L_76);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_76, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_79, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:243>
					RuntimeObject* L_80 = __this->___adaptor;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_81 = V_0;
					NullCheck(L_81);
					RuntimeObject* L_82;
					L_82 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_81);
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_83 = V_0;
					NullCheck(L_83);
					RuntimeObject* L_84;
					L_84 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_83);
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_85 = V_0;
					NullCheck(L_85);
					RuntimeObject* L_86;
					L_86 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_85);
					NullCheck(L_80);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_80, L_82, ((RuntimeObject*)Castclass((RuntimeObject*)L_84, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_86, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0295_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0241_1;
				}
				throw e;
			}

CATCH_0241_1:
			{
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_87 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:245>
				V_14 = L_87;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:247>
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_88 = V_14;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10, __this, L_88);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:248>
				RuntimeObject* L_89 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_90 = V_14;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16, __this, L_89, L_90);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:250>
				logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_91 = V_0;
				RuntimeObject* L_92 = __this->___adaptor;
				RuntimeObject* L_93 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_94 = V_0;
				NullCheck(L_94);
				RuntimeObject* L_95;
				L_95 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_94);
				RuntimeObject* L_96 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				NullCheck(L_96);
				RuntimeObject* L_97;
				L_97 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_96, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_98 = V_14;
				NullCheck(L_92);
				RuntimeObject* L_99;
				L_99 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_92, L_93, ((RuntimeObject*)Castclass((RuntimeObject*)L_95, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_97, L_98);
				NullCheck(L_91);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_91, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_99, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_0295_1;
			}

IL_0295_1:
			{
				goto IL_029a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_029a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:253>
		logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_100 = V_0;
		V_15 = L_100;
		goto IL_029f;
	}

IL_029f:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:254>
		logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_101 = V_15;
		return L_101;
	}
}
// Method Definition Index: 82117
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* NCalcParser_conditionalExpression_mB49BC2847A4823A8EC0F35FD31660447571BFF12 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* V_3 = NULL;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* V_4 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* V_13 = NULL;
	bool V_14 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_15 = NULL;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* G_B3_0 = NULL;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* G_B4_1 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B15_0 = 0;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* G_B20_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* G_B19_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B21_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B21_1 = NULL;
	int32_t G_B21_2 = 0;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* G_B21_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:260>
		conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_0 = (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257*)il2cpp_codegen_object_new(conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257_il2cpp_TypeInfo_var);
		conditionalExpression_return__ctor_m426B2C4F035ED6EA2823C4B46845822BF796CC96(L_0, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:261>
		conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5, L_1, L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:263>
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:265>
		V_2 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:266>
		V_3 = (booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:268>
		V_4 = (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:270>
		V_5 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:272>
		V_6 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_026b:
			{
				return;
			}
		});
		try
		{
			try
			{
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:279>
					RuntimeObject* L_4 = __this->___adaptor;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:281>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_booleanAndExpression_in_conditionalExpression121;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:282>
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_7;
					L_7 = NCalcParser_booleanAndExpression_mE3B01E6AE23C34C27F4C545C7808C9AE69243212(__this, NULL);
					V_3 = L_7;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:283>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer;
					NullCheck(L_9);
					L_9->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:285>
					RuntimeObject* L_11 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_13 = V_3;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:286>
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_15 = V_0;
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_16 = V_3;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_007d_2;
					}
					G_B2_0 = L_15;
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_0083_2;
				}

IL_007d_2:
				{
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_17 = V_3;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_0083_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value), (void*)G_B4_0);
				}

IL_0088_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:290>
					V_7 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:291>
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_8 = L_20;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:293>
					int32_t L_21 = V_8;
					if ((((int32_t)L_21) < ((int32_t)((int32_t)21))))
					{
						goto IL_00ab_2;
					}
				}
				{
					int32_t L_22 = V_8;
					G_B8_0 = ((((int32_t)((((int32_t)L_22) > ((int32_t)((int32_t)22)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00ac_2;
				}

IL_00ab_2:
				{
					G_B8_0 = 0;
				}

IL_00ac_2:
				{
					V_9 = (bool)G_B8_0;
					bool L_23 = V_9;
					if (!L_23)
					{
						goto IL_00b7_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:295>
					V_7 = 1;
				}

IL_00b7_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:298>
					int32_t L_24 = V_7;
					V_11 = L_24;
					int32_t L_25 = V_11;
					V_10 = L_25;
					int32_t L_26 = V_10;
					if ((((int32_t)L_26) == ((int32_t)1)))
					{
						goto IL_00c9_2;
					}
				}
				{
					goto IL_01b1_2;
				}

IL_00c9_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:303>
					RuntimeObject* L_27 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_27);
					RuntimeObject* L_28;
					L_28 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_27, 1);
					V_2 = L_28;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:304>
					RuntimeObject* L_29 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_29);
					int32_t L_30;
					L_30 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_29, 1);
					if ((((int32_t)L_30) < ((int32_t)((int32_t)21))))
					{
						goto IL_00fc_2;
					}
				}
				{
					RuntimeObject* L_31 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_31);
					int32_t L_32;
					L_32 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_31, 1);
					G_B15_0 = ((((int32_t)((((int32_t)L_32) > ((int32_t)((int32_t)22)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00fd_2;
				}

IL_00fc_2:
				{
					G_B15_0 = 0;
				}

IL_00fd_2:
				{
					V_12 = (bool)G_B15_0;
					bool L_33 = V_12;
					if (!L_33)
					{
						goto IL_013d_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:306>
					RuntimeObject* L_34 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_34);
					InterfaceActionInvoker0::Invoke(0, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_34);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:307>
					RuntimeObject* L_35 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_36 = V_1;
					RuntimeObject* L_37 = __this->___adaptor;
					RuntimeObject* L_38 = V_2;
					NullCheck(L_37);
					RuntimeObject* L_39;
					L_39 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_37, L_38);
					NullCheck(L_35);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_35, L_36, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_39, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:308>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_40 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					NullCheck(L_40);
					L_40->___errorRecovery = (bool)0;
					goto IL_014f_2;
				}

IL_013d_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:312>
					RuntimeObject* L_41 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_42 = (MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var)));
					MismatchedSetException__ctor_m86BBF2EDDE084B2481D65102A4D9A78A4F4F42A4(L_42, (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)NULL, L_41, NULL);
					V_13 = L_42;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:313>
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_43 = V_13;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_conditionalExpression_mB49BC2847A4823A8EC0F35FD31660447571BFF12_RuntimeMethod_var)));
				}

IL_014f_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:316>
					V_6 = 1;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:317>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_44 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_conditionalExpression146;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_44, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:318>
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_45;
					L_45 = NCalcParser_conditionalExpression_mB49BC2847A4823A8EC0F35FD31660447571BFF12(__this, NULL);
					V_4 = L_45;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:319>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_46 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_47 = L_46;
					NullCheck(L_47);
					int32_t L_48 = L_47->___followingStackPointer;
					NullCheck(L_47);
					L_47->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_48, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:321>
					RuntimeObject* L_49 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_50 = V_1;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_51 = V_4;
					NullCheck(L_51);
					RuntimeObject* L_52;
					L_52 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_51);
					NullCheck(L_49);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_49, L_50, L_52);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:322>
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_53 = V_0;
					int32_t L_54 = V_6;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_55 = V_0;
					NullCheck(L_55);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_56 = L_55->___value;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_57 = V_4;
					if (L_57)
					{
						G_B20_0 = L_56;
						G_B20_1 = L_54;
						G_B20_2 = L_53;
						goto IL_019d_2;
					}
					G_B19_0 = L_56;
					G_B19_1 = L_54;
					G_B19_2 = L_53;
				}
				{
					G_B21_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B21_1 = G_B19_0;
					G_B21_2 = G_B19_1;
					G_B21_3 = G_B19_2;
					goto IL_01a4_2;
				}

IL_019d_2:
				{
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_58 = V_4;
					NullCheck(L_58);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_59 = L_58->___value;
					G_B21_0 = L_59;
					G_B21_1 = G_B20_0;
					G_B21_2 = G_B20_1;
					G_B21_3 = G_B20_2;
				}

IL_01a4_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_60 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_60, G_B21_2, G_B21_1, G_B21_0, NULL);
					NullCheck(G_B21_3);
					G_B21_3->___value = L_60;
					Il2CppCodeGenWriteBarrier((void**)(&G_B21_3->___value), (void*)L_60);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:324>
					goto IL_01b3_2;
				}

IL_01b1_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:327>
					goto IL_01bc_2;
				}

IL_01b3_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:330>
					V_14 = (bool)1;
					goto IL_0088_2;
				}

IL_01bc_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:336>
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_61 = V_0;
					RuntimeObject* L_62 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_62);
					RuntimeObject* L_63;
					L_63 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_62, (-1));
					NullCheck(L_61);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_61, L_63);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:338>
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_64 = V_0;
					RuntimeObject* L_65 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_66 = V_1;
					NullCheck(L_65);
					RuntimeObject* L_67;
					L_67 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_65, L_66);
					NullCheck(L_64);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_64, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_67, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:339>
					RuntimeObject* L_68 = __this->___adaptor;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_69 = V_0;
					NullCheck(L_69);
					RuntimeObject* L_70;
					L_70 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_69);
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_71 = V_0;
					NullCheck(L_71);
					RuntimeObject* L_72;
					L_72 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_71);
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_73 = V_0;
					NullCheck(L_73);
					RuntimeObject* L_74;
					L_74 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_73);
					NullCheck(L_68);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_68, L_70, ((RuntimeObject*)Castclass((RuntimeObject*)L_72, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_74, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0269_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0215_1;
				}
				throw e;
			}

CATCH_0215_1:
			{
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_75 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:341>
				V_15 = L_75;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:343>
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_76 = V_15;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10, __this, L_76);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:344>
				RuntimeObject* L_77 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_78 = V_15;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16, __this, L_77, L_78);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:346>
				conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_79 = V_0;
				RuntimeObject* L_80 = __this->___adaptor;
				RuntimeObject* L_81 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_82 = V_0;
				NullCheck(L_82);
				RuntimeObject* L_83;
				L_83 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_82);
				RuntimeObject* L_84 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				NullCheck(L_84);
				RuntimeObject* L_85;
				L_85 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_84, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_86 = V_15;
				NullCheck(L_80);
				RuntimeObject* L_87;
				L_87 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_80, L_81, ((RuntimeObject*)Castclass((RuntimeObject*)L_83, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_85, L_86);
				NullCheck(L_79);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_79, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_87, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_0269_1;
			}

IL_0269_1:
			{
				goto IL_026e;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_026e:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:349>
		conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_88 = V_0;
		V_16 = L_88;
		goto IL_0273;
	}

IL_0273:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:350>
		conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_89 = V_16;
		return L_89;
	}
}
// Method Definition Index: 82118
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* NCalcParser_booleanAndExpression_mE3B01E6AE23C34C27F4C545C7808C9AE69243212 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* V_3 = NULL;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* V_4 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* V_13 = NULL;
	bool V_14 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_15 = NULL;
	booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* G_B3_0 = NULL;
	booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* G_B4_1 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B15_0 = 0;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* G_B20_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* G_B19_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B21_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B21_1 = NULL;
	int32_t G_B21_2 = 0;
	booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* G_B21_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:356>
		booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_0 = (booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033*)il2cpp_codegen_object_new(booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033_il2cpp_TypeInfo_var);
		booleanAndExpression_return__ctor_mFEAEFA25C564E27C239A57B0777976BA2BFEA086(L_0, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:357>
		booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5, L_1, L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:359>
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:361>
		V_2 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:362>
		V_3 = (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:364>
		V_4 = (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:366>
		V_5 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:368>
		V_6 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_026b:
			{
				return;
			}
		});
		try
		{
			try
			{
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:375>
					RuntimeObject* L_4 = __this->___adaptor;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:377>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseOrExpression_in_booleanAndExpression180;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:378>
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_7;
					L_7 = NCalcParser_bitwiseOrExpression_mED019F59632FC2FC3760DDD2328ADB9F3DF614A8(__this, NULL);
					V_3 = L_7;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:379>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer;
					NullCheck(L_9);
					L_9->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:381>
					RuntimeObject* L_11 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_13 = V_3;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:382>
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_15 = V_0;
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_16 = V_3;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_007d_2;
					}
					G_B2_0 = L_15;
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_0083_2;
				}

IL_007d_2:
				{
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_17 = V_3;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_0083_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value), (void*)G_B4_0);
				}

IL_0088_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:386>
					V_7 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:387>
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_8 = L_20;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:389>
					int32_t L_21 = V_8;
					if ((((int32_t)L_21) < ((int32_t)((int32_t)23))))
					{
						goto IL_00ab_2;
					}
				}
				{
					int32_t L_22 = V_8;
					G_B8_0 = ((((int32_t)((((int32_t)L_22) > ((int32_t)((int32_t)24)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00ac_2;
				}

IL_00ab_2:
				{
					G_B8_0 = 0;
				}

IL_00ac_2:
				{
					V_9 = (bool)G_B8_0;
					bool L_23 = V_9;
					if (!L_23)
					{
						goto IL_00b7_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:391>
					V_7 = 1;
				}

IL_00b7_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:394>
					int32_t L_24 = V_7;
					V_11 = L_24;
					int32_t L_25 = V_11;
					V_10 = L_25;
					int32_t L_26 = V_10;
					if ((((int32_t)L_26) == ((int32_t)1)))
					{
						goto IL_00c9_2;
					}
				}
				{
					goto IL_01b1_2;
				}

IL_00c9_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:399>
					RuntimeObject* L_27 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_27);
					RuntimeObject* L_28;
					L_28 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_27, 1);
					V_2 = L_28;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:400>
					RuntimeObject* L_29 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_29);
					int32_t L_30;
					L_30 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_29, 1);
					if ((((int32_t)L_30) < ((int32_t)((int32_t)23))))
					{
						goto IL_00fc_2;
					}
				}
				{
					RuntimeObject* L_31 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_31);
					int32_t L_32;
					L_32 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_31, 1);
					G_B15_0 = ((((int32_t)((((int32_t)L_32) > ((int32_t)((int32_t)24)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00fd_2;
				}

IL_00fc_2:
				{
					G_B15_0 = 0;
				}

IL_00fd_2:
				{
					V_12 = (bool)G_B15_0;
					bool L_33 = V_12;
					if (!L_33)
					{
						goto IL_013d_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:402>
					RuntimeObject* L_34 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_34);
					InterfaceActionInvoker0::Invoke(0, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_34);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:403>
					RuntimeObject* L_35 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_36 = V_1;
					RuntimeObject* L_37 = __this->___adaptor;
					RuntimeObject* L_38 = V_2;
					NullCheck(L_37);
					RuntimeObject* L_39;
					L_39 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_37, L_38);
					NullCheck(L_35);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_35, L_36, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_39, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:404>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_40 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					NullCheck(L_40);
					L_40->___errorRecovery = (bool)0;
					goto IL_014f_2;
				}

IL_013d_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:408>
					RuntimeObject* L_41 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_42 = (MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var)));
					MismatchedSetException__ctor_m86BBF2EDDE084B2481D65102A4D9A78A4F4F42A4(L_42, (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)NULL, L_41, NULL);
					V_13 = L_42;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:409>
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_43 = V_13;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_booleanAndExpression_mE3B01E6AE23C34C27F4C545C7808C9AE69243212_RuntimeMethod_var)));
				}

IL_014f_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:412>
					V_6 = 0;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:413>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_44 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseOrExpression_in_booleanAndExpression205;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_44, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:414>
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_45;
					L_45 = NCalcParser_bitwiseOrExpression_mED019F59632FC2FC3760DDD2328ADB9F3DF614A8(__this, NULL);
					V_4 = L_45;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:415>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_46 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_47 = L_46;
					NullCheck(L_47);
					int32_t L_48 = L_47->___followingStackPointer;
					NullCheck(L_47);
					L_47->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_48, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:417>
					RuntimeObject* L_49 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_50 = V_1;
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_51 = V_4;
					NullCheck(L_51);
					RuntimeObject* L_52;
					L_52 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_51);
					NullCheck(L_49);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_49, L_50, L_52);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:418>
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_53 = V_0;
					int32_t L_54 = V_6;
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_55 = V_0;
					NullCheck(L_55);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_56 = L_55->___value;
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_57 = V_4;
					if (L_57)
					{
						G_B20_0 = L_56;
						G_B20_1 = L_54;
						G_B20_2 = L_53;
						goto IL_019d_2;
					}
					G_B19_0 = L_56;
					G_B19_1 = L_54;
					G_B19_2 = L_53;
				}
				{
					G_B21_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B21_1 = G_B19_0;
					G_B21_2 = G_B19_1;
					G_B21_3 = G_B19_2;
					goto IL_01a4_2;
				}

IL_019d_2:
				{
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_58 = V_4;
					NullCheck(L_58);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_59 = L_58->___value;
					G_B21_0 = L_59;
					G_B21_1 = G_B20_0;
					G_B21_2 = G_B20_1;
					G_B21_3 = G_B20_2;
				}

IL_01a4_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_60 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_60, G_B21_2, G_B21_1, G_B21_0, NULL);
					NullCheck(G_B21_3);
					G_B21_3->___value = L_60;
					Il2CppCodeGenWriteBarrier((void**)(&G_B21_3->___value), (void*)L_60);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:420>
					goto IL_01b3_2;
				}

IL_01b1_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:423>
					goto IL_01bc_2;
				}

IL_01b3_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:426>
					V_14 = (bool)1;
					goto IL_0088_2;
				}

IL_01bc_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:432>
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_61 = V_0;
					RuntimeObject* L_62 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_62);
					RuntimeObject* L_63;
					L_63 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_62, (-1));
					NullCheck(L_61);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_61, L_63);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:434>
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_64 = V_0;
					RuntimeObject* L_65 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_66 = V_1;
					NullCheck(L_65);
					RuntimeObject* L_67;
					L_67 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_65, L_66);
					NullCheck(L_64);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_64, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_67, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:435>
					RuntimeObject* L_68 = __this->___adaptor;
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_69 = V_0;
					NullCheck(L_69);
					RuntimeObject* L_70;
					L_70 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_69);
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_71 = V_0;
					NullCheck(L_71);
					RuntimeObject* L_72;
					L_72 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_71);
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_73 = V_0;
					NullCheck(L_73);
					RuntimeObject* L_74;
					L_74 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_73);
					NullCheck(L_68);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_68, L_70, ((RuntimeObject*)Castclass((RuntimeObject*)L_72, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_74, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0269_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0215_1;
				}
				throw e;
			}

CATCH_0215_1:
			{
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_75 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:437>
				V_15 = L_75;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:439>
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_76 = V_15;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10, __this, L_76);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:440>
				RuntimeObject* L_77 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_78 = V_15;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16, __this, L_77, L_78);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:442>
				booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_79 = V_0;
				RuntimeObject* L_80 = __this->___adaptor;
				RuntimeObject* L_81 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_82 = V_0;
				NullCheck(L_82);
				RuntimeObject* L_83;
				L_83 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_82);
				RuntimeObject* L_84 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				NullCheck(L_84);
				RuntimeObject* L_85;
				L_85 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_84, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_86 = V_15;
				NullCheck(L_80);
				RuntimeObject* L_87;
				L_87 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_80, L_81, ((RuntimeObject*)Castclass((RuntimeObject*)L_83, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_85, L_86);
				NullCheck(L_79);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_79, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_87, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_0269_1;
			}

IL_0269_1:
			{
				goto IL_026e;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_026e:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:445>
		booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_88 = V_0;
		V_16 = L_88;
		goto IL_0273;
	}

IL_0273:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:446>
		booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_89 = V_16;
		return L_89;
	}
}
// Method Definition Index: 82119
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* NCalcParser_bitwiseOrExpression_mED019F59632FC2FC3760DDD2328ADB9F3DF614A8 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* V_3 = NULL;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* V_4 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_13 = NULL;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* G_B3_0 = NULL;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* G_B4_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* G_B11_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* G_B10_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B12_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B12_1 = NULL;
	int32_t G_B12_2 = 0;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* G_B12_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:452>
		bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_0 = (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C*)il2cpp_codegen_object_new(bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C_il2cpp_TypeInfo_var);
		bitwiseOrExpression_return__ctor_m9AF5AE54B95A0454E1D5C5536EA2AAB50AC51630(L_0, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:453>
		bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5, L_1, L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:455>
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:457>
		V_2 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:458>
		V_3 = (bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:460>
		V_4 = (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:462>
		V_5 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:464>
		V_6 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0216:
			{
				return;
			}
		});
		try
		{
			try
			{
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:471>
					RuntimeObject* L_4 = __this->___adaptor;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:473>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseXOrExpression_in_bitwiseOrExpression237;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:474>
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_7;
					L_7 = NCalcParser_bitwiseXOrExpression_m465CDDB79DF988DCD3ED8D7607F18142823508FF(__this, NULL);
					V_3 = L_7;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:475>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer;
					NullCheck(L_9);
					L_9->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:477>
					RuntimeObject* L_11 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_13 = V_3;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:478>
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_15 = V_0;
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_16 = V_3;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_007d_2;
					}
					G_B2_0 = L_15;
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_0083_2;
				}

IL_007d_2:
				{
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_17 = V_3;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_0083_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value), (void*)G_B4_0);
				}

IL_0088_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:482>
					V_7 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:483>
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_8 = L_20;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:485>
					int32_t L_21 = V_8;
					V_9 = (bool)((((int32_t)L_21) == ((int32_t)((int32_t)25)))? 1 : 0);
					bool L_22 = V_9;
					if (!L_22)
					{
						goto IL_00ab_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:487>
					V_7 = 1;
				}

IL_00ab_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:490>
					int32_t L_23 = V_7;
					V_11 = L_23;
					int32_t L_24 = V_11;
					V_10 = L_24;
					int32_t L_25 = V_10;
					if ((((int32_t)L_25) == ((int32_t)1)))
					{
						goto IL_00bd_2;
					}
				}
				{
					goto IL_015c_2;
				}

IL_00bd_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:495>
					RuntimeObject* L_26 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_27 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_25_in_bitwiseOrExpression246;
					RuntimeObject* L_28;
					L_28 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_26, ((int32_t)25), L_27);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_28, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:496>
					RuntimeObject* L_29 = __this->___adaptor;
					RuntimeObject* L_30 = V_2;
					NullCheck(L_29);
					RuntimeObject* L_31;
					L_31 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_29, L_30);
					V_5 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_31, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:497>
					RuntimeObject* L_32 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_33 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_34 = V_5;
					NullCheck(L_32);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_32, L_33, L_34);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:499>
					V_6 = ((int32_t)13);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:500>
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_35 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseOrExpression_in_bitwiseOrExpression256;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_35, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:501>
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_36;
					L_36 = NCalcParser_bitwiseOrExpression_mED019F59632FC2FC3760DDD2328ADB9F3DF614A8(__this, NULL);
					V_4 = L_36;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:502>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_37 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_38 = L_37;
					NullCheck(L_38);
					int32_t L_39 = L_38->___followingStackPointer;
					NullCheck(L_38);
					L_38->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:504>
					RuntimeObject* L_40 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_41 = V_1;
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_42 = V_4;
					NullCheck(L_42);
					RuntimeObject* L_43;
					L_43 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_42);
					NullCheck(L_40);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_40, L_41, L_43);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:505>
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_44 = V_0;
					int32_t L_45 = V_6;
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_46 = V_0;
					NullCheck(L_46);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_47 = L_46->___value;
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_48 = V_4;
					if (L_48)
					{
						G_B11_0 = L_47;
						G_B11_1 = L_45;
						G_B11_2 = L_44;
						goto IL_0148_2;
					}
					G_B10_0 = L_47;
					G_B10_1 = L_45;
					G_B10_2 = L_44;
				}
				{
					G_B12_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B12_1 = G_B10_0;
					G_B12_2 = G_B10_1;
					G_B12_3 = G_B10_2;
					goto IL_014f_2;
				}

IL_0148_2:
				{
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_49 = V_4;
					NullCheck(L_49);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_50 = L_49->___value;
					G_B12_0 = L_50;
					G_B12_1 = G_B11_0;
					G_B12_2 = G_B11_1;
					G_B12_3 = G_B11_2;
				}

IL_014f_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_51 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_51, G_B12_2, G_B12_1, G_B12_0, NULL);
					NullCheck(G_B12_3);
					G_B12_3->___value = L_51;
					Il2CppCodeGenWriteBarrier((void**)(&G_B12_3->___value), (void*)L_51);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:507>
					goto IL_015e_2;
				}

IL_015c_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:510>
					goto IL_0167_2;
				}

IL_015e_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:513>
					V_12 = (bool)1;
					goto IL_0088_2;
				}

IL_0167_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:519>
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_52 = V_0;
					RuntimeObject* L_53 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_53);
					RuntimeObject* L_54;
					L_54 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_53, (-1));
					NullCheck(L_52);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_52, L_54);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:521>
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_55 = V_0;
					RuntimeObject* L_56 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_57 = V_1;
					NullCheck(L_56);
					RuntimeObject* L_58;
					L_58 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_56, L_57);
					NullCheck(L_55);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_55, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_58, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:522>
					RuntimeObject* L_59 = __this->___adaptor;
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_60 = V_0;
					NullCheck(L_60);
					RuntimeObject* L_61;
					L_61 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_60);
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_62 = V_0;
					NullCheck(L_62);
					RuntimeObject* L_63;
					L_63 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_62);
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_64 = V_0;
					NullCheck(L_64);
					RuntimeObject* L_65;
					L_65 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_64);
					NullCheck(L_59);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_59, L_61, ((RuntimeObject*)Castclass((RuntimeObject*)L_63, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_65, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0214_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_01c0_1;
				}
				throw e;
			}

CATCH_01c0_1:
			{
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_66 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:524>
				V_13 = L_66;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:526>
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_67 = V_13;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10, __this, L_67);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:527>
				RuntimeObject* L_68 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_69 = V_13;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16, __this, L_68, L_69);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:529>
				bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_70 = V_0;
				RuntimeObject* L_71 = __this->___adaptor;
				RuntimeObject* L_72 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_73 = V_0;
				NullCheck(L_73);
				RuntimeObject* L_74;
				L_74 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_73);
				RuntimeObject* L_75 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				NullCheck(L_75);
				RuntimeObject* L_76;
				L_76 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_75, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_77 = V_13;
				NullCheck(L_71);
				RuntimeObject* L_78;
				L_78 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_71, L_72, ((RuntimeObject*)Castclass((RuntimeObject*)L_74, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_76, L_77);
				NullCheck(L_70);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_70, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_78, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_0214_1;
			}

IL_0214_1:
			{
				goto IL_0219;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0219:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:532>
		bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_79 = V_0;
		V_14 = L_79;
		goto IL_021e;
	}

IL_021e:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:533>
		bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_80 = V_14;
		return L_80;
	}
}
// Method Definition Index: 82120
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* NCalcParser_bitwiseXOrExpression_m465CDDB79DF988DCD3ED8D7607F18142823508FF (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* V_3 = NULL;
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* V_4 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_13 = NULL;
	bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* G_B3_0 = NULL;
	bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* G_B4_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* G_B11_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* G_B10_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B12_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B12_1 = NULL;
	int32_t G_B12_2 = 0;
	bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* G_B12_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:539>
		bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_0 = (bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F*)il2cpp_codegen_object_new(bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F_il2cpp_TypeInfo_var);
		bitwiseXOrExpression_return__ctor_m541B10184341E638DDE6E5B26AE7B085DADFBAE3(L_0, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:540>
		bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5, L_1, L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:542>
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:544>
		V_2 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:545>
		V_3 = (bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:547>
		V_4 = (bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:549>
		V_5 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:551>
		V_6 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0216:
			{
				return;
			}
		});
		try
		{
			try
			{
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:558>
					RuntimeObject* L_4 = __this->___adaptor;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:560>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression290;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:561>
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_7;
					L_7 = NCalcParser_bitwiseAndExpression_m6053C71F216686575266D3E709ACFC95DD3DBBB3(__this, NULL);
					V_3 = L_7;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:562>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer;
					NullCheck(L_9);
					L_9->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:564>
					RuntimeObject* L_11 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_13 = V_3;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:565>
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_15 = V_0;
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_16 = V_3;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_007d_2;
					}
					G_B2_0 = L_15;
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_0083_2;
				}

IL_007d_2:
				{
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_17 = V_3;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_0083_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value), (void*)G_B4_0);
				}

IL_0088_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:569>
					V_7 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:570>
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_8 = L_20;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:572>
					int32_t L_21 = V_8;
					V_9 = (bool)((((int32_t)L_21) == ((int32_t)((int32_t)26)))? 1 : 0);
					bool L_22 = V_9;
					if (!L_22)
					{
						goto IL_00ab_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:574>
					V_7 = 1;
				}

IL_00ab_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:577>
					int32_t L_23 = V_7;
					V_11 = L_23;
					int32_t L_24 = V_11;
					V_10 = L_24;
					int32_t L_25 = V_10;
					if ((((int32_t)L_25) == ((int32_t)1)))
					{
						goto IL_00bd_2;
					}
				}
				{
					goto IL_015c_2;
				}

IL_00bd_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:582>
					RuntimeObject* L_26 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_27 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_26_in_bitwiseXOrExpression299;
					RuntimeObject* L_28;
					L_28 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_26, ((int32_t)26), L_27);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_28, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:583>
					RuntimeObject* L_29 = __this->___adaptor;
					RuntimeObject* L_30 = V_2;
					NullCheck(L_29);
					RuntimeObject* L_31;
					L_31 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_29, L_30);
					V_5 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_31, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:584>
					RuntimeObject* L_32 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_33 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_34 = V_5;
					NullCheck(L_32);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_32, L_33, L_34);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:586>
					V_6 = ((int32_t)15);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:587>
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_35 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression309;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_35, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:588>
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_36;
					L_36 = NCalcParser_bitwiseAndExpression_m6053C71F216686575266D3E709ACFC95DD3DBBB3(__this, NULL);
					V_4 = L_36;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:589>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_37 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_38 = L_37;
					NullCheck(L_38);
					int32_t L_39 = L_38->___followingStackPointer;
					NullCheck(L_38);
					L_38->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:591>
					RuntimeObject* L_40 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_41 = V_1;
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_42 = V_4;
					NullCheck(L_42);
					RuntimeObject* L_43;
					L_43 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_42);
					NullCheck(L_40);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_40, L_41, L_43);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:592>
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_44 = V_0;
					int32_t L_45 = V_6;
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_46 = V_0;
					NullCheck(L_46);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_47 = L_46->___value;
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_48 = V_4;
					if (L_48)
					{
						G_B11_0 = L_47;
						G_B11_1 = L_45;
						G_B11_2 = L_44;
						goto IL_0148_2;
					}
					G_B10_0 = L_47;
					G_B10_1 = L_45;
					G_B10_2 = L_44;
				}
				{
					G_B12_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B12_1 = G_B10_0;
					G_B12_2 = G_B10_1;
					G_B12_3 = G_B10_2;
					goto IL_014f_2;
				}

IL_0148_2:
				{
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_49 = V_4;
					NullCheck(L_49);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_50 = L_49->___value;
					G_B12_0 = L_50;
					G_B12_1 = G_B11_0;
					G_B12_2 = G_B11_1;
					G_B12_3 = G_B11_2;
				}

IL_014f_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_51 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_51, G_B12_2, G_B12_1, G_B12_0, NULL);
					NullCheck(G_B12_3);
					G_B12_3->___value = L_51;
					Il2CppCodeGenWriteBarrier((void**)(&G_B12_3->___value), (void*)L_51);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:594>
					goto IL_015e_2;
				}

IL_015c_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:597>
					goto IL_0167_2;
				}

IL_015e_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:600>
					V_12 = (bool)1;
					goto IL_0088_2;
				}

IL_0167_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:606>
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_52 = V_0;
					RuntimeObject* L_53 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_53);
					RuntimeObject* L_54;
					L_54 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_53, (-1));
					NullCheck(L_52);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_52, L_54);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:608>
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_55 = V_0;
					RuntimeObject* L_56 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_57 = V_1;
					NullCheck(L_56);
					RuntimeObject* L_58;
					L_58 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_56, L_57);
					NullCheck(L_55);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_55, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_58, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:609>
					RuntimeObject* L_59 = __this->___adaptor;
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_60 = V_0;
					NullCheck(L_60);
					RuntimeObject* L_61;
					L_61 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_60);
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_62 = V_0;
					NullCheck(L_62);
					RuntimeObject* L_63;
					L_63 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_62);
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_64 = V_0;
					NullCheck(L_64);
					RuntimeObject* L_65;
					L_65 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_64);
					NullCheck(L_59);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_59, L_61, ((RuntimeObject*)Castclass((RuntimeObject*)L_63, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_65, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0214_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_01c0_1;
				}
				throw e;
			}

CATCH_01c0_1:
			{
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_66 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:611>
				V_13 = L_66;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:613>
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_67 = V_13;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10, __this, L_67);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:614>
				RuntimeObject* L_68 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_69 = V_13;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16, __this, L_68, L_69);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:616>
				bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_70 = V_0;
				RuntimeObject* L_71 = __this->___adaptor;
				RuntimeObject* L_72 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_73 = V_0;
				NullCheck(L_73);
				RuntimeObject* L_74;
				L_74 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_73);
				RuntimeObject* L_75 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				NullCheck(L_75);
				RuntimeObject* L_76;
				L_76 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_75, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_77 = V_13;
				NullCheck(L_71);
				RuntimeObject* L_78;
				L_78 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_71, L_72, ((RuntimeObject*)Castclass((RuntimeObject*)L_74, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_76, L_77);
				NullCheck(L_70);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_70, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_78, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_0214_1;
			}

IL_0214_1:
			{
				goto IL_0219;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0219:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:619>
		bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_79 = V_0;
		V_14 = L_79;
		goto IL_021e;
	}

IL_021e:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:620>
		bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_80 = V_14;
		return L_80;
	}
}
// Method Definition Index: 82121
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* NCalcParser_bitwiseAndExpression_m6053C71F216686575266D3E709ACFC95DD3DBBB3 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* V_3 = NULL;
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* V_4 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_13 = NULL;
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* G_B3_0 = NULL;
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* G_B4_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* G_B11_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* G_B10_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B12_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B12_1 = NULL;
	int32_t G_B12_2 = 0;
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* G_B12_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:626>
		bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_0 = (bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD*)il2cpp_codegen_object_new(bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD_il2cpp_TypeInfo_var);
		bitwiseAndExpression_return__ctor_m7B0C7223BC7F67092EBC55739953BD24CD5C9686(L_0, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:627>
		bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5, L_1, L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:629>
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:631>
		V_2 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:632>
		V_3 = (equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:634>
		V_4 = (equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:636>
		V_5 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:638>
		V_6 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0216:
			{
				return;
			}
		});
		try
		{
			try
			{
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:645>
					RuntimeObject* L_4 = __this->___adaptor;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:647>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_equalityExpression_in_bitwiseAndExpression341;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:648>
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_7;
					L_7 = NCalcParser_equalityExpression_m660CBE5AC5F60906C6433F77F9BCABB051A1AA73(__this, NULL);
					V_3 = L_7;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:649>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer;
					NullCheck(L_9);
					L_9->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:651>
					RuntimeObject* L_11 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_13 = V_3;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:652>
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_15 = V_0;
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_16 = V_3;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_007d_2;
					}
					G_B2_0 = L_15;
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_0083_2;
				}

IL_007d_2:
				{
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_17 = V_3;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_0083_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value), (void*)G_B4_0);
				}

IL_0088_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:656>
					V_7 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:657>
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_8 = L_20;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:659>
					int32_t L_21 = V_8;
					V_9 = (bool)((((int32_t)L_21) == ((int32_t)((int32_t)27)))? 1 : 0);
					bool L_22 = V_9;
					if (!L_22)
					{
						goto IL_00ab_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:661>
					V_7 = 1;
				}

IL_00ab_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:664>
					int32_t L_23 = V_7;
					V_11 = L_23;
					int32_t L_24 = V_11;
					V_10 = L_24;
					int32_t L_25 = V_10;
					if ((((int32_t)L_25) == ((int32_t)1)))
					{
						goto IL_00bd_2;
					}
				}
				{
					goto IL_015c_2;
				}

IL_00bd_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:669>
					RuntimeObject* L_26 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_27 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_27_in_bitwiseAndExpression350;
					RuntimeObject* L_28;
					L_28 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_26, ((int32_t)27), L_27);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_28, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:670>
					RuntimeObject* L_29 = __this->___adaptor;
					RuntimeObject* L_30 = V_2;
					NullCheck(L_29);
					RuntimeObject* L_31;
					L_31 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_29, L_30);
					V_5 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_31, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:671>
					RuntimeObject* L_32 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_33 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_34 = V_5;
					NullCheck(L_32);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_32, L_33, L_34);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:673>
					V_6 = ((int32_t)14);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:674>
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_35 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_equalityExpression_in_bitwiseAndExpression360;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_35, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:675>
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_36;
					L_36 = NCalcParser_equalityExpression_m660CBE5AC5F60906C6433F77F9BCABB051A1AA73(__this, NULL);
					V_4 = L_36;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:676>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_37 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_38 = L_37;
					NullCheck(L_38);
					int32_t L_39 = L_38->___followingStackPointer;
					NullCheck(L_38);
					L_38->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:678>
					RuntimeObject* L_40 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_41 = V_1;
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_42 = V_4;
					NullCheck(L_42);
					RuntimeObject* L_43;
					L_43 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_42);
					NullCheck(L_40);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_40, L_41, L_43);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:679>
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_44 = V_0;
					int32_t L_45 = V_6;
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_46 = V_0;
					NullCheck(L_46);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_47 = L_46->___value;
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_48 = V_4;
					if (L_48)
					{
						G_B11_0 = L_47;
						G_B11_1 = L_45;
						G_B11_2 = L_44;
						goto IL_0148_2;
					}
					G_B10_0 = L_47;
					G_B10_1 = L_45;
					G_B10_2 = L_44;
				}
				{
					G_B12_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B12_1 = G_B10_0;
					G_B12_2 = G_B10_1;
					G_B12_3 = G_B10_2;
					goto IL_014f_2;
				}

IL_0148_2:
				{
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_49 = V_4;
					NullCheck(L_49);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_50 = L_49->___value;
					G_B12_0 = L_50;
					G_B12_1 = G_B11_0;
					G_B12_2 = G_B11_1;
					G_B12_3 = G_B11_2;
				}

IL_014f_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_51 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_51, G_B12_2, G_B12_1, G_B12_0, NULL);
					NullCheck(G_B12_3);
					G_B12_3->___value = L_51;
					Il2CppCodeGenWriteBarrier((void**)(&G_B12_3->___value), (void*)L_51);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:681>
					goto IL_015e_2;
				}

IL_015c_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:684>
					goto IL_0167_2;
				}

IL_015e_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:687>
					V_12 = (bool)1;
					goto IL_0088_2;
				}

IL_0167_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:693>
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_52 = V_0;
					RuntimeObject* L_53 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_53);
					RuntimeObject* L_54;
					L_54 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_53, (-1));
					NullCheck(L_52);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_52, L_54);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:695>
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_55 = V_0;
					RuntimeObject* L_56 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_57 = V_1;
					NullCheck(L_56);
					RuntimeObject* L_58;
					L_58 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_56, L_57);
					NullCheck(L_55);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_55, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_58, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:696>
					RuntimeObject* L_59 = __this->___adaptor;
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_60 = V_0;
					NullCheck(L_60);
					RuntimeObject* L_61;
					L_61 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_60);
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_62 = V_0;
					NullCheck(L_62);
					RuntimeObject* L_63;
					L_63 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_62);
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_64 = V_0;
					NullCheck(L_64);
					RuntimeObject* L_65;
					L_65 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_64);
					NullCheck(L_59);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_59, L_61, ((RuntimeObject*)Castclass((RuntimeObject*)L_63, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_65, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0214_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_01c0_1;
				}
				throw e;
			}

CATCH_01c0_1:
			{
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_66 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:698>
				V_13 = L_66;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:700>
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_67 = V_13;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10, __this, L_67);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:701>
				RuntimeObject* L_68 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_69 = V_13;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16, __this, L_68, L_69);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:703>
				bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_70 = V_0;
				RuntimeObject* L_71 = __this->___adaptor;
				RuntimeObject* L_72 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_73 = V_0;
				NullCheck(L_73);
				RuntimeObject* L_74;
				L_74 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_73);
				RuntimeObject* L_75 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				NullCheck(L_75);
				RuntimeObject* L_76;
				L_76 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_75, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_77 = V_13;
				NullCheck(L_71);
				RuntimeObject* L_78;
				L_78 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_71, L_72, ((RuntimeObject*)Castclass((RuntimeObject*)L_74, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_76, L_77);
				NullCheck(L_70);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_70, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_78, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_0214_1;
			}

IL_0214_1:
			{
				goto IL_0219;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0219:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:706>
		bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_79 = V_0;
		V_14 = L_79;
		goto IL_021e;
	}

IL_021e:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:707>
		bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_80 = V_14;
		return L_80;
	}
}
// Method Definition Index: 82122
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* NCalcParser_equalityExpression_m660CBE5AC5F60906C6433F77F9BCABB051A1AA73 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* V_4 = NULL;
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* V_5 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_6 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_18 = NULL;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	bool V_21 = false;
	MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* V_22 = NULL;
	bool V_23 = false;
	MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* V_24 = NULL;
	bool V_25 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_26 = NULL;
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* V_27 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* G_B3_0 = NULL;
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* G_B4_1 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B37_0 = 0;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B43_0 = NULL;
	int32_t G_B43_1 = 0;
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* G_B43_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B42_0 = NULL;
	int32_t G_B42_1 = 0;
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* G_B42_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B44_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B44_1 = NULL;
	int32_t G_B44_2 = 0;
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* G_B44_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:713>
		equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_0 = (equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957*)il2cpp_codegen_object_new(equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957_il2cpp_TypeInfo_var);
		equalityExpression_return__ctor_m00B929AD146884433C96A1CDA91E593171A28D6A(L_0, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:714>
		equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5, L_1, L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:716>
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:718>
		V_2 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:719>
		V_3 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:720>
		V_4 = (relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:722>
		V_5 = (relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:724>
		V_6 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:725>
		V_7 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:727>
		V_8 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_038b:
			{
				return;
			}
		});
		try
		{
			try
			{
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:734>
					RuntimeObject* L_4 = __this->___adaptor;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:736>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_relationalExpression_in_equalityExpression394;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:737>
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_7;
					L_7 = NCalcParser_relationalExpression_m0C3EDD10778FB21C34EDF679DB5F139A1D0555B5(__this, NULL);
					V_4 = L_7;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:738>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer;
					NullCheck(L_9);
					L_9->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:740>
					RuntimeObject* L_11 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_13 = V_4;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:741>
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_15 = V_0;
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_16 = V_4;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_0086_2;
					}
					G_B2_0 = L_15;
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_008d_2;
				}

IL_0086_2:
				{
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_17 = V_4;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_008d_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value), (void*)G_B4_0);
				}

IL_0092_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:745>
					V_9 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:746>
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_10 = L_20;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:748>
					int32_t L_21 = V_10;
					if ((((int32_t)L_21) < ((int32_t)((int32_t)28))))
					{
						goto IL_00b5_2;
					}
				}
				{
					int32_t L_22 = V_10;
					G_B8_0 = ((((int32_t)((((int32_t)L_22) > ((int32_t)((int32_t)31)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00b6_2;
				}

IL_00b5_2:
				{
					G_B8_0 = 0;
				}

IL_00b6_2:
				{
					V_11 = (bool)G_B8_0;
					bool L_23 = V_11;
					if (!L_23)
					{
						goto IL_00c1_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:750>
					V_9 = 1;
				}

IL_00c1_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:753>
					int32_t L_24 = V_9;
					V_13 = L_24;
					int32_t L_25 = V_13;
					V_12 = L_25;
					int32_t L_26 = V_12;
					if ((((int32_t)L_26) == ((int32_t)1)))
					{
						goto IL_00d3_2;
					}
				}
				{
					goto IL_02d1_2;
				}

IL_00d3_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:759>
					V_14 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:760>
					RuntimeObject* L_27 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_27);
					int32_t L_28;
					L_28 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_27, 1);
					V_15 = L_28;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:762>
					int32_t L_29 = V_15;
					if ((((int32_t)L_29) < ((int32_t)((int32_t)28))))
					{
						goto IL_00f6_2;
					}
				}
				{
					int32_t L_30 = V_15;
					G_B15_0 = ((((int32_t)((((int32_t)L_30) > ((int32_t)((int32_t)29)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00f7_2;
				}

IL_00f6_2:
				{
					G_B15_0 = 0;
				}

IL_00f7_2:
				{
					V_16 = (bool)G_B15_0;
					bool L_31 = V_16;
					if (!L_31)
					{
						goto IL_0104_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:764>
					V_14 = 1;
					goto IL_013b_2;
				}

IL_0104_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:766>
					int32_t L_32 = V_15;
					if ((((int32_t)L_32) < ((int32_t)((int32_t)30))))
					{
						goto IL_0115_2;
					}
				}
				{
					int32_t L_33 = V_15;
					G_B20_0 = ((((int32_t)((((int32_t)L_33) > ((int32_t)((int32_t)31)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_0116_2;
				}

IL_0115_2:
				{
					G_B20_0 = 0;
				}

IL_0116_2:
				{
					V_17 = (bool)G_B20_0;
					bool L_34 = V_17;
					if (!L_34)
					{
						goto IL_0123_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:768>
					V_14 = 2;
					goto IL_013b_2;
				}

IL_0123_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:772>
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:773>
					RuntimeObject* L_35 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_36 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
					NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), 7, 0, L_35, NULL);
					V_18 = L_36;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:775>
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_37 = V_18;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_equalityExpression_m660CBE5AC5F60906C6433F77F9BCABB051A1AA73_RuntimeMethod_var)));
				}

IL_013b_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:777>
					int32_t L_38 = V_14;
					V_20 = L_38;
					int32_t L_39 = V_20;
					V_19 = L_39;
					int32_t L_40 = V_19;
					if ((((int32_t)L_40) == ((int32_t)1)))
					{
						goto IL_0157_2;
					}
				}
				{
					goto IL_014a_2;
				}

IL_014a_2:
				{
					int32_t L_41 = V_19;
					if ((((int32_t)L_41) == ((int32_t)2)))
					{
						goto IL_01e6_2;
					}
				}
				{
					goto IL_0272_2;
				}

IL_0157_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:782>
					RuntimeObject* L_42 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_42);
					RuntimeObject* L_43;
					L_43 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_42, 1);
					V_2 = L_43;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:783>
					RuntimeObject* L_44 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_44);
					int32_t L_45;
					L_45 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_44, 1);
					if ((((int32_t)L_45) < ((int32_t)((int32_t)28))))
					{
						goto IL_018a_2;
					}
				}
				{
					RuntimeObject* L_46 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_46);
					int32_t L_47;
					L_47 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_46, 1);
					G_B30_0 = ((((int32_t)((((int32_t)L_47) > ((int32_t)((int32_t)29)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_018b_2;
				}

IL_018a_2:
				{
					G_B30_0 = 0;
				}

IL_018b_2:
				{
					V_21 = (bool)G_B30_0;
					bool L_48 = V_21;
					if (!L_48)
					{
						goto IL_01cb_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:785>
					RuntimeObject* L_49 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_49);
					InterfaceActionInvoker0::Invoke(0, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_49);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:786>
					RuntimeObject* L_50 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_51 = V_1;
					RuntimeObject* L_52 = __this->___adaptor;
					RuntimeObject* L_53 = V_2;
					NullCheck(L_52);
					RuntimeObject* L_54;
					L_54 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_52, L_53);
					NullCheck(L_50);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_50, L_51, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_54, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:787>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_55 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					NullCheck(L_55);
					L_55->___errorRecovery = (bool)0;
					goto IL_01dd_2;
				}

IL_01cb_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:791>
					RuntimeObject* L_56 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_57 = (MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var)));
					MismatchedSetException__ctor_m86BBF2EDDE084B2481D65102A4D9A78A4F4F42A4(L_57, (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)NULL, L_56, NULL);
					V_22 = L_57;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:792>
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_58 = V_22;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_equalityExpression_m660CBE5AC5F60906C6433F77F9BCABB051A1AA73_RuntimeMethod_var)));
				}

IL_01dd_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:795>
					V_8 = 7;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:797>
					goto IL_0272_2;
				}

IL_01e6_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:801>
					RuntimeObject* L_59 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_59);
					RuntimeObject* L_60;
					L_60 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_59, 1);
					V_3 = L_60;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:802>
					RuntimeObject* L_61 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_61);
					int32_t L_62;
					L_62 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_61, 1);
					if ((((int32_t)L_62) < ((int32_t)((int32_t)30))))
					{
						goto IL_0219_2;
					}
				}
				{
					RuntimeObject* L_63 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_63);
					int32_t L_64;
					L_64 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_63, 1);
					G_B37_0 = ((((int32_t)((((int32_t)L_64) > ((int32_t)((int32_t)31)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_021a_2;
				}

IL_0219_2:
				{
					G_B37_0 = 0;
				}

IL_021a_2:
				{
					V_23 = (bool)G_B37_0;
					bool L_65 = V_23;
					if (!L_65)
					{
						goto IL_025a_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:804>
					RuntimeObject* L_66 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_66);
					InterfaceActionInvoker0::Invoke(0, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_66);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:805>
					RuntimeObject* L_67 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_68 = V_1;
					RuntimeObject* L_69 = __this->___adaptor;
					RuntimeObject* L_70 = V_3;
					NullCheck(L_69);
					RuntimeObject* L_71;
					L_71 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_69, L_70);
					NullCheck(L_67);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_67, L_68, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_71, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:806>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_72 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					NullCheck(L_72);
					L_72->___errorRecovery = (bool)0;
					goto IL_026c_2;
				}

IL_025a_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:810>
					RuntimeObject* L_73 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_74 = (MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var)));
					MismatchedSetException__ctor_m86BBF2EDDE084B2481D65102A4D9A78A4F4F42A4(L_74, (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)NULL, L_73, NULL);
					V_24 = L_74;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:811>
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_75 = V_24;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_75, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_equalityExpression_m660CBE5AC5F60906C6433F77F9BCABB051A1AA73_RuntimeMethod_var)));
				}

IL_026c_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:814>
					V_8 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:816>
					goto IL_0272_2;
				}

IL_0272_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:819>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_76 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_relationalExpression_in_equalityExpression441;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_76, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:820>
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_77;
					L_77 = NCalcParser_relationalExpression_m0C3EDD10778FB21C34EDF679DB5F139A1D0555B5(__this, NULL);
					V_5 = L_77;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:821>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_78 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_79 = L_78;
					NullCheck(L_79);
					int32_t L_80 = L_79->___followingStackPointer;
					NullCheck(L_79);
					L_79->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_80, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:823>
					RuntimeObject* L_81 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_82 = V_1;
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_83 = V_5;
					NullCheck(L_83);
					RuntimeObject* L_84;
					L_84 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_83);
					NullCheck(L_81);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_81, L_82, L_84);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:824>
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_85 = V_0;
					int32_t L_86 = V_8;
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_87 = V_0;
					NullCheck(L_87);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_88 = L_87->___value;
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_89 = V_5;
					if (L_89)
					{
						G_B43_0 = L_88;
						G_B43_1 = L_86;
						G_B43_2 = L_85;
						goto IL_02bd_2;
					}
					G_B42_0 = L_88;
					G_B42_1 = L_86;
					G_B42_2 = L_85;
				}
				{
					G_B44_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B44_1 = G_B42_0;
					G_B44_2 = G_B42_1;
					G_B44_3 = G_B42_2;
					goto IL_02c4_2;
				}

IL_02bd_2:
				{
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_90 = V_5;
					NullCheck(L_90);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_91 = L_90->___value;
					G_B44_0 = L_91;
					G_B44_1 = G_B43_0;
					G_B44_2 = G_B43_1;
					G_B44_3 = G_B43_2;
				}

IL_02c4_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_92 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_92, G_B44_2, G_B44_1, G_B44_0, NULL);
					NullCheck(G_B44_3);
					G_B44_3->___value = L_92;
					Il2CppCodeGenWriteBarrier((void**)(&G_B44_3->___value), (void*)L_92);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:826>
					goto IL_02d3_2;
				}

IL_02d1_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:829>
					goto IL_02dc_2;
				}

IL_02d3_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:832>
					V_25 = (bool)1;
					goto IL_0092_2;
				}

IL_02dc_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:838>
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_93 = V_0;
					RuntimeObject* L_94 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_94);
					RuntimeObject* L_95;
					L_95 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_94, (-1));
					NullCheck(L_93);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_93, L_95);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:840>
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_96 = V_0;
					RuntimeObject* L_97 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_98 = V_1;
					NullCheck(L_97);
					RuntimeObject* L_99;
					L_99 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_97, L_98);
					NullCheck(L_96);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_96, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_99, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:841>
					RuntimeObject* L_100 = __this->___adaptor;
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_101 = V_0;
					NullCheck(L_101);
					RuntimeObject* L_102;
					L_102 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_101);
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_103 = V_0;
					NullCheck(L_103);
					RuntimeObject* L_104;
					L_104 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_103);
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_105 = V_0;
					NullCheck(L_105);
					RuntimeObject* L_106;
					L_106 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_105);
					NullCheck(L_100);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_100, L_102, ((RuntimeObject*)Castclass((RuntimeObject*)L_104, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_106, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0389_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0335_1;
				}
				throw e;
			}

CATCH_0335_1:
			{
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_107 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:843>
				V_26 = L_107;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:845>
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_108 = V_26;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10, __this, L_108);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:846>
				RuntimeObject* L_109 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_110 = V_26;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16, __this, L_109, L_110);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:848>
				equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_111 = V_0;
				RuntimeObject* L_112 = __this->___adaptor;
				RuntimeObject* L_113 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_114 = V_0;
				NullCheck(L_114);
				RuntimeObject* L_115;
				L_115 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_114);
				RuntimeObject* L_116 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				NullCheck(L_116);
				RuntimeObject* L_117;
				L_117 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_116, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_118 = V_26;
				NullCheck(L_112);
				RuntimeObject* L_119;
				L_119 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_112, L_113, ((RuntimeObject*)Castclass((RuntimeObject*)L_115, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_117, L_118);
				NullCheck(L_111);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_111, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_119, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_0389_1;
			}

IL_0389_1:
			{
				goto IL_038e;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_038e:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:851>
		equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_120 = V_0;
		V_27 = L_120;
		goto IL_0393;
	}

IL_0393:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:852>
		equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_121 = V_27;
		return L_121;
	}
}
// Method Definition Index: 82123
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* NCalcParser_relationalExpression_m0C3EDD10778FB21C34EDF679DB5F139A1D0555B5 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* V_6 = NULL;
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* V_7 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_8 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_9 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_10 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_19 = NULL;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	bool V_24 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_25 = NULL;
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* V_26 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* G_B3_0 = NULL;
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* G_B4_1 = NULL;
	int32_t G_B8_0 = 0;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B27_0 = NULL;
	int32_t G_B27_1 = 0;
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* G_B27_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B26_0 = NULL;
	int32_t G_B26_1 = 0;
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* G_B26_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B28_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B28_1 = NULL;
	int32_t G_B28_2 = 0;
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* G_B28_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:858>
		relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_0 = (relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE*)il2cpp_codegen_object_new(relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE_il2cpp_TypeInfo_var);
		relationalExpression_return__ctor_m5A84A5D6F3647F41895F0281CB5087695BF44B64(L_0, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:859>
		relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5, L_1, L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:861>
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:863>
		V_2 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:864>
		V_3 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:865>
		V_4 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:866>
		V_5 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:867>
		V_6 = (shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:869>
		V_7 = (shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:871>
		V_8 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:872>
		V_9 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:873>
		V_10 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:874>
		V_11 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:876>
		V_12 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0396:
			{
				return;
			}
		});
		try
		{
			try
			{
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:883>
					RuntimeObject* L_4 = __this->___adaptor;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:885>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_shiftExpression_in_relationalExpression474;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:886>
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_7;
					L_7 = NCalcParser_shiftExpression_mB1135256D729B4899DC37EA2F7AD81EE5368103C(__this, NULL);
					V_6 = L_7;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:887>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer;
					NullCheck(L_9);
					L_9->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:889>
					RuntimeObject* L_11 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_13 = V_6;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:890>
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_15 = V_0;
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_16 = V_6;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_0092_2;
					}
					G_B2_0 = L_15;
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_0099_2;
				}

IL_0092_2:
				{
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_17 = V_6;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_0099_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value), (void*)G_B4_0);
				}

IL_009e_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:894>
					V_13 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:895>
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_14 = L_20;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:897>
					int32_t L_21 = V_14;
					if ((((int32_t)L_21) < ((int32_t)((int32_t)32))))
					{
						goto IL_00c1_2;
					}
				}
				{
					int32_t L_22 = V_14;
					G_B8_0 = ((((int32_t)((((int32_t)L_22) > ((int32_t)((int32_t)35)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00c2_2;
				}

IL_00c1_2:
				{
					G_B8_0 = 0;
				}

IL_00c2_2:
				{
					V_15 = (bool)G_B8_0;
					bool L_23 = V_15;
					if (!L_23)
					{
						goto IL_00cd_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:899>
					V_13 = 1;
				}

IL_00cd_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:902>
					int32_t L_24 = V_13;
					V_17 = L_24;
					int32_t L_25 = V_17;
					V_16 = L_25;
					int32_t L_26 = V_16;
					if ((((int32_t)L_26) == ((int32_t)1)))
					{
						goto IL_00df_2;
					}
				}
				{
					goto IL_02dc_2;
				}

IL_00df_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:908>
					V_18 = 4;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:909>
					RuntimeObject* L_27 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_27);
					int32_t L_28;
					L_28 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_27, 1);
					V_21 = L_28;
					int32_t L_29 = V_21;
					V_20 = L_29;
					int32_t L_30 = V_20;
					switch (((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)32))))
					{
						case 0:
						{
							goto IL_0111_2;
						}
						case 1:
						{
							goto IL_0118_2;
						}
						case 2:
						{
							goto IL_011f_2;
						}
						case 3:
						{
							goto IL_0126_2;
						}
					}
				}
				{
					goto IL_012d_2;
				}

IL_0111_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:913>
					V_18 = 1;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:915>
					goto IL_0145_2;
				}

IL_0118_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:918>
					V_18 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:920>
					goto IL_0145_2;
				}

IL_011f_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:923>
					V_18 = 3;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:925>
					goto IL_0145_2;
				}

IL_0126_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:928>
					V_18 = 4;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:930>
					goto IL_0145_2;
				}

IL_012d_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:932>
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:933>
					RuntimeObject* L_31 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_32 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
					NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), ((int32_t)9), 0, L_31, NULL);
					V_19 = L_32;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:935>
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_33 = V_19;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_relationalExpression_m0C3EDD10778FB21C34EDF679DB5F139A1D0555B5_RuntimeMethod_var)));
				}

IL_0145_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:938>
					int32_t L_34 = V_18;
					V_23 = L_34;
					int32_t L_35 = V_23;
					V_22 = L_35;
					int32_t L_36 = V_22;
					switch (((int32_t)il2cpp_codegen_subtract(L_36, 1)))
					{
						case 0:
						{
							goto IL_016b_2;
						}
						case 1:
						{
							goto IL_01b0_2;
						}
						case 2:
						{
							goto IL_01f5_2;
						}
						case 3:
						{
							goto IL_0239_2;
						}
					}
				}
				{
					goto IL_027d_2;
				}

IL_016b_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:943>
					RuntimeObject* L_37 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_38 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_32_in_relationalExpression485;
					RuntimeObject* L_39;
					L_39 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_37, ((int32_t)32), L_38);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_39, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:944>
					RuntimeObject* L_40 = __this->___adaptor;
					RuntimeObject* L_41 = V_2;
					NullCheck(L_40);
					RuntimeObject* L_42;
					L_42 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_40, L_41);
					V_8 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_42, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:945>
					RuntimeObject* L_43 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_44 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_45 = V_8;
					NullCheck(L_43);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_43, L_44, L_45);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:947>
					V_12 = 5;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:949>
					goto IL_027d_2;
				}

IL_01b0_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:953>
					RuntimeObject* L_46 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_47 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_33_in_relationalExpression495;
					RuntimeObject* L_48;
					L_48 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_46, ((int32_t)33), L_47);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_48, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:954>
					RuntimeObject* L_49 = __this->___adaptor;
					RuntimeObject* L_50 = V_3;
					NullCheck(L_49);
					RuntimeObject* L_51;
					L_51 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_49, L_50);
					V_9 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_51, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:955>
					RuntimeObject* L_52 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_53 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_54 = V_9;
					NullCheck(L_52);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_52, L_53, L_54);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:957>
					V_12 = 3;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:959>
					goto IL_027d_2;
				}

IL_01f5_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:963>
					RuntimeObject* L_55 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_56 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_34_in_relationalExpression506;
					RuntimeObject* L_57;
					L_57 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_55, ((int32_t)34), L_56);
					V_4 = ((RuntimeObject*)Castclass((RuntimeObject*)L_57, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:964>
					RuntimeObject* L_58 = __this->___adaptor;
					RuntimeObject* L_59 = V_4;
					NullCheck(L_58);
					RuntimeObject* L_60;
					L_60 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_58, L_59);
					V_10 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_60, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:965>
					RuntimeObject* L_61 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_62 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_63 = V_10;
					NullCheck(L_61);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_61, L_62, L_63);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:967>
					V_12 = 6;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:969>
					goto IL_027d_2;
				}

IL_0239_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:973>
					RuntimeObject* L_64 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_65 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_35_in_relationalExpression516;
					RuntimeObject* L_66;
					L_66 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_64, ((int32_t)35), L_65);
					V_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_66, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:974>
					RuntimeObject* L_67 = __this->___adaptor;
					RuntimeObject* L_68 = V_5;
					NullCheck(L_67);
					RuntimeObject* L_69;
					L_69 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_67, L_68);
					V_11 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_69, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:975>
					RuntimeObject* L_70 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_71 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_72 = V_11;
					NullCheck(L_70);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_70, L_71, L_72);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:977>
					V_12 = 4;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:979>
					goto IL_027d_2;
				}

IL_027d_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:982>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_73 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_shiftExpression_in_relationalExpression528;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_73, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:983>
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_74;
					L_74 = NCalcParser_shiftExpression_mB1135256D729B4899DC37EA2F7AD81EE5368103C(__this, NULL);
					V_7 = L_74;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:984>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_75 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_76 = L_75;
					NullCheck(L_76);
					int32_t L_77 = L_76->___followingStackPointer;
					NullCheck(L_76);
					L_76->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:986>
					RuntimeObject* L_78 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_79 = V_1;
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_80 = V_7;
					NullCheck(L_80);
					RuntimeObject* L_81;
					L_81 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_80);
					NullCheck(L_78);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_78, L_79, L_81);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:987>
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_82 = V_0;
					int32_t L_83 = V_12;
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_84 = V_0;
					NullCheck(L_84);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_85 = L_84->___value;
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_86 = V_7;
					if (L_86)
					{
						G_B27_0 = L_85;
						G_B27_1 = L_83;
						G_B27_2 = L_82;
						goto IL_02c8_2;
					}
					G_B26_0 = L_85;
					G_B26_1 = L_83;
					G_B26_2 = L_82;
				}
				{
					G_B28_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B28_1 = G_B26_0;
					G_B28_2 = G_B26_1;
					G_B28_3 = G_B26_2;
					goto IL_02cf_2;
				}

IL_02c8_2:
				{
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_87 = V_7;
					NullCheck(L_87);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_88 = L_87->___value;
					G_B28_0 = L_88;
					G_B28_1 = G_B27_0;
					G_B28_2 = G_B27_1;
					G_B28_3 = G_B27_2;
				}

IL_02cf_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_89 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_89, G_B28_2, G_B28_1, G_B28_0, NULL);
					NullCheck(G_B28_3);
					G_B28_3->___value = L_89;
					Il2CppCodeGenWriteBarrier((void**)(&G_B28_3->___value), (void*)L_89);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:989>
					goto IL_02de_2;
				}

IL_02dc_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:992>
					goto IL_02e7_2;
				}

IL_02de_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:995>
					V_24 = (bool)1;
					goto IL_009e_2;
				}

IL_02e7_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1001>
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_90 = V_0;
					RuntimeObject* L_91 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_91);
					RuntimeObject* L_92;
					L_92 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_91, (-1));
					NullCheck(L_90);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_90, L_92);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1003>
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_93 = V_0;
					RuntimeObject* L_94 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_95 = V_1;
					NullCheck(L_94);
					RuntimeObject* L_96;
					L_96 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_94, L_95);
					NullCheck(L_93);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_93, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_96, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1004>
					RuntimeObject* L_97 = __this->___adaptor;
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_98 = V_0;
					NullCheck(L_98);
					RuntimeObject* L_99;
					L_99 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_98);
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_100 = V_0;
					NullCheck(L_100);
					RuntimeObject* L_101;
					L_101 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_100);
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_102 = V_0;
					NullCheck(L_102);
					RuntimeObject* L_103;
					L_103 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_102);
					NullCheck(L_97);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_97, L_99, ((RuntimeObject*)Castclass((RuntimeObject*)L_101, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_103, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0394_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0340_1;
				}
				throw e;
			}

CATCH_0340_1:
			{
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_104 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1006>
				V_25 = L_104;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1008>
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_105 = V_25;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10, __this, L_105);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1009>
				RuntimeObject* L_106 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_107 = V_25;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16, __this, L_106, L_107);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1011>
				relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_108 = V_0;
				RuntimeObject* L_109 = __this->___adaptor;
				RuntimeObject* L_110 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_111 = V_0;
				NullCheck(L_111);
				RuntimeObject* L_112;
				L_112 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_111);
				RuntimeObject* L_113 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				NullCheck(L_113);
				RuntimeObject* L_114;
				L_114 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_113, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_115 = V_25;
				NullCheck(L_109);
				RuntimeObject* L_116;
				L_116 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_109, L_110, ((RuntimeObject*)Castclass((RuntimeObject*)L_112, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_114, L_115);
				NullCheck(L_108);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_108, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_116, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_0394_1;
			}

IL_0394_1:
			{
				goto IL_0399;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0399:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1014>
		relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_117 = V_0;
		V_26 = L_117;
		goto IL_039e;
	}

IL_039e:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1015>
		relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_118 = V_26;
		return L_118;
	}
}
// Method Definition Index: 82124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* NCalcParser_shiftExpression_mB1135256D729B4899DC37EA2F7AD81EE5368103C (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* V_4 = NULL;
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* V_5 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_6 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_18 = NULL;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	bool V_21 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_22 = NULL;
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* V_23 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* G_B3_0 = NULL;
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* G_B4_1 = NULL;
	int32_t G_B8_0 = 0;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* G_B25_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* G_B24_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B26_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B26_1 = NULL;
	int32_t G_B26_2 = 0;
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* G_B26_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1021>
		shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_0 = (shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71*)il2cpp_codegen_object_new(shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71_il2cpp_TypeInfo_var);
		shiftExpression_return__ctor_mDA7571BFF156CDDEB994FEBA01C969A002837E9B(L_0, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1022>
		shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5, L_1, L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1024>
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1026>
		V_2 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1027>
		V_3 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1028>
		V_4 = (additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1030>
		V_5 = (additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1032>
		V_6 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1033>
		V_7 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1035>
		V_8 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02dc:
			{
				return;
			}
		});
		try
		{
			try
			{
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1042>
					RuntimeObject* L_4 = __this->___adaptor;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1044>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_additiveExpression_in_shiftExpression560;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1045>
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_7;
					L_7 = NCalcParser_additiveExpression_m6DB278A3FB63E67ACBA48722BA7B9FFA98321B50(__this, NULL);
					V_4 = L_7;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1046>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer;
					NullCheck(L_9);
					L_9->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1048>
					RuntimeObject* L_11 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_13 = V_4;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1049>
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_15 = V_0;
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_16 = V_4;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_0086_2;
					}
					G_B2_0 = L_15;
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_008d_2;
				}

IL_0086_2:
				{
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_17 = V_4;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_008d_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value), (void*)G_B4_0);
				}

IL_0092_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1053>
					V_9 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1054>
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_10 = L_20;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1056>
					int32_t L_21 = V_10;
					if ((((int32_t)L_21) < ((int32_t)((int32_t)36))))
					{
						goto IL_00b5_2;
					}
				}
				{
					int32_t L_22 = V_10;
					G_B8_0 = ((((int32_t)((((int32_t)L_22) > ((int32_t)((int32_t)37)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00b6_2;
				}

IL_00b5_2:
				{
					G_B8_0 = 0;
				}

IL_00b6_2:
				{
					V_11 = (bool)G_B8_0;
					bool L_23 = V_11;
					if (!L_23)
					{
						goto IL_00c1_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1058>
					V_9 = 1;
				}

IL_00c1_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1061>
					int32_t L_24 = V_9;
					V_13 = L_24;
					int32_t L_25 = V_13;
					V_12 = L_25;
					int32_t L_26 = V_12;
					if ((((int32_t)L_26) == ((int32_t)1)))
					{
						goto IL_00d3_2;
					}
				}
				{
					goto IL_0222_2;
				}

IL_00d3_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1067>
					V_14 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1068>
					RuntimeObject* L_27 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_27);
					int32_t L_28;
					L_28 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_27, 1);
					V_15 = L_28;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1070>
					int32_t L_29 = V_15;
					V_16 = (bool)((((int32_t)L_29) == ((int32_t)((int32_t)36)))? 1 : 0);
					bool L_30 = V_16;
					if (!L_30)
					{
						goto IL_00f8_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1072>
					V_14 = 1;
					goto IL_0124_2;
				}

IL_00f8_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1074>
					int32_t L_31 = V_15;
					V_17 = (bool)((((int32_t)L_31) == ((int32_t)((int32_t)37)))? 1 : 0);
					bool L_32 = V_17;
					if (!L_32)
					{
						goto IL_010b_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1076>
					V_14 = 2;
					goto IL_0124_2;
				}

IL_010b_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1080>
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1081>
					RuntimeObject* L_33 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_34 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
					NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), ((int32_t)11), 0, L_33, NULL);
					V_18 = L_34;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1083>
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_35 = V_18;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_shiftExpression_mB1135256D729B4899DC37EA2F7AD81EE5368103C_RuntimeMethod_var)));
				}

IL_0124_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1085>
					int32_t L_36 = V_14;
					V_20 = L_36;
					int32_t L_37 = V_20;
					V_19 = L_37;
					int32_t L_38 = V_19;
					if ((((int32_t)L_38) == ((int32_t)1)))
					{
						goto IL_013d_2;
					}
				}
				{
					goto IL_0133_2;
				}

IL_0133_2:
				{
					int32_t L_39 = V_19;
					if ((((int32_t)L_39) == ((int32_t)2)))
					{
						goto IL_0180_2;
					}
				}
				{
					goto IL_01c3_2;
				}

IL_013d_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1090>
					RuntimeObject* L_40 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_41 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_36_in_shiftExpression571;
					RuntimeObject* L_42;
					L_42 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_40, ((int32_t)36), L_41);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_42, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1091>
					RuntimeObject* L_43 = __this->___adaptor;
					RuntimeObject* L_44 = V_2;
					NullCheck(L_43);
					RuntimeObject* L_45;
					L_45 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_43, L_44);
					V_6 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_45, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1092>
					RuntimeObject* L_46 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_47 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_48 = V_6;
					NullCheck(L_46);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_46, L_47, L_48);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1094>
					V_8 = ((int32_t)16);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1096>
					goto IL_01c3_2;
				}

IL_0180_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1100>
					RuntimeObject* L_49 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_50 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_37_in_shiftExpression581;
					RuntimeObject* L_51;
					L_51 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_49, ((int32_t)37), L_50);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_51, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1101>
					RuntimeObject* L_52 = __this->___adaptor;
					RuntimeObject* L_53 = V_3;
					NullCheck(L_52);
					RuntimeObject* L_54;
					L_54 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_52, L_53);
					V_7 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_54, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1102>
					RuntimeObject* L_55 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_56 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_57 = V_7;
					NullCheck(L_55);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_55, L_56, L_57);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1104>
					V_8 = ((int32_t)17);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1106>
					goto IL_01c3_2;
				}

IL_01c3_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1109>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_58 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_additiveExpression_in_shiftExpression593;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_58, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1110>
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_59;
					L_59 = NCalcParser_additiveExpression_m6DB278A3FB63E67ACBA48722BA7B9FFA98321B50(__this, NULL);
					V_5 = L_59;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1111>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_60 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_61 = L_60;
					NullCheck(L_61);
					int32_t L_62 = L_61->___followingStackPointer;
					NullCheck(L_61);
					L_61->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_62, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1113>
					RuntimeObject* L_63 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_64 = V_1;
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_65 = V_5;
					NullCheck(L_65);
					RuntimeObject* L_66;
					L_66 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_65);
					NullCheck(L_63);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_63, L_64, L_66);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1114>
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_67 = V_0;
					int32_t L_68 = V_8;
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_69 = V_0;
					NullCheck(L_69);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_70 = L_69->___value;
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_71 = V_5;
					if (L_71)
					{
						G_B25_0 = L_70;
						G_B25_1 = L_68;
						G_B25_2 = L_67;
						goto IL_020e_2;
					}
					G_B24_0 = L_70;
					G_B24_1 = L_68;
					G_B24_2 = L_67;
				}
				{
					G_B26_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B26_1 = G_B24_0;
					G_B26_2 = G_B24_1;
					G_B26_3 = G_B24_2;
					goto IL_0215_2;
				}

IL_020e_2:
				{
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_72 = V_5;
					NullCheck(L_72);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_73 = L_72->___value;
					G_B26_0 = L_73;
					G_B26_1 = G_B25_0;
					G_B26_2 = G_B25_1;
					G_B26_3 = G_B25_2;
				}

IL_0215_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_74 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_74, G_B26_2, G_B26_1, G_B26_0, NULL);
					NullCheck(G_B26_3);
					G_B26_3->___value = L_74;
					Il2CppCodeGenWriteBarrier((void**)(&G_B26_3->___value), (void*)L_74);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1116>
					goto IL_0224_2;
				}

IL_0222_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1119>
					goto IL_022d_2;
				}

IL_0224_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1122>
					V_21 = (bool)1;
					goto IL_0092_2;
				}

IL_022d_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1128>
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_75 = V_0;
					RuntimeObject* L_76 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_76);
					RuntimeObject* L_77;
					L_77 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_76, (-1));
					NullCheck(L_75);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_75, L_77);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1130>
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_78 = V_0;
					RuntimeObject* L_79 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_80 = V_1;
					NullCheck(L_79);
					RuntimeObject* L_81;
					L_81 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_79, L_80);
					NullCheck(L_78);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_78, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_81, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1131>
					RuntimeObject* L_82 = __this->___adaptor;
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_83 = V_0;
					NullCheck(L_83);
					RuntimeObject* L_84;
					L_84 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_83);
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_85 = V_0;
					NullCheck(L_85);
					RuntimeObject* L_86;
					L_86 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_85);
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_87 = V_0;
					NullCheck(L_87);
					RuntimeObject* L_88;
					L_88 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_87);
					NullCheck(L_82);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_82, L_84, ((RuntimeObject*)Castclass((RuntimeObject*)L_86, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_88, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_02da_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0286_1;
				}
				throw e;
			}

CATCH_0286_1:
			{
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_89 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1133>
				V_22 = L_89;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1135>
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_90 = V_22;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10, __this, L_90);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1136>
				RuntimeObject* L_91 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_92 = V_22;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16, __this, L_91, L_92);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1138>
				shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_93 = V_0;
				RuntimeObject* L_94 = __this->___adaptor;
				RuntimeObject* L_95 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_96 = V_0;
				NullCheck(L_96);
				RuntimeObject* L_97;
				L_97 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_96);
				RuntimeObject* L_98 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				NullCheck(L_98);
				RuntimeObject* L_99;
				L_99 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_98, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_100 = V_22;
				NullCheck(L_94);
				RuntimeObject* L_101;
				L_101 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_94, L_95, ((RuntimeObject*)Castclass((RuntimeObject*)L_97, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_99, L_100);
				NullCheck(L_93);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_93, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_101, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_02da_1;
			}

IL_02da_1:
			{
				goto IL_02df;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02df:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1141>
		shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_102 = V_0;
		V_23 = L_102;
		goto IL_02e4;
	}

IL_02e4:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1142>
		shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_103 = V_23;
		return L_103;
	}
}
// Method Definition Index: 82125
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* NCalcParser_additiveExpression_m6DB278A3FB63E67ACBA48722BA7B9FFA98321B50 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* V_4 = NULL;
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* V_5 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_6 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_18 = NULL;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	bool V_21 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_22 = NULL;
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* V_23 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* G_B3_0 = NULL;
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* G_B4_1 = NULL;
	int32_t G_B8_0 = 0;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* G_B25_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* G_B24_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B26_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B26_1 = NULL;
	int32_t G_B26_2 = 0;
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* G_B26_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1148>
		additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_0 = (additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9*)il2cpp_codegen_object_new(additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9_il2cpp_TypeInfo_var);
		additiveExpression_return__ctor_m069149FDAE713F9A87A10851AD630B59C869CA53(L_0, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1149>
		additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5, L_1, L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1151>
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1153>
		V_2 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1154>
		V_3 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1155>
		V_4 = (multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1157>
		V_5 = (multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1159>
		V_6 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1160>
		V_7 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1162>
		V_8 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02db:
			{
				return;
			}
		});
		try
		{
			try
			{
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1169>
					RuntimeObject* L_4 = __this->___adaptor;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1171>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_multiplicativeExpression_in_additiveExpression625;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1172>
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_7;
					L_7 = NCalcParser_multiplicativeExpression_mE4985CD19B9128DDFF9FAEDF2A5D1ACB9BC4D2D5(__this, NULL);
					V_4 = L_7;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1173>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer;
					NullCheck(L_9);
					L_9->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1175>
					RuntimeObject* L_11 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_13 = V_4;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1176>
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_15 = V_0;
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_16 = V_4;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_0086_2;
					}
					G_B2_0 = L_15;
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_008d_2;
				}

IL_0086_2:
				{
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_17 = V_4;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_008d_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value), (void*)G_B4_0);
				}

IL_0092_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1180>
					V_9 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1181>
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_10 = L_20;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1183>
					int32_t L_21 = V_10;
					if ((((int32_t)L_21) < ((int32_t)((int32_t)38))))
					{
						goto IL_00b5_2;
					}
				}
				{
					int32_t L_22 = V_10;
					G_B8_0 = ((((int32_t)((((int32_t)L_22) > ((int32_t)((int32_t)39)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00b6_2;
				}

IL_00b5_2:
				{
					G_B8_0 = 0;
				}

IL_00b6_2:
				{
					V_11 = (bool)G_B8_0;
					bool L_23 = V_11;
					if (!L_23)
					{
						goto IL_00c1_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1185>
					V_9 = 1;
				}

IL_00c1_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1188>
					int32_t L_24 = V_9;
					V_13 = L_24;
					int32_t L_25 = V_13;
					V_12 = L_25;
					int32_t L_26 = V_12;
					if ((((int32_t)L_26) == ((int32_t)1)))
					{
						goto IL_00d3_2;
					}
				}
				{
					goto IL_0221_2;
				}

IL_00d3_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1194>
					V_14 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1195>
					RuntimeObject* L_27 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_27);
					int32_t L_28;
					L_28 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_27, 1);
					V_15 = L_28;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1197>
					int32_t L_29 = V_15;
					V_16 = (bool)((((int32_t)L_29) == ((int32_t)((int32_t)38)))? 1 : 0);
					bool L_30 = V_16;
					if (!L_30)
					{
						goto IL_00f8_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1199>
					V_14 = 1;
					goto IL_0124_2;
				}

IL_00f8_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1201>
					int32_t L_31 = V_15;
					V_17 = (bool)((((int32_t)L_31) == ((int32_t)((int32_t)39)))? 1 : 0);
					bool L_32 = V_17;
					if (!L_32)
					{
						goto IL_010b_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1203>
					V_14 = 2;
					goto IL_0124_2;
				}

IL_010b_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1207>
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1208>
					RuntimeObject* L_33 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_34 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
					NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), ((int32_t)13), 0, L_33, NULL);
					V_18 = L_34;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1210>
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_35 = V_18;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_additiveExpression_m6DB278A3FB63E67ACBA48722BA7B9FFA98321B50_RuntimeMethod_var)));
				}

IL_0124_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1212>
					int32_t L_36 = V_14;
					V_20 = L_36;
					int32_t L_37 = V_20;
					V_19 = L_37;
					int32_t L_38 = V_19;
					if ((((int32_t)L_38) == ((int32_t)1)))
					{
						goto IL_013d_2;
					}
				}
				{
					goto IL_0133_2;
				}

IL_0133_2:
				{
					int32_t L_39 = V_19;
					if ((((int32_t)L_39) == ((int32_t)2)))
					{
						goto IL_0180_2;
					}
				}
				{
					goto IL_01c2_2;
				}

IL_013d_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1217>
					RuntimeObject* L_40 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_41 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_38_in_additiveExpression636;
					RuntimeObject* L_42;
					L_42 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_40, ((int32_t)38), L_41);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_42, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1218>
					RuntimeObject* L_43 = __this->___adaptor;
					RuntimeObject* L_44 = V_2;
					NullCheck(L_43);
					RuntimeObject* L_45;
					L_45 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_43, L_44);
					V_6 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_45, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1219>
					RuntimeObject* L_46 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_47 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_48 = V_6;
					NullCheck(L_46);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_46, L_47, L_48);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1221>
					V_8 = ((int32_t)9);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1223>
					goto IL_01c2_2;
				}

IL_0180_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1227>
					RuntimeObject* L_49 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_50 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_39_in_additiveExpression646;
					RuntimeObject* L_51;
					L_51 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_49, ((int32_t)39), L_50);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_51, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1228>
					RuntimeObject* L_52 = __this->___adaptor;
					RuntimeObject* L_53 = V_3;
					NullCheck(L_52);
					RuntimeObject* L_54;
					L_54 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_52, L_53);
					V_7 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_54, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1229>
					RuntimeObject* L_55 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_56 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_57 = V_7;
					NullCheck(L_55);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_55, L_56, L_57);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1231>
					V_8 = 8;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1233>
					goto IL_01c2_2;
				}

IL_01c2_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1236>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_58 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_multiplicativeExpression_in_additiveExpression658;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_58, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1237>
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_59;
					L_59 = NCalcParser_multiplicativeExpression_mE4985CD19B9128DDFF9FAEDF2A5D1ACB9BC4D2D5(__this, NULL);
					V_5 = L_59;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1238>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_60 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_61 = L_60;
					NullCheck(L_61);
					int32_t L_62 = L_61->___followingStackPointer;
					NullCheck(L_61);
					L_61->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_62, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1240>
					RuntimeObject* L_63 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_64 = V_1;
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_65 = V_5;
					NullCheck(L_65);
					RuntimeObject* L_66;
					L_66 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_65);
					NullCheck(L_63);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_63, L_64, L_66);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1241>
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_67 = V_0;
					int32_t L_68 = V_8;
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_69 = V_0;
					NullCheck(L_69);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_70 = L_69->___value;
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_71 = V_5;
					if (L_71)
					{
						G_B25_0 = L_70;
						G_B25_1 = L_68;
						G_B25_2 = L_67;
						goto IL_020d_2;
					}
					G_B24_0 = L_70;
					G_B24_1 = L_68;
					G_B24_2 = L_67;
				}
				{
					G_B26_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B26_1 = G_B24_0;
					G_B26_2 = G_B24_1;
					G_B26_3 = G_B24_2;
					goto IL_0214_2;
				}

IL_020d_2:
				{
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_72 = V_5;
					NullCheck(L_72);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_73 = L_72->___value;
					G_B26_0 = L_73;
					G_B26_1 = G_B25_0;
					G_B26_2 = G_B25_1;
					G_B26_3 = G_B25_2;
				}

IL_0214_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_74 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_74, G_B26_2, G_B26_1, G_B26_0, NULL);
					NullCheck(G_B26_3);
					G_B26_3->___value = L_74;
					Il2CppCodeGenWriteBarrier((void**)(&G_B26_3->___value), (void*)L_74);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1243>
					goto IL_0223_2;
				}

IL_0221_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1246>
					goto IL_022c_2;
				}

IL_0223_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1249>
					V_21 = (bool)1;
					goto IL_0092_2;
				}

IL_022c_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1255>
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_75 = V_0;
					RuntimeObject* L_76 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_76);
					RuntimeObject* L_77;
					L_77 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_76, (-1));
					NullCheck(L_75);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_75, L_77);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1257>
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_78 = V_0;
					RuntimeObject* L_79 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_80 = V_1;
					NullCheck(L_79);
					RuntimeObject* L_81;
					L_81 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_79, L_80);
					NullCheck(L_78);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_78, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_81, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1258>
					RuntimeObject* L_82 = __this->___adaptor;
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_83 = V_0;
					NullCheck(L_83);
					RuntimeObject* L_84;
					L_84 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_83);
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_85 = V_0;
					NullCheck(L_85);
					RuntimeObject* L_86;
					L_86 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_85);
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_87 = V_0;
					NullCheck(L_87);
					RuntimeObject* L_88;
					L_88 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_87);
					NullCheck(L_82);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_82, L_84, ((RuntimeObject*)Castclass((RuntimeObject*)L_86, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_88, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_02d9_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0285_1;
				}
				throw e;
			}

CATCH_0285_1:
			{
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_89 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1260>
				V_22 = L_89;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1262>
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_90 = V_22;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10, __this, L_90);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1263>
				RuntimeObject* L_91 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_92 = V_22;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16, __this, L_91, L_92);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1265>
				additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_93 = V_0;
				RuntimeObject* L_94 = __this->___adaptor;
				RuntimeObject* L_95 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_96 = V_0;
				NullCheck(L_96);
				RuntimeObject* L_97;
				L_97 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_96);
				RuntimeObject* L_98 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				NullCheck(L_98);
				RuntimeObject* L_99;
				L_99 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_98, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_100 = V_22;
				NullCheck(L_94);
				RuntimeObject* L_101;
				L_101 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_94, L_95, ((RuntimeObject*)Castclass((RuntimeObject*)L_97, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_99, L_100);
				NullCheck(L_93);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_93, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_101, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_02d9_1;
			}

IL_02d9_1:
			{
				goto IL_02de;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02de:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1268>
		additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_102 = V_0;
		V_23 = L_102;
		goto IL_02e3;
	}

IL_02e3:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1269>
		additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_103 = V_23;
		return L_103;
	}
}
// Method Definition Index: 82126
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* NCalcParser_multiplicativeExpression_mE4985CD19B9128DDFF9FAEDF2A5D1ACB9BC4D2D5 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* V_5 = NULL;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* V_6 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_7 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_8 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_17 = NULL;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_23 = NULL;
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* V_24 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* G_B3_0 = NULL;
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* G_B4_1 = NULL;
	int32_t G_B8_0 = 0;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* G_B25_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* G_B24_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B26_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B26_1 = NULL;
	int32_t G_B26_2 = 0;
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* G_B26_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1275>
		multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_0 = (multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE*)il2cpp_codegen_object_new(multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE_il2cpp_TypeInfo_var);
		multiplicativeExpression_return__ctor_m4EC6588201A9DD7527112016F99FD17611790A3C(L_0, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1276>
		multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5, L_1, L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1278>
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1280>
		V_2 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1281>
		V_3 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1282>
		V_4 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1283>
		V_5 = (unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1285>
		V_6 = (unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1287>
		V_7 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1288>
		V_8 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1289>
		V_9 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1291>
		V_10 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_033d:
			{
				return;
			}
		});
		try
		{
			try
			{
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1298>
					RuntimeObject* L_4 = __this->___adaptor;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1300>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_unaryExpression_in_multiplicativeExpression690;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1301>
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_7;
					L_7 = NCalcParser_unaryExpression_mC8B605980131E1E0AC78330D9A43790295E1B2A5(__this, NULL);
					V_5 = L_7;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1302>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer;
					NullCheck(L_9);
					L_9->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1304>
					RuntimeObject* L_11 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_13 = V_5;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1305>
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_15 = V_0;
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_16 = V_5;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_008c_2;
					}
					G_B2_0 = L_15;
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_0093_2;
				}

IL_008c_2:
				{
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_17 = V_5;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_0093_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value), (void*)G_B4_0);
				}

IL_0098_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1309>
					V_11 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1310>
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_12 = L_20;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1312>
					int32_t L_21 = V_12;
					if ((((int32_t)L_21) < ((int32_t)((int32_t)40))))
					{
						goto IL_00bb_2;
					}
				}
				{
					int32_t L_22 = V_12;
					G_B8_0 = ((((int32_t)((((int32_t)L_22) > ((int32_t)((int32_t)42)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00bc_2;
				}

IL_00bb_2:
				{
					G_B8_0 = 0;
				}

IL_00bc_2:
				{
					V_13 = (bool)G_B8_0;
					bool L_23 = V_13;
					if (!L_23)
					{
						goto IL_00c7_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1314>
					V_11 = 1;
				}

IL_00c7_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1317>
					int32_t L_24 = V_11;
					V_15 = L_24;
					int32_t L_25 = V_15;
					V_14 = L_25;
					int32_t L_26 = V_14;
					if ((((int32_t)L_26) == ((int32_t)1)))
					{
						goto IL_00d9_2;
					}
				}
				{
					goto IL_0283_2;
				}

IL_00d9_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1323>
					V_16 = 3;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1324>
					RuntimeObject* L_27 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_27);
					int32_t L_28;
					L_28 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_27, 1);
					V_19 = L_28;
					int32_t L_29 = V_19;
					V_18 = L_29;
					int32_t L_30 = V_18;
					switch (((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)40))))
					{
						case 0:
						{
							goto IL_0107_2;
						}
						case 1:
						{
							goto IL_010e_2;
						}
						case 2:
						{
							goto IL_0115_2;
						}
					}
				}
				{
					goto IL_011c_2;
				}

IL_0107_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1328>
					V_16 = 1;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1330>
					goto IL_0134_2;
				}

IL_010e_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1333>
					V_16 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1335>
					goto IL_0134_2;
				}

IL_0115_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1338>
					V_16 = 3;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1340>
					goto IL_0134_2;
				}

IL_011c_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1342>
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1343>
					RuntimeObject* L_31 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_32 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
					NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), ((int32_t)15), 0, L_31, NULL);
					V_17 = L_32;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1345>
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_33 = V_17;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_multiplicativeExpression_mE4985CD19B9128DDFF9FAEDF2A5D1ACB9BC4D2D5_RuntimeMethod_var)));
				}

IL_0134_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1348>
					int32_t L_34 = V_16;
					V_21 = L_34;
					int32_t L_35 = V_21;
					V_20 = L_35;
					int32_t L_36 = V_20;
					switch (((int32_t)il2cpp_codegen_subtract(L_36, 1)))
					{
						case 0:
						{
							goto IL_0156_2;
						}
						case 1:
						{
							goto IL_019c_2;
						}
						case 2:
						{
							goto IL_01df_2;
						}
					}
				}
				{
					goto IL_0224_2;
				}

IL_0156_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1353>
					RuntimeObject* L_37 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_38 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_40_in_multiplicativeExpression701;
					RuntimeObject* L_39;
					L_39 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_37, ((int32_t)40), L_38);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_39, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1354>
					RuntimeObject* L_40 = __this->___adaptor;
					RuntimeObject* L_41 = V_2;
					NullCheck(L_40);
					RuntimeObject* L_42;
					L_42 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_40, L_41);
					V_7 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_42, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1355>
					RuntimeObject* L_43 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_44 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_45 = V_7;
					NullCheck(L_43);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_43, L_44, L_45);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1357>
					V_10 = ((int32_t)12);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1359>
					goto IL_0224_2;
				}

IL_019c_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1363>
					RuntimeObject* L_46 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_47 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_41_in_multiplicativeExpression711;
					RuntimeObject* L_48;
					L_48 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_46, ((int32_t)41), L_47);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_48, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1364>
					RuntimeObject* L_49 = __this->___adaptor;
					RuntimeObject* L_50 = V_3;
					NullCheck(L_49);
					RuntimeObject* L_51;
					L_51 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_49, L_50);
					V_8 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_51, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1365>
					RuntimeObject* L_52 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_53 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_54 = V_8;
					NullCheck(L_52);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_52, L_53, L_54);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1367>
					V_10 = ((int32_t)11);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1369>
					goto IL_0224_2;
				}

IL_01df_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1373>
					RuntimeObject* L_55 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_56 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_42_in_multiplicativeExpression721;
					RuntimeObject* L_57;
					L_57 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_55, ((int32_t)42), L_56);
					V_4 = ((RuntimeObject*)Castclass((RuntimeObject*)L_57, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1374>
					RuntimeObject* L_58 = __this->___adaptor;
					RuntimeObject* L_59 = V_4;
					NullCheck(L_58);
					RuntimeObject* L_60;
					L_60 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_58, L_59);
					V_9 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_60, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1375>
					RuntimeObject* L_61 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_62 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_63 = V_9;
					NullCheck(L_61);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_61, L_62, L_63);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1377>
					V_10 = ((int32_t)10);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1379>
					goto IL_0224_2;
				}

IL_0224_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1382>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_64 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_unaryExpression_in_multiplicativeExpression733;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_64, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1383>
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_65;
					L_65 = NCalcParser_unaryExpression_mC8B605980131E1E0AC78330D9A43790295E1B2A5(__this, NULL);
					V_6 = L_65;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1384>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_66 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_67 = L_66;
					NullCheck(L_67);
					int32_t L_68 = L_67->___followingStackPointer;
					NullCheck(L_67);
					L_67->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_68, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1386>
					RuntimeObject* L_69 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_70 = V_1;
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_71 = V_6;
					NullCheck(L_71);
					RuntimeObject* L_72;
					L_72 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_71);
					NullCheck(L_69);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_69, L_70, L_72);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1387>
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_73 = V_0;
					int32_t L_74 = V_10;
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_75 = V_0;
					NullCheck(L_75);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_76 = L_75->___value;
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_77 = V_6;
					if (L_77)
					{
						G_B25_0 = L_76;
						G_B25_1 = L_74;
						G_B25_2 = L_73;
						goto IL_026f_2;
					}
					G_B24_0 = L_76;
					G_B24_1 = L_74;
					G_B24_2 = L_73;
				}
				{
					G_B26_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B26_1 = G_B24_0;
					G_B26_2 = G_B24_1;
					G_B26_3 = G_B24_2;
					goto IL_0276_2;
				}

IL_026f_2:
				{
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_78 = V_6;
					NullCheck(L_78);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_79 = L_78->___value;
					G_B26_0 = L_79;
					G_B26_1 = G_B25_0;
					G_B26_2 = G_B25_1;
					G_B26_3 = G_B25_2;
				}

IL_0276_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_80 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_80, G_B26_2, G_B26_1, G_B26_0, NULL);
					NullCheck(G_B26_3);
					G_B26_3->___value = L_80;
					Il2CppCodeGenWriteBarrier((void**)(&G_B26_3->___value), (void*)L_80);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1389>
					goto IL_0285_2;
				}

IL_0283_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1392>
					goto IL_028e_2;
				}

IL_0285_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1395>
					V_22 = (bool)1;
					goto IL_0098_2;
				}

IL_028e_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1401>
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_81 = V_0;
					RuntimeObject* L_82 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_82);
					RuntimeObject* L_83;
					L_83 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_82, (-1));
					NullCheck(L_81);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_81, L_83);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1403>
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_84 = V_0;
					RuntimeObject* L_85 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_86 = V_1;
					NullCheck(L_85);
					RuntimeObject* L_87;
					L_87 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_85, L_86);
					NullCheck(L_84);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_84, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_87, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1404>
					RuntimeObject* L_88 = __this->___adaptor;
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_89 = V_0;
					NullCheck(L_89);
					RuntimeObject* L_90;
					L_90 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_89);
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_91 = V_0;
					NullCheck(L_91);
					RuntimeObject* L_92;
					L_92 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_91);
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_93 = V_0;
					NullCheck(L_93);
					RuntimeObject* L_94;
					L_94 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_93);
					NullCheck(L_88);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_88, L_90, ((RuntimeObject*)Castclass((RuntimeObject*)L_92, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_94, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_033b_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_02e7_1;
				}
				throw e;
			}

CATCH_02e7_1:
			{
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_95 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1406>
				V_23 = L_95;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1408>
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_96 = V_23;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10, __this, L_96);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1409>
				RuntimeObject* L_97 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_98 = V_23;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16, __this, L_97, L_98);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1411>
				multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_99 = V_0;
				RuntimeObject* L_100 = __this->___adaptor;
				RuntimeObject* L_101 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_102 = V_0;
				NullCheck(L_102);
				RuntimeObject* L_103;
				L_103 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_102);
				RuntimeObject* L_104 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				NullCheck(L_104);
				RuntimeObject* L_105;
				L_105 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_104, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_106 = V_23;
				NullCheck(L_100);
				RuntimeObject* L_107;
				L_107 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_100, L_101, ((RuntimeObject*)Castclass((RuntimeObject*)L_103, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_105, L_106);
				NullCheck(L_99);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_99, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_107, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_033b_1;
			}

IL_033b_1:
			{
				goto IL_0340;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0340:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1414>
		multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_108 = V_0;
		V_24 = L_108;
		goto IL_0345;
	}

IL_0345:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1415>
		multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_109 = V_24;
		return L_109;
	}
}
// Method Definition Index: 82127
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* NCalcParser_unaryExpression_mC8B605980131E1E0AC78330D9A43790295E1B2A5 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* V_5 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* V_6 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* V_7 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* V_8 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_9 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_10 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_11 = NULL;
	int32_t V_12 = 0;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	bool V_18 = false;
	MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* V_19 = NULL;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_20 = NULL;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* V_21 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B14_0 = NULL;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B13_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B15_0 = NULL;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B15_1 = NULL;
	int32_t G_B19_0 = 0;
	int32_t G_B24_0 = 0;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B24_1 = NULL;
	int32_t G_B23_0 = 0;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B23_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B25_2 = NULL;
	int32_t G_B28_0 = 0;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B28_1 = NULL;
	int32_t G_B27_0 = 0;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B27_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B29_0 = NULL;
	int32_t G_B29_1 = 0;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B29_2 = NULL;
	int32_t G_B32_0 = 0;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B32_1 = NULL;
	int32_t G_B31_0 = 0;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B31_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B33_0 = NULL;
	int32_t G_B33_1 = 0;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B33_2 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1421>
		unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_0 = (unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64*)il2cpp_codegen_object_new(unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64_il2cpp_TypeInfo_var);
		unaryExpression_return__ctor_mE4FBA5CA64602B3C38981B648ED292D7B0C7DA98(L_0, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1422>
		unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5, L_1, L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1424>
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1426>
		V_2 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1427>
		V_3 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1428>
		V_4 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1429>
		V_5 = (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1431>
		V_6 = (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1433>
		V_7 = (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1435>
		V_8 = (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1437>
		V_9 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1438>
		V_10 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1439>
		V_11 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0433:
			{
				return;
			}
		});
		try
		{
			try
			{
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1444>
					V_12 = 4;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1445>
					RuntimeObject* L_4 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_4);
					int32_t L_5;
					L_5 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_4, 1);
					V_15 = L_5;
					int32_t L_6 = V_15;
					V_14 = L_6;
					int32_t L_7 = V_14;
					if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_7, 4))) > ((uint32_t)7))))
					{
						goto IL_0083_2;
					}
				}
				{
					goto IL_0057_2;
				}

IL_0057_2:
				{
					int32_t L_8 = V_14;
					switch (((int32_t)il2cpp_codegen_subtract(L_8, ((int32_t)39))))
					{
						case 0:
						{
							goto IL_0098_2;
						}
						case 1:
						{
							goto IL_009f_2;
						}
						case 2:
						{
							goto IL_009f_2;
						}
						case 3:
						{
							goto IL_009f_2;
						}
						case 4:
						{
							goto IL_008a_2;
						}
						case 5:
						{
							goto IL_008a_2;
						}
						case 6:
						{
							goto IL_0091_2;
						}
						case 7:
						{
							goto IL_0083_2;
						}
					}
				}
				{
					goto IL_009f_2;
				}

IL_0083_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1457>
					V_12 = 1;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1459>
					goto IL_00b7_2;
				}

IL_008a_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1463>
					V_12 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1465>
					goto IL_00b7_2;
				}

IL_0091_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1468>
					V_12 = 3;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1470>
					goto IL_00b7_2;
				}

IL_0098_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1473>
					V_12 = 4;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1475>
					goto IL_00b7_2;
				}

IL_009f_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1477>
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1478>
					RuntimeObject* L_9 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_10 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
					NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), ((int32_t)17), 0, L_9, NULL);
					V_13 = L_10;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1480>
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_11 = V_13;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_unaryExpression_mC8B605980131E1E0AC78330D9A43790295E1B2A5_RuntimeMethod_var)));
				}

IL_00b7_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1483>
					int32_t L_12 = V_12;
					V_17 = L_12;
					int32_t L_13 = V_17;
					V_16 = L_13;
					int32_t L_14 = V_16;
					switch (((int32_t)il2cpp_codegen_subtract(L_14, 1)))
					{
						case 0:
						{
							goto IL_00dd_2;
						}
						case 1:
						{
							goto IL_0144_2;
						}
						case 2:
						{
							goto IL_0236_2;
						}
						case 3:
						{
							goto IL_02e0_2;
						}
					}
				}
				{
					goto IL_0387_2;
				}

IL_00dd_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1488>
					RuntimeObject* L_15 = __this->___adaptor;
					NullCheck(L_15);
					RuntimeObject* L_16;
					L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_15);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_16, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1490>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_17 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression760;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_17, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1491>
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_18;
					L_18 = NCalcParser_primaryExpression_mD64C750787D69BB79620AF9347B994805740C039(__this, NULL);
					V_5 = L_18;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1492>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_19 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_20 = L_19;
					NullCheck(L_20);
					int32_t L_21 = L_20->___followingStackPointer;
					NullCheck(L_20);
					L_20->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1494>
					RuntimeObject* L_22 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_23 = V_1;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_24 = V_5;
					NullCheck(L_24);
					RuntimeObject* L_25;
					L_25 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_24);
					NullCheck(L_22);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_22, L_23, L_25);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1495>
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_26 = V_0;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_27 = V_5;
					if (L_27)
					{
						G_B14_0 = L_26;
						goto IL_0132_2;
					}
					G_B13_0 = L_26;
				}
				{
					G_B15_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B15_1 = G_B13_0;
					goto IL_0139_2;
				}

IL_0132_2:
				{
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_28 = V_5;
					NullCheck(L_28);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_29 = L_28->___value;
					G_B15_0 = L_29;
					G_B15_1 = G_B14_0;
				}

IL_0139_2:
				{
					NullCheck(G_B15_1);
					G_B15_1->___value = G_B15_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B15_1->___value), (void*)G_B15_0);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1497>
					goto IL_0387_2;
				}

IL_0144_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1501>
					RuntimeObject* L_30 = __this->___adaptor;
					NullCheck(L_30);
					RuntimeObject* L_31;
					L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_30);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_31, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1503>
					RuntimeObject* L_32 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_32);
					RuntimeObject* L_33;
					L_33 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_32, 1);
					V_2 = L_33;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1504>
					RuntimeObject* L_34 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_34);
					int32_t L_35;
					L_35 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_34, 1);
					if ((((int32_t)L_35) < ((int32_t)((int32_t)43))))
					{
						goto IL_0188_2;
					}
				}
				{
					RuntimeObject* L_36 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_36);
					int32_t L_37;
					L_37 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_36, 1);
					G_B19_0 = ((((int32_t)((((int32_t)L_37) > ((int32_t)((int32_t)44)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_0189_2;
				}

IL_0188_2:
				{
					G_B19_0 = 0;
				}

IL_0189_2:
				{
					V_18 = (bool)G_B19_0;
					bool L_38 = V_18;
					if (!L_38)
					{
						goto IL_01c9_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1506>
					RuntimeObject* L_39 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_39);
					InterfaceActionInvoker0::Invoke(0, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_39);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1507>
					RuntimeObject* L_40 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_41 = V_1;
					RuntimeObject* L_42 = __this->___adaptor;
					RuntimeObject* L_43 = V_2;
					NullCheck(L_42);
					RuntimeObject* L_44;
					L_44 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_42, L_43);
					NullCheck(L_40);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_40, L_41, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_44, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1508>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_45 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					NullCheck(L_45);
					L_45->___errorRecovery = (bool)0;
					goto IL_01db_2;
				}

IL_01c9_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1512>
					RuntimeObject* L_46 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_47 = (MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var)));
					MismatchedSetException__ctor_m86BBF2EDDE084B2481D65102A4D9A78A4F4F42A4(L_47, (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)NULL, L_46, NULL);
					V_19 = L_47;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1513>
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_48 = V_19;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_unaryExpression_mC8B605980131E1E0AC78330D9A43790295E1B2A5_RuntimeMethod_var)));
				}

IL_01db_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1516>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_49 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression779;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_49, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1517>
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_50;
					L_50 = NCalcParser_primaryExpression_mD64C750787D69BB79620AF9347B994805740C039(__this, NULL);
					V_6 = L_50;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1518>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_51 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_52 = L_51;
					NullCheck(L_52);
					int32_t L_53 = L_52->___followingStackPointer;
					NullCheck(L_52);
					L_52->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_53, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1520>
					RuntimeObject* L_54 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_55 = V_1;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_56 = V_6;
					NullCheck(L_56);
					RuntimeObject* L_57;
					L_57 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_56);
					NullCheck(L_54);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_54, L_55, L_57);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1521>
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_58 = V_0;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_59 = V_6;
					if (L_59)
					{
						G_B24_0 = 0;
						G_B24_1 = L_58;
						goto IL_021f_2;
					}
					G_B23_0 = 0;
					G_B23_1 = L_58;
				}
				{
					G_B25_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B25_1 = G_B23_0;
					G_B25_2 = G_B23_1;
					goto IL_0226_2;
				}

IL_021f_2:
				{
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_60 = V_6;
					NullCheck(L_60);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_61 = L_60->___value;
					G_B25_0 = L_61;
					G_B25_1 = G_B24_0;
					G_B25_2 = G_B24_1;
				}

IL_0226_2:
				{
					UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* L_62 = (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E*)il2cpp_codegen_object_new(UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E_il2cpp_TypeInfo_var);
					UnaryExpression__ctor_m1FB2772CED5F7227987F4689D8697977BCA3C24E(L_62, G_B25_1, G_B25_0, NULL);
					NullCheck(G_B25_2);
					G_B25_2->___value = L_62;
					Il2CppCodeGenWriteBarrier((void**)(&G_B25_2->___value), (void*)L_62);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1523>
					goto IL_0387_2;
				}

IL_0236_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1527>
					RuntimeObject* L_63 = __this->___adaptor;
					NullCheck(L_63);
					RuntimeObject* L_64;
					L_64 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_63);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_64, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1532>
					RuntimeObject* L_65 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_66 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_45_in_unaryExpression791;
					RuntimeObject* L_67;
					L_67 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_65, ((int32_t)45), L_66);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_67, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1533>
					RuntimeObject* L_68 = __this->___adaptor;
					RuntimeObject* L_69 = V_3;
					NullCheck(L_68);
					RuntimeObject* L_70;
					L_70 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_68, L_69);
					V_10 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_70, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1534>
					RuntimeObject* L_71 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_72 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_73 = V_10;
					NullCheck(L_71);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_71, L_72, L_73);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1537>
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_74 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression794;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_74, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1538>
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_75;
					L_75 = NCalcParser_primaryExpression_mD64C750787D69BB79620AF9347B994805740C039(__this, NULL);
					V_7 = L_75;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1539>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_76 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_77 = L_76;
					NullCheck(L_77);
					int32_t L_78 = L_77->___followingStackPointer;
					NullCheck(L_77);
					L_77->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_78, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1541>
					RuntimeObject* L_79 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_80 = V_1;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_81 = V_7;
					NullCheck(L_81);
					RuntimeObject* L_82;
					L_82 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_81);
					NullCheck(L_79);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_79, L_80, L_82);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1542>
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_83 = V_0;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_84 = V_7;
					if (L_84)
					{
						G_B28_0 = 2;
						G_B28_1 = L_83;
						goto IL_02c9_2;
					}
					G_B27_0 = 2;
					G_B27_1 = L_83;
				}
				{
					G_B29_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B29_1 = G_B27_0;
					G_B29_2 = G_B27_1;
					goto IL_02d0_2;
				}

IL_02c9_2:
				{
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_85 = V_7;
					NullCheck(L_85);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_86 = L_85->___value;
					G_B29_0 = L_86;
					G_B29_1 = G_B28_0;
					G_B29_2 = G_B28_1;
				}

IL_02d0_2:
				{
					UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* L_87 = (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E*)il2cpp_codegen_object_new(UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E_il2cpp_TypeInfo_var);
					UnaryExpression__ctor_m1FB2772CED5F7227987F4689D8697977BCA3C24E(L_87, G_B29_1, G_B29_0, NULL);
					NullCheck(G_B29_2);
					G_B29_2->___value = L_87;
					Il2CppCodeGenWriteBarrier((void**)(&G_B29_2->___value), (void*)L_87);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1544>
					goto IL_0387_2;
				}

IL_02e0_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1548>
					RuntimeObject* L_88 = __this->___adaptor;
					NullCheck(L_88);
					RuntimeObject* L_89;
					L_89 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_88);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_89, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1550>
					RuntimeObject* L_90 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_91 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_39_in_unaryExpression805;
					RuntimeObject* L_92;
					L_92 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_90, ((int32_t)39), L_91);
					V_4 = ((RuntimeObject*)Castclass((RuntimeObject*)L_92, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1551>
					RuntimeObject* L_93 = __this->___adaptor;
					RuntimeObject* L_94 = V_4;
					NullCheck(L_93);
					RuntimeObject* L_95;
					L_95 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_93, L_94);
					V_11 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_95, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1552>
					RuntimeObject* L_96 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_97 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_98 = V_11;
					NullCheck(L_96);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_96, L_97, L_98);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1554>
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_99 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression807;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_99, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1555>
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_100;
					L_100 = NCalcParser_primaryExpression_mD64C750787D69BB79620AF9347B994805740C039(__this, NULL);
					V_8 = L_100;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1556>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_101 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_102 = L_101;
					NullCheck(L_102);
					int32_t L_103 = L_102->___followingStackPointer;
					NullCheck(L_102);
					L_102->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_103, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1558>
					RuntimeObject* L_104 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_105 = V_1;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_106 = V_8;
					NullCheck(L_106);
					RuntimeObject* L_107;
					L_107 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_106);
					NullCheck(L_104);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_104, L_105, L_107);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1559>
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_108 = V_0;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_109 = V_8;
					if (L_109)
					{
						G_B32_0 = 1;
						G_B32_1 = L_108;
						goto IL_0373_2;
					}
					G_B31_0 = 1;
					G_B31_1 = L_108;
				}
				{
					G_B33_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B33_1 = G_B31_0;
					G_B33_2 = G_B31_1;
					goto IL_037a_2;
				}

IL_0373_2:
				{
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_110 = V_8;
					NullCheck(L_110);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_111 = L_110->___value;
					G_B33_0 = L_111;
					G_B33_1 = G_B32_0;
					G_B33_2 = G_B32_1;
				}

IL_037a_2:
				{
					UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* L_112 = (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E*)il2cpp_codegen_object_new(UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E_il2cpp_TypeInfo_var);
					UnaryExpression__ctor_m1FB2772CED5F7227987F4689D8697977BCA3C24E(L_112, G_B33_1, G_B33_0, NULL);
					NullCheck(G_B33_2);
					G_B33_2->___value = L_112;
					Il2CppCodeGenWriteBarrier((void**)(&G_B33_2->___value), (void*)L_112);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1561>
					goto IL_0387_2;
				}

IL_0387_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1563>
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_113 = V_0;
					RuntimeObject* L_114 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_114);
					RuntimeObject* L_115;
					L_115 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_114, (-1));
					NullCheck(L_113);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_113, L_115);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1565>
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_116 = V_0;
					RuntimeObject* L_117 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_118 = V_1;
					NullCheck(L_117);
					RuntimeObject* L_119;
					L_119 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_117, L_118);
					NullCheck(L_116);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_116, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_119, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1566>
					RuntimeObject* L_120 = __this->___adaptor;
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_121 = V_0;
					NullCheck(L_121);
					RuntimeObject* L_122;
					L_122 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_121);
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_123 = V_0;
					NullCheck(L_123);
					RuntimeObject* L_124;
					L_124 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_123);
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_125 = V_0;
					NullCheck(L_125);
					RuntimeObject* L_126;
					L_126 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_125);
					NullCheck(L_120);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_120, L_122, ((RuntimeObject*)Castclass((RuntimeObject*)L_124, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_126, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0431_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_03dd_1;
				}
				throw e;
			}

CATCH_03dd_1:
			{
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_127 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1568>
				V_20 = L_127;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1570>
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_128 = V_20;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10, __this, L_128);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1571>
				RuntimeObject* L_129 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_130 = V_20;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16, __this, L_129, L_130);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1573>
				unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_131 = V_0;
				RuntimeObject* L_132 = __this->___adaptor;
				RuntimeObject* L_133 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_134 = V_0;
				NullCheck(L_134);
				RuntimeObject* L_135;
				L_135 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_134);
				RuntimeObject* L_136 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				NullCheck(L_136);
				RuntimeObject* L_137;
				L_137 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_136, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_138 = V_20;
				NullCheck(L_132);
				RuntimeObject* L_139;
				L_139 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_132, L_133, ((RuntimeObject*)Castclass((RuntimeObject*)L_135, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_137, L_138);
				NullCheck(L_131);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_131, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_139, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_0431_1;
			}

IL_0431_1:
			{
				goto IL_0436;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0436:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1576>
		unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_140 = V_0;
		V_21 = L_140;
		goto IL_043b;
	}

IL_043b:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1577>
		unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_141 = V_21;
		return L_141;
	}
}
// Method Definition Index: 82128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* NCalcParser_primaryExpression_mD64C750787D69BB79620AF9347B994805740C039 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m3991F6AFAC337479BBE03A1131E92A90A93EB572_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* V_4 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* V_5 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* V_6 = NULL;
	arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* V_7 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_8 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_9 = NULL;
	int32_t V_10 = 0;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	bool V_18 = false;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_21 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* V_22 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B15_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B14_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B16_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B16_1 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B19_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B18_0 = NULL;
	ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* G_B20_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B20_1 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B23_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B22_0 = NULL;
	IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* G_B24_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B24_1 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B30_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B29_0 = NULL;
	IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* G_B31_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B31_1 = NULL;
	IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* G_B33_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B33_1 = NULL;
	IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* G_B32_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B32_1 = NULL;
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* G_B34_0 = NULL;
	IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* G_B34_1 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B34_2 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1583>
		primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_0 = (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55*)il2cpp_codegen_object_new(primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55_il2cpp_TypeInfo_var);
		primaryExpression_return__ctor_mF0B4992409A94995D798FC05A446633E95165C65(L_0, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1584>
		primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5, L_1, L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1586>
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1588>
		V_2 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1589>
		V_3 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1590>
		V_4 = (value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1592>
		V_5 = (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1594>
		V_6 = (identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1596>
		V_7 = (arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1598>
		V_8 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1599>
		V_9 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03a2:
			{
				return;
			}
		});
		try
		{
			try
			{
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1604>
					V_10 = 3;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1605>
					RuntimeObject* L_4 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_4);
					int32_t L_5;
					L_5 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_4, 1);
					V_13 = L_5;
					int32_t L_6 = V_13;
					V_12 = L_6;
					int32_t L_7 = V_12;
					if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_7, 4))) > ((uint32_t)5))))
					{
						goto IL_006a_2;
					}
				}
				{
					goto IL_0051_2;
				}

IL_0051_2:
				{
					int32_t L_8 = V_12;
					if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, ((int32_t)10)))) > ((uint32_t)1))))
					{
						goto IL_0071_2;
					}
				}
				{
					goto IL_005b_2;
				}

IL_005b_2:
				{
					int32_t L_9 = V_12;
					if ((((int32_t)L_9) == ((int32_t)((int32_t)46))))
					{
						goto IL_0063_2;
					}
				}
				{
					goto IL_0078_2;
				}

IL_0063_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1609>
					V_10 = 1;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1611>
					goto IL_0090_2;
				}

IL_006a_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1619>
					V_10 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1621>
					goto IL_0090_2;
				}

IL_0071_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1625>
					V_10 = 3;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1627>
					goto IL_0090_2;
				}

IL_0078_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1629>
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1630>
					RuntimeObject* L_10 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_11 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
					NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), ((int32_t)19), 0, L_10, NULL);
					V_11 = L_11;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1632>
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_12 = V_11;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_primaryExpression_mD64C750787D69BB79620AF9347B994805740C039_RuntimeMethod_var)));
				}

IL_0090_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1635>
					int32_t L_13 = V_10;
					V_15 = L_13;
					int32_t L_14 = V_15;
					V_14 = L_14;
					int32_t L_15 = V_14;
					switch (((int32_t)il2cpp_codegen_subtract(L_15, 1)))
					{
						case 0:
						{
							goto IL_00b2_2;
						}
						case 1:
						{
							goto IL_018f_2;
						}
						case 2:
						{
							goto IL_01f6_2;
						}
					}
				}
				{
					goto IL_02f6_2;
				}

IL_00b2_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1640>
					RuntimeObject* L_16 = __this->___adaptor;
					NullCheck(L_16);
					RuntimeObject* L_17;
					L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_16);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_17, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1642>
					RuntimeObject* L_18 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_19 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_46_in_primaryExpression829;
					RuntimeObject* L_20;
					L_20 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_18, ((int32_t)46), L_19);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_20, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1643>
					RuntimeObject* L_21 = __this->___adaptor;
					RuntimeObject* L_22 = V_2;
					NullCheck(L_21);
					RuntimeObject* L_23;
					L_23 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_21, L_22);
					V_8 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_23, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1644>
					RuntimeObject* L_24 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_25 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_26 = V_8;
					NullCheck(L_24);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_24, L_25, L_26);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1646>
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_27 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_primaryExpression831;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_27, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1647>
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_28;
					L_28 = NCalcParser_logicalExpression_m331B36AA673889BE071688BEEBE490840BACF985(__this, NULL);
					V_5 = L_28;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1648>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_29 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_30 = L_29;
					NullCheck(L_30);
					int32_t L_31 = L_30->___followingStackPointer;
					NullCheck(L_30);
					L_30->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1650>
					RuntimeObject* L_32 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_33 = V_1;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_34 = V_5;
					NullCheck(L_34);
					RuntimeObject* L_35;
					L_35 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_34);
					NullCheck(L_32);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_32, L_33, L_35);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1651>
					RuntimeObject* L_36 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_37 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_47_in_primaryExpression833;
					RuntimeObject* L_38;
					L_38 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_36, ((int32_t)47), L_37);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_38, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1652>
					RuntimeObject* L_39 = __this->___adaptor;
					RuntimeObject* L_40 = V_3;
					NullCheck(L_39);
					RuntimeObject* L_41;
					L_41 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_39, L_40);
					V_9 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_41, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1653>
					RuntimeObject* L_42 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_43 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_44 = V_9;
					NullCheck(L_42);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_42, L_43, L_44);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1655>
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_45 = V_0;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_46 = V_5;
					if (L_46)
					{
						G_B15_0 = L_45;
						goto IL_017d_2;
					}
					G_B14_0 = L_45;
				}
				{
					G_B16_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B16_1 = G_B14_0;
					goto IL_0184_2;
				}

IL_017d_2:
				{
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_47 = V_5;
					NullCheck(L_47);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_48 = L_47->___value;
					G_B16_0 = L_48;
					G_B16_1 = G_B15_0;
				}

IL_0184_2:
				{
					NullCheck(G_B16_1);
					G_B16_1->___value = G_B16_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B16_1->___value), (void*)G_B16_0);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1657>
					goto IL_02f6_2;
				}

IL_018f_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1661>
					RuntimeObject* L_49 = __this->___adaptor;
					NullCheck(L_49);
					RuntimeObject* L_50;
					L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_49);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_50, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1663>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_51 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_value_in_primaryExpression843;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_51, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1664>
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_52;
					L_52 = NCalcParser_value_m9F984EDA6B75DB65D007A1F0EE951DCDBD60F870(__this, NULL);
					V_4 = L_52;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1665>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_53 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_54 = L_53;
					NullCheck(L_54);
					int32_t L_55 = L_54->___followingStackPointer;
					NullCheck(L_54);
					L_54->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_55, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1667>
					RuntimeObject* L_56 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_57 = V_1;
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_58 = V_4;
					NullCheck(L_58);
					RuntimeObject* L_59;
					L_59 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_58);
					NullCheck(L_56);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_56, L_57, L_59);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1668>
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_60 = V_0;
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_61 = V_4;
					if (L_61)
					{
						G_B19_0 = L_60;
						goto IL_01e4_2;
					}
					G_B18_0 = L_60;
				}
				{
					G_B20_0 = ((ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)(NULL));
					G_B20_1 = G_B18_0;
					goto IL_01eb_2;
				}

IL_01e4_2:
				{
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_62 = V_4;
					NullCheck(L_62);
					ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_63 = L_62->___value;
					G_B20_0 = L_63;
					G_B20_1 = G_B19_0;
				}

IL_01eb_2:
				{
					NullCheck(G_B20_1);
					G_B20_1->___value = G_B20_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B20_1->___value), (void*)G_B20_0);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1670>
					goto IL_02f6_2;
				}

IL_01f6_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1674>
					RuntimeObject* L_64 = __this->___adaptor;
					NullCheck(L_64);
					RuntimeObject* L_65;
					L_65 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_64);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_65, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1676>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_66 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_identifier_in_primaryExpression851;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_66, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1677>
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_67;
					L_67 = NCalcParser_identifier_m697374C0E2B7BAF6C5DF801678F4C78CB13F3F53(__this, NULL);
					V_6 = L_67;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1678>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_68 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_69 = L_68;
					NullCheck(L_69);
					int32_t L_70 = L_69->___followingStackPointer;
					NullCheck(L_69);
					L_69->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_70, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1680>
					RuntimeObject* L_71 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_72 = V_1;
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_73 = V_6;
					NullCheck(L_73);
					RuntimeObject* L_74;
					L_74 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_73);
					NullCheck(L_71);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_71, L_72, L_74);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1681>
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_75 = V_0;
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_76 = V_6;
					if (L_76)
					{
						G_B23_0 = L_75;
						goto IL_024b_2;
					}
					G_B22_0 = L_75;
				}
				{
					G_B24_0 = ((IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1*)(NULL));
					G_B24_1 = G_B22_0;
					goto IL_0252_2;
				}

IL_024b_2:
				{
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_77 = V_6;
					NullCheck(L_77);
					IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* L_78 = L_77->___value;
					G_B24_0 = L_78;
					G_B24_1 = G_B23_0;
				}

IL_0252_2:
				{
					NullCheck(G_B24_1);
					G_B24_1->___value = G_B24_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B24_1->___value), (void*)G_B24_0);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1683>
					V_16 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1684>
					RuntimeObject* L_79 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_79);
					int32_t L_80;
					L_80 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_79, 1);
					V_17 = L_80;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1686>
					int32_t L_81 = V_17;
					V_18 = (bool)((((int32_t)L_81) == ((int32_t)((int32_t)46)))? 1 : 0);
					bool L_82 = V_18;
					if (!L_82)
					{
						goto IL_0279_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1688>
					V_16 = 1;
				}

IL_0279_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1690>
					int32_t L_83 = V_16;
					V_20 = L_83;
					int32_t L_84 = V_20;
					V_19 = L_84;
					int32_t L_85 = V_19;
					if ((((int32_t)L_85) == ((int32_t)1)))
					{
						goto IL_0288_2;
					}
				}
				{
					goto IL_02f3_2;
				}

IL_0288_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1695>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_86 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_arguments_in_primaryExpression856;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_86, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1696>
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_87;
					L_87 = NCalcParser_arguments_m8382A07E7C283B57AF2D3DECF15F56C6B7708A7C(__this, NULL);
					V_7 = L_87;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1697>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_88 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_89 = L_88;
					NullCheck(L_89);
					int32_t L_90 = L_89->___followingStackPointer;
					NullCheck(L_89);
					L_89->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_90, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1699>
					RuntimeObject* L_91 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_92 = V_1;
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_93 = V_7;
					NullCheck(L_93);
					RuntimeObject* L_94;
					L_94 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_93);
					NullCheck(L_91);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_91, L_92, L_94);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1700>
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_95 = V_0;
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_96 = V_6;
					if (L_96)
					{
						G_B30_0 = L_95;
						goto IL_02cc_2;
					}
					G_B29_0 = L_95;
				}
				{
					G_B31_0 = ((IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1*)(NULL));
					G_B31_1 = G_B29_0;
					goto IL_02d3_2;
				}

IL_02cc_2:
				{
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_97 = V_6;
					NullCheck(L_97);
					IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* L_98 = L_97->___value;
					G_B31_0 = L_98;
					G_B31_1 = G_B30_0;
				}

IL_02d3_2:
				{
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_99 = V_7;
					if (L_99)
					{
						G_B33_0 = G_B31_0;
						G_B33_1 = G_B31_1;
						goto IL_02da_2;
					}
					G_B32_0 = G_B31_0;
					G_B32_1 = G_B31_1;
				}
				{
					G_B34_0 = ((List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF*)(NULL));
					G_B34_1 = G_B32_0;
					G_B34_2 = G_B32_1;
					goto IL_02e1_2;
				}

IL_02da_2:
				{
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_100 = V_7;
					NullCheck(L_100);
					List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* L_101 = L_100->___value;
					G_B34_0 = L_101;
					G_B34_1 = G_B33_0;
					G_B34_2 = G_B33_1;
				}

IL_02e1_2:
				{
					NullCheck(G_B34_0);
					LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* L_102;
					L_102 = List_1_ToArray_m3991F6AFAC337479BBE03A1131E92A90A93EB572(G_B34_0, List_1_ToArray_m3991F6AFAC337479BBE03A1131E92A90A93EB572_RuntimeMethod_var);
					FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* L_103 = (FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD*)il2cpp_codegen_object_new(FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD_il2cpp_TypeInfo_var);
					FunctionExpression__ctor_m34989F1EE71A2A0D4ECD1FC2704A70E4FB460F2A(L_103, G_B34_1, L_102, NULL);
					NullCheck(G_B34_2);
					G_B34_2->___value = L_103;
					Il2CppCodeGenWriteBarrier((void**)(&G_B34_2->___value), (void*)L_103);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1702>
					goto IL_02f3_2;
				}

IL_02f3_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1705>
					goto IL_02f6_2;
				}

IL_02f6_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1707>
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_104 = V_0;
					RuntimeObject* L_105 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_105);
					RuntimeObject* L_106;
					L_106 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_105, (-1));
					NullCheck(L_104);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_104, L_106);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1709>
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_107 = V_0;
					RuntimeObject* L_108 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_109 = V_1;
					NullCheck(L_108);
					RuntimeObject* L_110;
					L_110 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_108, L_109);
					NullCheck(L_107);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_107, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_110, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1710>
					RuntimeObject* L_111 = __this->___adaptor;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_112 = V_0;
					NullCheck(L_112);
					RuntimeObject* L_113;
					L_113 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_112);
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_114 = V_0;
					NullCheck(L_114);
					RuntimeObject* L_115;
					L_115 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_114);
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_116 = V_0;
					NullCheck(L_116);
					RuntimeObject* L_117;
					L_117 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_116);
					NullCheck(L_111);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_111, L_113, ((RuntimeObject*)Castclass((RuntimeObject*)L_115, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_117, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_03a0_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_034c_1;
				}
				throw e;
			}

CATCH_034c_1:
			{
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_118 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1712>
				V_21 = L_118;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1714>
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_119 = V_21;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10, __this, L_119);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1715>
				RuntimeObject* L_120 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_121 = V_21;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16, __this, L_120, L_121);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1717>
				primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_122 = V_0;
				RuntimeObject* L_123 = __this->___adaptor;
				RuntimeObject* L_124 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_125 = V_0;
				NullCheck(L_125);
				RuntimeObject* L_126;
				L_126 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_125);
				RuntimeObject* L_127 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				NullCheck(L_127);
				RuntimeObject* L_128;
				L_128 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_127, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_129 = V_21;
				NullCheck(L_123);
				RuntimeObject* L_130;
				L_130 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_123, L_124, ((RuntimeObject*)Castclass((RuntimeObject*)L_126, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_128, L_129);
				NullCheck(L_122);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_122, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_130, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_03a0_1;
			}

IL_03a0_1:
			{
				goto IL_03a5;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03a5:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1720>
		primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_131 = V_0;
		V_22 = L_131;
		goto IL_03aa;
	}

IL_03aa:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1721>
		primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_132 = V_22;
		return L_132;
	}
}
// Method Definition Index: 82129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* NCalcParser_value_m9F984EDA6B75DB65D007A1F0EE951DCDBD60F870 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_8 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_9 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_10 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_11 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_12 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_13 = NULL;
	int32_t V_14 = 0;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_15 = NULL;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_20 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* V_21 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B15_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B14_0 = NULL;
	String_t* G_B16_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B16_1 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B19_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B18_0 = NULL;
	String_t* G_B20_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B20_1 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B24_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B23_0 = NULL;
	String_t* G_B25_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B25_1 = NULL;
	NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* G_B28_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B28_1 = NULL;
	NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* G_B27_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B27_1 = NULL;
	String_t* G_B29_0 = NULL;
	NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* G_B29_1 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B29_2 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B32_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B31_0 = NULL;
	String_t* G_B33_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B33_1 = NULL;
	int32_t G_B35_0 = 0;
	String_t* G_B35_1 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B35_2 = NULL;
	int32_t G_B34_0 = 0;
	String_t* G_B34_1 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B34_2 = NULL;
	String_t* G_B36_0 = NULL;
	int32_t G_B36_1 = 0;
	String_t* G_B36_2 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B36_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1727>
		value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_0 = (value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA*)il2cpp_codegen_object_new(value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA_il2cpp_TypeInfo_var);
		value_return__ctor_m1D48771759774D00FCCB206334475E57EB8C2A8B(L_0, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1728>
		value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5, L_1, L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1730>
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1732>
		V_2 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1733>
		V_3 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1734>
		V_4 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1735>
		V_5 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1736>
		V_6 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1737>
		V_7 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1739>
		V_8 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1740>
		V_9 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1741>
		V_10 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1742>
		V_11 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1743>
		V_12 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1744>
		V_13 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_045f:
			{
				return;
			}
		});
		try
		{
			try
			{
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1749>
					V_14 = 6;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1750>
					RuntimeObject* L_4 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_4);
					int32_t L_5;
					L_5 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_4, 1);
					V_17 = L_5;
					int32_t L_6 = V_17;
					V_16 = L_6;
					int32_t L_7 = V_16;
					switch (((int32_t)il2cpp_codegen_subtract(L_7, 4)))
					{
						case 0:
						{
							goto IL_0077_2;
						}
						case 1:
						{
							goto IL_007e_2;
						}
						case 2:
						{
							goto IL_0085_2;
						}
						case 3:
						{
							goto IL_008c_2;
						}
						case 4:
						{
							goto IL_0093_2;
						}
						case 5:
						{
							goto IL_009a_2;
						}
					}
				}
				{
					goto IL_00a1_2;
				}

IL_0077_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1754>
					V_14 = 1;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1756>
					goto IL_00b9_2;
				}

IL_007e_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1759>
					V_14 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1761>
					goto IL_00b9_2;
				}

IL_0085_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1764>
					V_14 = 3;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1766>
					goto IL_00b9_2;
				}

IL_008c_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1769>
					V_14 = 4;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1771>
					goto IL_00b9_2;
				}

IL_0093_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1774>
					V_14 = 5;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1776>
					goto IL_00b9_2;
				}

IL_009a_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1779>
					V_14 = 6;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1781>
					goto IL_00b9_2;
				}

IL_00a1_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1783>
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1784>
					RuntimeObject* L_8 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_9 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
					NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), ((int32_t)20), 0, L_8, NULL);
					V_15 = L_9;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1786>
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_10 = V_15;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_value_m9F984EDA6B75DB65D007A1F0EE951DCDBD60F870_RuntimeMethod_var)));
				}

IL_00b9_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1789>
					int32_t L_11 = V_14;
					V_19 = L_11;
					int32_t L_12 = V_19;
					V_18 = L_12;
					int32_t L_13 = V_18;
					switch (((int32_t)il2cpp_codegen_subtract(L_13, 1)))
					{
						case 0:
						{
							goto IL_00e7_2;
						}
						case 1:
						{
							goto IL_017b_2;
						}
						case 2:
						{
							goto IL_01f8_2;
						}
						case 3:
						{
							goto IL_026b_2;
						}
						case 4:
						{
							goto IL_02f8_2;
						}
						case 5:
						{
							goto IL_0355_2;
						}
					}
				}
				{
					goto IL_03b3_2;
				}

IL_00e7_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1794>
					RuntimeObject* L_14 = __this->___adaptor;
					NullCheck(L_14);
					RuntimeObject* L_15;
					L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_14);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_15, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1796>
					RuntimeObject* L_16 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_17 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_INTEGER_in_value876;
					RuntimeObject* L_18;
					L_18 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_16, 4, L_17);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_18, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1797>
					RuntimeObject* L_19 = __this->___adaptor;
					RuntimeObject* L_20 = V_2;
					NullCheck(L_19);
					RuntimeObject* L_21;
					L_21 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_19, L_20);
					V_8 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_21, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1798>
					RuntimeObject* L_22 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_23 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_24 = V_8;
					NullCheck(L_22);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_22, L_23, L_24);
				}
				try
				{
					{
						//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1802>
						value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_25 = V_0;
						RuntimeObject* L_26 = V_2;
						if (L_26)
						{
							G_B15_0 = L_25;
							goto IL_013b_3;
						}
						G_B14_0 = L_25;
					}
					{
						G_B16_0 = ((String_t*)(NULL));
						G_B16_1 = G_B14_0;
						goto IL_0141_3;
					}

IL_013b_3:
					{
						RuntimeObject* L_27 = V_2;
						NullCheck(L_27);
						String_t* L_28;
						L_28 = InterfaceFuncInvoker0< String_t* >::Invoke(10, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_27);
						G_B16_0 = L_28;
						G_B16_1 = G_B15_0;
					}

IL_0141_3:
					{
						int32_t L_29;
						L_29 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(G_B16_0, NULL);
						ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_30 = (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)il2cpp_codegen_object_new(ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var);
						ValueExpression__ctor_m7E0753DE1AD2DA756C691B84700449E413F7663A(L_30, L_29, NULL);
						NullCheck(G_B16_1);
						G_B16_1->___value = L_30;
						Il2CppCodeGenWriteBarrier((void**)(&G_B16_1->___value), (void*)L_30);
						goto IL_0175_2;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_0153_2;
					}
					throw e;
				}

CATCH_0153_2:
				{
					{
						OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_31 = ((OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)IL2CPP_GET_ACTIVE_EXCEPTION(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*));;
						//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1804>
						//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1806>
						value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_32 = V_0;
						RuntimeObject* L_33 = V_2;
						if (L_33)
						{
							G_B19_0 = L_32;
							goto IL_015c_2;
						}
						G_B18_0 = L_32;
					}
					{
						G_B20_0 = ((String_t*)(NULL));
						G_B20_1 = G_B18_0;
						goto IL_0162_2;
					}

IL_015c_2:
					{
						RuntimeObject* L_34 = V_2;
						NullCheck(L_34);
						String_t* L_35;
						L_35 = InterfaceFuncInvoker0< String_t* >::Invoke(10, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), L_34);
						G_B20_0 = L_35;
						G_B20_1 = G_B19_0;
					}

IL_0162_2:
					{
						int64_t L_36;
						L_36 = Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6(G_B20_0, NULL);
						ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_37 = (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var)));
						ValueExpression__ctor_mE330F904E914D7B454BB195668A6D89C5B5F13DD(L_37, ((float)L_36), NULL);
						NullCheck(G_B20_1);
						G_B20_1->___value = L_37;
						Il2CppCodeGenWriteBarrier((void**)(&G_B20_1->___value), (void*)L_37);
						IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
						goto IL_0175_2;
					}
				}

IL_0175_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1809>
					goto IL_03b3_2;
				}

IL_017b_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1813>
					RuntimeObject* L_38 = __this->___adaptor;
					NullCheck(L_38);
					RuntimeObject* L_39;
					L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_38);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_39, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1815>
					RuntimeObject* L_40 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_41 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_FLOAT_in_value884;
					RuntimeObject* L_42;
					L_42 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_40, 5, L_41);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_42, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1816>
					RuntimeObject* L_43 = __this->___adaptor;
					RuntimeObject* L_44 = V_3;
					NullCheck(L_43);
					RuntimeObject* L_45;
					L_45 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_43, L_44);
					V_9 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_45, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1817>
					RuntimeObject* L_46 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_47 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_48 = V_9;
					NullCheck(L_46);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_46, L_47, L_48);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1819>
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_49 = V_0;
					RuntimeObject* L_50 = V_3;
					if (L_50)
					{
						G_B24_0 = L_49;
						goto IL_01ce_2;
					}
					G_B23_0 = L_49;
				}
				{
					G_B25_0 = ((String_t*)(NULL));
					G_B25_1 = G_B23_0;
					goto IL_01d4_2;
				}

IL_01ce_2:
				{
					RuntimeObject* L_51 = V_3;
					NullCheck(L_51);
					String_t* L_52;
					L_52 = InterfaceFuncInvoker0< String_t* >::Invoke(10, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_51);
					G_B25_0 = L_52;
					G_B25_1 = G_B24_0;
				}

IL_01d4_2:
				{
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_53 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___numberFormatInfo;
					double L_54;
					L_54 = Double_Parse_mA6BD954627BB3B2317D7BA7D4B29DCA53C660058(G_B25_0, ((int32_t)167), L_53, NULL);
					double L_55 = L_54;
					RuntimeObject* L_56 = Box(il2cpp_defaults.double_class, &L_55);
					ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_57 = (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)il2cpp_codegen_object_new(ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var);
					ValueExpression__ctor_mACD41125FFF375D20F709F1B2CB4B0002A8D2C97(L_57, L_56, NULL);
					NullCheck(G_B25_1);
					G_B25_1->___value = L_57;
					Il2CppCodeGenWriteBarrier((void**)(&G_B25_1->___value), (void*)L_57);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1821>
					goto IL_03b3_2;
				}

IL_01f8_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1825>
					RuntimeObject* L_58 = __this->___adaptor;
					NullCheck(L_58);
					RuntimeObject* L_59;
					L_59 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_58);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_59, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1827>
					RuntimeObject* L_60 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_61 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_STRING_in_value892;
					RuntimeObject* L_62;
					L_62 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_60, 6, L_61);
					V_4 = ((RuntimeObject*)Castclass((RuntimeObject*)L_62, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1828>
					RuntimeObject* L_63 = __this->___adaptor;
					RuntimeObject* L_64 = V_4;
					NullCheck(L_63);
					RuntimeObject* L_65;
					L_65 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_63, L_64);
					V_10 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_65, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1829>
					RuntimeObject* L_66 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_67 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_68 = V_10;
					NullCheck(L_66);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_66, L_67, L_68);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1831>
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_69 = V_0;
					RuntimeObject* L_70 = V_4;
					if (L_70)
					{
						G_B28_0 = __this;
						G_B28_1 = L_69;
						goto IL_024f_2;
					}
					G_B27_0 = __this;
					G_B27_1 = L_69;
				}
				{
					G_B29_0 = ((String_t*)(NULL));
					G_B29_1 = G_B27_0;
					G_B29_2 = G_B27_1;
					goto IL_0256_2;
				}

IL_024f_2:
				{
					RuntimeObject* L_71 = V_4;
					NullCheck(L_71);
					String_t* L_72;
					L_72 = InterfaceFuncInvoker0< String_t* >::Invoke(10, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_71);
					G_B29_0 = L_72;
					G_B29_1 = G_B28_0;
					G_B29_2 = G_B28_1;
				}

IL_0256_2:
				{
					NullCheck(G_B29_1);
					String_t* L_73;
					L_73 = NCalcParser_extractString_m73496B6994B86DAEB265F627BF23E76FB1B1E14F(G_B29_1, G_B29_0, NULL);
					ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_74 = (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)il2cpp_codegen_object_new(ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var);
					ValueExpression__ctor_m64932619474457A2EC86AAFB6803242EAF683C9F(L_74, L_73, NULL);
					NullCheck(G_B29_2);
					G_B29_2->___value = L_74;
					Il2CppCodeGenWriteBarrier((void**)(&G_B29_2->___value), (void*)L_74);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1833>
					goto IL_03b3_2;
				}

IL_026b_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1837>
					RuntimeObject* L_75 = __this->___adaptor;
					NullCheck(L_75);
					RuntimeObject* L_76;
					L_76 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_75);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_76, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1839>
					RuntimeObject* L_77 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_78 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_DATETIME_in_value901;
					RuntimeObject* L_79;
					L_79 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_77, 7, L_78);
					V_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_79, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1840>
					RuntimeObject* L_80 = __this->___adaptor;
					RuntimeObject* L_81 = V_5;
					NullCheck(L_80);
					RuntimeObject* L_82;
					L_82 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_80, L_81);
					V_11 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_82, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1841>
					RuntimeObject* L_83 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_84 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_85 = V_11;
					NullCheck(L_83);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_83, L_84, L_85);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1843>
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_86 = V_0;
					RuntimeObject* L_87 = V_5;
					if (L_87)
					{
						G_B32_0 = L_86;
						goto IL_02c1_2;
					}
					G_B31_0 = L_86;
				}
				{
					G_B33_0 = ((String_t*)(NULL));
					G_B33_1 = G_B31_0;
					goto IL_02c8_2;
				}

IL_02c1_2:
				{
					RuntimeObject* L_88 = V_5;
					NullCheck(L_88);
					String_t* L_89;
					L_89 = InterfaceFuncInvoker0< String_t* >::Invoke(10, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_88);
					G_B33_0 = L_89;
					G_B33_1 = G_B32_0;
				}

IL_02c8_2:
				{
					RuntimeObject* L_90 = V_5;
					if (L_90)
					{
						G_B35_0 = 1;
						G_B35_1 = G_B33_0;
						G_B35_2 = G_B33_1;
						goto IL_02d0_2;
					}
					G_B34_0 = 1;
					G_B34_1 = G_B33_0;
					G_B34_2 = G_B33_1;
				}
				{
					G_B36_0 = ((String_t*)(NULL));
					G_B36_1 = G_B34_0;
					G_B36_2 = G_B34_1;
					G_B36_3 = G_B34_2;
					goto IL_02d7_2;
				}

IL_02d0_2:
				{
					RuntimeObject* L_91 = V_5;
					NullCheck(L_91);
					String_t* L_92;
					L_92 = InterfaceFuncInvoker0< String_t* >::Invoke(10, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_91);
					G_B36_0 = L_92;
					G_B36_1 = G_B35_0;
					G_B36_2 = G_B35_1;
					G_B36_3 = G_B35_2;
				}

IL_02d7_2:
				{
					NullCheck(G_B36_0);
					int32_t L_93;
					L_93 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(G_B36_0, NULL);
					NullCheck(G_B36_2);
					String_t* L_94;
					L_94 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(G_B36_2, G_B36_1, ((int32_t)il2cpp_codegen_subtract(L_93, 2)), NULL);
					il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
					DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_95;
					L_95 = DateTime_Parse_m2DE2BF8FC3E6A6FB695ACE7A2D39A812D1D806DB(L_94, NULL);
					ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_96 = (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)il2cpp_codegen_object_new(ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var);
					ValueExpression__ctor_m5FA864D2F1EC21C1C0788F61CF5B2EB0A203D223(L_96, L_95, NULL);
					NullCheck(G_B36_3);
					G_B36_3->___value = L_96;
					Il2CppCodeGenWriteBarrier((void**)(&G_B36_3->___value), (void*)L_96);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1845>
					goto IL_03b3_2;
				}

IL_02f8_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1849>
					RuntimeObject* L_97 = __this->___adaptor;
					NullCheck(L_97);
					RuntimeObject* L_98;
					L_98 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_97);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_98, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1851>
					RuntimeObject* L_99 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_100 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_TRUE_in_value908;
					RuntimeObject* L_101;
					L_101 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_99, 8, L_100);
					V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_101, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1852>
					RuntimeObject* L_102 = __this->___adaptor;
					RuntimeObject* L_103 = V_6;
					NullCheck(L_102);
					RuntimeObject* L_104;
					L_104 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_102, L_103);
					V_12 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_104, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1853>
					RuntimeObject* L_105 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_106 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_107 = V_12;
					NullCheck(L_105);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_105, L_106, L_107);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1855>
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_108 = V_0;
					ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_109 = (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)il2cpp_codegen_object_new(ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var);
					ValueExpression__ctor_m3D94A47FFF8510B37262AD8CE50E6982153BA06A(L_109, (bool)1, NULL);
					NullCheck(L_108);
					L_108->___value = L_109;
					Il2CppCodeGenWriteBarrier((void**)(&L_108->___value), (void*)L_109);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1857>
					goto IL_03b3_2;
				}

IL_0355_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1861>
					RuntimeObject* L_110 = __this->___adaptor;
					NullCheck(L_110);
					RuntimeObject* L_111;
					L_111 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_110);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_111, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1863>
					RuntimeObject* L_112 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_113 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_FALSE_in_value916;
					RuntimeObject* L_114;
					L_114 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_112, ((int32_t)9), L_113);
					V_7 = ((RuntimeObject*)Castclass((RuntimeObject*)L_114, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1864>
					RuntimeObject* L_115 = __this->___adaptor;
					RuntimeObject* L_116 = V_7;
					NullCheck(L_115);
					RuntimeObject* L_117;
					L_117 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_115, L_116);
					V_13 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_117, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1865>
					RuntimeObject* L_118 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_119 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_120 = V_13;
					NullCheck(L_118);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_118, L_119, L_120);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1867>
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_121 = V_0;
					ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_122 = (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)il2cpp_codegen_object_new(ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var);
					ValueExpression__ctor_m3D94A47FFF8510B37262AD8CE50E6982153BA06A(L_122, (bool)0, NULL);
					NullCheck(L_121);
					L_121->___value = L_122;
					Il2CppCodeGenWriteBarrier((void**)(&L_121->___value), (void*)L_122);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1869>
					goto IL_03b3_2;
				}

IL_03b3_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1871>
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_123 = V_0;
					RuntimeObject* L_124 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_124);
					RuntimeObject* L_125;
					L_125 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_124, (-1));
					NullCheck(L_123);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_123, L_125);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1873>
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_126 = V_0;
					RuntimeObject* L_127 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_128 = V_1;
					NullCheck(L_127);
					RuntimeObject* L_129;
					L_129 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_127, L_128);
					NullCheck(L_126);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_126, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_129, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1874>
					RuntimeObject* L_130 = __this->___adaptor;
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_131 = V_0;
					NullCheck(L_131);
					RuntimeObject* L_132;
					L_132 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_131);
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_133 = V_0;
					NullCheck(L_133);
					RuntimeObject* L_134;
					L_134 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_133);
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_135 = V_0;
					NullCheck(L_135);
					RuntimeObject* L_136;
					L_136 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_135);
					NullCheck(L_130);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_130, L_132, ((RuntimeObject*)Castclass((RuntimeObject*)L_134, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_136, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_045d_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0409_1;
				}
				throw e;
			}

CATCH_0409_1:
			{
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_137 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1876>
				V_20 = L_137;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1878>
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_138 = V_20;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10, __this, L_138);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1879>
				RuntimeObject* L_139 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_140 = V_20;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16, __this, L_139, L_140);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1881>
				value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_141 = V_0;
				RuntimeObject* L_142 = __this->___adaptor;
				RuntimeObject* L_143 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_144 = V_0;
				NullCheck(L_144);
				RuntimeObject* L_145;
				L_145 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_144);
				RuntimeObject* L_146 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				NullCheck(L_146);
				RuntimeObject* L_147;
				L_147 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_146, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_148 = V_20;
				NullCheck(L_142);
				RuntimeObject* L_149;
				L_149 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_142, L_143, ((RuntimeObject*)Castclass((RuntimeObject*)L_145, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_147, L_148);
				NullCheck(L_141);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_141, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_149, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_045d_1;
			}

IL_045d_1:
			{
				goto IL_0462;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0462:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1884>
		value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_150 = V_0;
		V_21 = L_150;
		goto IL_0467;
	}

IL_0467:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1885>
		value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_151 = V_21;
		return L_151;
	}
}
// Method Definition Index: 82130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* NCalcParser_identifier_m697374C0E2B7BAF6C5DF801678F4C78CB13F3F53 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_4 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_13 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* G_B12_0 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* G_B11_0 = NULL;
	String_t* G_B13_0 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* G_B13_1 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* G_B16_0 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* G_B15_0 = NULL;
	String_t* G_B17_0 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* G_B17_1 = NULL;
	int32_t G_B19_0 = 0;
	String_t* G_B19_1 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* G_B19_2 = NULL;
	int32_t G_B18_0 = 0;
	String_t* G_B18_1 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* G_B18_2 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	String_t* G_B20_2 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* G_B20_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1891>
		identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_0 = (identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D*)il2cpp_codegen_object_new(identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D_il2cpp_TypeInfo_var);
		identifier_return__ctor_m607079BF18B64935F5D65C179A1DD2EEBDD1DC64(L_0, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1892>
		identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5, L_1, L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1894>
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1896>
		V_2 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1897>
		V_3 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1899>
		V_4 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1900>
		V_5 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0226:
			{
				return;
			}
		});
		try
		{
			try
			{
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1905>
					V_6 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1906>
					RuntimeObject* L_4 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_4);
					int32_t L_5;
					L_5 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_4, 1);
					V_7 = L_5;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1908>
					int32_t L_6 = V_7;
					V_8 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)10)))? 1 : 0);
					bool L_7 = V_8;
					if (!L_7)
					{
						goto IL_004b_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1910>
					V_6 = 1;
					goto IL_0077_2;
				}

IL_004b_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1912>
					int32_t L_8 = V_7;
					V_9 = (bool)((((int32_t)L_8) == ((int32_t)((int32_t)11)))? 1 : 0);
					bool L_9 = V_9;
					if (!L_9)
					{
						goto IL_005e_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1914>
					V_6 = 2;
					goto IL_0077_2;
				}

IL_005e_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1918>
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1919>
					RuntimeObject* L_10 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_11 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
					NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), ((int32_t)21), 0, L_10, NULL);
					V_10 = L_11;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1921>
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_12 = V_10;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_identifier_m697374C0E2B7BAF6C5DF801678F4C78CB13F3F53_RuntimeMethod_var)));
				}

IL_0077_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1923>
					int32_t L_13 = V_6;
					V_12 = L_13;
					int32_t L_14 = V_12;
					V_11 = L_14;
					int32_t L_15 = V_11;
					if ((((int32_t)L_15) == ((int32_t)1)))
					{
						goto IL_0090_2;
					}
				}
				{
					goto IL_0086_2;
				}

IL_0086_2:
				{
					int32_t L_16 = V_11;
					if ((((int32_t)L_16) == ((int32_t)2)))
					{
						goto IL_00fa_2;
					}
				}
				{
					goto IL_017a_2;
				}

IL_0090_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1928>
					RuntimeObject* L_17 = __this->___adaptor;
					NullCheck(L_17);
					RuntimeObject* L_18;
					L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_17);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_18, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1930>
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_20 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_ID_in_identifier934;
					RuntimeObject* L_21;
					L_21 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_19, ((int32_t)10), L_20);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_21, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1931>
					RuntimeObject* L_22 = __this->___adaptor;
					RuntimeObject* L_23 = V_2;
					NullCheck(L_22);
					RuntimeObject* L_24;
					L_24 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_22, L_23);
					V_4 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_24, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1932>
					RuntimeObject* L_25 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_26 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_27 = V_4;
					NullCheck(L_25);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_25, L_26, L_27);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1934>
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_28 = V_0;
					RuntimeObject* L_29 = V_2;
					if (L_29)
					{
						G_B12_0 = L_28;
						goto IL_00e4_2;
					}
					G_B11_0 = L_28;
				}
				{
					G_B13_0 = ((String_t*)(NULL));
					G_B13_1 = G_B11_0;
					goto IL_00ea_2;
				}

IL_00e4_2:
				{
					RuntimeObject* L_30 = V_2;
					NullCheck(L_30);
					String_t* L_31;
					L_31 = InterfaceFuncInvoker0< String_t* >::Invoke(10, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_30);
					G_B13_0 = L_31;
					G_B13_1 = G_B12_0;
				}

IL_00ea_2:
				{
					IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* L_32 = (IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1*)il2cpp_codegen_object_new(IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1_il2cpp_TypeInfo_var);
					IdentifierExpression__ctor_mD7084F992382FC6882312FF559288E684E3F2196(L_32, G_B13_0, NULL);
					NullCheck(G_B13_1);
					G_B13_1->___value = L_32;
					Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___value), (void*)L_32);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1936>
					goto IL_017a_2;
				}

IL_00fa_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1940>
					RuntimeObject* L_33 = __this->___adaptor;
					NullCheck(L_33);
					RuntimeObject* L_34;
					L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_33);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_34, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1942>
					RuntimeObject* L_35 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_36 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_NAME_in_identifier942;
					RuntimeObject* L_37;
					L_37 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_35, ((int32_t)11), L_36);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_37, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1943>
					RuntimeObject* L_38 = __this->___adaptor;
					RuntimeObject* L_39 = V_3;
					NullCheck(L_38);
					RuntimeObject* L_40;
					L_40 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_38, L_39);
					V_5 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_40, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1944>
					RuntimeObject* L_41 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_42 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_43 = V_5;
					NullCheck(L_41);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_41, L_42, L_43);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1946>
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_44 = V_0;
					RuntimeObject* L_45 = V_3;
					if (L_45)
					{
						G_B16_0 = L_44;
						goto IL_014e_2;
					}
					G_B15_0 = L_44;
				}
				{
					G_B17_0 = ((String_t*)(NULL));
					G_B17_1 = G_B15_0;
					goto IL_0154_2;
				}

IL_014e_2:
				{
					RuntimeObject* L_46 = V_3;
					NullCheck(L_46);
					String_t* L_47;
					L_47 = InterfaceFuncInvoker0< String_t* >::Invoke(10, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_46);
					G_B17_0 = L_47;
					G_B17_1 = G_B16_0;
				}

IL_0154_2:
				{
					RuntimeObject* L_48 = V_3;
					if (L_48)
					{
						G_B19_0 = 1;
						G_B19_1 = G_B17_0;
						G_B19_2 = G_B17_1;
						goto IL_015b_2;
					}
					G_B18_0 = 1;
					G_B18_1 = G_B17_0;
					G_B18_2 = G_B17_1;
				}
				{
					G_B20_0 = ((String_t*)(NULL));
					G_B20_1 = G_B18_0;
					G_B20_2 = G_B18_1;
					G_B20_3 = G_B18_2;
					goto IL_0161_2;
				}

IL_015b_2:
				{
					RuntimeObject* L_49 = V_3;
					NullCheck(L_49);
					String_t* L_50;
					L_50 = InterfaceFuncInvoker0< String_t* >::Invoke(10, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_49);
					G_B20_0 = L_50;
					G_B20_1 = G_B19_0;
					G_B20_2 = G_B19_1;
					G_B20_3 = G_B19_2;
				}

IL_0161_2:
				{
					NullCheck(G_B20_0);
					int32_t L_51;
					L_51 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(G_B20_0, NULL);
					NullCheck(G_B20_2);
					String_t* L_52;
					L_52 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(G_B20_2, G_B20_1, ((int32_t)il2cpp_codegen_subtract(L_51, 2)), NULL);
					IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* L_53 = (IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1*)il2cpp_codegen_object_new(IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1_il2cpp_TypeInfo_var);
					IdentifierExpression__ctor_mD7084F992382FC6882312FF559288E684E3F2196(L_53, L_52, NULL);
					NullCheck(G_B20_3);
					G_B20_3->___value = L_53;
					Il2CppCodeGenWriteBarrier((void**)(&G_B20_3->___value), (void*)L_53);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1948>
					goto IL_017a_2;
				}

IL_017a_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1950>
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_54 = V_0;
					RuntimeObject* L_55 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_55);
					RuntimeObject* L_56;
					L_56 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_55, (-1));
					NullCheck(L_54);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_54, L_56);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1952>
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_57 = V_0;
					RuntimeObject* L_58 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_59 = V_1;
					NullCheck(L_58);
					RuntimeObject* L_60;
					L_60 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_58, L_59);
					NullCheck(L_57);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_57, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_60, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1953>
					RuntimeObject* L_61 = __this->___adaptor;
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_62 = V_0;
					NullCheck(L_62);
					RuntimeObject* L_63;
					L_63 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_62);
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_64 = V_0;
					NullCheck(L_64);
					RuntimeObject* L_65;
					L_65 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_64);
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_66 = V_0;
					NullCheck(L_66);
					RuntimeObject* L_67;
					L_67 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_66);
					NullCheck(L_61);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_61, L_63, ((RuntimeObject*)Castclass((RuntimeObject*)L_65, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_67, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0224_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_01d0_1;
				}
				throw e;
			}

CATCH_01d0_1:
			{
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_68 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1955>
				V_13 = L_68;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1957>
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_69 = V_13;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10, __this, L_69);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1958>
				RuntimeObject* L_70 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_71 = V_13;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16, __this, L_70, L_71);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1960>
				identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_72 = V_0;
				RuntimeObject* L_73 = __this->___adaptor;
				RuntimeObject* L_74 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_75 = V_0;
				NullCheck(L_75);
				RuntimeObject* L_76;
				L_76 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_75);
				RuntimeObject* L_77 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				NullCheck(L_77);
				RuntimeObject* L_78;
				L_78 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_77, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_79 = V_13;
				NullCheck(L_73);
				RuntimeObject* L_80;
				L_80 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_73, L_74, ((RuntimeObject*)Castclass((RuntimeObject*)L_76, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_78, L_79);
				NullCheck(L_72);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_72, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_80, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_0224_1;
			}

IL_0224_1:
			{
				goto IL_0229;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0229:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1963>
		identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_81 = V_0;
		V_14 = L_81;
		goto IL_022e;
	}

IL_022e:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1964>
		identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_82 = V_14;
		return L_82;
	}
}
// Method Definition Index: 82131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* NCalcParser_expressionList_m9714F81848953C3B58959B2E8FA232FC0856231C (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m954E487BCACC347B8820F48264C03739C2BA944F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB35E06D2B52402201915FCEF0BB0FC8012A2DE05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* V_3 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* V_4 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_5 = NULL;
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_13 = NULL;
	expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* G_B3_0 = NULL;
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* G_B4_1 = NULL;
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* G_B11_0 = NULL;
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* G_B10_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B12_0 = NULL;
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* G_B12_1 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1970>
		expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_0 = (expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C*)il2cpp_codegen_object_new(expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C_il2cpp_TypeInfo_var);
		expressionList_return__ctor_m2EA78AA8DAA3AC6FD1F1B998CA9BC362502D0FC7(L_0, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1971>
		expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5, L_1, L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1973>
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1975>
		V_2 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1976>
		V_3 = (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1978>
		V_4 = (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1980>
		V_5 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1982>
		List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* L_4 = (List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF*)il2cpp_codegen_object_new(List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF_il2cpp_TypeInfo_var);
		List_1__ctor_mB35E06D2B52402201915FCEF0BB0FC8012A2DE05(L_4, List_1__ctor_mB35E06D2B52402201915FCEF0BB0FC8012A2DE05_RuntimeMethod_var);
		V_6 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0214:
			{
				return;
			}
		});
		try
		{
			try
			{
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1989>
					RuntimeObject* L_5 = __this->___adaptor;
					NullCheck(L_5);
					RuntimeObject* L_6;
					L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_5);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_6, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1991>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_7 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_expressionList966;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_7, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1992>
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_8;
					L_8 = NCalcParser_logicalExpression_m331B36AA673889BE071688BEEBE490840BACF985(__this, NULL);
					V_3 = L_8;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1993>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_10 = L_9;
					NullCheck(L_10);
					int32_t L_11 = L_10->___followingStackPointer;
					NullCheck(L_10);
					L_10->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1995>
					RuntimeObject* L_12 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_13 = V_1;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_14 = V_3;
					NullCheck(L_14);
					RuntimeObject* L_15;
					L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_14);
					NullCheck(L_12);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_12, L_13, L_15);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:1996>
					List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* L_16 = V_6;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_17 = V_3;
					if (L_17)
					{
						G_B3_0 = L_16;
						goto IL_0081_2;
					}
					G_B2_0 = L_16;
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_0087_2;
				}

IL_0081_2:
				{
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_18 = V_3;
					NullCheck(L_18);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_19 = L_18->___value;
					G_B4_0 = L_19;
					G_B4_1 = G_B3_0;
				}

IL_0087_2:
				{
					NullCheck(G_B4_1);
					List_1_Add_m954E487BCACC347B8820F48264C03739C2BA944F_inline(G_B4_1, G_B4_0, List_1_Add_m954E487BCACC347B8820F48264C03739C2BA944F_RuntimeMethod_var);
				}

IL_008d_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2000>
					V_7 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2001>
					RuntimeObject* L_20 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_20);
					int32_t L_21;
					L_21 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_20, 1);
					V_8 = L_21;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2003>
					int32_t L_22 = V_8;
					V_9 = (bool)((((int32_t)L_22) == ((int32_t)((int32_t)48)))? 1 : 0);
					bool L_23 = V_9;
					if (!L_23)
					{
						goto IL_00b0_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2005>
					V_7 = 1;
				}

IL_00b0_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2008>
					int32_t L_24 = V_7;
					V_11 = L_24;
					int32_t L_25 = V_11;
					V_10 = L_25;
					int32_t L_26 = V_10;
					if ((((int32_t)L_26) == ((int32_t)1)))
					{
						goto IL_00c2_2;
					}
				}
				{
					goto IL_0152_2;
				}

IL_00c2_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2013>
					RuntimeObject* L_27 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_28 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_48_in_expressionList973;
					RuntimeObject* L_29;
					L_29 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_27, ((int32_t)48), L_28);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_29, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2014>
					RuntimeObject* L_30 = __this->___adaptor;
					RuntimeObject* L_31 = V_2;
					NullCheck(L_30);
					RuntimeObject* L_32;
					L_32 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_30, L_31);
					V_5 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_32, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2015>
					RuntimeObject* L_33 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_34 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_35 = V_5;
					NullCheck(L_33);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_33, L_34, L_35);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2017>
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_36 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_expressionList977;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_36, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2018>
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_37;
					L_37 = NCalcParser_logicalExpression_m331B36AA673889BE071688BEEBE490840BACF985(__this, NULL);
					V_4 = L_37;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2019>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_38 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_39 = L_38;
					NullCheck(L_39);
					int32_t L_40 = L_39->___followingStackPointer;
					NullCheck(L_39);
					L_39->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2021>
					RuntimeObject* L_41 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_42 = V_1;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_43 = V_4;
					NullCheck(L_43);
					RuntimeObject* L_44;
					L_44 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_43);
					NullCheck(L_41);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_41, L_42, L_44);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2022>
					List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* L_45 = V_6;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_46 = V_4;
					if (L_46)
					{
						G_B11_0 = L_45;
						goto IL_0142_2;
					}
					G_B10_0 = L_45;
				}
				{
					G_B12_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B12_1 = G_B10_0;
					goto IL_0149_2;
				}

IL_0142_2:
				{
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_47 = V_4;
					NullCheck(L_47);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_48 = L_47->___value;
					G_B12_0 = L_48;
					G_B12_1 = G_B11_0;
				}

IL_0149_2:
				{
					NullCheck(G_B12_1);
					List_1_Add_m954E487BCACC347B8820F48264C03739C2BA944F_inline(G_B12_1, G_B12_0, List_1_Add_m954E487BCACC347B8820F48264C03739C2BA944F_RuntimeMethod_var);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2024>
					goto IL_0154_2;
				}

IL_0152_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2027>
					goto IL_015d_2;
				}

IL_0154_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2030>
					V_12 = (bool)1;
					goto IL_008d_2;
				}

IL_015d_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2035>
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_49 = V_0;
					List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* L_50 = V_6;
					NullCheck(L_49);
					L_49->___value = L_50;
					Il2CppCodeGenWriteBarrier((void**)(&L_49->___value), (void*)L_50);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2038>
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_51 = V_0;
					RuntimeObject* L_52 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_52);
					RuntimeObject* L_53;
					L_53 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_52, (-1));
					NullCheck(L_51);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_51, L_53);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2040>
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_54 = V_0;
					RuntimeObject* L_55 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_56 = V_1;
					NullCheck(L_55);
					RuntimeObject* L_57;
					L_57 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_55, L_56);
					NullCheck(L_54);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_54, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_57, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2041>
					RuntimeObject* L_58 = __this->___adaptor;
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_59 = V_0;
					NullCheck(L_59);
					RuntimeObject* L_60;
					L_60 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_59);
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_61 = V_0;
					NullCheck(L_61);
					RuntimeObject* L_62;
					L_62 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_61);
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_63 = V_0;
					NullCheck(L_63);
					RuntimeObject* L_64;
					L_64 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_63);
					NullCheck(L_58);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_58, L_60, ((RuntimeObject*)Castclass((RuntimeObject*)L_62, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_64, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0212_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_01be_1;
				}
				throw e;
			}

CATCH_01be_1:
			{
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_65 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2043>
				V_13 = L_65;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2045>
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_66 = V_13;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10, __this, L_66);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2046>
				RuntimeObject* L_67 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_68 = V_13;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16, __this, L_67, L_68);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2048>
				expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_69 = V_0;
				RuntimeObject* L_70 = __this->___adaptor;
				RuntimeObject* L_71 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_72 = V_0;
				NullCheck(L_72);
				RuntimeObject* L_73;
				L_73 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_72);
				RuntimeObject* L_74 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				NullCheck(L_74);
				RuntimeObject* L_75;
				L_75 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_74, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_76 = V_13;
				NullCheck(L_70);
				RuntimeObject* L_77;
				L_77 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_70, L_71, ((RuntimeObject*)Castclass((RuntimeObject*)L_73, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_75, L_76);
				NullCheck(L_69);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_69, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_77, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_0212_1;
			}

IL_0212_1:
			{
				goto IL_0217;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0217:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2051>
		expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_78 = V_0;
		V_14 = L_78;
		goto IL_021c;
	}

IL_021c:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2052>
		expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_79 = V_14;
		return L_79;
	}
}
// Method Definition Index: 82132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* NCalcParser_arguments_m8382A07E7C283B57AF2D3DECF15F56C6B7708A7C (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB35E06D2B52402201915FCEF0BB0FC8012A2DE05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* V_4 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_5 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_12 = NULL;
	arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* G_B15_0 = NULL;
	arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* G_B14_0 = NULL;
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* G_B16_0 = NULL;
	arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* G_B16_1 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2058>
		arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_0 = (arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B*)il2cpp_codegen_object_new(arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B_il2cpp_TypeInfo_var);
		arguments_return__ctor_mD57A323BD2933750E6A65521119CA6EE4B0F8384(L_0, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2059>
		arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5, L_1, L_3);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2061>
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2063>
		V_2 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2064>
		V_3 = (RuntimeObject*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2065>
		V_4 = (expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2067>
		V_5 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2068>
		V_6 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2070>
		arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_4 = V_0;
		List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* L_5 = (List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF*)il2cpp_codegen_object_new(List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF_il2cpp_TypeInfo_var);
		List_1__ctor_mB35E06D2B52402201915FCEF0BB0FC8012A2DE05(L_5, List_1__ctor_mB35E06D2B52402201915FCEF0BB0FC8012A2DE05_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___value = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___value), (void*)L_5);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_020e:
			{
				return;
			}
		});
		try
		{
			try
			{
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2077>
					RuntimeObject* L_6 = __this->___adaptor;
					NullCheck(L_6);
					RuntimeObject* L_7;
					L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_6);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_7, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2079>
					RuntimeObject* L_8 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_9 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_46_in_arguments1006;
					RuntimeObject* L_10;
					L_10 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_8, ((int32_t)46), L_9);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2080>
					RuntimeObject* L_11 = __this->___adaptor;
					RuntimeObject* L_12 = V_2;
					NullCheck(L_11);
					RuntimeObject* L_13;
					L_13 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12);
					V_5 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_13, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2081>
					RuntimeObject* L_14 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_15 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_16 = V_5;
					NullCheck(L_14);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_14, L_15, L_16);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2084>
					V_7 = 2;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2085>
					RuntimeObject* L_17 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_17);
					int32_t L_18;
					L_18 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_17, 1);
					V_8 = L_18;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2087>
					int32_t L_19 = V_8;
					if ((((int32_t)L_19) < ((int32_t)4)))
					{
						goto IL_009e_2;
					}
				}
				{
					int32_t L_20 = V_8;
					if ((((int32_t)L_20) <= ((int32_t)((int32_t)11))))
					{
						goto IL_00b8_2;
					}
				}

IL_009e_2:
				{
					int32_t L_21 = V_8;
					if ((((int32_t)L_21) == ((int32_t)((int32_t)39))))
					{
						goto IL_00b8_2;
					}
				}
				{
					int32_t L_22 = V_8;
					if ((((int32_t)L_22) < ((int32_t)((int32_t)43))))
					{
						goto IL_00b5_2;
					}
				}
				{
					int32_t L_23 = V_8;
					G_B7_0 = ((((int32_t)((((int32_t)L_23) > ((int32_t)((int32_t)46)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00b6_2;
				}

IL_00b5_2:
				{
					G_B7_0 = 0;
				}

IL_00b6_2:
				{
					G_B9_0 = G_B7_0;
					goto IL_00b9_2;
				}

IL_00b8_2:
				{
					G_B9_0 = 1;
				}

IL_00b9_2:
				{
					V_9 = (bool)G_B9_0;
					bool L_24 = V_9;
					if (!L_24)
					{
						goto IL_00c4_2;
					}
				}
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2089>
					V_7 = 1;
				}

IL_00c4_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2091>
					int32_t L_25 = V_7;
					V_11 = L_25;
					int32_t L_26 = V_11;
					V_10 = L_26;
					int32_t L_27 = V_10;
					if ((((int32_t)L_27) == ((int32_t)1)))
					{
						goto IL_00d3_2;
					}
				}
				{
					goto IL_0126_2;
				}

IL_00d3_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2096>
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_28 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_expressionList_in_arguments1010;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_28, NULL);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2097>
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_29;
					L_29 = NCalcParser_expressionList_m9714F81848953C3B58959B2E8FA232FC0856231C(__this, NULL);
					V_4 = L_29;
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2098>
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_30 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_31 = L_30;
					NullCheck(L_31);
					int32_t L_32 = L_31->___followingStackPointer;
					NullCheck(L_31);
					L_31->___followingStackPointer = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2100>
					RuntimeObject* L_33 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_34 = V_1;
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_35 = V_4;
					NullCheck(L_35);
					RuntimeObject* L_36;
					L_36 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_35);
					NullCheck(L_33);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_33, L_34, L_36);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2101>
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_37 = V_0;
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_38 = V_4;
					if (L_38)
					{
						G_B15_0 = L_37;
						goto IL_0117_2;
					}
					G_B14_0 = L_37;
				}
				{
					G_B16_0 = ((List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF*)(NULL));
					G_B16_1 = G_B14_0;
					goto IL_011e_2;
				}

IL_0117_2:
				{
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_39 = V_4;
					NullCheck(L_39);
					List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* L_40 = L_39->___value;
					G_B16_0 = L_40;
					G_B16_1 = G_B15_0;
				}

IL_011e_2:
				{
					NullCheck(G_B16_1);
					G_B16_1->___value = G_B16_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B16_1->___value), (void*)G_B16_0);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2103>
					goto IL_0126_2;
				}

IL_0126_2:
				{
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2106>
					RuntimeObject* L_41 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_42 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_47_in_arguments1017;
					RuntimeObject* L_43;
					L_43 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8, __this, L_41, ((int32_t)47), L_42);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_43, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2107>
					RuntimeObject* L_44 = __this->___adaptor;
					RuntimeObject* L_45 = V_3;
					NullCheck(L_44);
					RuntimeObject* L_46;
					L_46 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_44, L_45);
					V_6 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_46, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2108>
					RuntimeObject* L_47 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_48 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_49 = V_6;
					NullCheck(L_47);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_47, L_48, L_49);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2111>
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_50 = V_0;
					RuntimeObject* L_51 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
					NullCheck(L_51);
					RuntimeObject* L_52;
					L_52 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_51, (-1));
					NullCheck(L_50);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7, L_50, L_52);
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2113>
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_53 = V_0;
					RuntimeObject* L_54 = __this->___adaptor;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_55 = V_1;
					NullCheck(L_54);
					RuntimeObject* L_56;
					L_56 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_54, L_55);
					NullCheck(L_53);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_53, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_56, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2114>
					RuntimeObject* L_57 = __this->___adaptor;
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_58 = V_0;
					NullCheck(L_58);
					RuntimeObject* L_59;
					L_59 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8, L_58);
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_60 = V_0;
					NullCheck(L_60);
					RuntimeObject* L_61;
					L_61 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_60);
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_62 = V_0;
					NullCheck(L_62);
					RuntimeObject* L_63;
					L_63 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6, L_62);
					NullCheck(L_57);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_57, L_59, ((RuntimeObject*)Castclass((RuntimeObject*)L_61, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_63, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_020c_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_01b8_1;
				}
				throw e;
			}

CATCH_01b8_1:
			{
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_64 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2116>
				V_12 = L_64;
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2118>
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_65 = V_12;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10, __this, L_65);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2119>
				RuntimeObject* L_66 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_67 = V_12;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16, __this, L_66, L_67);
				//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2121>
				arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_68 = V_0;
				RuntimeObject* L_69 = __this->___adaptor;
				RuntimeObject* L_70 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_71 = V_0;
				NullCheck(L_71);
				RuntimeObject* L_72;
				L_72 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_71);
				RuntimeObject* L_73 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input;
				NullCheck(L_73);
				RuntimeObject* L_74;
				L_74 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_73, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_75 = V_12;
				NullCheck(L_69);
				RuntimeObject* L_76;
				L_76 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_69, L_70, ((RuntimeObject*)Castclass((RuntimeObject*)L_72, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_74, L_75);
				NullCheck(L_68);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9, L_68, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_76, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				goto IL_020c_1;
			}

IL_020c_1:
			{
				goto IL_0211;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0211:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2124>
		arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_77 = V_0;
		V_13 = L_77;
		goto IL_0216;
	}

IL_0216:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2125>
		arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_78 = V_13;
		return L_78;
	}
}
// Method Definition Index: 82133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCalcParser__cctor_m1506F7C66600361103AAD3735A5FC8FF472C4792 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0015A3CE03B062AA77C4DBEDB33AF749FADBB80E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AC045CDB107222D470290520872F98BAD304712);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1603453E15E296D9A743367FA75358E71A294BFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1715ACFA0FE6E68AD2558687210B00F466D58074);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17D8C2CC055B5CA7D4070232202825730C7B58FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral275367C97244B25D213BEB98B8BBB65D932C1402);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FF5C38C83E12CB32E44510BAAD2BAB11392D5C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3514C58630DD3A6AAA4E293DC756A913B746BFAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DBD56A88F354EACFAFE433FC930A93888C30822);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43E23BD061A3CB2D12511D97BE7338010A8B05AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52C5BFED2F51E0C6CACDAF9E8C08D8A4902F5098);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54C6E9459BC790C5A4A3CE1930E3327212EA442D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57E1275F35D877D6D4A594D1086A8E00459D30F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5805A0FB324E5C6CEA6CC362E56DB2C5050CB030);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64145A4C661B03833CF2373FA0DDE5515EFED5DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral685C18BAB6BF03ED87AC8FE6593F9316E98BEC43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79046067E4AC983F0D2A6ACA479A10CE278A49BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AC264B8BFBB8CA05857A9F56C49ED4018187AEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C9A05991CF6AF87C1471CE7038482BC0F7AA079);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral820BC9D70EA6AE8245DB4DEA096E572E9B9A86DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral839BD4C6746730E90C7A6AF91609B7A7DB0BF49E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92E65E5CB9CBDB07BF05CBC3BE7E58875C404B95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97C0D56A99BE644C010699AC74FC430DB8BB99BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B7A4CD5FB9998F395948B8ACBE2F69A22B8050D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF7C23368DD03F81E3F20769FF59E1F33045650);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA18E784C84762DFFFFA0DCFDA6BBAABEF55A100A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA539038315AABE91ABF55F3F1AEE619EEBFC183A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA85E05BB895F5849332207594AD5147BCBB176DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC93B6A90A4449B00C828AA910BA86B821FF7C5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF8B5610C2E749CDA971813F2601B7DDAF980B54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1D00124B0DDEC6154F3EF1FC1B1C8935E12B7F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC34ADFCB666054F3E69F6563783A6CF71501C1FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3CD665F87FC6202F03A4DC9229A0C7766E7A77C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC738BB6B953584EFB12E75585300B76B1BD237EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB4985E8F90C7FA1F0E650F37DD0D921D1BF99E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4408813A01DBBB36D8DFAF744AB10024D68CCAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD48F72658915912FA6CE055AB012D58CF5AB3612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6A3D3FD460B612E06CEDB1D52101568E0019F15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8BD06993FE0DC2B3159161D7E24A4B2B9BF138E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9566034F4FB3DC59B12BB6CAA454DF680D03522);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA88A2D964F57B37C63183F5236085B715F076B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBAF93E807ED829BC77A5BC40002AF92E488B556);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4D610383A110907EBBC6E764324DEE77D36FCE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF34E659C4B872B7C5885697D738D61D1CF0D3E4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF68BE93499EBDA525EAB969E88B05907332F6184);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF53E95B5FDF6317CD9E7F2EA730ACED9ECBE7F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFCD9D5AF3761817B9816A4316DE6CA4883E9975);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2176>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2177>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2178>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2179>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2180>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2181>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2182>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2183>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2184>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2185>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2186>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2187>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2188>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2189>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2190>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2191>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2192>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2193>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2194>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2195>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2196>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2197>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2198>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2199>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2200>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2201>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2202>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2203>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2204>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2205>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2206>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2207>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2208>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2209>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2210>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2211>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2212>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2213>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2214>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2215>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2216>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2217>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2218>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2219>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2220>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2221>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2222>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2223>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2224>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2225>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2226>
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2227>
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)49));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral839BD4C6746730E90C7A6AF91609B7A7DB0BF49E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral43E23BD061A3CB2D12511D97BE7338010A8B05AD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral52C5BFED2F51E0C6CACDAF9E8C08D8A4902F5098);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralF34E659C4B872B7C5885697D738D61D1CF0D3E4E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCB4985E8F90C7FA1F0E650F37DD0D921D1BF99E6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral57E1275F35D877D6D4A594D1086A8E00459D30F7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralA18E784C84762DFFFFA0DCFDA6BBAABEF55A100A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralD48F72658915912FA6CE055AB012D58CF5AB3612);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralDA88A2D964F57B37C63183F5236085B715F076B8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralA539038315AABE91ABF55F3F1AEE619EEBFC183A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralF68BE93499EBDA525EAB969E88B05907332F6184);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral3DBD56A88F354EACFAFE433FC930A93888C30822);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral7C9A05991CF6AF87C1471CE7038482BC0F7AA079);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteralBC93B6A90A4449B00C828AA910BA86B821FF7C5B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral0AC045CDB107222D470290520872F98BAD304712);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteralC3CD665F87FC6202F03A4DC9229A0C7766E7A77C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)_stringLiteral1603453E15E296D9A743367FA75358E71A294BFE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteral54C6E9459BC790C5A4A3CE1930E3327212EA442D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)_stringLiteral5805A0FB324E5C6CEA6CC362E56DB2C5050CB030);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteralA85E05BB895F5849332207594AD5147BCBB176DE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)_stringLiteralE4D610383A110907EBBC6E764324DEE77D36FCE6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteralC34ADFCB666054F3E69F6563783A6CF71501C1FD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)_stringLiteralDBAF93E807ED829BC77A5BC40002AF92E488B556);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)_stringLiteral275367C97244B25D213BEB98B8BBB65D932C1402);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)_stringLiteralD8BD06993FE0DC2B3159161D7E24A4B2B9BF138E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteralD6A3D3FD460B612E06CEDB1D52101568E0019F15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (String_t*)_stringLiteral92E65E5CB9CBDB07BF05CBC3BE7E58875C404B95);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (String_t*)_stringLiteralC1D00124B0DDEC6154F3EF1FC1B1C8935E12B7F8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (String_t*)_stringLiteral1715ACFA0FE6E68AD2558687210B00F466D58074);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (String_t*)_stringLiteral685C18BAB6BF03ED87AC8FE6593F9316E98BEC43);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (String_t*)_stringLiteralFF53E95B5FDF6317CD9E7F2EA730ACED9ECBE7F2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (String_t*)_stringLiteral64145A4C661B03833CF2373FA0DDE5515EFED5DD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (String_t*)_stringLiteral7AC264B8BFBB8CA05857A9F56C49ED4018187AEC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (String_t*)_stringLiteralBF8B5610C2E749CDA971813F2601B7DDAF980B54);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (String_t*)_stringLiteral3514C58630DD3A6AAA4E293DC756A913B746BFAC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (String_t*)_stringLiteral79046067E4AC983F0D2A6ACA479A10CE278A49BF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (String_t*)_stringLiteral2FF5C38C83E12CB32E44510BAAD2BAB11392D5C1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (String_t*)_stringLiteral97C0D56A99BE644C010699AC74FC430DB8BB99BC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (String_t*)_stringLiteral0015A3CE03B062AA77C4DBEDB33AF749FADBB80E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (String_t*)_stringLiteral820BC9D70EA6AE8245DB4DEA096E572E9B9A86DC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (String_t*)_stringLiteralD4408813A01DBBB36D8DFAF744AB10024D68CCAE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)42)), (String_t*)_stringLiteral17D8C2CC055B5CA7D4070232202825730C7B58FD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_43;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)43)), (String_t*)_stringLiteral9BF7C23368DD03F81E3F20769FF59E1F33045650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_44;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (String_t*)_stringLiteralFFCD9D5AF3761817B9816A4316DE6CA4883E9975);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (String_t*)_stringLiteral9B7A4CD5FB9998F395948B8ACBE2F69A22B8050D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_46;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (String_t*)_stringLiteralC738BB6B953584EFB12E75585300B76B1BD237EE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_47;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (String_t*)_stringLiteralD9566034F4FB3DC59B12BB6CAA454DF680D03522);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_48;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)48)), (String_t*)_stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___tokenNames = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___tokenNames), (void*)L_49);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2229>
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_50 = (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472*)il2cpp_codegen_object_new(NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var);
		NumberFormatInfo__ctor_m94502038B1DB45D50D1331C312DDAD0D80CD608C(L_50, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___numberFormatInfo = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___numberFormatInfo), (void*)L_50);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2231>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_51 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_52 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_52, L_51, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_ncalcExpression56 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_ncalcExpression56), (void*)L_52);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2232>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_54 = L_53;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_55 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_55, L_54, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_EOF_in_ncalcExpression58 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_EOF_in_ncalcExpression58), (void*)L_55);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2233>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_56 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_57 = L_56;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)524290)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_58 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_58, L_57, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_logicalExpression78 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_logicalExpression78), (void*)L_58);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2234>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_59 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_60 = L_59;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_61 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_61, L_60, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_19_in_logicalExpression84 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_19_in_logicalExpression84), (void*)L_61);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2235>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_62 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_63 = L_62;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)1048576)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_64 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_64, L_63, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_logicalExpression88 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_logicalExpression88), (void*)L_64);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2236>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_65 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_66 = L_65;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_67 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_67, L_66, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_20_in_logicalExpression90 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_20_in_logicalExpression90), (void*)L_67);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2237>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_68 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_69 = L_68;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_70 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_70, L_69, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_logicalExpression94 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_logicalExpression94), (void*)L_70);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2238>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_71 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_72 = L_71;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)6291458)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_73 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_73, L_72, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_booleanAndExpression_in_conditionalExpression121 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_booleanAndExpression_in_conditionalExpression121), (void*)L_73);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2239>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_74 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_75 = L_74;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_76 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_76, L_75, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_conditionalExpression130 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_conditionalExpression130), (void*)L_76);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2240>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_77 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_78 = L_77;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)6291458)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_79 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_79, L_78, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_conditionalExpression146 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_conditionalExpression146), (void*)L_79);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2241>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_80 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_81 = L_80;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)25165826)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_82 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_82, L_81, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseOrExpression_in_booleanAndExpression180 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseOrExpression_in_booleanAndExpression180), (void*)L_82);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2242>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_83 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_84 = L_83;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_85 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_85, L_84, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_booleanAndExpression189 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_booleanAndExpression189), (void*)L_85);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2243>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_86 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_87 = L_86;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)25165826)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_88 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_88, L_87, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseOrExpression_in_booleanAndExpression205 = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseOrExpression_in_booleanAndExpression205), (void*)L_88);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2244>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_89 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_90 = L_89;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)33554434)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_91 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_91, L_90, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseXOrExpression_in_bitwiseOrExpression237 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseXOrExpression_in_bitwiseOrExpression237), (void*)L_91);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2245>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_92 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_93 = L_92;
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_94 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_94, L_93, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_25_in_bitwiseOrExpression246 = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_25_in_bitwiseOrExpression246), (void*)L_94);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2246>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_95 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_96 = L_95;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)33554434)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_97 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_97, L_96, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseOrExpression_in_bitwiseOrExpression256 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseOrExpression_in_bitwiseOrExpression256), (void*)L_97);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2247>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_98 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_99 = L_98;
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)67108866)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_100 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_100, L_99, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression290 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression290), (void*)L_100);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2248>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_101 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_102 = L_101;
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_103 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_103, L_102, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_26_in_bitwiseXOrExpression299 = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_26_in_bitwiseXOrExpression299), (void*)L_103);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2249>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_104 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = L_104;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)67108866)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_106 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_106, L_105, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression309 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression309), (void*)L_106);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2250>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_107 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_108 = L_107;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)134217730)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_109 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_109, L_108, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_equalityExpression_in_bitwiseAndExpression341 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_equalityExpression_in_bitwiseAndExpression341), (void*)L_109);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2251>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_110 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_111 = L_110;
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_112 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_112, L_111, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_27_in_bitwiseAndExpression350 = L_112;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_27_in_bitwiseAndExpression350), (void*)L_112);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2252>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_113 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_114 = L_113;
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)134217730)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_115 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_115, L_114, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_equalityExpression_in_bitwiseAndExpression360 = L_115;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_equalityExpression_in_bitwiseAndExpression360), (void*)L_115);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2253>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_116 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_117 = L_116;
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)-268435454))));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_118 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_118, L_117, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_relationalExpression_in_equalityExpression394 = L_118;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_relationalExpression_in_equalityExpression394), (void*)L_118);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2254>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_119 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_120 = L_119;
		NullCheck(L_120);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_121 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_121, L_120, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_equalityExpression405 = L_121;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_equalityExpression405), (void*)L_121);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2255>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_122 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_123 = L_122;
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_124 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_124, L_123, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_equalityExpression422 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_equalityExpression422), (void*)L_124);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2256>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_125 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_126 = L_125;
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)-268435454))));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_127 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_127, L_126, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_relationalExpression_in_equalityExpression441 = L_127;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_relationalExpression_in_equalityExpression441), (void*)L_127);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2257>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_128 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_129 = L_128;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)64424509442LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_130 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_130, L_129, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_shiftExpression_in_relationalExpression474 = L_130;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_shiftExpression_in_relationalExpression474), (void*)L_130);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2258>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_131 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_132 = L_131;
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_133 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_133, L_132, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_32_in_relationalExpression485 = L_133;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_32_in_relationalExpression485), (void*)L_133);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2259>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_134 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_135 = L_134;
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_136 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_136, L_135, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_33_in_relationalExpression495 = L_136;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_33_in_relationalExpression495), (void*)L_136);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2260>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_137 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_138 = L_137;
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_139 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_139, L_138, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_34_in_relationalExpression506 = L_139;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_34_in_relationalExpression506), (void*)L_139);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2261>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_140 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_141 = L_140;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_142 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_142, L_141, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_35_in_relationalExpression516 = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_35_in_relationalExpression516), (void*)L_142);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2262>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_143 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_144 = L_143;
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)64424509442LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_145 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_145, L_144, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_shiftExpression_in_relationalExpression528 = L_145;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_shiftExpression_in_relationalExpression528), (void*)L_145);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2263>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_146 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_147 = L_146;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)206158430210LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_148 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_148, L_147, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_additiveExpression_in_shiftExpression560 = L_148;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_additiveExpression_in_shiftExpression560), (void*)L_148);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2264>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_149 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_150 = L_149;
		NullCheck(L_150);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_151 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_151, L_150, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_36_in_shiftExpression571 = L_151;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_36_in_shiftExpression571), (void*)L_151);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2265>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_152 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_153 = L_152;
		NullCheck(L_153);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_154 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_154, L_153, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_37_in_shiftExpression581 = L_154;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_37_in_shiftExpression581), (void*)L_154);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2266>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_155 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_156 = L_155;
		NullCheck(L_156);
		(L_156)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)206158430210LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_157 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_157, L_156, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_additiveExpression_in_shiftExpression593 = L_157;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_additiveExpression_in_shiftExpression593), (void*)L_157);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2267>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_158 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_159 = L_158;
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)824633720834LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_160 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_160, L_159, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_multiplicativeExpression_in_additiveExpression625 = L_160;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_multiplicativeExpression_in_additiveExpression625), (void*)L_160);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2268>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_161 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_162 = L_161;
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_163 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_163, L_162, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_38_in_additiveExpression636 = L_163;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_38_in_additiveExpression636), (void*)L_163);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2269>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_164 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_165 = L_164;
		NullCheck(L_165);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_166 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_166, L_165, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_39_in_additiveExpression646 = L_166;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_39_in_additiveExpression646), (void*)L_166);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2270>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_167 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_168 = L_167;
		NullCheck(L_168);
		(L_168)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)824633720834LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_169 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_169, L_168, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_multiplicativeExpression_in_additiveExpression658 = L_169;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_multiplicativeExpression_in_additiveExpression658), (void*)L_169);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2271>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_170 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_171 = L_170;
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)7696581394434LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_172 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_172, L_171, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_unaryExpression_in_multiplicativeExpression690 = L_172;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_unaryExpression_in_multiplicativeExpression690), (void*)L_172);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2272>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_173 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_174 = L_173;
		NullCheck(L_174);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_175 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_175, L_174, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_40_in_multiplicativeExpression701 = L_175;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_40_in_multiplicativeExpression701), (void*)L_175);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2273>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_176 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_177 = L_176;
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_178 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_178, L_177, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_41_in_multiplicativeExpression711 = L_178;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_41_in_multiplicativeExpression711), (void*)L_178);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2274>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_179 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_180 = L_179;
		NullCheck(L_180);
		(L_180)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_181 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_181, L_180, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_42_in_multiplicativeExpression721 = L_181;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_42_in_multiplicativeExpression721), (void*)L_181);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2275>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_182 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_183 = L_182;
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)7696581394434LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_184 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_184, L_183, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_unaryExpression_in_multiplicativeExpression733 = L_184;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_unaryExpression_in_multiplicativeExpression733), (void*)L_184);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2276>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_185 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_186 = L_185;
		NullCheck(L_186);
		(L_186)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_187 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_187, L_186, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression760 = L_187;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression760), (void*)L_187);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2277>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_188 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_189 = L_188;
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)70368744181744LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_190 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_190, L_189, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_unaryExpression771 = L_190;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_unaryExpression771), (void*)L_190);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2278>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_191 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_192 = L_191;
		NullCheck(L_192);
		(L_192)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_193 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_193, L_192, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression779 = L_193;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression779), (void*)L_193);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2279>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_194 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_195 = L_194;
		NullCheck(L_195);
		(L_195)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)70368744181744LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_196 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_196, L_195, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_45_in_unaryExpression791 = L_196;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_45_in_unaryExpression791), (void*)L_196);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2280>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_197 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_198 = L_197;
		NullCheck(L_198);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_199 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_199, L_198, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression794 = L_199;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression794), (void*)L_199);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2281>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_200 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_201 = L_200;
		NullCheck(L_201);
		(L_201)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)70368744181744LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_202 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_202, L_201, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_39_in_unaryExpression805 = L_202;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_39_in_unaryExpression805), (void*)L_202);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2282>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_203 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_204 = L_203;
		NullCheck(L_204);
		(L_204)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_205 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_205, L_204, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression807 = L_205;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression807), (void*)L_205);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2283>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_206 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_207 = L_206;
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_208 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_208, L_207, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_46_in_primaryExpression829 = L_208;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_46_in_primaryExpression829), (void*)L_208);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2284>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_209 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_210 = L_209;
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)140737488355328LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_211 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_211, L_210, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_primaryExpression831 = L_211;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_primaryExpression831), (void*)L_211);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2285>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_212 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_213 = L_212;
		NullCheck(L_213);
		(L_213)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_214 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_214, L_213, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_47_in_primaryExpression833 = L_214;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_47_in_primaryExpression833), (void*)L_214);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2286>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_215 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_216 = L_215;
		NullCheck(L_216);
		(L_216)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_217 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_217, L_216, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_value_in_primaryExpression843 = L_217;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_value_in_primaryExpression843), (void*)L_217);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2287>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_218 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_219 = L_218;
		NullCheck(L_219);
		(L_219)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)70368744177666LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_220 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_220, L_219, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_identifier_in_primaryExpression851 = L_220;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_identifier_in_primaryExpression851), (void*)L_220);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2288>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_221 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_222 = L_221;
		NullCheck(L_222);
		(L_222)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_223 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_223, L_222, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_arguments_in_primaryExpression856 = L_223;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_arguments_in_primaryExpression856), (void*)L_223);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2289>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_224 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_225 = L_224;
		NullCheck(L_225);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_226 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_226, L_225, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_INTEGER_in_value876 = L_226;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_INTEGER_in_value876), (void*)L_226);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2290>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_227 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_228 = L_227;
		NullCheck(L_228);
		(L_228)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_229 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_229, L_228, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_FLOAT_in_value884 = L_229;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_FLOAT_in_value884), (void*)L_229);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2291>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_230 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_231 = L_230;
		NullCheck(L_231);
		(L_231)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_232 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_232, L_231, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_STRING_in_value892 = L_232;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_STRING_in_value892), (void*)L_232);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2292>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_233 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_234 = L_233;
		NullCheck(L_234);
		(L_234)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_235 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_235, L_234, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_DATETIME_in_value901 = L_235;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_DATETIME_in_value901), (void*)L_235);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2293>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_236 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_237 = L_236;
		NullCheck(L_237);
		(L_237)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_238 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_238, L_237, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_TRUE_in_value908 = L_238;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_TRUE_in_value908), (void*)L_238);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2294>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_239 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_240 = L_239;
		NullCheck(L_240);
		(L_240)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_241 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_241, L_240, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_FALSE_in_value916 = L_241;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_FALSE_in_value916), (void*)L_241);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2295>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_242 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_243 = L_242;
		NullCheck(L_243);
		(L_243)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_244 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_244, L_243, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_ID_in_identifier934 = L_244;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_ID_in_identifier934), (void*)L_244);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2296>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_245 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_246 = L_245;
		NullCheck(L_246);
		(L_246)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_247 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_247, L_246, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_NAME_in_identifier942 = L_247;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_NAME_in_identifier942), (void*)L_247);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2297>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_248 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_249 = L_248;
		NullCheck(L_249);
		(L_249)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)281474976710658LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_250 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_250, L_249, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_expressionList966 = L_250;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_expressionList966), (void*)L_250);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2298>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_251 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_252 = L_251;
		NullCheck(L_252);
		(L_252)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_253 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_253, L_252, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_48_in_expressionList973 = L_253;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_48_in_expressionList973), (void*)L_253);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2299>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_254 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_255 = L_254;
		NullCheck(L_255);
		(L_255)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)281474976710658LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_256 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_256, L_255, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_expressionList977 = L_256;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_expressionList977), (void*)L_256);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2300>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_257 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_258 = L_257;
		NullCheck(L_258);
		(L_258)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)273228639506416LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_259 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_259, L_258, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_46_in_arguments1006 = L_259;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_46_in_arguments1006), (void*)L_259);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2301>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_260 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_261 = L_260;
		NullCheck(L_261);
		(L_261)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)140737488355328LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_262 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_262, L_261, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_expressionList_in_arguments1010 = L_262;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_expressionList_in_arguments1010), (void*)L_262);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2302>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_263 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_264 = L_263;
		NullCheck(L_264);
		(L_264)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_265 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_265, L_264, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_47_in_arguments1017 = L_265;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_47_in_arguments1017), (void*)L_265);
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
// Method Definition Index: 82134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ncalcExpression_return_get_Tree_m25FA69C84C0E7B4D9FAB6B2FBDE8BDA6B226E48B (ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2313>
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2314>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ncalcExpression_return_set_Tree_m526E16C672F4A31CCF5B6BBF6A62C34EDDCE18D3 (ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2317>
		RuntimeObject* L_0 = ___0_value;
		__this->___tree = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2318>
		return;
	}
}
// Method Definition Index: 82136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ncalcExpression_return__ctor_m422CF138036F78F966DAAC76FA5FF572615E7F8F (ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// Method Definition Index: 82137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* logicalExpression_return_get_Tree_m47FC55BA1965114A63281798B470109FF06A5FC6 (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2333>
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2334>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void logicalExpression_return_set_Tree_m37615E3C802912EF29AABF3131391A21472A6A1F (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2337>
		RuntimeObject* L_0 = ___0_value;
		__this->___tree = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2338>
		return;
	}
}
// Method Definition Index: 82139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void logicalExpression_return__ctor_m7CEAB730B76250C43456F8505740F98C886B8AAD (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// Method Definition Index: 82140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* conditionalExpression_return_get_Tree_m7B00F4BCC18C932058B8878CFB6FE23E6EAE5888 (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2353>
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2354>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void conditionalExpression_return_set_Tree_m4DCA1F66FEA8A6D2089F4E3D303A1F337043E849 (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2357>
		RuntimeObject* L_0 = ___0_value;
		__this->___tree = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2358>
		return;
	}
}
// Method Definition Index: 82142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void conditionalExpression_return__ctor_m426B2C4F035ED6EA2823C4B46845822BF796CC96 (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// Method Definition Index: 82143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* booleanAndExpression_return_get_Tree_m4A3DBEDA3FEEB27060C343E3AC1312A9FE1AA965 (booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2373>
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2374>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void booleanAndExpression_return_set_Tree_m804E06B46D0C9D966E08D2183E2573437779CC14 (booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2377>
		RuntimeObject* L_0 = ___0_value;
		__this->___tree = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2378>
		return;
	}
}
// Method Definition Index: 82145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void booleanAndExpression_return__ctor_mFEAEFA25C564E27C239A57B0777976BA2BFEA086 (booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// Method Definition Index: 82146
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bitwiseOrExpression_return_get_Tree_m7616E8D8DBA134F58E0CDE0A3E00211CE135683B (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2393>
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2394>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82147
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseOrExpression_return_set_Tree_mA8B42B36ED141EF81ECC7BCF3AEE279FC7DDFA03 (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2397>
		RuntimeObject* L_0 = ___0_value;
		__this->___tree = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2398>
		return;
	}
}
// Method Definition Index: 82148
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseOrExpression_return__ctor_m9AF5AE54B95A0454E1D5C5536EA2AAB50AC51630 (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// Method Definition Index: 82149
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bitwiseXOrExpression_return_get_Tree_mDCD92F7B30C5C0C2082CBE367160D3FE6D4E9622 (bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2413>
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2414>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82150
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseXOrExpression_return_set_Tree_mF42C5260CAEAE16659EB23CE30503DDE935DB599 (bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2417>
		RuntimeObject* L_0 = ___0_value;
		__this->___tree = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2418>
		return;
	}
}
// Method Definition Index: 82151
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseXOrExpression_return__ctor_m541B10184341E638DDE6E5B26AE7B085DADFBAE3 (bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// Method Definition Index: 82152
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bitwiseAndExpression_return_get_Tree_mFEF73BA1F82770B77896085106AB6A4C1C940040 (bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2433>
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2434>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82153
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseAndExpression_return_set_Tree_mFA1C91FF73AD56348572CD428DAD444076BDF5E8 (bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2437>
		RuntimeObject* L_0 = ___0_value;
		__this->___tree = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2438>
		return;
	}
}
// Method Definition Index: 82154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseAndExpression_return__ctor_m7B0C7223BC7F67092EBC55739953BD24CD5C9686 (bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// Method Definition Index: 82155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* equalityExpression_return_get_Tree_m62DE6B858A75C7C1263EDA6801016507981C88F5 (equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2453>
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2454>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void equalityExpression_return_set_Tree_m1EAFCEDC072CAB7C92A09A8E86888D05A9EE52D1 (equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2457>
		RuntimeObject* L_0 = ___0_value;
		__this->___tree = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2458>
		return;
	}
}
// Method Definition Index: 82157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void equalityExpression_return__ctor_m00B929AD146884433C96A1CDA91E593171A28D6A (equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// Method Definition Index: 82158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* relationalExpression_return_get_Tree_mCAE9CDD4E575A356921EF4954880B98A2CA775BA (relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2473>
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2474>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void relationalExpression_return_set_Tree_mCD9919CCC08608D2DE71E5F87F3FA042599F7919 (relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2477>
		RuntimeObject* L_0 = ___0_value;
		__this->___tree = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2478>
		return;
	}
}
// Method Definition Index: 82160
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void relationalExpression_return__ctor_m5A84A5D6F3647F41895F0281CB5087695BF44B64 (relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// Method Definition Index: 82161
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* shiftExpression_return_get_Tree_mC7FB6F92729DCADB2B13440C7289DF494F1100EA (shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2493>
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2494>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shiftExpression_return_set_Tree_mDB7F9948616A4E701032595D7DE599B85F7705B7 (shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2497>
		RuntimeObject* L_0 = ___0_value;
		__this->___tree = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2498>
		return;
	}
}
// Method Definition Index: 82163
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shiftExpression_return__ctor_mDA7571BFF156CDDEB994FEBA01C969A002837E9B (shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// Method Definition Index: 82164
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* additiveExpression_return_get_Tree_m251D5360DEC7D9C6870284A8D8604A51F53339BD (additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2513>
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2514>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82165
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void additiveExpression_return_set_Tree_mE782367D93C327CFD39BCFB5602D2C4E9E4FAF98 (additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2517>
		RuntimeObject* L_0 = ___0_value;
		__this->___tree = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2518>
		return;
	}
}
// Method Definition Index: 82166
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void additiveExpression_return__ctor_m069149FDAE713F9A87A10851AD630B59C869CA53 (additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// Method Definition Index: 82167
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* multiplicativeExpression_return_get_Tree_m91EBDD30267B15C0F1FC2ACE126F9AB0B38D40DB (multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2533>
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2534>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82168
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void multiplicativeExpression_return_set_Tree_mBA83AC1DE18FD7E1D4BEF0F19815A02CF5F2A8AE (multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2537>
		RuntimeObject* L_0 = ___0_value;
		__this->___tree = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2538>
		return;
	}
}
// Method Definition Index: 82169
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void multiplicativeExpression_return__ctor_m4EC6588201A9DD7527112016F99FD17611790A3C (multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// Method Definition Index: 82170
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unaryExpression_return_get_Tree_mE07C150C325AE6DB206226A63D022E8D986042D8 (unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2553>
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2554>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unaryExpression_return_set_Tree_mA24F81046099E1E681E95090F5EA88F4E8568BB3 (unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2557>
		RuntimeObject* L_0 = ___0_value;
		__this->___tree = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2558>
		return;
	}
}
// Method Definition Index: 82172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unaryExpression_return__ctor_mE4FBA5CA64602B3C38981B648ED292D7B0C7DA98 (unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// Method Definition Index: 82173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* primaryExpression_return_get_Tree_mCB8524A9E1AA313BCF8710D2E8686D3104214205 (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2573>
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2574>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82174
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void primaryExpression_return_set_Tree_m4FDF089D1628CD32FDC6D066DFA132ADEFEFA5E0 (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2577>
		RuntimeObject* L_0 = ___0_value;
		__this->___tree = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2578>
		return;
	}
}
// Method Definition Index: 82175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void primaryExpression_return__ctor_mF0B4992409A94995D798FC05A446633E95165C65 (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// Method Definition Index: 82176
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* value_return_get_Tree_m7F398FCF1A6F68554E94F9CB20A9F2C8A0665594 (value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2593>
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2594>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82177
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void value_return_set_Tree_m9AA445CFA3DA5B81A338DE2F944A7D0EF2A26D81 (value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2597>
		RuntimeObject* L_0 = ___0_value;
		__this->___tree = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2598>
		return;
	}
}
// Method Definition Index: 82178
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void value_return__ctor_m1D48771759774D00FCCB206334475E57EB8C2A8B (value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// Method Definition Index: 82179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* identifier_return_get_Tree_mC911B456349FB5AF7A896EF70089D24023406D4D (identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2613>
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2614>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void identifier_return_set_Tree_mA1DEFC2FF6BF66309052BA15F9D0BDB2C269AD67 (identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2617>
		RuntimeObject* L_0 = ___0_value;
		__this->___tree = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2618>
		return;
	}
}
// Method Definition Index: 82181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void identifier_return__ctor_m607079BF18B64935F5D65C179A1DD2EEBDD1DC64 (identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// Method Definition Index: 82182
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* expressionList_return_get_Tree_m7492B83626B037F9D2FE29E5B1BCDD25DA9EC72D (expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2633>
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2634>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82183
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void expressionList_return_set_Tree_m3E9798B55F6865DC07A4C738440BC9AA4769953A (expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2637>
		RuntimeObject* L_0 = ___0_value;
		__this->___tree = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2638>
		return;
	}
}
// Method Definition Index: 82184
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void expressionList_return__ctor_m2EA78AA8DAA3AC6FD1F1B998CA9BC362502D0FC7 (expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// Method Definition Index: 82185
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* arguments_return_get_Tree_m6BDE202D6590A78646A6B0D16500B4D92E595DDD (arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2653>
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2654>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82186
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void arguments_return_set_Tree_mAA2BAF43843A5E5A57F044054FCCFB32F07D3164 (arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2657>
		RuntimeObject* L_0 = ___0_value;
		__this->___tree = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:2658>
		return;
	}
}
// Method Definition Index: 82187
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void arguments_return__ctor_mD57A323BD2933750E6A65521119CA6EE4B0F8384 (arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// Method Definition Index: 82188
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParameterArgs_get_Result_m0C577BECCB47D7097879C041C6EF76D7AB597AB7 (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ParameterArgs.cs:13>
		RuntimeObject* L_0 = __this->____result;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ParameterArgs.cs:14>
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 82189
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterArgs_set_Result_mEB9F6FC8CA211EF0F80C66161F5A91A94A205BD8 (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ParameterArgs.cs:17>
		RuntimeObject* L_0 = ___0_value;
		__this->____result = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____result), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ParameterArgs.cs:18>
		ParameterArgs_set_HasResult_m9CB8E148415DFDB780A5C5D0299E71AB596A76B8_inline(__this, (bool)1, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ParameterArgs.cs:19>
		return;
	}
}
// Method Definition Index: 82190
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterArgs_get_HasResult_m00CBA2CBCC312D378EAAF7665634BB5B0CE2F444 (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ParameterArgs.cs:22>
		bool L_0 = __this->___U3CHasResultU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82191
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterArgs_set_HasResult_m9CB8E148415DFDB780A5C5D0299E71AB596A76B8 (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ParameterArgs.cs:22>
		bool L_0 = ___0_value;
		__this->___U3CHasResultU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 82192
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterArgs__ctor_m8AE187E045B505540DE24CDB377ECE4B14F96E42 (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
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
// Method Definition Index: 82193
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor__ctor_m375F92459AC15A3D38B7941759CB2727AD953C42 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:8>
		LogicalExpressionVisitor__ctor_m24C7C345ACEE6EADDD7106CAC9D789BFEBB0F3D9(__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:10>
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		SerializationVisitor_set_Result_m1C2912A68EBF051E396DA3EC9A52BFED68A46A36_inline(__this, L_0, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:11>
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472*)il2cpp_codegen_object_new(NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var);
		NumberFormatInfo__ctor_m94502038B1DB45D50D1331C312DDAD0D80CD608C(L_1, NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2 = L_1;
		NullCheck(L_2);
		NumberFormatInfo_set_NumberDecimalSeparator_mEC8D7493863AD768CF6107DE7617811E1105DF10(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		__this->____numberFormatInfo = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____numberFormatInfo), (void*)L_2);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:12>
		return;
	}
}
// Method Definition Index: 82194
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:16>
		StringBuilder_t* L_0 = __this->___U3CResultU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82195
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_set_Result_m1C2912A68EBF051E396DA3EC9A52BFED68A46A36 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, StringBuilder_t* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:16>
		StringBuilder_t* L_0 = ___0_value;
		__this->___U3CResultU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 82196
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_mF41318032810D31B1C2AA564FA7DE48DF8152B47 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* ___0_ternary, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral210A6A07AB8F66B3554669378F6148D2C7F62920);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:20>
		TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* L_0 = ___0_ternary;
		NullCheck(L_0);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_1;
		L_1 = TernaryExpression_get_LeftExpression_mDE504809B2CDB09C513D85D62F681F3432EAEBE0_inline(L_0, NULL);
		SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9(__this, L_1, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:22>
		StringBuilder_t* L_2;
		L_2 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, _stringLiteral210A6A07AB8F66B3554669378F6148D2C7F62920, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:24>
		TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* L_4 = ___0_ternary;
		NullCheck(L_4);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_5;
		L_5 = TernaryExpression_get_MiddleExpression_m31BE5A457389B52577A93E6757D2291A3ABDDFA7_inline(L_4, NULL);
		SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9(__this, L_5, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:26>
		StringBuilder_t* L_6;
		L_6 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:28>
		TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* L_8 = ___0_ternary;
		NullCheck(L_8);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_9;
		L_9 = TernaryExpression_get_RightExpression_m3BB5D4B3540900E08217DBA3B4DCA150B3293825_inline(L_8, NULL);
		SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9(__this, L_9, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:29>
		return;
	}
}
// Method Definition Index: 82197
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_m6E14C2211C9FAF620D5D07FA6C4EC16F8A45668D (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* ___0_binary, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15FB8A04339464F72B79BAF171F17EF1E153CA52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B1EB7B676D45EEA70B706E25988B5A063563F3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B9D3CF4697EAF2BF914545D4E803CF9FCA58F66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDB12CAF040DE0941DCA5DA173D724FBE249CE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4809E30105820D7F0D6338C0181D9A191EAE18E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51A0BD638EC24062E1BB5CBBDC0CEBB6BFB167A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64DDEE858A91B7DDB44761D703E5A2FD737BCAA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88DE3AE5D1539B4DC69F188BF0BA71D156A2A987);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9624DEBBCD14C2B589D0526FE720B99449CA1D13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B2D833B107F93D5FC776077FE8509021DCC803E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC47381A312D0BE38226537F85448FFF2264564C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADB95DDF09353FBDD17E9890451F2F88C7F3AF20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8FB3AADE865E6D34A8377CFB1E0D3ADC4040BDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDF1B8C01FE1D4D3E80FBCE3178BE0FA050AC8D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0CFF3BC021C7A77F8C1BAFB2D406397F52AD882);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4DEFACDDC6EDC45049E58865E8CC7A05C7AEA5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC920BF5B48C73F1A2C760180F624A2192ADDA32);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:33>
		BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_0 = ___0_binary;
		NullCheck(L_0);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_1;
		L_1 = BinaryExpression_get_LeftExpression_mD21818A59055D95C304B73471F9D4B782DB63B28_inline(L_0, NULL);
		SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9(__this, L_1, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:35>
		BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_2 = ___0_binary;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BinaryExpression_get_Type_m643CED48C4A086AB2E63036E53B64DD3D04D10A1_inline(L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_006a;
			}
			case 1:
			{
				goto IL_0080;
			}
			case 2:
			{
				goto IL_0146;
			}
			case 3:
			{
				goto IL_0104;
			}
			case 4:
			{
				goto IL_00d8;
			}
			case 5:
			{
				goto IL_00ee;
			}
			case 6:
			{
				goto IL_00c2;
			}
			case 7:
			{
				goto IL_00ac;
			}
			case 8:
			{
				goto IL_011a;
			}
			case 9:
			{
				goto IL_015c;
			}
			case 10:
			{
				goto IL_0130;
			}
			case 11:
			{
				goto IL_0096;
			}
			case 12:
			{
				goto IL_016f;
			}
			case 13:
			{
				goto IL_0195;
			}
			case 14:
			{
				goto IL_0182;
			}
			case 15:
			{
				goto IL_01a8;
			}
			case 16:
			{
				goto IL_01bb;
			}
			case 17:
			{
				goto IL_01ce;
			}
		}
	}
	{
		goto IL_01e1;
	}

IL_006a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:38>
		StringBuilder_t* L_6;
		L_6 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral64DDEE858A91B7DDB44761D703E5A2FD737BCAA9, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:39>
		goto IL_01e1;
	}

IL_0080:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:42>
		StringBuilder_t* L_8;
		L_8 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteralC8FB3AADE865E6D34A8377CFB1E0D3ADC4040BDC, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:43>
		goto IL_01e1;
	}

IL_0096:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:46>
		StringBuilder_t* L_10;
		L_10 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, _stringLiteralADB95DDF09353FBDD17E9890451F2F88C7F3AF20, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:47>
		goto IL_01e1;
	}

IL_00ac:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:50>
		StringBuilder_t* L_12;
		L_12 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral9B2D833B107F93D5FC776077FE8509021DCC803E, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:51>
		goto IL_01e1;
	}

IL_00c2:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:54>
		StringBuilder_t* L_14;
		L_14 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, _stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:55>
		goto IL_01e1;
	}

IL_00d8:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:58>
		StringBuilder_t* L_16;
		L_16 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteralCDF1B8C01FE1D4D3E80FBCE3178BE0FA050AC8D9, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:59>
		goto IL_01e1;
	}

IL_00ee:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:62>
		StringBuilder_t* L_18;
		L_18 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, _stringLiteral2FDB12CAF040DE0941DCA5DA173D724FBE249CE3, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:63>
		goto IL_01e1;
	}

IL_0104:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:66>
		StringBuilder_t* L_20;
		L_20 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral88DE3AE5D1539B4DC69F188BF0BA71D156A2A987, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:67>
		goto IL_01e1;
	}

IL_011a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:70>
		StringBuilder_t* L_22;
		L_22 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, _stringLiteralFC920BF5B48C73F1A2C760180F624A2192ADDA32, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:71>
		goto IL_01e1;
	}

IL_0130:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:74>
		StringBuilder_t* L_24;
		L_24 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, _stringLiteralAC47381A312D0BE38226537F85448FFF2264564C, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:75>
		goto IL_01e1;
	}

IL_0146:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:78>
		StringBuilder_t* L_26;
		L_26 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, _stringLiteralF4DEFACDDC6EDC45049E58865E8CC7A05C7AEA5B, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:79>
		goto IL_01e1;
	}

IL_015c:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:82>
		StringBuilder_t* L_28;
		L_28 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteral1B9D3CF4697EAF2BF914545D4E803CF9FCA58F66, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:83>
		goto IL_01e1;
	}

IL_016f:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:86>
		StringBuilder_t* L_30;
		L_30 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_30);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, _stringLiteral15FB8A04339464F72B79BAF171F17EF1E153CA52, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:87>
		goto IL_01e1;
	}

IL_0182:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:90>
		StringBuilder_t* L_32;
		L_32 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, _stringLiteral9624DEBBCD14C2B589D0526FE720B99449CA1D13, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:91>
		goto IL_01e1;
	}

IL_0195:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:94>
		StringBuilder_t* L_34;
		L_34 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, _stringLiteral1B1EB7B676D45EEA70B706E25988B5A063563F3D, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:95>
		goto IL_01e1;
	}

IL_01a8:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:98>
		StringBuilder_t* L_36;
		L_36 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_36);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_36, _stringLiteralE0CFF3BC021C7A77F8C1BAFB2D406397F52AD882, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:99>
		goto IL_01e1;
	}

IL_01bb:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:102>
		StringBuilder_t* L_38;
		L_38 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_38);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_38, _stringLiteral4809E30105820D7F0D6338C0181D9A191EAE18E2, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:103>
		goto IL_01e1;
	}

IL_01ce:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:106>
		StringBuilder_t* L_40;
		L_40 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_40);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_40, _stringLiteral51A0BD638EC24062E1BB5CBBDC0CEBB6BFB167A5, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:107>
		goto IL_01e1;
	}

IL_01e1:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:110>
		BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_42 = ___0_binary;
		NullCheck(L_42);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_43;
		L_43 = BinaryExpression_get_RightExpression_m7CF8195F4CC8C4EEABB53A658BECE92ACEE3BD94_inline(L_42, NULL);
		SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9(__this, L_43, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:111>
		return;
	}
}
// Method Definition Index: 82198
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_mA2167A9765FE3128958F0CB0D0AA1A94CF33B896 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* ___0_unary, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9452A87FAA0073A5238C5BF8FBCAE0BFB2A7512D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:115>
		UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* L_0 = ___0_unary;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UnaryExpression_get_Type_m1975DEB3A3A893A20EEF225A9B83A818812A457B_inline(L_0, NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0044;
			}
		}
	}
	{
		goto IL_0057;
	}

IL_001e:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:118>
		StringBuilder_t* L_4;
		L_4 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:119>
		goto IL_0057;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:122>
		StringBuilder_t* L_6;
		L_6 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:123>
		goto IL_0057;
	}

IL_0044:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:126>
		StringBuilder_t* L_8;
		L_8 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral9452A87FAA0073A5238C5BF8FBCAE0BFB2A7512D, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:127>
		goto IL_0057;
	}

IL_0057:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:130>
		UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* L_10 = ___0_unary;
		NullCheck(L_10);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_11;
		L_11 = UnaryExpression_get_Expression_m048BC347DA44FFBA007ECA3B5C71B26C9A730EED_inline(L_10, NULL);
		SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9(__this, L_11, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:131>
		return;
	}
}
// Method Definition Index: 82199
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_mAF3BD72EE9DAF030DB798A90E571B62E3F08D2AC (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:135>
		ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_0 = ___0_value;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ValueExpression_get_Type_mB8AC3CE9703854799ACF44BC217CE9F39ED933E5_inline(L_0, NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_00b5;
			}
			case 1:
			{
				goto IL_00d3;
			}
			case 2:
			{
				goto IL_004a;
			}
			case 3:
			{
				goto IL_007f;
			}
			case 4:
			{
				goto IL_0029;
			}
		}
	}
	{
		goto IL_0105;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:138>
		StringBuilder_t* L_4;
		L_4 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_5 = ___0_value;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline(L_5, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_4, L_6, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:139>
		goto IL_0105;
	}

IL_004a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:142>
		StringBuilder_t* L_9;
		L_9 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_9);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, NULL);
		ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_11 = ___0_value;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline(L_11, NULL);
		NullCheck(L_10);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_10, L_12, NULL);
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:143>
		goto IL_0105;
	}

IL_007f:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:146>
		StringBuilder_t* L_16;
		L_16 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_17 = ___0_value;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline(L_17, NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_18);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_20;
		L_20 = Decimal_Parse_mF59EB26DED52ED2D5E804452CFC9102E3347C10D(L_19, NULL);
		V_2 = L_20;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_21 = __this->____numberFormatInfo;
		String_t* L_22;
		L_22 = Decimal_ToString_m08256316312F5D05FE3D099C083A99BC694F4762((&V_2), L_21, NULL);
		NullCheck(L_16);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, L_22, NULL);
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:147>
		goto IL_0105;
	}

IL_00b5:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:150>
		StringBuilder_t* L_25;
		L_25 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_26 = ___0_value;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline(L_26, NULL);
		NullCheck(L_25);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_25, L_27, NULL);
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:151>
		goto IL_0105;
	}

IL_00d3:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:154>
		StringBuilder_t* L_30;
		L_30 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_30);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_32 = ___0_value;
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline(L_32, NULL);
		NullCheck(L_31);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_31, L_33, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		NullCheck(L_35);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_35, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:155>
		goto IL_0105;
	}

IL_0105:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:157>
		return;
	}
}
// Method Definition Index: 82200
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_m61FDF5B476F37E1A8710A3532564AB9790487D65 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* ___0_function, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:161>
		StringBuilder_t* L_0;
		L_0 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* L_1 = ___0_function;
		NullCheck(L_1);
		IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* L_2;
		L_2 = FunctionExpression_get_Identifier_mC36B5723E1F5542170364200861FE75527686D3E_inline(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = IdentifierExpression_get_Name_mEC9209065D0E0A9E5877D0D7CE5C5F06317F27B2_inline(L_2, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, L_3, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:163>
		StringBuilder_t* L_5;
		L_5 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:165>
		V_0 = 0;
		goto IL_0080;
	}

IL_002d:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:167>
		FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* L_7 = ___0_function;
		NullCheck(L_7);
		LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* L_8;
		L_8 = FunctionExpression_get_Expressions_mDD1CA87B11D2BAE3D578441A3BC83657D0FB9819_inline(L_7, NULL);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		VirtualActionInvoker1< LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* >::Invoke(4, L_11, __this);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:169>
		int32_t L_12 = V_0;
		FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* L_13 = ___0_function;
		NullCheck(L_13);
		LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* L_14;
		L_14 = FunctionExpression_get_Expressions_mDD1CA87B11D2BAE3D578441A3BC83657D0FB9819_inline(L_13, NULL);
		NullCheck(L_14);
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_14)->max_length)), 1))))? 1 : 0);
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:171>
		StringBuilder_t* L_16;
		L_16 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		StringBuilder_t* L_17;
		L_17 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_17, NULL);
		NullCheck(L_16);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_16, ((int32_t)il2cpp_codegen_subtract(L_18, 1)), 1, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:172>
		StringBuilder_t* L_20;
		L_20 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_007b:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:165>
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0080:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:165>
		int32_t L_23 = V_0;
		FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* L_24 = ___0_function;
		NullCheck(L_24);
		LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* L_25;
		L_25 = FunctionExpression_get_Expressions_mDD1CA87B11D2BAE3D578441A3BC83657D0FB9819_inline(L_24, NULL);
		NullCheck(L_25);
		V_2 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))? 1 : 0);
		bool L_26 = V_2;
		if (L_26)
		{
			goto IL_002d;
		}
	}
	{
		goto IL_00ad;
	}

IL_0091:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:179>
		StringBuilder_t* L_27;
		L_27 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		StringBuilder_t* L_28;
		L_28 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_28);
		int32_t L_29;
		L_29 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_28, NULL);
		NullCheck(L_27);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_27, ((int32_t)il2cpp_codegen_subtract(L_29, 1)), 1, NULL);
	}

IL_00ad:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:177>
		StringBuilder_t* L_31;
		L_31 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		StringBuilder_t* L_32;
		L_32 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_32);
		int32_t L_33;
		L_33 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_32, NULL);
		NullCheck(L_31);
		Il2CppChar L_34;
		L_34 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_31, ((int32_t)il2cpp_codegen_subtract(L_33, 1)), NULL);
		V_3 = (bool)((((int32_t)L_34) == ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_35 = V_3;
		if (L_35)
		{
			goto IL_0091;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:182>
		StringBuilder_t* L_36;
		L_36 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_36);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_36, _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:183>
		return;
	}
}
// Method Definition Index: 82201
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_mF388B7819484B208F634D64AEAD4A61A409959F8 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* ___0_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:187>
		StringBuilder_t* L_0;
		L_0 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* L_2 = ___0_identifier;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = IdentifierExpression_get_Name_mEC9209065D0E0A9E5877D0D7CE5C5F06317F27B2_inline(L_2, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_3, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:188>
		return;
	}
}
// Method Definition Index: 82202
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___0_expression, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:192>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___0_expression;
		V_0 = (bool)((!(((RuntimeObject*)(ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)((ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)IsInstClass((RuntimeObject*)L_0, ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:194>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_2 = ___0_expression;
		NullCheck(L_2);
		VirtualActionInvoker1< LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* >::Invoke(4, L_2, __this);
		goto IL_0084;
	}

IL_001a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:198>
		StringBuilder_t* L_3;
		L_3 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:199>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_5 = ___0_expression;
		NullCheck(L_5);
		VirtualActionInvoker1< LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* >::Invoke(4, L_5, __this);
		goto IL_0052;
	}

IL_0036:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:204>
		StringBuilder_t* L_6;
		L_6 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		StringBuilder_t* L_7;
		L_7 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_7, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), 1, NULL);
	}

IL_0052:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:202>
		StringBuilder_t* L_10;
		L_10 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		StringBuilder_t* L_11;
		L_11 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_11, NULL);
		NullCheck(L_10);
		Il2CppChar L_13;
		L_13 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_10, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), NULL);
		V_1 = (bool)((((int32_t)L_13) == ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_0036;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:207>
		StringBuilder_t* L_15;
		L_15 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924, NULL);
	}

IL_0084:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:209>
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
// Method Definition Index: 82203
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression__ctor_mCB08337682715EEB37EE0D03996181A303FD3267 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___0_leftExpression, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___1_middleExpression, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___2_rightExpression, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:5>
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:7>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___0_leftExpression;
		TernaryExpression_set_LeftExpression_mA61386087E56C883FC1036D5C1A93347C2C0D7BF_inline(__this, L_0, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:8>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_1 = ___1_middleExpression;
		TernaryExpression_set_MiddleExpression_m78AB85AA7179BE64D7C6EEC0D534DED8E16CBB03_inline(__this, L_1, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:9>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_2 = ___2_rightExpression;
		TernaryExpression_set_RightExpression_m32C9F11F1B7C64A2853EA2D1EDAA0BC18D0E775E_inline(__this, L_2, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:10>
		return;
	}
}
// Method Definition Index: 82204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_LeftExpression_mDE504809B2CDB09C513D85D62F681F3432EAEBE0 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:12>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CLeftExpressionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82205
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression_set_LeftExpression_mA61386087E56C883FC1036D5C1A93347C2C0D7BF (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:12>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___0_value;
		__this->___U3CLeftExpressionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLeftExpressionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 82206
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_MiddleExpression_m31BE5A457389B52577A93E6757D2291A3ABDDFA7 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:14>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CMiddleExpressionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82207
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression_set_MiddleExpression_m78AB85AA7179BE64D7C6EEC0D534DED8E16CBB03 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:14>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___0_value;
		__this->___U3CMiddleExpressionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMiddleExpressionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 82208
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_RightExpression_m3BB5D4B3540900E08217DBA3B4DCA150B3293825 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:16>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CRightExpressionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression_set_RightExpression_m32C9F11F1B7C64A2853EA2D1EDAA0BC18D0E775E (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:16>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___0_value;
		__this->___U3CRightExpressionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRightExpressionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 82210
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression_Accept_m87285AA7D23F48EBC1D65506490B17EA950C2822 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* ___0_visitor, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:20>
		LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* L_0 = ___0_visitor;
		NullCheck(L_0);
		VirtualActionInvoker1< TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* >::Invoke(4, L_0, __this);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:21>
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
// Method Definition Index: 82211
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression__ctor_m1FB2772CED5F7227987F4689D8697977BCA3C24E (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, int32_t ___0_type, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___1_expression, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/UnaryExpression.cs:5>
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/UnaryExpression.cs:7>
		int32_t L_0 = ___0_type;
		UnaryExpression_set_Type_m99254492E0713042FF17F8993E77B00312BB5DE1_inline(__this, L_0, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/UnaryExpression.cs:8>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_1 = ___1_expression;
		UnaryExpression_set_Expression_m458F59A7061112E5568F1C100D0655350B6E9029_inline(__this, L_1, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/UnaryExpression.cs:9>
		return;
	}
}
// Method Definition Index: 82212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* UnaryExpression_get_Expression_m048BC347DA44FFBA007ECA3B5C71B26C9A730EED (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/UnaryExpression.cs:11>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CExpressionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82213
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression_set_Expression_m458F59A7061112E5568F1C100D0655350B6E9029 (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/UnaryExpression.cs:11>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___0_value;
		__this->___U3CExpressionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExpressionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 82214
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnaryExpression_get_Type_m1975DEB3A3A893A20EEF225A9B83A818812A457B (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/UnaryExpression.cs:13>
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression_set_Type_m99254492E0713042FF17F8993E77B00312BB5DE1 (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/UnaryExpression.cs:13>
		int32_t L_0 = ___0_value;
		__this->___U3CTypeU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 82216
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression_Accept_m3A43817A0CF736373B199C035BF99EFD9BCF65C5 (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* ___0_visitor, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/UnaryExpression.cs:17>
		LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* L_0 = ___0_visitor;
		NullCheck(L_0);
		VirtualActionInvoker1< UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* >::Invoke(6, L_0, __this);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/UnaryExpression.cs:18>
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
// Method Definition Index: 82217
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m824D9FF0F53B0C67CA4DF6DA22DC29D1C18A9ECB (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, RuntimeObject* ___0_value, int32_t ___1_type, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:7>
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:9>
		RuntimeObject* L_0 = ___0_value;
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_0, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:10>
		int32_t L_1 = ___1_type;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, L_1, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:11>
		return;
	}
}
// Method Definition Index: 82218
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_mACD41125FFF375D20F709F1B2CB4B0002A8D2C97 (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* G_B9_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:13>
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:15>
		RuntimeObject* L_0 = ___0_value;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		int32_t L_2;
		L_2 = Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 3)))
		{
			case 0:
			{
				goto IL_0060;
			}
			case 1:
			{
				goto IL_0092;
			}
			case 2:
			{
				goto IL_007e;
			}
			case 3:
			{
				goto IL_007e;
			}
			case 4:
			{
				goto IL_007e;
			}
			case 5:
			{
				goto IL_007e;
			}
			case 6:
			{
				goto IL_007e;
			}
			case 7:
			{
				goto IL_007e;
			}
			case 8:
			{
				goto IL_007e;
			}
			case 9:
			{
				goto IL_007e;
			}
			case 10:
			{
				goto IL_0074;
			}
			case 11:
			{
				goto IL_0074;
			}
			case 12:
			{
				goto IL_0074;
			}
			case 13:
			{
				goto IL_006a;
			}
			case 14:
			{
				goto IL_0092;
			}
			case 15:
			{
				goto IL_0088;
			}
		}
	}
	{
		goto IL_0092;
	}

IL_0060:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:18>
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 4, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:19>
		goto IL_00ae;
	}

IL_006a:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:22>
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 2, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:23>
		goto IL_00ae;
	}

IL_0074:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:28>
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 3, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:29>
		goto IL_00ae;
	}

IL_007e:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:39>
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 0, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:40>
		goto IL_00ae;
	}

IL_0088:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:43>
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 1, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:44>
		goto IL_00ae;
	}

IL_0092:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:47>
		RuntimeObject* L_5 = ___0_value;
		if (L_5)
		{
			G_B9_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F89784DF2CB8ABD4A4F34F5A767DF3253A9AAFE));
			goto IL_009d;
		}
		G_B8_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F89784DF2CB8ABD4A4F34F5A767DF3253A9AAFE));
	}
	{
		G_B10_0 = ((String_t*)(NULL));
		G_B10_1 = G_B8_0;
		goto IL_00a3;
	}

IL_009d:
	{
		RuntimeObject* L_6 = ___0_value;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_6);
		G_B10_0 = L_7;
		G_B10_1 = G_B9_0;
	}

IL_00a3:
	{
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B10_1, G_B10_0, NULL);
		EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E* L_9 = (EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E_il2cpp_TypeInfo_var)));
		EvaluationException__ctor_mC3545B04D76AEAFC2007507CC0D00D12D4CC6BFE(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueExpression__ctor_mACD41125FFF375D20F709F1B2CB4B0002A8D2C97_RuntimeMethod_var)));
	}

IL_00ae:
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:50>
		RuntimeObject* L_10 = ___0_value;
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_10, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:51>
		return;
	}
}
// Method Definition Index: 82219
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m64932619474457A2EC86AAFB6803242EAF683C9F (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:53>
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:55>
		String_t* L_0 = ___0_value;
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_0, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:56>
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 1, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:57>
		return;
	}
}
// Method Definition Index: 82220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m7E0753DE1AD2DA756C691B84700449E413F7663A (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:59>
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:61>
		int32_t L_0 = ___0_value;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_defaults.int32_class, &L_1);
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_2, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:62>
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 0, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:63>
		return;
	}
}
// Method Definition Index: 82221
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_mE330F904E914D7B454BB195668A6D89C5B5F13DD (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:65>
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:67>
		float L_0 = ___0_value;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_defaults.single_class, &L_1);
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_2, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:68>
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 3, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:69>
		return;
	}
}
// Method Definition Index: 82222
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m5FA864D2F1EC21C1C0788F61CF5B2EB0A203D223 (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:71>
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:73>
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = L_0;
		RuntimeObject* L_2 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_1);
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_2, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:74>
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 2, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:75>
		return;
	}
}
// Method Definition Index: 82223
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m3D94A47FFF8510B37262AD8CE50E6982153BA06A (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:77>
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:79>
		bool L_0 = ___0_value;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_defaults.boolean_class, &L_1);
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_2, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:80>
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 4, NULL);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:81>
		return;
	}
}
// Method Definition Index: 82224
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:83>
		RuntimeObject* L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82225
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:83>
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 82226
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueExpression_get_Type_mB8AC3CE9703854799ACF44BC217CE9F39ED933E5 (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:84>
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82227
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:84>
		int32_t L_0 = ___0_value;
		__this->___U3CTypeU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 82228
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression_Accept_mE406F7BBE8CCC32F795063829B71C5577AC99E07 (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* ___0_visitor, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:88>
		LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* L_0 = ___0_visitor;
		NullCheck(L_0);
		VirtualActionInvoker1< ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* >::Invoke(7, L_0, __this);
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:89>
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
// Method Definition Index: 82229
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mCD31B865A41BB2F8FD3279C909302AD1BB45C92F (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002c;
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
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
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
// Method Definition Index: 82110
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* NCalcParser_get_Errors_m9830250BEAD55AE399B54776A01EDA305F609F22_inline (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:57>
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CErrorsU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82111
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NCalcParser_set_Errors_mA917A8CA379FE5DD8B62A582FD3D196C5C36DD75_inline (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/NCalcParser.cs:57>
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___0_value;
		__this->___U3CErrorsU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorsU3Ek__BackingField), (void*)L_0);
		return;
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
// Method Definition Index: 82191
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParameterArgs_set_HasResult_m9CB8E148415DFDB780A5C5D0299E71AB596A76B8_inline (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ParameterArgs.cs:22>
		bool L_0 = ___0_value;
		__this->___U3CHasResultU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 82195
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SerializationVisitor_set_Result_m1C2912A68EBF051E396DA3EC9A52BFED68A46A36_inline (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, StringBuilder_t* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:16>
		StringBuilder_t* L_0 = ___0_value;
		__this->___U3CResultU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 82204
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_LeftExpression_mDE504809B2CDB09C513D85D62F681F3432EAEBE0_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:12>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CLeftExpressionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82194
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/SerializationVisitor.cs:16>
		StringBuilder_t* L_0 = __this->___U3CResultU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82206
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_MiddleExpression_m31BE5A457389B52577A93E6757D2291A3ABDDFA7_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:14>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CMiddleExpressionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82208
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_RightExpression_m3BB5D4B3540900E08217DBA3B4DCA150B3293825_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:16>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CRightExpressionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 81914
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* BinaryExpression_get_LeftExpression_mD21818A59055D95C304B73471F9D4B782DB63B28_inline (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/BinaryExpression.cs:12>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CLeftExpressionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 81918
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BinaryExpression_get_Type_m643CED48C4A086AB2E63036E53B64DD3D04D10A1_inline (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/BinaryExpression.cs:16>
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 81916
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* BinaryExpression_get_RightExpression_m7CF8195F4CC8C4EEABB53A658BECE92ACEE3BD94_inline (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/BinaryExpression.cs:14>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CRightExpressionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82214
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnaryExpression_get_Type_m1975DEB3A3A893A20EEF225A9B83A818812A457B_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/UnaryExpression.cs:13>
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82212
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* UnaryExpression_get_Expression_m048BC347DA44FFBA007ECA3B5C71B26C9A730EED_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/UnaryExpression.cs:11>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CExpressionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82226
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ValueExpression_get_Type_mB8AC3CE9703854799ACF44BC217CE9F39ED933E5_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:84>
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82224
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:83>
		RuntimeObject* L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 81992
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* FunctionExpression_get_Identifier_mC36B5723E1F5542170364200861FE75527686D3E_inline (FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/FunctionExpression.cs:11>
		IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* L_0 = __this->___U3CIdentifierU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 81998
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IdentifierExpression_get_Name_mEC9209065D0E0A9E5877D0D7CE5C5F06317F27B2_inline (IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/IdentifierExpression.cs:10>
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 81994
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* FunctionExpression_get_Expressions_mDD1CA87B11D2BAE3D578441A3BC83657D0FB9819_inline (FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/FunctionExpression.cs:13>
		LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* L_0 = __this->___U3CExpressionsU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 82205
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_LeftExpression_mA61386087E56C883FC1036D5C1A93347C2C0D7BF_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:12>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___0_value;
		__this->___U3CLeftExpressionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLeftExpressionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 82207
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_MiddleExpression_m78AB85AA7179BE64D7C6EEC0D534DED8E16CBB03_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:14>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___0_value;
		__this->___U3CMiddleExpressionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMiddleExpressionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 82209
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_RightExpression_m32C9F11F1B7C64A2853EA2D1EDAA0BC18D0E775E_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/TernaryExpression.cs:16>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___0_value;
		__this->___U3CRightExpressionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRightExpressionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 82215
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnaryExpression_set_Type_m99254492E0713042FF17F8993E77B00312BB5DE1_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/UnaryExpression.cs:13>
		int32_t L_0 = ___0_value;
		__this->___U3CTypeU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 82213
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnaryExpression_set_Expression_m458F59A7061112E5568F1C100D0655350B6E9029_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/UnaryExpression.cs:11>
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___0_value;
		__this->___U3CExpressionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExpressionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 82225
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:83>
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 82227
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.visualscripting@b4d700247d4b/Runtime/VisualScripting.Flow/Dependencies/NCalc/ValueExpression.cs:84>
		int32_t L_0 = ___0_value;
		__this->___U3CTypeU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 11075
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
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
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
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
