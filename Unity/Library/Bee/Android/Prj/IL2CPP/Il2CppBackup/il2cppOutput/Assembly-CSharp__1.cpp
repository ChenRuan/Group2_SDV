#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
struct Exception_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62;
struct InternalEvent_tC239B49C40C425EF2A2775CA3DE46B3F39DD72BB;
struct MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859;
struct MqttCommunicationException_t016BFB6E56C108061FB2FE6CE77E280AEF4E2EBC;
struct MqttConnectionException_t4133D9B042197DC8ACE467698F13BCD634939476;
struct MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB;
struct MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9;
struct MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE;
struct MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B;
struct MqttMsgPublishedEventArgs_t8E13328196C17B2D79751AB851666268175DA0B0;
struct MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98;
struct MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B;
struct MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214;
struct MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42;
struct MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5;
struct MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120;
struct MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934;
struct MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98;
struct MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29;
struct MqttMsgUnsubscribedEventArgs_t46F3D712F85B4F54BD19B4355690C775FAC35E5D;
struct MqttTimeoutException_t43973937D83859B52199C9D855F55A16DFB478A1;
struct MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84;
struct MsgPublishedInternalEvent_t77F08FECAE4E4CB4F4926233C27C164CADC43873;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral134A5BC016353C36AC521E17B63768B82B9BCD3D;
IL2CPP_EXTERN_C String_t* _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE72AE7C1BE0D0A3142920BDAA4B27896C11E2B;
IL2CPP_EXTERN_C String_t* _stringLiteral5B62E2B5EAD21CB1CA240884FC41C2983538E241;
IL2CPP_EXTERN_C String_t* _stringLiteral74FB4E4B01F7AE144E63083EC53D9222473FB16B;
IL2CPP_EXTERN_C String_t* _stringLiteral93DF057C369004121117C6673B3E24C2366F967C;
IL2CPP_EXTERN_C String_t* _stringLiteralADB9696F2FAD87DE15432AED421F08A3B655D52C;
IL2CPP_EXTERN_C String_t* _stringLiteralAEC326A6692604AB65616A2EBEDEFA56D4F572A2;
IL2CPP_EXTERN_C String_t* _stringLiteralC007C7DED5CDBA0115FD08526C8AF99FA050B84E;
IL2CPP_EXTERN_C String_t* _stringLiteralC547B2F00A9A1E99E291F02403121ED047425195;
IL2CPP_EXTERN_C String_t* _stringLiteralC9ABEA54E864150EDBDE3863FA7913E6586073BC;
IL2CPP_EXTERN_C String_t* _stringLiteralD18BB8748E10A644F72B745C6F647001B495C4A0;
IL2CPP_EXTERN_C String_t* _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
IL2CPP_EXTERN_C String_t* _stringLiteralF11FFD471542CC88349AF88242C2DE74F1E4F415;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPubcomp_Parse_mFF7E638FF02FFC2634AC319551A3B8493035CDAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPublish_GetBytes_m340EEC3C62DF70AB15B3DD792C5919F5F757FB36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPublish_Parse_m6E5CE86359CFBAC2952E151726CEE05F58DCAB53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPubrec_Parse_m3DB26E5FEB864D49A4DFDC3DCEB29C35B6CFA131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPubrel_Parse_m17EAD687465D39B4BC2BF31E17D10483E1FA0A3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgSuback_Parse_m47D0130E2A428D6094ED726B3959F94556E85925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgSubscribe_Parse_mD81D31FEB3833854720D69EF53514CC052E82C17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgUnsuback_Parse_m3487BA8F1FE928B7AF963A1FDC039B7C1D5F3065_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgUnsubscribe_GetBytes_m937D276453E8FB292ACBEE1B4BAC08A757B95A54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgUnsubscribe_Parse_mEB4D26A94F7AC4DCEFE93455EAC41CDAB277185F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items;
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
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
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
struct InternalEvent_tC239B49C40C425EF2A2775CA3DE46B3F39DD72BB  : public RuntimeObject
{
};
struct MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB  : public RuntimeObject
{
	uint8_t ___type;
	bool ___dupFlag;
	uint8_t ___qosLevel;
	bool ___retain;
	uint16_t ___messageId;
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
struct MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
};
struct MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
	String_t* ___topic;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___message;
};
struct MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	String_t* ___topic;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___message;
	bool ___dupFlag;
	uint8_t ___qosLevel;
	bool ___retain;
};
struct MqttMsgPublishedEventArgs_t8E13328196C17B2D79751AB851666268175DA0B0  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	uint16_t ___messageId;
	bool ___isPublished;
};
struct MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
};
struct MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
};
struct MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___grantedQosLevels;
};
struct MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qosLevels;
};
struct MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	uint16_t ___messageId;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qosLevels;
};
struct MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	uint16_t ___messageId;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___grantedQosLevels;
};
struct MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
};
struct MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics;
};
struct MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	uint16_t ___messageId;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics;
};
struct MqttMsgUnsubscribedEventArgs_t46F3D712F85B4F54BD19B4355690C775FAC35E5D  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	uint16_t ___messageId;
};
struct MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84  : public InternalEvent_tC239B49C40C425EF2A2775CA3DE46B3F39DD72BB
{
	MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* ___msg;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
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
struct __StaticArrayInitTypeSizeU3D2924_t559833DEC8F6B8FBDD85641472FB1EC4C753F6A4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2924_t559833DEC8F6B8FBDD85641472FB1EC4C753F6A4__padding[2924];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3063_t167417BA7D0F9D9F2BA68A18C6DADF2C8AB79AB0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3063_t167417BA7D0F9D9F2BA68A18C6DADF2C8AB79AB0__padding[3063];
	};
};
#pragma pack(pop, tp)
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
struct MqttClientErrorCode_t435AE6994427929001A94CD2651D27E49A2817F7 
{
	int32_t ___value__;
};
struct MsgPublishedInternalEvent_t77F08FECAE4E4CB4F4926233C27C164CADC43873  : public MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84
{
	bool ___isPublished;
};
struct MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859  : public Exception_t
{
	int32_t ___errorCode;
};
struct MqttCommunicationException_t016BFB6E56C108061FB2FE6CE77E280AEF4E2EBC  : public Exception_t
{
};
struct MqttConnectionException_t4133D9B042197DC8ACE467698F13BCD634939476  : public Exception_t
{
};
struct MqttTimeoutException_t43973937D83859B52199C9D855F55A16DFB478A1  : public Exception_t
{
};
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray;
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	__StaticArrayInitTypeSizeU3D3063_t167417BA7D0F9D9F2BA68A18C6DADF2C8AB79AB0 ___3928D28C249DE4D0B237B1C92C9B5D30E38CDA717C30F1525596336F9A3E429A;
	__StaticArrayInitTypeSizeU3D2924_t559833DEC8F6B8FBDD85641472FB1EC4C753F6A4 ___706CF89E6CFBBD2982C5B8A67FC670570922B6114A35914E41ED23C0CF4C4CCC;
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
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
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
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0 (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, int32_t ___0_remainingLength, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubcomp__ctor_m7FEB6335A05D280A6C6F2EB4EBFEBE23508E5A1E (MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* __this, int32_t ___0_errorCode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C (RuntimeObject* ___0_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539 (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, String_t* ___0_name, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_fieldNames, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_fieldValues, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublish__ctor_m293046A7E9F398FC7DAD0B30DFDDFDC1999BC2D7 (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, String_t* ___0_topic, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_message, bool ___2_dupFlag, uint8_t ___3_qosLevel, bool ___4_retain, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublish__ctor_mEBCB0917FF5442CAB39A95FAE1F70598989D187E (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventArgs__ctor_m37945B4C38E4232B730B87A6AFCFAC6CE2659939 (MqttMsgPublishedEventArgs_t8E13328196C17B2D79751AB851666268175DA0B0* __this, uint16_t ___0_messageId, bool ___1_isPublished, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubrec__ctor_mB30BDB84C12336787A6E4A86AEF1BD72607938D2 (MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubrel__ctor_m0F8CDE90BB655C17120673B7E73A5F1408FDD6EB (MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSuback__ctor_m469D8F0B93A0B36C1A4D295F3AEB14E5B0FBFDBC (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribe__ctor_m5E9AA30D36FD0659C42FAC4A226DF27878B210DA (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsuback__ctor_mE20D77A0C9F8A1F6F6B4D4597A11A4C6747FC568 (MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribe__ctor_mB5999A22CD1515F66ACEE158BA9533E04B6EFEC7 (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalEvent__ctor_mCA1DB6F9F0C187BBE3C18FDD5B93919DAFC004EC (InternalEvent_tC239B49C40C425EF2A2775CA3DE46B3F39DD72BB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgInternalEvent__ctor_mD2ECF81AE8634E936664761C86E173B6D85824D7 (MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84* __this, MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* ___0_msg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubcomp__ctor_m7FEB6335A05D280A6C6F2EB4EBFEBE23508E5A1E (MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* __this, const RuntimeMethod* method) 
{
	{
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type = (uint8_t)7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgPubcomp_GetBytes_mF80B79C071FA3F8DF9D52D6A91A3F81E2BC1AB03 (MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* __this, uint8_t ___0_protocolVersion, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 2));
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3))));
		V_0 = 1;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001b:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_6;
		V_6 = ((int32_t)(L_6/((int32_t)128)));
		int32_t L_7 = V_6;
		V_7 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_7;
		if (L_8)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_9, L_10)), L_11)));
		V_4 = L_12;
		uint8_t L_13 = ___0_protocolVersion;
		V_8 = (bool)((((int32_t)L_13) == ((int32_t)4))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = L_16;
		V_5 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)112));
		goto IL_0066;
	}

IL_005a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)((int32_t)112));
	}

IL_0066:
	{
		int32_t L_21 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24;
		L_24 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_21, L_22, L_23, NULL);
		V_5 = L_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = L_26;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		uint16_t L_28 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_28>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_4;
		int32_t L_30 = V_5;
		int32_t L_31 = L_30;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		uint16_t L_32 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_32&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_4;
		V_9 = L_33;
		goto IL_00a9;
	}

IL_00a9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_9;
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* MqttMsgPubcomp_Parse_mFF7E638FF02FFC2634AC319551A3B8493035CDAF (uint8_t ___0_fixedHeaderFirstByte, uint8_t ___1_protocolVersion, RuntimeObject* ___2_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* V_6 = NULL;
	{
		V_1 = 0;
		MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* L_0 = (MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9*)il2cpp_codegen_object_new(MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9_il2cpp_TypeInfo_var);
		MqttMsgPubcomp__ctor_m7FEB6335A05D280A6C6F2EB4EBFEBE23508E5A1E(L_0, NULL);
		V_2 = L_0;
		uint8_t L_1 = ___1_protocolVersion;
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t L_3 = ___0_fixedHeaderFirstByte;
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPubcomp_Parse_mFF7E638FF02FFC2634AC319551A3B8493035CDAF_RuntimeMethod_var)));
	}

IL_0029:
	{
	}

IL_002a:
	{
		RuntimeObject* L_6 = ___2_channel;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_3 = L_7;
		int32_t L_8 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		RuntimeObject* L_10 = ___2_channel;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_10, L_11);
		MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_13);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_13)->___messageId = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_18<<8))&((int32_t)65280))));
		MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* L_19 = V_2;
		MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* L_20 = L_19;
		NullCheck(L_20);
		uint16_t L_21 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		NullCheck(L_22);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_20);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_21|(int32_t)L_26)));
		MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* L_27 = V_2;
		V_6 = L_27;
		goto IL_0070;
	}

IL_0070:
	{
		MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* L_28 = V_6;
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPubcomp_ToString_m20C7B93EF9D6A51FAB1A0E27829983C64A8413B7 (MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADB9696F2FAD87DE15432AED421F08A3B655D52C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		uint16_t L_4 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		uint16_t L_5 = L_4;
		RuntimeObject* L_6 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		String_t* L_7;
		L_7 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteralADB9696F2FAD87DE15432AED421F08A3B655D52C, L_1, L_3, NULL);
		V_0 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		String_t* L_8 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPublish_get_Topic_mFBFCA12374312BED82162826DB2B9F3D95FB7B52 (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___topic;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublish_set_Topic_mECF930580FEA4F9CF53005EBAA1F16B6CAB2D39B (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___topic = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topic), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgPublish_get_Message_mCF10D2BA4666A06CEF296F796143A7A6A61D5866 (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___message;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublish_set_Message_mAD7E89566E5158FB3EEC5E15E1379E521D142278 (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___message = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublish__ctor_mEBCB0917FF5442CAB39A95FAE1F70598989D187E (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, const RuntimeMethod* method) 
{
	{
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type = (uint8_t)3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublish__ctor_m571B87B2E06A04F45534EEC3462BE3391A0106BA (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, String_t* ___0_topic, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_message, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_topic;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_message;
		MqttMsgPublish__ctor_m293046A7E9F398FC7DAD0B30DFDDFDC1999BC2D7(__this, L_0, L_1, (bool)0, (uint8_t)0, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublish__ctor_m293046A7E9F398FC7DAD0B30DFDDFDC1999BC2D7 (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, String_t* ___0_topic, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_message, bool ___2_dupFlag, uint8_t ___3_qosLevel, bool ___4_retain, const RuntimeMethod* method) 
{
	{
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type = (uint8_t)3;
		String_t* L_0 = ___0_topic;
		__this->___topic = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topic), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_message;
		__this->___message = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message), (void*)L_1);
		bool L_2 = ___2_dupFlag;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___dupFlag = L_2;
		uint8_t L_3 = ___3_qosLevel;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel = L_3;
		bool L_4 = ___4_retain;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___retain = L_4;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId = (uint16_t)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgPublish_GetBytes_m340EEC3C62DF70AB15B3DD792C5919F5F757FB36 (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, uint8_t ___0_protocolVersion, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_17 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B23_0 = 0;
	uint8_t* G_B23_1 = NULL;
	int32_t G_B22_0 = 0;
	uint8_t* G_B22_1 = NULL;
	int32_t G_B24_0 = 0;
	int32_t G_B24_1 = 0;
	uint8_t* G_B24_2 = NULL;
	int32_t G_B26_0 = 0;
	uint8_t* G_B26_1 = NULL;
	int32_t G_B25_0 = 0;
	uint8_t* G_B25_1 = NULL;
	int32_t G_B27_0 = 0;
	int32_t G_B27_1 = 0;
	uint8_t* G_B27_2 = NULL;
	int32_t G_B30_0 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		String_t* L_0 = __this->___topic;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_0, ((int32_t)35), NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = __this->___topic;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_2, ((int32_t)43), NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B3_0 = 1;
	}

IL_0032:
	{
		V_8 = (bool)G_B3_0;
		bool L_4 = V_8;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, 3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPublish_GetBytes_m340EEC3C62DF70AB15B3DD792C5919F5F757FB36_RuntimeMethod_var)));
	}

IL_003f:
	{
		String_t* L_6 = __this->___topic;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if ((((int32_t)L_7) < ((int32_t)1)))
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_8 = __this->___topic;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		G_B8_0 = ((((int32_t)L_9) > ((int32_t)((int32_t)65535)))? 1 : 0);
		goto IL_0062;
	}

IL_0061:
	{
		G_B8_0 = 1;
	}

IL_0062:
	{
		V_9 = (bool)G_B8_0;
		bool L_10 = V_9;
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_11 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_11, 4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPublish_GetBytes_m340EEC3C62DF70AB15B3DD792C5919F5F757FB36_RuntimeMethod_var)));
	}

IL_006f:
	{
		uint8_t L_12 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel;
		V_10 = (bool)((((int32_t)L_12) > ((int32_t)2))? 1 : 0);
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_0085;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_14 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_14, 5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPublish_GetBytes_m340EEC3C62DF70AB15B3DD792C5919F5F757FB36_RuntimeMethod_var)));
	}

IL_0085:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_15;
		L_15 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_16 = __this->___topic;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_15, L_16);
		V_6 = L_17;
		int32_t L_18 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_6;
		NullCheck(L_19);
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_19)->max_length)), 2))));
		uint8_t L_20 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel;
		if ((((int32_t)L_20) == ((int32_t)1)))
		{
			goto IL_00b4;
		}
	}
	{
		uint8_t L_21 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel;
		G_B15_0 = ((((int32_t)L_21) == ((int32_t)2))? 1 : 0);
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B15_0 = 1;
	}

IL_00b5:
	{
		V_11 = (bool)G_B15_0;
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 2));
	}

IL_00c1:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___message;
		V_12 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_24) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00db;
		}
	}
	{
		int32_t L_26 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___message;
		NullCheck(L_27);
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)(((RuntimeArray*)L_27)->max_length))));
	}

IL_00db:
	{
		int32_t L_28 = V_3;
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, ((int32_t)il2cpp_codegen_add(L_29, L_30))));
		V_0 = 1;
		int32_t L_31 = V_3;
		V_7 = L_31;
	}

IL_00e6:
	{
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		int32_t L_33 = V_7;
		V_7 = ((int32_t)(L_33/((int32_t)128)));
		int32_t L_34 = V_7;
		V_13 = (bool)((((int32_t)L_34) > ((int32_t)0))? 1 : 0);
		bool L_35 = V_13;
		if (L_35)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_36 = V_0;
		int32_t L_37 = V_1;
		int32_t L_38 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_36, L_37)), L_38)));
		V_4 = L_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_4;
		int32_t L_41 = V_5;
		uint8_t L_42 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)48)|((int32_t)((int32_t)L_42<<1))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_4;
		int32_t L_44 = V_5;
		NullCheck(L_43);
		uint8_t* L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)));
		int32_t L_46 = *((uint8_t*)L_45);
		bool L_47 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___dupFlag;
		if (L_47)
		{
			G_B23_0 = L_46;
			G_B23_1 = L_45;
			goto IL_0134;
		}
		G_B22_0 = L_46;
		G_B22_1 = L_45;
	}
	{
		G_B24_0 = 0;
		G_B24_1 = G_B22_0;
		G_B24_2 = G_B22_1;
		goto IL_0135;
	}

IL_0134:
	{
		G_B24_0 = 8;
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
	}

IL_0135:
	{
		*((int8_t*)G_B24_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(G_B24_1|G_B24_0)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_4;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		uint8_t* L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)));
		int32_t L_51 = *((uint8_t*)L_50);
		bool L_52 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___retain;
		if (L_52)
		{
			G_B26_0 = L_51;
			G_B26_1 = L_50;
			goto IL_014e;
		}
		G_B25_0 = L_51;
		G_B25_1 = L_50;
	}
	{
		G_B27_0 = 0;
		G_B27_1 = G_B25_0;
		G_B27_2 = G_B25_1;
		goto IL_014f;
	}

IL_014e:
	{
		G_B27_0 = 1;
		G_B27_1 = G_B26_0;
		G_B27_2 = G_B26_1;
	}

IL_014f:
	{
		*((int8_t*)G_B27_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(G_B27_1|G_B27_0)));
		int32_t L_53 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		int32_t L_54 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_4;
		int32_t L_56 = V_5;
		int32_t L_57;
		L_57 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_54, L_55, L_56, NULL);
		V_5 = L_57;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_4;
		int32_t L_59 = V_5;
		int32_t L_60 = L_59;
		V_5 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_6;
		NullCheck(L_61);
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((RuntimeArray*)L_61)->max_length))>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = V_4;
		int32_t L_63 = V_5;
		int32_t L_64 = L_63;
		V_5 = ((int32_t)il2cpp_codegen_add(L_64, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_6;
		NullCheck(L_65);
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((RuntimeArray*)L_65)->max_length))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_4;
		int32_t L_68 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = V_6;
		NullCheck(L_69);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_66, 0, (RuntimeArray*)L_67, L_68, ((int32_t)(((RuntimeArray*)L_69)->max_length)), NULL);
		int32_t L_70 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = V_6;
		NullCheck(L_71);
		V_5 = ((int32_t)il2cpp_codegen_add(L_70, ((int32_t)(((RuntimeArray*)L_71)->max_length))));
		uint8_t L_72 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel;
		if ((((int32_t)L_72) == ((int32_t)1)))
		{
			goto IL_01bf;
		}
	}
	{
		uint8_t L_73 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel;
		G_B30_0 = ((((int32_t)L_73) == ((int32_t)2))? 1 : 0);
		goto IL_01c0;
	}

IL_01bf:
	{
		G_B30_0 = 1;
	}

IL_01c0:
	{
		V_14 = (bool)G_B30_0;
		bool L_74 = V_14;
		if (!L_74)
		{
			goto IL_020f;
		}
	}
	{
		uint16_t L_75 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		V_15 = (bool)((((int32_t)L_75) == ((int32_t)0))? 1 : 0);
		bool L_76 = V_15;
		if (!L_76)
		{
			goto IL_01de;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_77 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_77, ((int32_t)10), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_77, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPublish_GetBytes_m340EEC3C62DF70AB15B3DD792C5919F5F757FB36_RuntimeMethod_var)));
	}

IL_01de:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = V_4;
		int32_t L_79 = V_5;
		int32_t L_80 = L_79;
		V_5 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		uint16_t L_81 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_81>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = V_4;
		int32_t L_83 = V_5;
		int32_t L_84 = L_83;
		V_5 = ((int32_t)il2cpp_codegen_add(L_84, 1));
		uint16_t L_85 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_85&((int32_t)255)))));
	}

IL_020f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = __this->___message;
		V_16 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_86) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_87 = V_16;
		if (!L_87)
		{
			goto IL_0246;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = __this->___message;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = V_4;
		int32_t L_90 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = __this->___message;
		NullCheck(L_91);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_88, 0, (RuntimeArray*)L_89, L_90, ((int32_t)(((RuntimeArray*)L_91)->max_length)), NULL);
		int32_t L_92 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = __this->___message;
		NullCheck(L_93);
		V_5 = ((int32_t)il2cpp_codegen_add(L_92, ((int32_t)(((RuntimeArray*)L_93)->max_length))));
	}

IL_0246:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = V_4;
		V_17 = L_94;
		goto IL_024c;
	}

IL_024c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = V_17;
		return L_95;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* MqttMsgPublish_Parse_m6E5CE86359CFBAC2952E151726CEE05F58DCAB53 (uint8_t ___0_fixedHeaderFirstByte, uint8_t ___1_protocolVersion, RuntimeObject* ___2_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* V_13 = NULL;
	int32_t G_B5_0 = 0;
	{
		V_1 = 0;
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_0 = (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE*)il2cpp_codegen_object_new(MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE_il2cpp_TypeInfo_var);
		MqttMsgPublish__ctor_mEBCB0917FF5442CAB39A95FAE1F70598989D187E(L_0, NULL);
		V_4 = L_0;
		RuntimeObject* L_1 = ___2_channel;
		int32_t L_2;
		L_2 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_1, NULL);
		V_5 = L_2;
		int32_t L_3 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_0 = L_4;
		RuntimeObject* L_5 = ___2_channel;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_5, L_6);
		V_6 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		NullCheck(L_8);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)(((int32_t)((int32_t)L_12<<8))&((int32_t)65280)));
		int32_t L_13 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = ((int32_t)(L_13|(int32_t)L_18));
		int32_t L_19 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_2 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		int32_t L_22 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_2;
		int32_t L_24 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, L_22, (RuntimeArray*)L_23, 0, L_24, NULL);
		int32_t L_25 = V_1;
		int32_t L_26 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_27 = V_4;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_28;
		L_28 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_2;
		NullCheck(L_28);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_30;
		L_30 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(24, L_28, L_29);
		String_t* L_31;
		L_31 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_30, NULL);
		NullCheck(L_27);
		L_27->___topic = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___topic), (void*)L_31);
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_32 = V_4;
		uint8_t L_33 = ___0_fixedHeaderFirstByte;
		NullCheck(L_32);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_32)->___qosLevel = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_33&6))>>1)));
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_34 = V_4;
		NullCheck(L_34);
		uint8_t L_35 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_34)->___qosLevel;
		V_10 = (bool)((((int32_t)L_35) > ((int32_t)2))? 1 : 0);
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_008e;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_37 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_37, 5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPublish_Parse_m6E5CE86359CFBAC2952E151726CEE05F58DCAB53_RuntimeMethod_var)));
	}

IL_008e:
	{
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_38 = V_4;
		uint8_t L_39 = ___0_fixedHeaderFirstByte;
		NullCheck(L_38);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_38)->___dupFlag = (bool)((((int32_t)((int32_t)(((int32_t)((int32_t)L_39&8))>>3))) == ((int32_t)1))? 1 : 0);
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_40 = V_4;
		uint8_t L_41 = ___0_fixedHeaderFirstByte;
		NullCheck(L_40);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_40)->___retain = (bool)((((int32_t)((int32_t)((int32_t)L_41&1))) == ((int32_t)1))? 1 : 0);
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_42 = V_4;
		NullCheck(L_42);
		uint8_t L_43 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_42)->___qosLevel;
		if ((((int32_t)L_43) == ((int32_t)1)))
		{
			goto IL_00c0;
		}
	}
	{
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_44 = V_4;
		NullCheck(L_44);
		uint8_t L_45 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_44)->___qosLevel;
		G_B5_0 = ((((int32_t)L_45) == ((int32_t)2))? 1 : 0);
		goto IL_00c1;
	}

IL_00c0:
	{
		G_B5_0 = 1;
	}

IL_00c1:
	{
		V_11 = (bool)G_B5_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_00f6;
		}
	}
	{
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_47 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_0;
		int32_t L_49 = V_1;
		int32_t L_50 = L_49;
		V_1 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		NullCheck(L_48);
		int32_t L_51 = L_50;
		uint8_t L_52 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_47);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_47)->___messageId = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_52<<8))&((int32_t)65280))));
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_53 = V_4;
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_54 = L_53;
		NullCheck(L_54);
		uint16_t L_55 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_54)->___messageId;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_0;
		int32_t L_57 = V_1;
		int32_t L_58 = L_57;
		V_1 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		NullCheck(L_56);
		int32_t L_59 = L_58;
		uint8_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_54);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_54)->___messageId = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_55|(int32_t)L_60)));
	}

IL_00f6:
	{
		int32_t L_61 = V_5;
		int32_t L_62 = V_1;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_61, L_62));
		int32_t L_63 = V_7;
		V_8 = L_63;
		V_9 = 0;
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_64 = V_4;
		int32_t L_65 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_65);
		NullCheck(L_64);
		L_64->___message = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&L_64->___message), (void*)L_66);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_0;
		int32_t L_68 = V_1;
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_69 = V_4;
		NullCheck(L_69);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = L_69->___message;
		int32_t L_71 = V_9;
		int32_t L_72 = V_6;
		int32_t L_73 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_67, L_68, (RuntimeArray*)L_70, L_71, ((int32_t)il2cpp_codegen_subtract(L_72, L_73)), NULL);
		int32_t L_74 = V_8;
		int32_t L_75 = V_6;
		int32_t L_76 = V_1;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_74, ((int32_t)il2cpp_codegen_subtract(L_75, L_76))));
		int32_t L_77 = V_9;
		int32_t L_78 = V_6;
		int32_t L_79 = V_1;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, ((int32_t)il2cpp_codegen_subtract(L_78, L_79))));
		goto IL_0166;
	}

IL_013a:
	{
		RuntimeObject* L_80 = ___2_channel;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = V_0;
		NullCheck(L_80);
		int32_t L_82;
		L_82 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_80, L_81);
		V_6 = L_82;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = V_0;
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_84 = V_4;
		NullCheck(L_84);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = L_84->___message;
		int32_t L_86 = V_9;
		int32_t L_87 = V_6;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_83, 0, (RuntimeArray*)L_85, L_86, L_87, NULL);
		int32_t L_88 = V_8;
		int32_t L_89 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_88, L_89));
		int32_t L_90 = V_9;
		int32_t L_91 = V_6;
		V_9 = ((int32_t)il2cpp_codegen_add(L_90, L_91));
	}

IL_0166:
	{
		int32_t L_92 = V_8;
		V_12 = (bool)((((int32_t)L_92) > ((int32_t)0))? 1 : 0);
		bool L_93 = V_12;
		if (L_93)
		{
			goto IL_013a;
		}
	}
	{
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_94 = V_4;
		V_13 = L_94;
		goto IL_0177;
	}

IL_0177:
	{
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_95 = V_13;
		return L_95;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPublish_ToString_m8265CB85BA26DD4AA05F7ECA9745413C5C29E28F (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC547B2F00A9A1E99E291F02403121ED047425195);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18BB8748E10A644F72B745C6F647001B495C4A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralD18BB8748E10A644F72B745C6F647001B495C4A0);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteralD18BB8748E10A644F72B745C6F647001B495C4A0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		uint16_t L_6 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		uint16_t L_7 = L_6;
		RuntimeObject* L_8 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		String_t* L_10 = __this->___topic;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___message;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteralC547B2F00A9A1E99E291F02403121ED047425195, L_3, L_11, NULL);
		V_0 = L_13;
		goto IL_0053;
	}

IL_0053:
	{
		String_t* L_14 = V_0;
		return L_14;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgPublishedEventArgs_get_MessageId_m4593BAD5208396A38961E4F4414885DC727AE00C (MqttMsgPublishedEventArgs_t8E13328196C17B2D79751AB851666268175DA0B0* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->___messageId;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventArgs_set_MessageId_mAD32DE0A57B136D32F25B50C72CD5C7AE6B04244 (MqttMsgPublishedEventArgs_t8E13328196C17B2D79751AB851666268175DA0B0* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___messageId = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttMsgPublishedEventArgs_get_IsPublished_m2D4CE8E17BEB8170D2F86892AF4CA869AC0E1861 (MqttMsgPublishedEventArgs_t8E13328196C17B2D79751AB851666268175DA0B0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___isPublished;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventArgs_set_IsPublished_m53D02ED5C8691C12DFA4D64AACB01B908A97BF79 (MqttMsgPublishedEventArgs_t8E13328196C17B2D79751AB851666268175DA0B0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___isPublished = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventArgs__ctor_m854CBF244F2CC01B52278E2BA6296850BBC9DF87 (MqttMsgPublishedEventArgs_t8E13328196C17B2D79751AB851666268175DA0B0* __this, uint16_t ___0_messageId, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_messageId;
		MqttMsgPublishedEventArgs__ctor_m37945B4C38E4232B730B87A6AFCFAC6CE2659939(__this, L_0, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventArgs__ctor_m37945B4C38E4232B730B87A6AFCFAC6CE2659939 (MqttMsgPublishedEventArgs_t8E13328196C17B2D79751AB851666268175DA0B0* __this, uint16_t ___0_messageId, bool ___1_isPublished, const RuntimeMethod* method) 
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
		uint16_t L_0 = ___0_messageId;
		__this->___messageId = L_0;
		bool L_1 = ___1_isPublished;
		__this->___isPublished = L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPublishEventArgs_get_Topic_m061650CA33601B27674084A690293F09EAAC065E (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___topic;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventArgs_set_Topic_mD5FA18D790C72EA4D882157638205F0B94671CC5 (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___topic = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topic), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgPublishEventArgs_get_Message_m3F04F811144A7FC49C889389C56757689E328693 (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___message;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventArgs_set_Message_m851E5FC1785C4407A569E454DE9891A7E80F8256 (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___message = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttMsgPublishEventArgs_get_DupFlag_m2F6619549F575168C634F6BDD46A7D14530F3804 (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___dupFlag;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventArgs_set_DupFlag_m6B272B7302862AFCEBD3CEB2A720FF47D253AA8A (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___dupFlag = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MqttMsgPublishEventArgs_get_QosLevel_m36C0639A6DCE6B5FBF28AA8BDE8F72195B0DEB8B (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->___qosLevel;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventArgs_set_QosLevel_m8F1F2C89D23DE7E95EA6688506FFC7A44379D644 (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___qosLevel = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttMsgPublishEventArgs_get_Retain_mB2FBACF7C3AB4C0113B38798EEBC3945B71CCE6F (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___retain;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventArgs_set_Retain_mB2FC74F2B21151F28A76F9C5A193FDE57D318579 (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___retain = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventArgs__ctor_mC973BF4474D2585B305EF27273F574456AB28517 (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, String_t* ___0_topic, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_message, bool ___2_dupFlag, uint8_t ___3_qosLevel, bool ___4_retain, const RuntimeMethod* method) 
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
		String_t* L_0 = ___0_topic;
		__this->___topic = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topic), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_message;
		__this->___message = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message), (void*)L_1);
		bool L_2 = ___2_dupFlag;
		__this->___dupFlag = L_2;
		uint8_t L_3 = ___3_qosLevel;
		__this->___qosLevel = L_3;
		bool L_4 = ___4_retain;
		__this->___retain = L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubrec__ctor_mB30BDB84C12336787A6E4A86AEF1BD72607938D2 (MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* __this, const RuntimeMethod* method) 
{
	{
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type = (uint8_t)5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgPubrec_GetBytes_m16EE84E6F5F1320F3477F024F05B3012A5EAB7AB (MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* __this, uint8_t ___0_protocolVersion, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 2));
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3))));
		V_0 = 1;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001b:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_6;
		V_6 = ((int32_t)(L_6/((int32_t)128)));
		int32_t L_7 = V_6;
		V_7 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_7;
		if (L_8)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_9, L_10)), L_11)));
		V_4 = L_12;
		uint8_t L_13 = ___0_protocolVersion;
		V_8 = (bool)((((int32_t)L_13) == ((int32_t)4))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = L_16;
		V_5 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)80));
		goto IL_0066;
	}

IL_005a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)((int32_t)80));
	}

IL_0066:
	{
		int32_t L_21 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24;
		L_24 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_21, L_22, L_23, NULL);
		V_5 = L_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = L_26;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		uint16_t L_28 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_28>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_4;
		int32_t L_30 = V_5;
		int32_t L_31 = L_30;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		uint16_t L_32 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_32&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_4;
		V_9 = L_33;
		goto IL_00a9;
	}

IL_00a9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_9;
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* MqttMsgPubrec_Parse_m3DB26E5FEB864D49A4DFDC3DCEB29C35B6CFA131 (uint8_t ___0_fixedHeaderFirstByte, uint8_t ___1_protocolVersion, RuntimeObject* ___2_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* V_6 = NULL;
	{
		V_1 = 0;
		MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* L_0 = (MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98*)il2cpp_codegen_object_new(MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98_il2cpp_TypeInfo_var);
		MqttMsgPubrec__ctor_mB30BDB84C12336787A6E4A86AEF1BD72607938D2(L_0, NULL);
		V_2 = L_0;
		uint8_t L_1 = ___1_protocolVersion;
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t L_3 = ___0_fixedHeaderFirstByte;
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPubrec_Parse_m3DB26E5FEB864D49A4DFDC3DCEB29C35B6CFA131_RuntimeMethod_var)));
	}

IL_0029:
	{
	}

IL_002a:
	{
		RuntimeObject* L_6 = ___2_channel;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_3 = L_7;
		int32_t L_8 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		RuntimeObject* L_10 = ___2_channel;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_10, L_11);
		MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_13);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_13)->___messageId = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_18<<8))&((int32_t)65280))));
		MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* L_19 = V_2;
		MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* L_20 = L_19;
		NullCheck(L_20);
		uint16_t L_21 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		NullCheck(L_22);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_20);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_21|(int32_t)L_26)));
		MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* L_27 = V_2;
		V_6 = L_27;
		goto IL_0070;
	}

IL_0070:
	{
		MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* L_28 = V_6;
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPubrec_ToString_mD9DACC8A1C52A3D8F2480A8CA12B5B39C489D9DC (MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral134A5BC016353C36AC521E17B63768B82B9BCD3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		uint16_t L_4 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		uint16_t L_5 = L_4;
		RuntimeObject* L_6 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		String_t* L_7;
		L_7 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteral134A5BC016353C36AC521E17B63768B82B9BCD3D, L_1, L_3, NULL);
		V_0 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		String_t* L_8 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubrel__ctor_m0F8CDE90BB655C17120673B7E73A5F1408FDD6EB (MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* __this, const RuntimeMethod* method) 
{
	{
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type = (uint8_t)6;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel = (uint8_t)1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgPubrel_GetBytes_m107F0D310AF4AD936C687B61E8CF5D8DDF095D84 (MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* __this, uint8_t ___0_protocolVersion, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	int32_t G_B6_0 = 0;
	uint8_t* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	uint8_t* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	uint8_t* G_B7_2 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 2));
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3))));
		V_0 = 1;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001b:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_6;
		V_6 = ((int32_t)(L_6/((int32_t)128)));
		int32_t L_7 = V_6;
		V_7 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_7;
		if (L_8)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_9, L_10)), L_11)));
		V_4 = L_12;
		uint8_t L_13 = ___0_protocolVersion;
		V_8 = (bool)((((int32_t)L_13) == ((int32_t)4))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = L_16;
		V_5 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)98));
		goto IL_008d;
	}

IL_005a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		int32_t L_19 = V_5;
		uint8_t L_20 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)96)|((int32_t)((int32_t)L_20<<1))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_4;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		uint8_t* L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)));
		int32_t L_24 = *((uint8_t*)L_23);
		bool L_25 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___dupFlag;
		if (L_25)
		{
			G_B6_0 = L_24;
			G_B6_1 = L_23;
			goto IL_0082;
		}
		G_B5_0 = L_24;
		G_B5_1 = L_23;
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0083;
	}

IL_0082:
	{
		G_B7_0 = 8;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0083:
	{
		*((int8_t*)G_B7_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(G_B7_1|G_B7_0)));
		int32_t L_26 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_008d:
	{
		int32_t L_27 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_4;
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_27, L_28, L_29, NULL);
		V_5 = L_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_4;
		int32_t L_32 = V_5;
		int32_t L_33 = L_32;
		V_5 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		uint16_t L_34 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_34>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_4;
		int32_t L_36 = V_5;
		int32_t L_37 = L_36;
		V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		uint16_t L_38 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_38&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_4;
		V_9 = L_39;
		goto IL_00d0;
	}

IL_00d0:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_9;
		return L_40;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* MqttMsgPubrel_Parse_m17EAD687465D39B4BC2BF31E17D10483E1FA0A3F (uint8_t ___0_fixedHeaderFirstByte, uint8_t ___1_protocolVersion, RuntimeObject* ___2_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* V_7 = NULL;
	{
		V_1 = 0;
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_0 = (MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B*)il2cpp_codegen_object_new(MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B_il2cpp_TypeInfo_var);
		MqttMsgPubrel__ctor_m0F8CDE90BB655C17120673B7E73A5F1408FDD6EB(L_0, NULL);
		V_2 = L_0;
		uint8_t L_1 = ___1_protocolVersion;
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		uint8_t L_3 = ___0_fixedHeaderFirstByte;
		V_5 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPubrel_Parse_m17EAD687465D39B4BC2BF31E17D10483E1FA0A3F_RuntimeMethod_var)));
	}

IL_002c:
	{
	}

IL_002d:
	{
		RuntimeObject* L_6 = ___2_channel;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_3 = L_7;
		int32_t L_8 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		RuntimeObject* L_10 = ___2_channel;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_10, L_11);
		uint8_t L_13 = ___1_protocolVersion;
		V_6 = (bool)((((int32_t)L_13) == ((int32_t)3))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_0069;
		}
	}
	{
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_15 = V_2;
		uint8_t L_16 = ___0_fixedHeaderFirstByte;
		NullCheck(L_15);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_15)->___qosLevel = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_16&6))>>1)));
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_17 = V_2;
		uint8_t L_18 = ___0_fixedHeaderFirstByte;
		NullCheck(L_17);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_17)->___dupFlag = (bool)((((int32_t)((int32_t)(((int32_t)((int32_t)L_18&8))>>3))) == ((int32_t)1))? 1 : 0);
	}

IL_0069:
	{
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_19 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		NullCheck(L_20);
		int32_t L_23 = L_22;
		uint8_t L_24 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_19);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_19)->___messageId = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_24<<8))&((int32_t)65280))));
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_25 = V_2;
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_26 = L_25;
		NullCheck(L_26);
		uint16_t L_27 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_26)->___messageId;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_0;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		NullCheck(L_28);
		int32_t L_31 = L_30;
		uint8_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_26);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_26)->___messageId = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_27|(int32_t)L_32)));
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_33 = V_2;
		V_7 = L_33;
		goto IL_0099;
	}

IL_0099:
	{
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_34 = V_7;
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPubrel_ToString_m26EBDD54A5BAAE3C702585C0ECC7E4EF97BD9F17 (MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC007C7DED5CDBA0115FD08526C8AF99FA050B84E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		uint16_t L_4 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		uint16_t L_5 = L_4;
		RuntimeObject* L_6 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		String_t* L_7;
		L_7 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteralC007C7DED5CDBA0115FD08526C8AF99FA050B84E, L_1, L_3, NULL);
		V_0 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		String_t* L_8 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgSuback_get_GrantedQoSLevels_m881CE92269A02B2C37E26A08FE4F3A4A81128C38 (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___grantedQosLevels;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSuback_set_GrantedQoSLevels_m557F90AFAED1457782DF7324B9CF9B0E01CFE7FB (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___grantedQosLevels = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grantedQosLevels), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSuback__ctor_m469D8F0B93A0B36C1A4D295F3AEB14E5B0FBFDBC (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* __this, const RuntimeMethod* method) 
{
	{
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type = (uint8_t)((int32_t)9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* MqttMsgSuback_Parse_m47D0130E2A428D6094ED726B3959F94556E85925 (uint8_t ___0_fixedHeaderFirstByte, uint8_t ___1_protocolVersion, RuntimeObject* ___2_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* V_8 = NULL;
	{
		V_1 = 0;
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_0 = (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214*)il2cpp_codegen_object_new(MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214_il2cpp_TypeInfo_var);
		MqttMsgSuback__ctor_m469D8F0B93A0B36C1A4D295F3AEB14E5B0FBFDBC(L_0, NULL);
		V_2 = L_0;
		uint8_t L_1 = ___1_protocolVersion;
		V_5 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t L_3 = ___0_fixedHeaderFirstByte;
		V_6 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_6;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSuback_Parse_m47D0130E2A428D6094ED726B3959F94556E85925_RuntimeMethod_var)));
	}

IL_0029:
	{
	}

IL_002a:
	{
		RuntimeObject* L_6 = ___2_channel;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_3 = L_7;
		int32_t L_8 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		RuntimeObject* L_10 = ___2_channel;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_10, L_11);
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_13);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_13)->___messageId = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_18<<8))&((int32_t)65280))));
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_19 = V_2;
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_20 = L_19;
		NullCheck(L_20);
		uint16_t L_21 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		NullCheck(L_22);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_20);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_21|(int32_t)L_26)));
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_27 = V_2;
		int32_t L_28 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_28, 2)));
		NullCheck(L_27);
		L_27->___grantedQosLevels = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___grantedQosLevels), (void*)L_29);
		V_4 = 0;
	}

IL_007c:
	{
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_30 = V_2;
		NullCheck(L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = L_30->___grantedQosLevels;
		int32_t L_32 = V_4;
		int32_t L_33 = L_32;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_0;
		int32_t L_35 = V_1;
		int32_t L_36 = L_35;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		NullCheck(L_34);
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (uint8_t)L_38);
		int32_t L_39 = V_1;
		int32_t L_40 = V_3;
		V_7 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_7;
		if (L_41)
		{
			goto IL_007c;
		}
	}
	{
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_42 = V_2;
		V_8 = L_42;
		goto IL_00a2;
	}

IL_00a2:
	{
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_43 = V_8;
		return L_43;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgSuback_GetBytes_mD8E27F4456B2A95CC39DC94CC80C034F14D5F352 (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* __this, uint8_t ___0_protocolVersion, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 2));
		V_6 = 0;
		V_6 = 0;
		goto IL_0024;
	}

IL_0018:
	{
		int32_t L_1 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0024:
	{
		int32_t L_3 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___grantedQosLevels;
		NullCheck(L_4);
		V_8 = (bool)((((int32_t)L_3) < ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))? 1 : 0);
		bool L_5 = V_8;
		if (L_5)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_6 = V_3;
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)il2cpp_codegen_add(L_7, L_8))));
		V_0 = 1;
		int32_t L_9 = V_3;
		V_7 = L_9;
	}

IL_0041:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = V_7;
		V_7 = ((int32_t)(L_11/((int32_t)128)));
		int32_t L_12 = V_7;
		V_9 = (bool)((((int32_t)L_12) > ((int32_t)0))? 1 : 0);
		bool L_13 = V_9;
		if (L_13)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)));
		V_4 = L_17;
		uint8_t L_18 = ___0_protocolVersion;
		V_10 = (bool)((((int32_t)L_18) == ((int32_t)4))? 1 : 0);
		bool L_19 = V_10;
		if (!L_19)
		{
			goto IL_0083;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_4;
		int32_t L_21 = V_5;
		int32_t L_22 = L_21;
		V_5 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint8_t)((int32_t)144));
		goto IL_0092;
	}

IL_0083:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_4;
		int32_t L_24 = V_5;
		int32_t L_25 = L_24;
		V_5 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)((int32_t)144));
	}

IL_0092:
	{
		int32_t L_26 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_4;
		int32_t L_28 = V_5;
		int32_t L_29;
		L_29 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_26, L_27, L_28, NULL);
		V_5 = L_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_4;
		int32_t L_31 = V_5;
		int32_t L_32 = L_31;
		V_5 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		uint16_t L_33 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_33>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_4;
		int32_t L_35 = V_5;
		int32_t L_36 = L_35;
		V_5 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		uint16_t L_37 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_37&((int32_t)255)))));
		V_6 = 0;
		goto IL_00ef;
	}

IL_00d4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_4;
		int32_t L_39 = V_5;
		int32_t L_40 = L_39;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->___grantedQosLevels;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		uint8_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (uint8_t)L_44);
		int32_t L_45 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00ef:
	{
		int32_t L_46 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___grantedQosLevels;
		NullCheck(L_47);
		V_11 = (bool)((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))))? 1 : 0);
		bool L_48 = V_11;
		if (L_48)
		{
			goto IL_00d4;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_4;
		V_12 = L_49;
		goto IL_0107;
	}

IL_0107:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_12;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgSuback_ToString_mF3452B6FB23598C0DD8E77C1E9B47DF058982E92 (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B62E2B5EAD21CB1CA240884FC41C2983538E241);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93DF057C369004121117C6673B3E24C2366F967C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral5B62E2B5EAD21CB1CA240884FC41C2983538E241);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteral5B62E2B5EAD21CB1CA240884FC41C2983538E241);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		uint16_t L_5 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___grantedQosLevels;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		String_t* L_10;
		L_10 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteral93DF057C369004121117C6673B3E24C2366F967C, L_2, L_8, NULL);
		V_0 = L_10;
		goto IL_0042;
	}

IL_0042:
	{
		String_t* L_11 = V_0;
		return L_11;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MqttMsgSubscribe_get_Topics_mBF2D19E3B4F35FD5FA75822E174801557A6EFB0D (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___topics;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribe_set_Topics_m64ABCBE107AE277A744299DECB4C2FE73532F7DE (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_value, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_value;
		__this->___topics = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgSubscribe_get_QoSLevels_m727E4E956B6EF2B1D9913AD60CC4F3FF87FDE47F (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___qosLevels;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribe_set_QoSLevels_m50BF1E2CFA283B48843CB88FD4C093AA3DE96648 (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___qosLevels = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qosLevels), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribe__ctor_m5E9AA30D36FD0659C42FAC4A226DF27878B210DA (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, const RuntimeMethod* method) 
{
	{
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type = (uint8_t)8;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribe__ctor_m03C757BE9B7FB41EC068B5AEFEBD42D3F8E9FBAB (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_topics, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_qosLevels, const RuntimeMethod* method) 
{
	{
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type = (uint8_t)8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_topics;
		__this->___topics = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_qosLevels;
		__this->___qosLevels = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qosLevels), (void*)L_1);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel = (uint8_t)1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* MqttMsgSubscribe_Parse_mD81D31FEB3833854720D69EF53514CC052E82C17 (uint8_t ___0_fixedHeaderFirstByte, uint8_t ___1_protocolVersion, RuntimeObject* ___2_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* V_15 = NULL;
	{
		V_1 = 0;
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_0 = (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42*)il2cpp_codegen_object_new(MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42_il2cpp_TypeInfo_var);
		MqttMsgSubscribe__ctor_m5E9AA30D36FD0659C42FAC4A226DF27878B210DA(L_0, NULL);
		V_4 = L_0;
		uint8_t L_1 = ___1_protocolVersion;
		V_9 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_9;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		uint8_t L_3 = ___0_fixedHeaderFirstByte;
		V_10 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_10;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSubscribe_Parse_mD81D31FEB3833854720D69EF53514CC052E82C17_RuntimeMethod_var)));
	}

IL_002d:
	{
	}

IL_002e:
	{
		RuntimeObject* L_6 = ___2_channel;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_5 = L_7;
		int32_t L_8 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		RuntimeObject* L_10 = ___2_channel;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_10, L_11);
		V_6 = L_12;
		uint8_t L_13 = ___1_protocolVersion;
		V_11 = (bool)((((int32_t)L_13) == ((int32_t)3))? 1 : 0);
		bool L_14 = V_11;
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_15 = V_4;
		uint8_t L_16 = ___0_fixedHeaderFirstByte;
		NullCheck(L_15);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_15)->___qosLevel = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_16&6))>>1)));
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_17 = V_4;
		uint8_t L_18 = ___0_fixedHeaderFirstByte;
		NullCheck(L_17);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_17)->___dupFlag = (bool)((((int32_t)((int32_t)(((int32_t)((int32_t)L_18&8))>>3))) == ((int32_t)1))? 1 : 0);
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_19 = V_4;
		NullCheck(L_19);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_19)->___retain = (bool)0;
	}

IL_0077:
	{
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_20 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		NullCheck(L_21);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_20);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_25<<8))&((int32_t)65280))));
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_26 = V_4;
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_27 = L_26;
		NullCheck(L_27);
		uint16_t L_28 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_27)->___messageId;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_0;
		int32_t L_30 = V_1;
		int32_t L_31 = L_30;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		NullCheck(L_29);
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_27);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_27)->___messageId = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_28|(int32_t)L_33)));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_34 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_34, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_7 = L_34;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_35 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_35, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_8 = L_35;
	}

IL_00b2:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		int32_t L_37 = V_1;
		int32_t L_38 = L_37;
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		NullCheck(L_36);
		int32_t L_39 = L_38;
		uint8_t L_40 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_3 = ((int32_t)(((int32_t)((int32_t)L_40<<8))&((int32_t)65280)));
		int32_t L_41 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_0;
		int32_t L_43 = V_1;
		int32_t L_44 = L_43;
		V_1 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		NullCheck(L_42);
		int32_t L_45 = L_44;
		uint8_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_3 = ((int32_t)(L_41|(int32_t)L_46));
		int32_t L_47 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_47);
		V_2 = L_48;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_0;
		int32_t L_50 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_2;
		int32_t L_52 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_49, L_50, (RuntimeArray*)L_51, 0, L_52, NULL);
		int32_t L_53 = V_1;
		int32_t L_54 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_53, L_54));
		RuntimeObject* L_55 = V_7;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_56;
		L_56 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_2;
		NullCheck(L_56);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58;
		L_58 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(24, L_56, L_57);
		String_t* L_59;
		L_59 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_58, NULL);
		NullCheck(L_55);
		InterfaceActionInvoker1< String_t* >::Invoke(2, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_55, L_59);
		RuntimeObject* L_60 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_0;
		int32_t L_62 = V_1;
		int32_t L_63 = L_62;
		V_1 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		NullCheck(L_61);
		int32_t L_64 = L_63;
		uint8_t L_65 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_60);
		InterfaceActionInvoker1< uint8_t >::Invoke(2, ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var, L_60, L_65);
		int32_t L_66 = V_1;
		int32_t L_67 = V_5;
		V_12 = (bool)((((int32_t)L_66) < ((int32_t)L_67))? 1 : 0);
		bool L_68 = V_12;
		if (L_68)
		{
			goto IL_00b2;
		}
	}
	{
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_69 = V_4;
		RuntimeObject* L_70 = V_7;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_71);
		NullCheck(L_69);
		L_69->___topics = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&L_69->___topics), (void*)L_72);
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_73 = V_4;
		RuntimeObject* L_74 = V_8;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var, L_74);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_75);
		NullCheck(L_73);
		L_73->___qosLevels = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&L_73->___qosLevels), (void*)L_76);
		V_13 = 0;
		goto IL_016f;
	}

IL_0141:
	{
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_77 = V_4;
		NullCheck(L_77);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = L_77->___topics;
		int32_t L_79 = V_13;
		RuntimeObject* L_80 = V_7;
		int32_t L_81 = V_13;
		NullCheck(L_80);
		String_t* L_82;
		L_82 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0, IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var, L_80, L_81);
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (String_t*)L_82);
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_83 = V_4;
		NullCheck(L_83);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = L_83->___qosLevels;
		int32_t L_85 = V_13;
		RuntimeObject* L_86 = V_8;
		int32_t L_87 = V_13;
		NullCheck(L_86);
		uint8_t L_88;
		L_88 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0, IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C_il2cpp_TypeInfo_var, L_86, L_87);
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(L_85), (uint8_t)L_88);
		int32_t L_89 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_016f:
	{
		int32_t L_90 = V_13;
		RuntimeObject* L_91 = V_7;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_91);
		V_14 = (bool)((((int32_t)L_90) < ((int32_t)L_92))? 1 : 0);
		bool L_93 = V_14;
		if (L_93)
		{
			goto IL_0141;
		}
	}
	{
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_94 = V_4;
		V_15 = L_94;
		goto IL_0186;
	}

IL_0186:
	{
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_95 = V_15;
		return L_95;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1 (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, uint8_t ___0_protocolVersion, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_7 = NULL;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_18 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B26_0 = 0;
	uint8_t* G_B26_1 = NULL;
	int32_t G_B25_0 = 0;
	uint8_t* G_B25_1 = NULL;
	int32_t G_B27_0 = 0;
	int32_t G_B27_1 = 0;
	uint8_t* G_B27_2 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___topics;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___topics;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 1;
	}

IL_0021:
	{
		V_9 = (bool)G_B3_0;
		bool L_2 = V_9;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_3 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_3, 6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1_RuntimeMethod_var)));
	}

IL_002e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___qosLevels;
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___qosLevels;
		NullCheck(L_5);
		G_B8_0 = ((((int32_t)(((RuntimeArray*)L_5)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 1;
	}

IL_0043:
	{
		V_10 = (bool)G_B8_0;
		bool L_6 = V_10;
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_7 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_7, 7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1_RuntimeMethod_var)));
	}

IL_0050:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = __this->___topics;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___qosLevels;
		NullCheck(L_9);
		V_11 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_11;
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_11 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_11, 8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1_RuntimeMethod_var)));
	}

IL_0072:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 2));
		V_6 = 0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = __this->___topics;
		NullCheck(L_13);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_14 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)));
		V_7 = L_14;
		V_6 = 0;
		goto IL_00f5;
	}

IL_008d:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = __this->___topics;
		int32_t L_16 = V_6;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		String_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_18, NULL);
		if ((((int32_t)L_19) < ((int32_t)1)))
		{
			goto IL_00b6;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = __this->___topics;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		int32_t L_24;
		L_24 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_23, NULL);
		G_B16_0 = ((((int32_t)L_24) > ((int32_t)((int32_t)65535)))? 1 : 0);
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B16_0 = 1;
	}

IL_00b7:
	{
		V_12 = (bool)G_B16_0;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_26 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_26, 4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1_RuntimeMethod_var)));
	}

IL_00c4:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_27 = V_7;
		int32_t L_28 = V_6;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_29;
		L_29 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = __this->___topics;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_29);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34;
		L_34 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_29, L_33);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_34);
		int32_t L_35 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_35, 2));
		int32_t L_36 = V_2;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_37 = V_7;
		int32_t L_38 = V_6;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		V_2 = ((int32_t)il2cpp_codegen_add(L_36, ((int32_t)(((RuntimeArray*)L_40)->max_length))));
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00f5:
	{
		int32_t L_43 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = __this->___topics;
		NullCheck(L_44);
		V_13 = (bool)((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))? 1 : 0);
		bool L_45 = V_13;
		if (L_45)
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_46 = V_3;
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, ((int32_t)il2cpp_codegen_add(L_47, L_48))));
		V_0 = 1;
		int32_t L_49 = V_3;
		V_8 = L_49;
	}

IL_0112:
	{
		int32_t L_50 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = V_8;
		V_8 = ((int32_t)(L_51/((int32_t)128)));
		int32_t L_52 = V_8;
		V_14 = (bool)((((int32_t)L_52) > ((int32_t)0))? 1 : 0);
		bool L_53 = V_14;
		if (L_53)
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_54 = V_0;
		int32_t L_55 = V_1;
		int32_t L_56 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_54, L_55)), L_56)));
		V_4 = L_57;
		uint8_t L_58 = ___0_protocolVersion;
		V_15 = (bool)((((int32_t)L_58) == ((int32_t)4))? 1 : 0);
		bool L_59 = V_15;
		if (!L_59)
		{
			goto IL_0154;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_4;
		int32_t L_61 = V_5;
		int32_t L_62 = L_61;
		V_5 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (uint8_t)((int32_t)130));
		goto IL_018a;
	}

IL_0154:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_4;
		int32_t L_64 = V_5;
		uint8_t L_65 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)128)|((int32_t)((int32_t)L_65<<1))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = V_4;
		int32_t L_67 = V_5;
		NullCheck(L_66);
		uint8_t* L_68 = ((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)));
		int32_t L_69 = *((uint8_t*)L_68);
		bool L_70 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___dupFlag;
		if (L_70)
		{
			G_B26_0 = L_69;
			G_B26_1 = L_68;
			goto IL_017f;
		}
		G_B25_0 = L_69;
		G_B25_1 = L_68;
	}
	{
		G_B27_0 = 0;
		G_B27_1 = G_B25_0;
		G_B27_2 = G_B25_1;
		goto IL_0180;
	}

IL_017f:
	{
		G_B27_0 = 8;
		G_B27_1 = G_B26_0;
		G_B27_2 = G_B26_1;
	}

IL_0180:
	{
		*((int8_t*)G_B27_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(G_B27_1|G_B27_0)));
		int32_t L_71 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_018a:
	{
		int32_t L_72 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = V_4;
		int32_t L_74 = V_5;
		int32_t L_75;
		L_75 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_72, L_73, L_74, NULL);
		V_5 = L_75;
		uint16_t L_76 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		V_16 = (bool)((((int32_t)L_76) == ((int32_t)0))? 1 : 0);
		bool L_77 = V_16;
		if (!L_77)
		{
			goto IL_01ae;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_78 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_78, ((int32_t)10), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_78, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1_RuntimeMethod_var)));
	}

IL_01ae:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = V_4;
		int32_t L_80 = V_5;
		int32_t L_81 = L_80;
		V_5 = ((int32_t)il2cpp_codegen_add(L_81, 1));
		uint16_t L_82 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_82>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = V_4;
		int32_t L_84 = V_5;
		int32_t L_85 = L_84;
		V_5 = ((int32_t)il2cpp_codegen_add(L_85, 1));
		uint16_t L_86 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_85), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_86&((int32_t)255)))));
		V_6 = 0;
		V_6 = 0;
		goto IL_0256;
	}

IL_01e6:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = V_4;
		int32_t L_88 = V_5;
		int32_t L_89 = L_88;
		V_5 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_90 = V_7;
		int32_t L_91 = V_6;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_93);
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((RuntimeArray*)L_93)->max_length))>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = V_4;
		int32_t L_95 = V_5;
		int32_t L_96 = L_95;
		V_5 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_97 = V_7;
		int32_t L_98 = V_6;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		NullCheck(L_100);
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(L_96), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((RuntimeArray*)L_100)->max_length))&((int32_t)255)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_101 = V_7;
		int32_t L_102 = V_6;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_105 = V_4;
		int32_t L_106 = V_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_107 = V_7;
		int32_t L_108 = V_6;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		NullCheck(L_110);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_104, 0, (RuntimeArray*)L_105, L_106, ((int32_t)(((RuntimeArray*)L_110)->max_length)), NULL);
		int32_t L_111 = V_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_112 = V_7;
		int32_t L_113 = V_6;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_115);
		V_5 = ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)(((RuntimeArray*)L_115)->max_length))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_116 = V_4;
		int32_t L_117 = V_5;
		int32_t L_118 = L_117;
		V_5 = ((int32_t)il2cpp_codegen_add(L_118, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_119 = __this->___qosLevels;
		int32_t L_120 = V_6;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		uint8_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(L_118), (uint8_t)L_122);
		int32_t L_123 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_0256:
	{
		int32_t L_124 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_125 = __this->___topics;
		NullCheck(L_125);
		V_17 = (bool)((((int32_t)L_124) < ((int32_t)((int32_t)(((RuntimeArray*)L_125)->max_length))))? 1 : 0);
		bool L_126 = V_17;
		if (L_126)
		{
			goto IL_01e6;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_127 = V_4;
		V_18 = L_127;
		goto IL_0271;
	}

IL_0271:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_128 = V_18;
		return L_128;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgSubscribe_ToString_mF3C92B0EE686890CF9A58382FD0B170D864C7625 (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEC326A6692604AB65616A2EBEDEFA56D4F572A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9ABEA54E864150EDBDE3863FA7913E6586073BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF11FFD471542CC88349AF88242C2DE74F1E4F415);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralAEC326A6692604AB65616A2EBEDEFA56D4F572A2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteralAEC326A6692604AB65616A2EBEDEFA56D4F572A2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralF11FFD471542CC88349AF88242C2DE74F1E4F415);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralF11FFD471542CC88349AF88242C2DE74F1E4F415);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		uint16_t L_6 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		uint16_t L_7 = L_6;
		RuntimeObject* L_8 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = __this->___topics;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___qosLevels;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteralC9ABEA54E864150EDBDE3863FA7913E6586073BC, L_3, L_11, NULL);
		V_0 = L_13;
		goto IL_0053;
	}

IL_0053:
	{
		String_t* L_14 = V_0;
		return L_14;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgSubscribedEventArgs_get_MessageId_m10214D6CA2D2EBA97FE2CF597C9B8897973773BC (MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->___messageId;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribedEventArgs_set_MessageId_m0A19147B3D040AB104050A0AD70E93F1056399BD (MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___messageId = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgSubscribedEventArgs_get_GrantedQoSLevels_m14E08DACF1938D513C6E5E22C175E3F51127B358 (MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___grantedQosLevels;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribedEventArgs_set_GrantedQoSLevels_m8FB3B7ED1B56AABD1880DC863E137D3F8B9A6B17 (MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___grantedQosLevels = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grantedQosLevels), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribedEventArgs__ctor_mADEE5005EB6EF967769EC330CA265B4E168B147D (MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120* __this, uint16_t ___0_messageId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_grantedQosLevels, const RuntimeMethod* method) 
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
		uint16_t L_0 = ___0_messageId;
		__this->___messageId = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_grantedQosLevels;
		__this->___grantedQosLevels = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grantedQosLevels), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgSubscribeEventArgs_get_MessageId_m217AE681D58C5A9ACF401B3300B798B436248AF6 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->___messageId;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribeEventArgs_set_MessageId_mD0841B50AB2347E3C2F110C2F66FC0217CF310D6 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___messageId = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MqttMsgSubscribeEventArgs_get_Topics_m08E7E9214E3BBC5E9D655A76E9D930135F24E460 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___topics;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribeEventArgs_set_Topics_mB140081EA768D3DAD8029E3AD101ABF370599ED7 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_value, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_value;
		__this->___topics = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgSubscribeEventArgs_get_QoSLevels_m4F0A6F92F23706C006EFFB732CADF3E52D1D7BA6 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___qosLevels;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribeEventArgs_set_QoSLevels_m6C5CEFDFA3B9A5102DE665F588713655B3F38E94 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___qosLevels = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qosLevels), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribeEventArgs__ctor_m7C8EBED372A95741DA5954B8015CC96AEAAB6264 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, uint16_t ___0_messageId, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_topics, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_qosLevels, const RuntimeMethod* method) 
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
		uint16_t L_0 = ___0_messageId;
		__this->___messageId = L_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_topics;
		__this->___topics = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_qosLevels;
		__this->___qosLevels = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qosLevels), (void*)L_2);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsuback__ctor_mE20D77A0C9F8A1F6F6B4D4597A11A4C6747FC568 (MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* __this, const RuntimeMethod* method) 
{
	{
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type = (uint8_t)((int32_t)11);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* MqttMsgUnsuback_Parse_m3487BA8F1FE928B7AF963A1FDC039B7C1D5F3065 (uint8_t ___0_fixedHeaderFirstByte, uint8_t ___1_protocolVersion, RuntimeObject* ___2_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* V_6 = NULL;
	{
		V_1 = 0;
		MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* L_0 = (MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934*)il2cpp_codegen_object_new(MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934_il2cpp_TypeInfo_var);
		MqttMsgUnsuback__ctor_mE20D77A0C9F8A1F6F6B4D4597A11A4C6747FC568(L_0, NULL);
		V_2 = L_0;
		uint8_t L_1 = ___1_protocolVersion;
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t L_3 = ___0_fixedHeaderFirstByte;
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgUnsuback_Parse_m3487BA8F1FE928B7AF963A1FDC039B7C1D5F3065_RuntimeMethod_var)));
	}

IL_0029:
	{
	}

IL_002a:
	{
		RuntimeObject* L_6 = ___2_channel;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_3 = L_7;
		int32_t L_8 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		RuntimeObject* L_10 = ___2_channel;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_10, L_11);
		MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_13);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_13)->___messageId = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_18<<8))&((int32_t)65280))));
		MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* L_19 = V_2;
		MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* L_20 = L_19;
		NullCheck(L_20);
		uint16_t L_21 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		NullCheck(L_22);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_20);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_21|(int32_t)L_26)));
		MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* L_27 = V_2;
		V_6 = L_27;
		goto IL_0070;
	}

IL_0070:
	{
		MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* L_28 = V_6;
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgUnsuback_GetBytes_m30DC727322F12E81ECA5151E9CD032F8262D3A62 (MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* __this, uint8_t ___0_protocolVersion, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 2));
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3))));
		V_0 = 1;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001b:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_6;
		V_6 = ((int32_t)(L_6/((int32_t)128)));
		int32_t L_7 = V_6;
		V_7 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_7;
		if (L_8)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_9, L_10)), L_11)));
		V_4 = L_12;
		uint8_t L_13 = ___0_protocolVersion;
		V_8 = (bool)((((int32_t)L_13) == ((int32_t)4))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_005d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = L_16;
		V_5 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)176));
		goto IL_006c;
	}

IL_005d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)((int32_t)176));
	}

IL_006c:
	{
		int32_t L_21 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24;
		L_24 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_21, L_22, L_23, NULL);
		V_5 = L_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = L_26;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		uint16_t L_28 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_28>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_4;
		int32_t L_30 = V_5;
		int32_t L_31 = L_30;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		uint16_t L_32 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_32&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_4;
		V_9 = L_33;
		goto IL_00af;
	}

IL_00af:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_9;
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgUnsuback_ToString_mB4331A74ADF9109B769B78CC579C614C09200E31 (MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE72AE7C1BE0D0A3142920BDAA4B27896C11E2B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		uint16_t L_4 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		uint16_t L_5 = L_4;
		RuntimeObject* L_6 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		String_t* L_7;
		L_7 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteral3EE72AE7C1BE0D0A3142920BDAA4B27896C11E2B, L_1, L_3, NULL);
		V_0 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		String_t* L_8 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MqttMsgUnsubscribe_get_Topics_m3400CA9B22F7F6120033BC64CFBD574A94B9802E (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___topics;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribe_set_Topics_mFF403E8D2738D5797C0CFA93DD314A5A882C23CB (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_value, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_value;
		__this->___topics = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribe__ctor_mB5999A22CD1515F66ACEE158BA9533E04B6EFEC7 (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, const RuntimeMethod* method) 
{
	{
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type = (uint8_t)((int32_t)10);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribe__ctor_m456E5394BB897F90B09436C4A0AF7D5E4955F2B7 (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_topics, const RuntimeMethod* method) 
{
	{
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type = (uint8_t)((int32_t)10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_topics;
		__this->___topics = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics), (void*)L_0);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel = (uint8_t)1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* MqttMsgUnsubscribe_Parse_mEB4D26A94F7AC4DCEFE93455EAC41CDAB277185F (uint8_t ___0_fixedHeaderFirstByte, uint8_t ___1_protocolVersion, RuntimeObject* ___2_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* V_14 = NULL;
	{
		V_1 = 0;
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_0 = (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98*)il2cpp_codegen_object_new(MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98_il2cpp_TypeInfo_var);
		MqttMsgUnsubscribe__ctor_mB5999A22CD1515F66ACEE158BA9533E04B6EFEC7(L_0, NULL);
		V_4 = L_0;
		uint8_t L_1 = ___1_protocolVersion;
		V_8 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_8;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		uint8_t L_3 = ___0_fixedHeaderFirstByte;
		V_9 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_9;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgUnsubscribe_Parse_mEB4D26A94F7AC4DCEFE93455EAC41CDAB277185F_RuntimeMethod_var)));
	}

IL_002d:
	{
	}

IL_002e:
	{
		RuntimeObject* L_6 = ___2_channel;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_5 = L_7;
		int32_t L_8 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		RuntimeObject* L_10 = ___2_channel;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_10, L_11);
		V_6 = L_12;
		uint8_t L_13 = ___1_protocolVersion;
		V_10 = (bool)((((int32_t)L_13) == ((int32_t)3))? 1 : 0);
		bool L_14 = V_10;
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_15 = V_4;
		uint8_t L_16 = ___0_fixedHeaderFirstByte;
		NullCheck(L_15);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_15)->___qosLevel = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_16&6))>>1)));
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_17 = V_4;
		uint8_t L_18 = ___0_fixedHeaderFirstByte;
		NullCheck(L_17);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_17)->___dupFlag = (bool)((((int32_t)((int32_t)(((int32_t)((int32_t)L_18&8))>>3))) == ((int32_t)1))? 1 : 0);
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_19 = V_4;
		NullCheck(L_19);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_19)->___retain = (bool)0;
	}

IL_0077:
	{
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_20 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		NullCheck(L_21);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_20);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_25<<8))&((int32_t)65280))));
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_26 = V_4;
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_27 = L_26;
		NullCheck(L_27);
		uint16_t L_28 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_27)->___messageId;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_0;
		int32_t L_30 = V_1;
		int32_t L_31 = L_30;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		NullCheck(L_29);
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_27);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_27)->___messageId = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_28|(int32_t)L_33)));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_34 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_34, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_7 = L_34;
	}

IL_00ab:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_0;
		int32_t L_36 = V_1;
		int32_t L_37 = L_36;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		NullCheck(L_35);
		int32_t L_38 = L_37;
		uint8_t L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_3 = ((int32_t)(((int32_t)((int32_t)L_39<<8))&((int32_t)65280)));
		int32_t L_40 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_0;
		int32_t L_42 = V_1;
		int32_t L_43 = L_42;
		V_1 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		NullCheck(L_41);
		int32_t L_44 = L_43;
		uint8_t L_45 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_3 = ((int32_t)(L_40|(int32_t)L_45));
		int32_t L_46 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_46);
		V_2 = L_47;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_0;
		int32_t L_49 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_2;
		int32_t L_51 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_48, L_49, (RuntimeArray*)L_50, 0, L_51, NULL);
		int32_t L_52 = V_1;
		int32_t L_53 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_52, L_53));
		RuntimeObject* L_54 = V_7;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_55;
		L_55 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_2;
		NullCheck(L_55);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_57;
		L_57 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(24, L_55, L_56);
		String_t* L_58;
		L_58 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_57, NULL);
		NullCheck(L_54);
		InterfaceActionInvoker1< String_t* >::Invoke(2, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_54, L_58);
		int32_t L_59 = V_1;
		int32_t L_60 = V_5;
		V_11 = (bool)((((int32_t)L_59) < ((int32_t)L_60))? 1 : 0);
		bool L_61 = V_11;
		if (L_61)
		{
			goto IL_00ab;
		}
	}
	{
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_62 = V_4;
		RuntimeObject* L_63 = V_7;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_63);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_64);
		NullCheck(L_62);
		L_62->___topics = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&L_62->___topics), (void*)L_65);
		V_12 = 0;
		goto IL_0133;
	}

IL_0118:
	{
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_66 = V_4;
		NullCheck(L_66);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66->___topics;
		int32_t L_68 = V_12;
		RuntimeObject* L_69 = V_7;
		int32_t L_70 = V_12;
		NullCheck(L_69);
		String_t* L_71;
		L_71 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0, IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var, L_69, L_70);
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (String_t*)L_71);
		int32_t L_72 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_0133:
	{
		int32_t L_73 = V_12;
		RuntimeObject* L_74 = V_7;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_74);
		V_13 = (bool)((((int32_t)L_73) < ((int32_t)L_75))? 1 : 0);
		bool L_76 = V_13;
		if (L_76)
		{
			goto IL_0118;
		}
	}
	{
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_77 = V_4;
		V_14 = L_77;
		goto IL_014a;
	}

IL_014a:
	{
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_78 = V_14;
		return L_78;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgUnsubscribe_GetBytes_m937D276453E8FB292ACBEE1B4BAC08A757B95A54 (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, uint8_t ___0_protocolVersion, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_7 = NULL;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_16 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B19_0 = 0;
	uint8_t* G_B19_1 = NULL;
	int32_t G_B18_0 = 0;
	uint8_t* G_B18_1 = NULL;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	uint8_t* G_B20_2 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___topics;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___topics;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 1;
	}

IL_0021:
	{
		V_9 = (bool)G_B3_0;
		bool L_2 = V_9;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_3 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_3, 6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgUnsubscribe_GetBytes_m937D276453E8FB292ACBEE1B4BAC08A757B95A54_RuntimeMethod_var)));
	}

IL_002e:
	{
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 2));
		V_6 = 0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = __this->___topics;
		NullCheck(L_5);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		V_7 = L_6;
		V_6 = 0;
		goto IL_00ad;
	}

IL_0049:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = __this->___topics;
		int32_t L_8 = V_6;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		if ((((int32_t)L_11) < ((int32_t)1)))
		{
			goto IL_0072;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = __this->___topics;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		G_B9_0 = ((((int32_t)L_16) > ((int32_t)((int32_t)65535)))? 1 : 0);
		goto IL_0073;
	}

IL_0072:
	{
		G_B9_0 = 1;
	}

IL_0073:
	{
		V_10 = (bool)G_B9_0;
		bool L_17 = V_10;
		if (!L_17)
		{
			goto IL_0080;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_18 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_18, 4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgUnsubscribe_GetBytes_m937D276453E8FB292ACBEE1B4BAC08A757B95A54_RuntimeMethod_var)));
	}

IL_0080:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_19 = V_7;
		int32_t L_20 = V_6;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_21;
		L_21 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = __this->___topics;
		int32_t L_23 = V_6;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		String_t* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_21, L_25);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_26);
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 2));
		int32_t L_28 = V_2;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_29 = V_7;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, ((int32_t)(((RuntimeArray*)L_32)->max_length))));
		int32_t L_33 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00ad:
	{
		int32_t L_34 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = __this->___topics;
		NullCheck(L_35);
		V_11 = (bool)((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))? 1 : 0);
		bool L_36 = V_11;
		if (L_36)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_37 = V_3;
		int32_t L_38 = V_1;
		int32_t L_39 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_37, ((int32_t)il2cpp_codegen_add(L_38, L_39))));
		V_0 = 1;
		int32_t L_40 = V_3;
		V_8 = L_40;
	}

IL_00ca:
	{
		int32_t L_41 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_8;
		V_8 = ((int32_t)(L_42/((int32_t)128)));
		int32_t L_43 = V_8;
		V_12 = (bool)((((int32_t)L_43) > ((int32_t)0))? 1 : 0);
		bool L_44 = V_12;
		if (L_44)
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_45 = V_0;
		int32_t L_46 = V_1;
		int32_t L_47 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_45, L_46)), L_47)));
		V_4 = L_48;
		uint8_t L_49 = ___0_protocolVersion;
		V_13 = (bool)((((int32_t)L_49) == ((int32_t)4))? 1 : 0);
		bool L_50 = V_13;
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_4;
		int32_t L_52 = V_5;
		int32_t L_53 = L_52;
		V_5 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (uint8_t)((int32_t)162));
		goto IL_0142;
	}

IL_010c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_4;
		int32_t L_55 = V_5;
		uint8_t L_56 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)160)|((int32_t)((int32_t)L_56<<1))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_4;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		uint8_t* L_59 = ((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)));
		int32_t L_60 = *((uint8_t*)L_59);
		bool L_61 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___dupFlag;
		if (L_61)
		{
			G_B19_0 = L_60;
			G_B19_1 = L_59;
			goto IL_0137;
		}
		G_B18_0 = L_60;
		G_B18_1 = L_59;
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		goto IL_0138;
	}

IL_0137:
	{
		G_B20_0 = 8;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
	}

IL_0138:
	{
		*((int8_t*)G_B20_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(G_B20_1|G_B20_0)));
		int32_t L_62 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0142:
	{
		int32_t L_63 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_4;
		int32_t L_65 = V_5;
		int32_t L_66;
		L_66 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_63, L_64, L_65, NULL);
		V_5 = L_66;
		uint16_t L_67 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		V_14 = (bool)((((int32_t)L_67) == ((int32_t)0))? 1 : 0);
		bool L_68 = V_14;
		if (!L_68)
		{
			goto IL_0166;
		}
	}
	{
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_69 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_69, ((int32_t)10), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgUnsubscribe_GetBytes_m937D276453E8FB292ACBEE1B4BAC08A757B95A54_RuntimeMethod_var)));
	}

IL_0166:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = V_4;
		int32_t L_71 = V_5;
		int32_t L_72 = L_71;
		V_5 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		uint16_t L_73 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_73>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = V_4;
		int32_t L_75 = V_5;
		int32_t L_76 = L_75;
		V_5 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		uint16_t L_77 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(L_76), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_77&((int32_t)255)))));
		V_6 = 0;
		V_6 = 0;
		goto IL_01fb;
	}

IL_019e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = V_4;
		int32_t L_79 = V_5;
		int32_t L_80 = L_79;
		V_5 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_81 = V_7;
		int32_t L_82 = V_6;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((RuntimeArray*)L_84)->max_length))>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = V_4;
		int32_t L_86 = V_5;
		int32_t L_87 = L_86;
		V_5 = ((int32_t)il2cpp_codegen_add(L_87, 1));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_88 = V_7;
		int32_t L_89 = V_6;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_91);
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_87), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((RuntimeArray*)L_91)->max_length))&((int32_t)255)))));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_92 = V_7;
		int32_t L_93 = V_6;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = V_4;
		int32_t L_97 = V_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_98 = V_7;
		int32_t L_99 = V_6;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_101);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_95, 0, (RuntimeArray*)L_96, L_97, ((int32_t)(((RuntimeArray*)L_101)->max_length)), NULL);
		int32_t L_102 = V_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_103 = V_7;
		int32_t L_104 = V_6;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		NullCheck(L_106);
		V_5 = ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)(((RuntimeArray*)L_106)->max_length))));
		int32_t L_107 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_107, 1));
	}

IL_01fb:
	{
		int32_t L_108 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_109 = __this->___topics;
		NullCheck(L_109);
		V_15 = (bool)((((int32_t)L_108) < ((int32_t)((int32_t)(((RuntimeArray*)L_109)->max_length))))? 1 : 0);
		bool L_110 = V_15;
		if (L_110)
		{
			goto IL_019e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111 = V_4;
		V_16 = L_111;
		goto IL_0213;
	}

IL_0213:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_16;
		return L_112;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgUnsubscribe_ToString_m137BEF83C0D58EE8CD6D179111874504F41D3385 (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74FB4E4B01F7AE144E63083EC53D9222473FB16B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEC326A6692604AB65616A2EBEDEFA56D4F572A2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralAEC326A6692604AB65616A2EBEDEFA56D4F572A2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteralAEC326A6692604AB65616A2EBEDEFA56D4F572A2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		uint16_t L_5 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = __this->___topics;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		String_t* L_10;
		L_10 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteral74FB4E4B01F7AE144E63083EC53D9222473FB16B, L_2, L_8, NULL);
		V_0 = L_10;
		goto IL_0042;
	}

IL_0042:
	{
		String_t* L_11 = V_0;
		return L_11;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgUnsubscribedEventArgs_get_MessageId_m45D749DAB8C188360DDD1F22B60805621E9EB7CD (MqttMsgUnsubscribedEventArgs_t46F3D712F85B4F54BD19B4355690C775FAC35E5D* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->___messageId;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribedEventArgs_set_MessageId_m9990BD192EA3CA1FAB52CE7B8E0665DD7971626F (MqttMsgUnsubscribedEventArgs_t46F3D712F85B4F54BD19B4355690C775FAC35E5D* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___messageId = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribedEventArgs__ctor_m333FE1E9970E80D75E5D22A9067F5C1F86BBE8A4 (MqttMsgUnsubscribedEventArgs_t46F3D712F85B4F54BD19B4355690C775FAC35E5D* __this, uint16_t ___0_messageId, const RuntimeMethod* method) 
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
		uint16_t L_0 = ___0_messageId;
		__this->___messageId = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgUnsubscribeEventArgs_get_MessageId_m2227CAA42BF53FE4D9FF0927F838E200AD5D9FB0 (MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->___messageId;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribeEventArgs_set_MessageId_m0F8DD20B80B0641CB65354B306818192ADE39FA7 (MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_value;
		__this->___messageId = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MqttMsgUnsubscribeEventArgs_get_Topics_m193E54AAB9CFA1B5E4F945FAB62B151325B9E5E1 (MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29* __this, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___topics;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribeEventArgs_set_Topics_mCFDD5556902E9F81263D1FC06594C0D5103BC5EF (MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_value, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_value;
		__this->___topics = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribeEventArgs__ctor_m7F674ECBD50170060E07C8CD6DCA65CC38E4950B (MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29* __this, uint16_t ___0_messageId, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_topics, const RuntimeMethod* method) 
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
		uint16_t L_0 = ___0_messageId;
		__this->___messageId = L_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_topics;
		__this->___topics = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalEvent__ctor_mCA1DB6F9F0C187BBE3C18FDD5B93919DAFC004EC (InternalEvent_tC239B49C40C425EF2A2775CA3DE46B3F39DD72BB* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* MsgInternalEvent_get_Message_m28B4FCC92193372BE26B1BC9BF8173A1B7D1DB6F (MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84* __this, const RuntimeMethod* method) 
{
	MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* V_0 = NULL;
	{
		MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* L_0 = __this->___msg;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgInternalEvent_set_Message_m8EF55DDB59A3C5D4D4D8693C30F2ACD0D3112199 (MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84* __this, MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* ___0_value, const RuntimeMethod* method) 
{
	{
		MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* L_0 = ___0_value;
		__this->___msg = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___msg), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgInternalEvent__ctor_mD2ECF81AE8634E936664761C86E173B6D85824D7 (MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84* __this, MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* ___0_msg, const RuntimeMethod* method) 
{
	{
		InternalEvent__ctor_mCA1DB6F9F0C187BBE3C18FDD5B93919DAFC004EC(__this, NULL);
		MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* L_0 = ___0_msg;
		__this->___msg = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___msg), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MsgPublishedInternalEvent_get_IsPublished_mE56C25A2E5769105EF0CA59FDCB10297FE2CCDF4 (MsgPublishedInternalEvent_t77F08FECAE4E4CB4F4926233C27C164CADC43873* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___isPublished;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgPublishedInternalEvent_set_IsPublished_m08C5E0F5021B70697FD6076C269A74C4358A55DA (MsgPublishedInternalEvent_t77F08FECAE4E4CB4F4926233C27C164CADC43873* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___isPublished = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgPublishedInternalEvent__ctor_mE3654CE99F37363D95DB561D402B778B12DDB894 (MsgPublishedInternalEvent_t77F08FECAE4E4CB4F4926233C27C164CADC43873* __this, MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* ___0_msg, bool ___1_isPublished, const RuntimeMethod* method) 
{
	{
		MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* L_0 = ___0_msg;
		MsgInternalEvent__ctor_mD2ECF81AE8634E936664761C86E173B6D85824D7(__this, L_0, NULL);
		bool L_1 = ___1_isPublished;
		__this->___isPublished = L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* __this, int32_t ___0_errorCode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		int32_t L_0 = ___0_errorCode;
		__this->___errorCode = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttClientException_get_ErrorCode_m58062C993177C18A6B3F59F810920634FF3F8B4D (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___errorCode;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClientException_set_ErrorCode_mB78CB6ABDB7FE0AF952AEBDC9FD42A3203AB8ADE (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___errorCode = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttCommunicationException__ctor_mD4031454FE16E33887D5E318BE3440BFBDF0FB77 (MqttCommunicationException_t016BFB6E56C108061FB2FE6CE77E280AEF4E2EBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttCommunicationException__ctor_m0AF8276EBCE12EDEF85EC8CAB5D75CC3933F392B (MqttCommunicationException_t016BFB6E56C108061FB2FE6CE77E280AEF4E2EBC* __this, Exception_t* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		Exception_t* L_1 = ___0_e;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttConnectionException__ctor_mB3D08501C9415D641FA2A3EB4F4BBAFB3F36DF37 (MqttConnectionException_t4133D9B042197DC8ACE467698F13BCD634939476* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_innerException;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttTimeoutException__ctor_mE628E891112184AE977020286DEB216CC838A7B0 (MqttTimeoutException_t43973937D83859B52199C9D855F55A16DFB478A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
