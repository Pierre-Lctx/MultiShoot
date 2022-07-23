#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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

// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.AtomicBoolean
struct AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass38_0`1<System.Object,System.Object>
struct U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192;
// System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass38_0`1<System.Threading.Tasks.VoidTaskResult,System.Object>
struct U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC;
// System.Action`1<System.IAsyncResult>
struct Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED;
// System.Func`2<System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>
struct Func_2_t93436DB66248BF735350EEC072257D84453153ED;
// System.Func`2<System.Int32Enum,System.Int32>
struct Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F;
// System.Func`2<System.Int32Enum,System.Boolean>
struct Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E;
// System.Func`2<System.Int32Enum,System.Object>
struct Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>
struct Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Boolean>
struct Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9;
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
struct Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>>
struct Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>>>
struct Func_2_tACAF262312375D7D8F7883E8DA2431DDAF082BFA;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>>
struct Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>,System.Nullable`1<System.Int32>>
struct Func_2_tC0E769BCCC22A3633D57CDD9077B40CA1B1F24A2;
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Nullable`1<System.Int32>>
struct Func_2_tC6816526F3327CB168F701FED02EB54522A97009;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`3<System.Object,System.IAsyncResult,System.Object>
struct Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC;
// System.Func`3<System.Object,System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>
struct Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354;
// System.Func`4<System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_4_t1FB292635292578289C454E038620354E9A7662D;
// System.Func`5<System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3;
// System.Func`5<System.Object,System.IO.Stream/ReadWriteParameters,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_t28FB40D8E33C5846AB04F37C78130A4948569C7C;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct IEnumerable_1_t79EE9024EC37CCCC68DF1B64A8C34AEBC7E65C49;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Int32Enum>
struct IEnumerator_1_tD8D5B0A7736D9FAFB606AC36B0CAD1353B84C3BD;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct IEnumerator_1_t684343E066D49B7FAC4216EA29ACB636DA954229;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B;
// System.Threading.Tasks.TaskFactory`1<System.Nullable`1<System.Int32>>
struct TaskFactory_1_tC38251ED2F273F12DD35B9D834895E8343290094;
// System.Threading.Tasks.TaskFactory`1<System.ValueTuple`2<System.Int32,System.Int32>>
struct TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>>
struct Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581;
// System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>
struct Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Int32Enum>
struct WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32Enum>
struct WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereListIterator`1<System.Int32Enum>
struct WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B;
// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32Enum,System.Object>
struct WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>
struct WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32Enum,System.Object>
struct WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>[]
struct KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral19A591E076465B264D0FAFC4F98833B0673D6092;
IL2CPP_EXTERN_C String_t* _stringLiteral295C1C91484E27E03B860FDA8F1EE84730518E64;
IL2CPP_EXTERN_C String_t* _stringLiteralA75CF6F408A626E601212712FB539C300D88CDBE;
IL2CPP_EXTERN_C String_t* _stringLiteralA7DEB4E83ED6644FBE7C7276D77CAEE0397BF409;
IL2CPP_EXTERN_C String_t* _stringLiteralC52F77B7D44C96CE5B91F76A3587ACE8C88748FF;
IL2CPP_EXTERN_C const RuntimeMethod* TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m5AEB6DDB800286721FD02093457462E80EADE8CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m681649E0926FAB0B829788CD61146021E9300EB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m5C7EBEA544578715D4178889DC1825922ACBC76E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_mBA02015EB4C668DC7E4EB19F11011451DB565069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_TisRuntimeObject_mDE5CD16304F994F11A35F60DD08F76F578F239FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m5AEB6DDB800286721FD02093457462E80EADE8CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m681649E0926FAB0B829788CD61146021E9300EB5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TaskFactory_1_FromAsyncTrim_TisRuntimeObject_TisReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_m5C922B333929EFDD969068043559BD32667E93A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TaskFactory_1_FromAsyncTrim_TisRuntimeObject_TisRuntimeObject_m7288A7165F6A87EBA4E4648BFCB7D8C1D8137F74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m5C7EBEA544578715D4178889DC1825922ACBC76E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m849AA31EC773855DC22DE22FE9E1CDF41764F042_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m886398BE05C4ED256B86DABBB5CDE411B95E33A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_mBA02015EB4C668DC7E4EB19F11011451DB565069_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1_ContinueWith_TisRuntimeObject_mD5CEC6CBA0EB70E1C3D7B04196B46C43703A88EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Task_1_ContinueWith_TisRuntimeObject_mDE5CD16304F994F11A35F60DD08F76F578F239FC_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1;
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct  List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32Enum>
struct  List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____items_1)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__items_1() const { return ____items_1; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields, ____emptyArray_5)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
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


// System.Linq.Enumerable_Iterator`1<System.Int32>
struct  Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable_Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable_Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable_Iterator`1::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable_Iterator`1<System.Object>
struct  Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable_Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable_Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable_Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Versioning.BinaryCompatibility
struct  BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810  : public RuntimeObject
{
public:

public:
};

struct BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields
{
public:
	// System.Boolean System.Runtime.Versioning.BinaryCompatibility::TargetsAtLeast_Desktop_V4_5
	bool ___TargetsAtLeast_Desktop_V4_5_0;
	// System.Boolean System.Runtime.Versioning.BinaryCompatibility::TargetsAtLeast_Desktop_V4_5_1
	bool ___TargetsAtLeast_Desktop_V4_5_1_1;

public:
	inline static int32_t get_offset_of_TargetsAtLeast_Desktop_V4_5_0() { return static_cast<int32_t>(offsetof(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields, ___TargetsAtLeast_Desktop_V4_5_0)); }
	inline bool get_TargetsAtLeast_Desktop_V4_5_0() const { return ___TargetsAtLeast_Desktop_V4_5_0; }
	inline bool* get_address_of_TargetsAtLeast_Desktop_V4_5_0() { return &___TargetsAtLeast_Desktop_V4_5_0; }
	inline void set_TargetsAtLeast_Desktop_V4_5_0(bool value)
	{
		___TargetsAtLeast_Desktop_V4_5_0 = value;
	}

	inline static int32_t get_offset_of_TargetsAtLeast_Desktop_V4_5_1_1() { return static_cast<int32_t>(offsetof(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields, ___TargetsAtLeast_Desktop_V4_5_1_1)); }
	inline bool get_TargetsAtLeast_Desktop_V4_5_1_1() const { return ___TargetsAtLeast_Desktop_V4_5_1_1; }
	inline bool* get_address_of_TargetsAtLeast_Desktop_V4_5_1_1() { return &___TargetsAtLeast_Desktop_V4_5_1_1; }
	inline void set_TargetsAtLeast_Desktop_V4_5_1_1(bool value)
	{
		___TargetsAtLeast_Desktop_V4_5_1_1 = value;
	}
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.Threading.AtomicBoolean
struct  AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E  : public RuntimeObject
{
public:
	// System.Int32 System.Threading.AtomicBoolean::flag
	int32_t ___flag_0;

public:
	inline static int32_t get_offset_of_flag_0() { return static_cast<int32_t>(offsetof(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E, ___flag_0)); }
	inline int32_t get_flag_0() const { return ___flag_0; }
	inline int32_t* get_address_of_flag_0() { return &___flag_0; }
	inline void set_flag_0(int32_t value)
	{
		___flag_0 = value;
	}
};


// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1<System.Object,System.Object>
struct  U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192  : public RuntimeObject
{
public:
	// System.Func`2<System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1::endFunction
	Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * ___endFunction_0;
	// System.Action`1<System.IAsyncResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1::endAction
	Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * ___endAction_1;
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1::promise
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___promise_2;

public:
	inline static int32_t get_offset_of_endFunction_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192, ___endFunction_0)); }
	inline Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * get_endFunction_0() const { return ___endFunction_0; }
	inline Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED ** get_address_of_endFunction_0() { return &___endFunction_0; }
	inline void set_endFunction_0(Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * value)
	{
		___endFunction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endFunction_0), (void*)value);
	}

	inline static int32_t get_offset_of_endAction_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192, ___endAction_1)); }
	inline Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * get_endAction_1() const { return ___endAction_1; }
	inline Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 ** get_address_of_endAction_1() { return &___endAction_1; }
	inline void set_endAction_1(Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * value)
	{
		___endAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endAction_1), (void*)value);
	}

	inline static int32_t get_offset_of_promise_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192, ___promise_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_promise_2() const { return ___promise_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_promise_2() { return &___promise_2; }
	inline void set_promise_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___promise_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promise_2), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1<System.Threading.Tasks.VoidTaskResult,System.Object>
struct  U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC  : public RuntimeObject
{
public:
	// System.Func`2<System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1::endFunction
	Func_2_t93436DB66248BF735350EEC072257D84453153ED * ___endFunction_0;
	// System.Action`1<System.IAsyncResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1::endAction
	Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * ___endAction_1;
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1::promise
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___promise_2;

public:
	inline static int32_t get_offset_of_endFunction_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC, ___endFunction_0)); }
	inline Func_2_t93436DB66248BF735350EEC072257D84453153ED * get_endFunction_0() const { return ___endFunction_0; }
	inline Func_2_t93436DB66248BF735350EEC072257D84453153ED ** get_address_of_endFunction_0() { return &___endFunction_0; }
	inline void set_endFunction_0(Func_2_t93436DB66248BF735350EEC072257D84453153ED * value)
	{
		___endFunction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endFunction_0), (void*)value);
	}

	inline static int32_t get_offset_of_endAction_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC, ___endAction_1)); }
	inline Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * get_endAction_1() const { return ___endAction_1; }
	inline Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 ** get_address_of_endAction_1() { return &___endAction_1; }
	inline void set_endAction_1(Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * value)
	{
		___endAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endAction_1), (void*)value);
	}

	inline static int32_t get_offset_of_promise_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC, ___promise_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_promise_2() const { return ___promise_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_promise_2() { return &___promise_2; }
	inline void set_promise_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___promise_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promise_2), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_1`1<System.Object,System.Object>
struct  U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD  : public RuntimeObject
{
public:
	// System.Threading.AtomicBoolean System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_1`1::invoked
	AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * ___invoked_0;
	// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1<TResult,TArg1> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_1`1::CSU24<>8__locals1
	U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_invoked_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD, ___invoked_0)); }
	inline AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * get_invoked_0() const { return ___invoked_0; }
	inline AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E ** get_address_of_invoked_0() { return &___invoked_0; }
	inline void set_invoked_0(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * value)
	{
		___invoked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invoked_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_1`1<System.Threading.Tasks.VoidTaskResult,System.Object>
struct  U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B  : public RuntimeObject
{
public:
	// System.Threading.AtomicBoolean System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_1`1::invoked
	AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * ___invoked_0;
	// System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_0`1<TResult,TArg1> System.Threading.Tasks.TaskFactory`1_<>c__DisplayClass38_1`1::CSU24<>8__locals1
	U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_invoked_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B, ___invoked_0)); }
	inline AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * get_invoked_0() const { return ___invoked_0; }
	inline AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E ** get_address_of_invoked_0() { return &___invoked_0; }
	inline void set_invoked_0(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * value)
	{
		___invoked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invoked_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.IO.Stream_ReadWriteParameters
struct  ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47 
{
public:
	// System.Byte[] System.IO.Stream_ReadWriteParameters::Buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Buffer_0;
	// System.Int32 System.IO.Stream_ReadWriteParameters::Offset
	int32_t ___Offset_1;
	// System.Int32 System.IO.Stream_ReadWriteParameters::Count
	int32_t ___Count_2;

public:
	inline static int32_t get_offset_of_Buffer_0() { return static_cast<int32_t>(offsetof(ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47, ___Buffer_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Buffer_0() const { return ___Buffer_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Buffer_0() { return &___Buffer_0; }
	inline void set_Buffer_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_Offset_1() { return static_cast<int32_t>(offsetof(ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47, ___Offset_1)); }
	inline int32_t get_Offset_1() const { return ___Offset_1; }
	inline int32_t* get_address_of_Offset_1() { return &___Offset_1; }
	inline void set_Offset_1(int32_t value)
	{
		___Offset_1 = value;
	}

	inline static int32_t get_offset_of_Count_2() { return static_cast<int32_t>(offsetof(ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47, ___Count_2)); }
	inline int32_t get_Count_2() const { return ___Count_2; }
	inline int32_t* get_address_of_Count_2() { return &___Count_2; }
	inline void set_Count_2(int32_t value)
	{
		___Count_2 = value;
	}
};

// Native definition for P/Invoke marshalling of System.IO.Stream/ReadWriteParameters
struct ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___Buffer_0;
	int32_t ___Offset_1;
	int32_t ___Count_2;
};
// Native definition for COM marshalling of System.IO.Stream/ReadWriteParameters
struct ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___Buffer_0;
	int32_t ___Offset_1;
	int32_t ___Count_2;
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct  IntPtr_t 
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


// System.Linq.Enumerable_WhereArrayIterator`1<System.Object>
struct  WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable_WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable_WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable_WhereEnumerableIterator`1<System.Object>
struct  WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>
struct  WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable_WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectArrayIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectArrayIterator`2::selector
	Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * ___selector_5;
	// System.Int32 System.Linq.Enumerable_WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3, ___selector_5)); }
	inline Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * get_selector_5() const { return ___selector_5; }
	inline Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct  WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable_WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectArrayIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectArrayIterator`2::selector
	Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * ___selector_5;
	// System.Int32 System.Linq.Enumerable_WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC, ___selector_5)); }
	inline Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Int32Enum,System.Int32>
struct  WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable_WhereSelectArrayIterator`2::source
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectArrayIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectArrayIterator`2::selector
	Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * ___selector_5;
	// System.Int32 System.Linq.Enumerable_WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170, ___source_3)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get_source_3() const { return ___source_3; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170, ___selector_5)); }
	inline Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Int32Enum,System.Object>
struct  WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable_WhereSelectArrayIterator`2::source
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectArrayIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectArrayIterator`2::selector
	Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector_5;
	// System.Int32 System.Linq.Enumerable_WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153, ___source_3)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get_source_3() const { return ___source_3; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153, ___selector_5)); }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Object,System.Int32>
struct  WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable_WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectArrayIterator`2::selector
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector_5;
	// System.Int32 System.Linq.Enumerable_WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___selector_5)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Object,System.Object>
struct  WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable_WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectArrayIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Int32 System.Linq.Enumerable_WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>
struct  WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::selector
	Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B, ___selector_5)); }
	inline Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * get_selector_5() const { return ___selector_5; }
	inline Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct  WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::selector
	Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E, ___selector_5)); }
	inline Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Int32Enum,System.Int32>
struct  WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::selector
	Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D, ___selector_5)); }
	inline Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>
struct  WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::selector
	Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6, ___selector_5)); }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Object,System.Int32>
struct  WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::selector
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___selector_5)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct  WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Nullable`1<System.Int32>
struct  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Threading.CancellationToken
struct  CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Threading.Tasks.VoidTaskResult
struct  VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004__padding[1];
	};

public:
};


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.ValueTuple`2<System.Int32,System.Int32>
struct  ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Linq.Enumerable_WhereListIterator`1<System.Object>
struct  WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable_WhereSelectListIterator`2<System.Object,System.Int32>
struct  WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectListIterator`2::selector
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector_5;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___selector_5)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable_WhereSelectListIterator`2<System.Object,System.Object>
struct  WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectListIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Threading.StackCrawlMark
struct  StackCrawlMark_t2BEE6EC5F8EA322B986CA375A594BBD34B98EBA5 
{
public:
	// System.Int32 System.Threading.StackCrawlMark::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StackCrawlMark_t2BEE6EC5F8EA322B986CA375A594BBD34B98EBA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.AsyncCausalityStatus
struct  AsyncCausalityStatus_tB4918F222DA36F8D1AFD305EEBD3DE3C6FA1631F 
{
public:
	// System.Int32 System.Threading.Tasks.AsyncCausalityStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncCausalityStatus_tB4918F222DA36F8D1AFD305EEBD3DE3C6FA1631F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.CausalityTraceLevel
struct  CausalityTraceLevel_t01DEED18A37C591FB2E53F2ADD89E2145ED8A9CD 
{
public:
	// System.Int32 System.Threading.Tasks.CausalityTraceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CausalityTraceLevel_t01DEED18A37C591FB2E53F2ADD89E2145ED8A9CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.InternalTaskOptions
struct  InternalTaskOptions_tE9869E444962B12AAF216CDE276D379BD57D5EEF 
{
public:
	// System.Int32 System.Threading.Tasks.InternalTaskOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InternalTaskOptions_tE9869E444962B12AAF216CDE276D379BD57D5EEF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskContinuationOptions
struct  TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskCreationOptions
struct  TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112 
{
public:
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskScheduler
struct  TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;

public:
	inline static int32_t get_offset_of_m_taskSchedulerId_3() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D, ___m_taskSchedulerId_3)); }
	inline int32_t get_m_taskSchedulerId_3() const { return ___m_taskSchedulerId_3; }
	inline int32_t* get_address_of_m_taskSchedulerId_3() { return &___m_taskSchedulerId_3; }
	inline void set_m_taskSchedulerId_3(int32_t value)
	{
		___m_taskSchedulerId_3 = value;
	}
};

struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * ____unobservedTaskException_4;
	// System.Object System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	RuntimeObject * ____unobservedTaskExceptionLockObject_5;

public:
	inline static int32_t get_offset_of_s_activeTaskSchedulers_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_activeTaskSchedulers_0)); }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * get_s_activeTaskSchedulers_0() const { return ___s_activeTaskSchedulers_0; }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 ** get_address_of_s_activeTaskSchedulers_0() { return &___s_activeTaskSchedulers_0; }
	inline void set_s_activeTaskSchedulers_0(ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * value)
	{
		___s_activeTaskSchedulers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTaskSchedulers_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_defaultTaskScheduler_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_defaultTaskScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_s_defaultTaskScheduler_1() const { return ___s_defaultTaskScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_s_defaultTaskScheduler_1() { return &___s_defaultTaskScheduler_1; }
	inline void set_s_defaultTaskScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___s_defaultTaskScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultTaskScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskSchedulerIdCounter_2() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_taskSchedulerIdCounter_2)); }
	inline int32_t get_s_taskSchedulerIdCounter_2() const { return ___s_taskSchedulerIdCounter_2; }
	inline int32_t* get_address_of_s_taskSchedulerIdCounter_2() { return &___s_taskSchedulerIdCounter_2; }
	inline void set_s_taskSchedulerIdCounter_2(int32_t value)
	{
		___s_taskSchedulerIdCounter_2 = value;
	}

	inline static int32_t get_offset_of__unobservedTaskException_4() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskException_4)); }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * get__unobservedTaskException_4() const { return ____unobservedTaskException_4; }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A ** get_address_of__unobservedTaskException_4() { return &____unobservedTaskException_4; }
	inline void set__unobservedTaskException_4(EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * value)
	{
		____unobservedTaskException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskException_4), (void*)value);
	}

	inline static int32_t get_offset_of__unobservedTaskExceptionLockObject_5() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskExceptionLockObject_5)); }
	inline RuntimeObject * get__unobservedTaskExceptionLockObject_5() const { return ____unobservedTaskExceptionLockObject_5; }
	inline RuntimeObject ** get_address_of__unobservedTaskExceptionLockObject_5() { return &____unobservedTaskExceptionLockObject_5; }
	inline void set__unobservedTaskExceptionLockObject_5(RuntimeObject * value)
	{
		____unobservedTaskExceptionLockObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskExceptionLockObject_5), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>
struct  KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Int32Enum>
struct  Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___list_0)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_list_0() const { return ___list_0; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Linq.Enumerable_Iterator`1<System.Int32Enum>
struct  Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable_Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable_Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable_Iterator`1::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Threading.Tasks.TaskFactory`1<System.Object>
struct  TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory`1::m_defaultCancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1::m_defaultScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory`1::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory`1::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};


// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct  TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory`1::m_defaultCancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory`1::m_defaultScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory`1::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory`1::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>>
struct  Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581, ___m_result_22)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_m_result_22() const { return ___m_result_22; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tC38251ED2F273F12DD35B9D834895E8343290094 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tACAF262312375D7D8F7883E8DA2431DDAF082BFA * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tC38251ED2F273F12DD35B9D834895E8343290094 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tC38251ED2F273F12DD35B9D834895E8343290094 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tC38251ED2F273F12DD35B9D834895E8343290094 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tACAF262312375D7D8F7883E8DA2431DDAF082BFA * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tACAF262312375D7D8F7883E8DA2431DDAF082BFA ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tACAF262312375D7D8F7883E8DA2431DDAF082BFA * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct  Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_22)); }
	inline RuntimeObject * get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct  Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3, ___m_result_22)); }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  get_m_result_22() const { return ___m_result_22; }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>
struct  Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F, ___m_result_22)); }
	inline ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  get_m_result_22() const { return ___m_result_22; }
	inline ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Action`1<System.IAsyncResult>
struct  Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Collections.Generic.List`1_Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct  Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90, ___list_0)); }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * get_list_0() const { return ___list_0; }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90, ___current_3)); }
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Boolean>
struct  Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>
struct  Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct  Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.IAsyncResult,System.Object>
struct  Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>
struct  Func_2_t93436DB66248BF735350EEC072257D84453153ED  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32Enum,System.Boolean>
struct  Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32Enum,System.Int32>
struct  Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32Enum,System.Object>
struct  Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Int32>
struct  Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct  Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Nullable`1<System.Int32>>
struct  Func_2_tC6816526F3327CB168F701FED02EB54522A97009  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
struct  Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>,System.Nullable`1<System.Int32>>
struct  Func_2_tC0E769BCCC22A3633D57CDD9077B40CA1B1F24A2  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Object,System.IAsyncResult,System.Object>
struct  Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Object,System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>
struct  Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`4<System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
struct  Func_4_t1FB292635292578289C454E038620354E9A7662D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`5<System.Object,System.IO.Stream_ReadWriteParameters,System.AsyncCallback,System.Object,System.IAsyncResult>
struct  Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`5<System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
struct  Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3  : public MulticastDelegate_t
{
public:

public:
};


// System.Linq.Enumerable_Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct  Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable_Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable_Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable_Iterator`1::current
	KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC, ___current_2)); }
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  get_current_2() const { return ___current_2; }
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___value_1), (void*)NULL);
	}
};


// System.Linq.Enumerable_WhereArrayIterator`1<System.Int32Enum>
struct  WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7  : public Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9
{
public:
	// TSource[] System.Linq.Enumerable_WhereArrayIterator`1::source
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereArrayIterator`1::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Int32 System.Linq.Enumerable_WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7, ___source_3)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get_source_3() const { return ___source_3; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable_WhereEnumerableIterator`1<System.Int32Enum>
struct  WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23  : public Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereEnumerableIterator`1::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable_WhereListIterator`1<System.Int32Enum>
struct  WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B  : public Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereListIterator`1::source
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereListIterator`1::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereListIterator`1::enumerator
	Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B, ___source_3)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_source_3() const { return ___source_3; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B, ___enumerator_5)); }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable_WhereSelectListIterator`2<System.Int32Enum,System.Int32>
struct  WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::source
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectListIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectListIterator`2::selector
	Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * ___selector_5;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::enumerator
	Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB, ___source_3)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_source_3() const { return ___source_3; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB, ___selector_5)); }
	inline Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB, ___enumerator_6)); }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable_WhereSelectListIterator`2<System.Int32Enum,System.Object>
struct  WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::source
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectListIterator`2::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectListIterator`2::selector
	Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector_5;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::enumerator
	Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8, ___source_3)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_source_3() const { return ___source_3; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8, ___selector_5)); }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8, ___enumerator_6)); }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Threading.Tasks.ContinuationResultTaskFromResultTask`2<System.Object,System.Nullable`1<System.Int32>>
struct  ContinuationResultTaskFromResultTask_2_t824B34AB5675F06CE6CD82F26E6D26A806FBA67E  : public Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581
{
public:
	// System.Threading.Tasks.Task`1<TAntecedentResult> System.Threading.Tasks.ContinuationResultTaskFromResultTask`2::m_antecedent
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_antecedent_25;

public:
	inline static int32_t get_offset_of_m_antecedent_25() { return static_cast<int32_t>(offsetof(ContinuationResultTaskFromResultTask_2_t824B34AB5675F06CE6CD82F26E6D26A806FBA67E, ___m_antecedent_25)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_antecedent_25() const { return ___m_antecedent_25; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_antecedent_25() { return &___m_antecedent_25; }
	inline void set_m_antecedent_25(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_antecedent_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_antecedent_25), (void*)value);
	}
};


// System.Threading.Tasks.ContinuationResultTaskFromResultTask`2<System.Object,System.Object>
struct  ContinuationResultTaskFromResultTask_2_t04599255F5B221AF375C60B98DCCCA03183073B5  : public Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17
{
public:
	// System.Threading.Tasks.Task`1<TAntecedentResult> System.Threading.Tasks.ContinuationResultTaskFromResultTask`2::m_antecedent
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_antecedent_25;

public:
	inline static int32_t get_offset_of_m_antecedent_25() { return static_cast<int32_t>(offsetof(ContinuationResultTaskFromResultTask_2_t04599255F5B221AF375C60B98DCCCA03183073B5, ___m_antecedent_25)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_antecedent_25() const { return ___m_antecedent_25; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_antecedent_25() { return &___m_antecedent_25; }
	inline void set_m_antecedent_25(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_antecedent_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_antecedent_25), (void*)value);
	}
};


// System.Threading.Tasks.ContinuationResultTaskFromResultTask`2<System.ValueTuple`2<System.Int32,System.Int32>,System.Nullable`1<System.Int32>>
struct  ContinuationResultTaskFromResultTask_2_t978BBB17B79E82EF26D49614633F8F6A1BF4B632  : public Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581
{
public:
	// System.Threading.Tasks.Task`1<TAntecedentResult> System.Threading.Tasks.ContinuationResultTaskFromResultTask`2::m_antecedent
	Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * ___m_antecedent_25;

public:
	inline static int32_t get_offset_of_m_antecedent_25() { return static_cast<int32_t>(offsetof(ContinuationResultTaskFromResultTask_2_t978BBB17B79E82EF26D49614633F8F6A1BF4B632, ___m_antecedent_25)); }
	inline Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * get_m_antecedent_25() const { return ___m_antecedent_25; }
	inline Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F ** get_address_of_m_antecedent_25() { return &___m_antecedent_25; }
	inline void set_m_antecedent_25(Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * value)
	{
		___m_antecedent_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_antecedent_25), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1<System.Object,System.Object>
struct  FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF  : public Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17
{
public:
	// TInstance System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1::m_thisRef
	RuntimeObject * ___m_thisRef_26;
	// System.Func`3<TInstance,System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1::m_endMethod
	Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC * ___m_endMethod_27;

public:
	inline static int32_t get_offset_of_m_thisRef_26() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF, ___m_thisRef_26)); }
	inline RuntimeObject * get_m_thisRef_26() const { return ___m_thisRef_26; }
	inline RuntimeObject ** get_address_of_m_thisRef_26() { return &___m_thisRef_26; }
	inline void set_m_thisRef_26(RuntimeObject * value)
	{
		___m_thisRef_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_thisRef_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_endMethod_27() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF, ___m_endMethod_27)); }
	inline Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC * get_m_endMethod_27() const { return ___m_endMethod_27; }
	inline Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC ** get_address_of_m_endMethod_27() { return &___m_endMethod_27; }
	inline void set_m_endMethod_27(Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC * value)
	{
		___m_endMethod_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_endMethod_27), (void*)value);
	}
};

struct FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF_StaticFields
{
public:
	// System.AsyncCallback System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1::s_completeFromAsyncResult
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___s_completeFromAsyncResult_25;

public:
	inline static int32_t get_offset_of_s_completeFromAsyncResult_25() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF_StaticFields, ___s_completeFromAsyncResult_25)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_s_completeFromAsyncResult_25() const { return ___s_completeFromAsyncResult_25; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_s_completeFromAsyncResult_25() { return &___s_completeFromAsyncResult_25; }
	inline void set_s_completeFromAsyncResult_25(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___s_completeFromAsyncResult_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completeFromAsyncResult_25), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1<System.Threading.Tasks.VoidTaskResult,System.Object>
struct  FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10  : public Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3
{
public:
	// TInstance System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1::m_thisRef
	RuntimeObject * ___m_thisRef_26;
	// System.Func`3<TInstance,System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1::m_endMethod
	Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 * ___m_endMethod_27;

public:
	inline static int32_t get_offset_of_m_thisRef_26() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10, ___m_thisRef_26)); }
	inline RuntimeObject * get_m_thisRef_26() const { return ___m_thisRef_26; }
	inline RuntimeObject ** get_address_of_m_thisRef_26() { return &___m_thisRef_26; }
	inline void set_m_thisRef_26(RuntimeObject * value)
	{
		___m_thisRef_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_thisRef_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_endMethod_27() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10, ___m_endMethod_27)); }
	inline Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 * get_m_endMethod_27() const { return ___m_endMethod_27; }
	inline Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 ** get_address_of_m_endMethod_27() { return &___m_endMethod_27; }
	inline void set_m_endMethod_27(Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 * value)
	{
		___m_endMethod_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_endMethod_27), (void*)value);
	}
};

struct FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10_StaticFields
{
public:
	// System.AsyncCallback System.Threading.Tasks.TaskFactory`1_FromAsyncTrimPromise`1::s_completeFromAsyncResult
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___s_completeFromAsyncResult_25;

public:
	inline static int32_t get_offset_of_s_completeFromAsyncResult_25() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10_StaticFields, ___s_completeFromAsyncResult_25)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_s_completeFromAsyncResult_25() const { return ___s_completeFromAsyncResult_25; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_s_completeFromAsyncResult_25() { return &___s_completeFromAsyncResult_25; }
	inline void set_s_completeFromAsyncResult_25(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___s_completeFromAsyncResult_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completeFromAsyncResult_25), (void*)value);
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.Linq.Enumerable_WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct  WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00  : public Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC
{
public:
	// TSource[] System.Linq.Enumerable_WhereArrayIterator`1::source
	KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereArrayIterator`1::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Int32 System.Linq.Enumerable_WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable_WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct  WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3  : public Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereEnumerableIterator`1::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable_WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable_WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>
struct  WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C  : public Iterator_1_tF50A971E8E17160F05744DA754891369DAAAAAFC
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereListIterator`1::source
	List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereListIterator`1::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereListIterator`1::enumerator
	Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C, ___source_3)); }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * get_source_3() const { return ___source_3; }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C, ___enumerator_5)); }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable_WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Int32>
struct  WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::source
	List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectListIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectListIterator`2::selector
	Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * ___selector_5;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::enumerator
	Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206, ___source_3)); }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * get_source_3() const { return ___source_3; }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206, ___selector_5)); }
	inline Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * get_selector_5() const { return ___selector_5; }
	inline Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206, ___enumerator_6)); }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable_WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>
struct  WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::source
	List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable_WhereSelectListIterator`2::predicate
	Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable_WhereSelectListIterator`2::selector
	Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * ___selector_5;
	// System.Collections.Generic.List`1_Enumerator<TSource> System.Linq.Enumerable_WhereSelectListIterator`2::enumerator
	Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5, ___source_3)); }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * get_source_3() const { return ___source_3; }
	inline List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5, ___predicate_4)); }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5, ___selector_5)); }
	inline Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5, ___enumerator_6)); }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t80CB8D030FD18DCF943CD415F8AE03873642CB90  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD  : public RuntimeArray
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
// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>[]
struct KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  m_Items[1];

public:
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t83B2885C02C836E233B38F12A0F13CDC8DBE3ED1  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
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



// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskFactory::CheckFromAsyncOptions(System.Threading.Tasks.TaskCreationOptions,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskFactory_CheckFromAsyncOptions_m057FCAC407F10FB9157BA7D3A38963EAD250B3A8 (int32_t ___creationOptions0, bool ___hasBeginMethod1, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.AsyncCausalityTracer::get_LoggingOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15 (const RuntimeMethod* method);
// System.Int32 System.Threading.Tasks.Task::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227 (Delegate_t * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncCausalityTracer::TraceOperationCreation(System.Threading.Tasks.CausalityTraceLevel,System.Int32,System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void AsyncCausalityTracer_TraceOperationCreation_m3A018DC27992C4559B10283C06CC11513825898A (int32_t ___traceLevel0, int32_t ___taskId1, String_t* ___operationName2, uint64_t ___relatedContext3, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::AddToActiveTasks(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_AddToActiveTasks_m29D7B0C1AD029D86736A92EC7E36BE87209748FD (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, const RuntimeMethod* method);
// System.Void System.Threading.AtomicBoolean::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtomicBoolean__ctor_m70B7B7EDDDEAD330A6C718C65C94223DFAB859D7 (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * __this, const RuntimeMethod* method);
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05 (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Threading.AtomicBoolean::TryRelaxedSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AtomicBoolean_TryRelaxedSet_m8C68BF84E34C9F0FFEC851A81453C0E1586837FD (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncCausalityTracer::TraceOperationCompletion(System.Threading.Tasks.CausalityTraceLevel,System.Int32,System.Threading.Tasks.AsyncCausalityStatus)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void AsyncCausalityTracer_TraceOperationCompletion_m0C6FCD513830A060B436A11137CE4C7B114F26FC (int32_t ___traceLevel0, int32_t ___taskId1, int32_t ___status2, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::RemoveFromActiveTasks(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_RemoveFromActiveTasks_m04918871919D56DC087D50937093E8FA992CAE3F (int32_t ___taskId0, const RuntimeMethod* method);
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * TaskScheduler_get_Current_m9B2B54B9B43FC6E157E04ABE9151F6A0FF124C01 (const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::CreationOptionsFromContinuationOptions(System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskCreationOptions&,System.Threading.Tasks.InternalTaskOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_CreationOptionsFromContinuationOptions_mB5865DC3CF441EE1681B47B49A747344FDD6631D (int32_t ___continuationOptions0, int32_t* ___creationOptions1, int32_t* ___internalOptions2, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::ContinueWithCore(System.Threading.Tasks.Task,System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_ContinueWithCore_m8C75A57E83C02512E15E4ED205F70EA555F16DDB (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___continuationTask0, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___options3, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsyncImpl<System.Object>(System.Func`4<TArg1,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,System.Action`1<System.IAsyncResult>,TArg1,System.Object,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m681649E0926FAB0B829788CD61146021E9300EB5_gshared (Func_4_t1FB292635292578289C454E038620354E9A7662D * ___beginMethod0, Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * ___endFunction1, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * ___endAction2, RuntimeObject * ___arg13, RuntimeObject * ___state4, int32_t ___creationOptions5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m681649E0926FAB0B829788CD61146021E9300EB5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * V_0 = NULL;
	U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_0 = (U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 *)L_0;
		U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_1 = V_0;
		Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * L_2 = ___endFunction1;
		NullCheck(L_1);
		L_1->set_endFunction_0(L_2);
		U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_3 = V_0;
		Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_4 = ___endAction2;
		NullCheck(L_3);
		L_3->set_endAction_1(L_4);
		Func_4_t1FB292635292578289C454E038620354E9A7662D * L_5 = ___beginMethod0;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, (String_t*)_stringLiteralA7DEB4E83ED6644FBE7C7276D77CAEE0397BF409, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m681649E0926FAB0B829788CD61146021E9300EB5_RuntimeMethod_var);
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_7 = V_0;
		NullCheck(L_7);
		Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * L_8 = (Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED *)L_7->get_endFunction_0();
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_9 = V_0;
		NullCheck(L_9);
		Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_10 = (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_9->get_endAction_1();
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_11 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_11, (String_t*)_stringLiteralC52F77B7D44C96CE5B91F76A3587ACE8C88748FF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m681649E0926FAB0B829788CD61146021E9300EB5_RuntimeMethod_var);
	}

IL_003d:
	{
		int32_t L_12 = ___creationOptions5;
		TaskFactory_CheckFromAsyncOptions_m057FCAC407F10FB9157BA7D3A38963EAD250B3A8((int32_t)L_12, (bool)1, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_13 = V_0;
		RuntimeObject * L_14 = ___state4;
		int32_t L_15 = ___creationOptions5;
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_16 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		((  void (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)(L_16, (RuntimeObject *)L_14, (int32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		NullCheck(L_13);
		L_13->set_promise_2(L_16);
		bool L_17 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0083;
		}
	}
	{
		U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_18 = V_0;
		NullCheck(L_18);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_19 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_18->get_promise_2();
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_19);
		int32_t L_20 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_19, /*hidden argument*/NULL);
		Func_4_t1FB292635292578289C454E038620354E9A7662D * L_21 = ___beginMethod0;
		NullCheck((Delegate_t *)L_21);
		MethodInfo_t * L_22 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_21, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_22);
		String_t* L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B((String_t*)_stringLiteral19A591E076465B264D0FAFC4F98833B0673D6092, (String_t*)L_23, /*hidden argument*/NULL);
		AsyncCausalityTracer_TraceOperationCreation_m3A018DC27992C4559B10283C06CC11513825898A((int32_t)0, (int32_t)L_20, (String_t*)L_24, (uint64_t)(((int64_t)((int64_t)0))), /*hidden argument*/NULL);
	}

IL_0083:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		bool L_25 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_12();
		if (!L_25)
		{
			goto IL_0096;
		}
	}
	{
		U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_26 = V_0;
		NullCheck(L_26);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_27 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_26->get_promise_2();
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_AddToActiveTasks_m29D7B0C1AD029D86736A92EC7E36BE87209748FD((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_27, /*hidden argument*/NULL);
	}

IL_0096:
	{
	}

IL_0097:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var);
			bool L_28 = ((BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields*)il2cpp_codegen_static_fields_for(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var))->get_TargetsAtLeast_Desktop_V4_5_0();
			if (!L_28)
			{
				goto IL_010e;
			}
		}

IL_009e:
		{
			U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD * L_29 = (U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
			((  void (*) (U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
			V_1 = (U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD *)L_29;
			U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD * L_30 = V_1;
			U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_31 = V_0;
			NullCheck(L_30);
			L_30->set_CSU24U3CU3E8__locals1_1(L_31);
			U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD * L_32 = V_1;
			AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * L_33 = (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)il2cpp_codegen_object_new(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E_il2cpp_TypeInfo_var);
			AtomicBoolean__ctor_m70B7B7EDDDEAD330A6C718C65C94223DFAB859D7(L_33, /*hidden argument*/NULL);
			NullCheck(L_32);
			L_32->set_invoked_0(L_33);
			Func_4_t1FB292635292578289C454E038620354E9A7662D * L_34 = ___beginMethod0;
			RuntimeObject * L_35 = ___arg13;
			U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD * L_36 = V_1;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_37 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_37, (RuntimeObject *)L_36, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)), /*hidden argument*/NULL);
			RuntimeObject * L_38 = ___state4;
			NullCheck((Func_4_t1FB292635292578289C454E038620354E9A7662D *)L_34);
			RuntimeObject* L_39 = ((  RuntimeObject* (*) (Func_4_t1FB292635292578289C454E038620354E9A7662D *, RuntimeObject *, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_4_t1FB292635292578289C454E038620354E9A7662D *)L_34, (RuntimeObject *)L_35, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_37, (RuntimeObject *)L_38, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
			V_2 = (RuntimeObject*)L_39;
			RuntimeObject* L_40 = V_2;
			if (!L_40)
			{
				goto IL_0124;
			}
		}

IL_00cf:
		{
			RuntimeObject* L_41 = V_2;
			NullCheck((RuntimeObject*)L_41);
			bool L_42 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
			if (!L_42)
			{
				goto IL_0124;
			}
		}

IL_00d7:
		{
			U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD * L_43 = V_1;
			NullCheck(L_43);
			AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * L_44 = (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_43->get_invoked_0();
			NullCheck((AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_44);
			bool L_45 = AtomicBoolean_TryRelaxedSet_m8C68BF84E34C9F0FFEC851A81453C0E1586837FD((AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_44, /*hidden argument*/NULL);
			if (!L_45)
			{
				goto IL_0124;
			}
		}

IL_00e4:
		{
			RuntimeObject* L_46 = V_2;
			U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD * L_47 = V_1;
			NullCheck(L_47);
			U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_48 = (U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 *)L_47->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_48);
			Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED * L_49 = (Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED *)L_48->get_endFunction_0();
			U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD * L_50 = V_1;
			NullCheck(L_50);
			U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_51 = (U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 *)L_50->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_51);
			Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_52 = (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_51->get_endAction_1();
			U3CU3Ec__DisplayClass38_1_1_t552399FA1D1B7C1362D688E9F48FE786413EB5CD * L_53 = V_1;
			NullCheck(L_53);
			U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_54 = (U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 *)L_53->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_54);
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_55 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_54->get_promise_2();
			((  void (*) (RuntimeObject*, Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED *, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)((RuntimeObject*)L_46, (Func_2_tA1AE73C8EA06E0496989AFDA0F8A2F0AD995A8ED *)L_49, (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_52, (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_55, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
			goto IL_0124;
		}

IL_010e:
		{
			Func_4_t1FB292635292578289C454E038620354E9A7662D * L_56 = ___beginMethod0;
			RuntimeObject * L_57 = ___arg13;
			U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_58 = V_0;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_59 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_59, (RuntimeObject *)L_58, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)), /*hidden argument*/NULL);
			RuntimeObject * L_60 = ___state4;
			NullCheck((Func_4_t1FB292635292578289C454E038620354E9A7662D *)L_56);
			((  RuntimeObject* (*) (Func_4_t1FB292635292578289C454E038620354E9A7662D *, RuntimeObject *, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_4_t1FB292635292578289C454E038620354E9A7662D *)L_56, (RuntimeObject *)L_57, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_59, (RuntimeObject *)L_60, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0124:
		{
			goto IL_016e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0126;
		throw e;
	}

CATCH_0126:
	{ // begin catch(System.Object)
		{
			bool L_61 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
			if (!L_61)
			{
				goto IL_0140;
			}
		}

IL_012e:
		{
			U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_62 = V_0;
			NullCheck(L_62);
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_63 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_62->get_promise_2();
			NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_63);
			int32_t L_64 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_63, /*hidden argument*/NULL);
			AsyncCausalityTracer_TraceOperationCompletion_m0C6FCD513830A060B436A11137CE4C7B114F26FC((int32_t)0, (int32_t)L_64, (int32_t)3, /*hidden argument*/NULL);
		}

IL_0140:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			bool L_65 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_12();
			if (!L_65)
			{
				goto IL_0157;
			}
		}

IL_0147:
		{
			U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_66 = V_0;
			NullCheck(L_66);
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_67 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_66->get_promise_2();
			NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_67);
			int32_t L_68 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_67, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_RemoveFromActiveTasks_m04918871919D56DC087D50937093E8FA992CAE3F((int32_t)L_68, /*hidden argument*/NULL);
		}

IL_0157:
		{
			U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_69 = V_0;
			NullCheck(L_69);
			Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_70 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_69->get_promise_2();
			il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
			RuntimeObject * L_71 = V_3;
			NullCheck((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_70);
			((  bool (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_70, (RuntimeObject *)L_71, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m681649E0926FAB0B829788CD61146021E9300EB5_RuntimeMethod_var);
		}
	} // end catch (depth: 1)

IL_016e:
	{
		U3CU3Ec__DisplayClass38_0_1_t4EE5EE1198F653232215EC4EC24E7CEDF38CF192 * L_72 = V_0;
		NullCheck(L_72);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_73 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_72->get_promise_2();
		return L_73;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Object>::FromAsyncTrim<System.Object,System.Object>(TInstance,TArgs,System.Func`5<TInstance,TArgs,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`3<TInstance,System.IAsyncResult,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskFactory_1_FromAsyncTrim_TisRuntimeObject_TisRuntimeObject_m7288A7165F6A87EBA4E4648BFCB7D8C1D8137F74_gshared (RuntimeObject * ___thisRef0, RuntimeObject * ___args1, Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 * ___beginMethod2, Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC * ___endMethod3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory_1_FromAsyncTrim_TisRuntimeObject_TisRuntimeObject_m7288A7165F6A87EBA4E4648BFCB7D8C1D8137F74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject * L_0 = ___thisRef0;
		Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC * L_1 = ___endMethod3;
		FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF * L_2 = (FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF *, RuntimeObject *, Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_2, (RuntimeObject *)L_0, (Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF *)L_2;
		Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 * L_3 = ___beginMethod2;
		RuntimeObject * L_4 = ___thisRef0;
		RuntimeObject * L_5 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_6 = ((FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))->get_s_completeFromAsyncResult_25();
		FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF * L_7 = V_0;
		NullCheck((Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 *)L_3);
		RuntimeObject* L_8 = ((  RuntimeObject* (*) (Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 *, RuntimeObject *, RuntimeObject *, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((Func_5_tEEE47B3373CAECD385A7F56C0758E08114F398A3 *)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_5, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		V_1 = (RuntimeObject*)L_8;
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck((RuntimeObject*)L_10);
		bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
		if (!L_11)
		{
			goto IL_002c;
		}
	}
	{
		FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF * L_12 = V_0;
		RuntimeObject * L_13 = ___thisRef0;
		Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC * L_14 = ___endMethod3;
		RuntimeObject* L_15 = V_1;
		NullCheck((FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF *)L_12);
		((  void (*) (FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF *, RuntimeObject *, Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC *, RuntimeObject*, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF *)L_12, (RuntimeObject *)L_13, (Func_3_tD88208F8157A1F4E6B2A0891EFF86292E18E11FC *)L_14, (RuntimeObject*)L_15, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
	}

IL_002c:
	{
		FromAsyncTrimPromise_1_t9090736661F00813A22AF88A9910F0275DDEABDF * L_16 = V_0;
		return L_16;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>::FromAsyncImpl<System.Object>(System.Func`4<TArg1,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,System.Action`1<System.IAsyncResult>,TArg1,System.Object,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m5AEB6DDB800286721FD02093457462E80EADE8CD_gshared (Func_4_t1FB292635292578289C454E038620354E9A7662D * ___beginMethod0, Func_2_t93436DB66248BF735350EEC072257D84453153ED * ___endFunction1, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * ___endAction2, RuntimeObject * ___arg13, RuntimeObject * ___state4, int32_t ___creationOptions5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m5AEB6DDB800286721FD02093457462E80EADE8CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * V_0 = NULL;
	U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_0 = (U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC *)L_0;
		U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_1 = V_0;
		Func_2_t93436DB66248BF735350EEC072257D84453153ED * L_2 = ___endFunction1;
		NullCheck(L_1);
		L_1->set_endFunction_0(L_2);
		U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_3 = V_0;
		Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_4 = ___endAction2;
		NullCheck(L_3);
		L_3->set_endAction_1(L_4);
		Func_4_t1FB292635292578289C454E038620354E9A7662D * L_5 = ___beginMethod0;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, (String_t*)_stringLiteralA7DEB4E83ED6644FBE7C7276D77CAEE0397BF409, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m5AEB6DDB800286721FD02093457462E80EADE8CD_RuntimeMethod_var);
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_7 = V_0;
		NullCheck(L_7);
		Func_2_t93436DB66248BF735350EEC072257D84453153ED * L_8 = (Func_2_t93436DB66248BF735350EEC072257D84453153ED *)L_7->get_endFunction_0();
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_9 = V_0;
		NullCheck(L_9);
		Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_10 = (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_9->get_endAction_1();
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_11 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_11, (String_t*)_stringLiteralC52F77B7D44C96CE5B91F76A3587ACE8C88748FF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m5AEB6DDB800286721FD02093457462E80EADE8CD_RuntimeMethod_var);
	}

IL_003d:
	{
		int32_t L_12 = ___creationOptions5;
		TaskFactory_CheckFromAsyncOptions_m057FCAC407F10FB9157BA7D3A38963EAD250B3A8((int32_t)L_12, (bool)1, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_13 = V_0;
		RuntimeObject * L_14 = ___state4;
		int32_t L_15 = ___creationOptions5;
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_16 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		((  void (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)(L_16, (RuntimeObject *)L_14, (int32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		NullCheck(L_13);
		L_13->set_promise_2(L_16);
		bool L_17 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0083;
		}
	}
	{
		U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_18 = V_0;
		NullCheck(L_18);
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_19 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_18->get_promise_2();
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_19);
		int32_t L_20 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_19, /*hidden argument*/NULL);
		Func_4_t1FB292635292578289C454E038620354E9A7662D * L_21 = ___beginMethod0;
		NullCheck((Delegate_t *)L_21);
		MethodInfo_t * L_22 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227((Delegate_t *)L_21, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_22);
		String_t* L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B((String_t*)_stringLiteral19A591E076465B264D0FAFC4F98833B0673D6092, (String_t*)L_23, /*hidden argument*/NULL);
		AsyncCausalityTracer_TraceOperationCreation_m3A018DC27992C4559B10283C06CC11513825898A((int32_t)0, (int32_t)L_20, (String_t*)L_24, (uint64_t)(((int64_t)((int64_t)0))), /*hidden argument*/NULL);
	}

IL_0083:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		bool L_25 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_12();
		if (!L_25)
		{
			goto IL_0096;
		}
	}
	{
		U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_26 = V_0;
		NullCheck(L_26);
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_27 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_26->get_promise_2();
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_AddToActiveTasks_m29D7B0C1AD029D86736A92EC7E36BE87209748FD((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_27, /*hidden argument*/NULL);
	}

IL_0096:
	{
	}

IL_0097:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var);
			bool L_28 = ((BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields*)il2cpp_codegen_static_fields_for(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var))->get_TargetsAtLeast_Desktop_V4_5_0();
			if (!L_28)
			{
				goto IL_010e;
			}
		}

IL_009e:
		{
			U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B * L_29 = (U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
			((  void (*) (U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
			V_1 = (U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B *)L_29;
			U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B * L_30 = V_1;
			U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_31 = V_0;
			NullCheck(L_30);
			L_30->set_CSU24U3CU3E8__locals1_1(L_31);
			U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B * L_32 = V_1;
			AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * L_33 = (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)il2cpp_codegen_object_new(AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E_il2cpp_TypeInfo_var);
			AtomicBoolean__ctor_m70B7B7EDDDEAD330A6C718C65C94223DFAB859D7(L_33, /*hidden argument*/NULL);
			NullCheck(L_32);
			L_32->set_invoked_0(L_33);
			Func_4_t1FB292635292578289C454E038620354E9A7662D * L_34 = ___beginMethod0;
			RuntimeObject * L_35 = ___arg13;
			U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B * L_36 = V_1;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_37 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_37, (RuntimeObject *)L_36, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)), /*hidden argument*/NULL);
			RuntimeObject * L_38 = ___state4;
			NullCheck((Func_4_t1FB292635292578289C454E038620354E9A7662D *)L_34);
			RuntimeObject* L_39 = ((  RuntimeObject* (*) (Func_4_t1FB292635292578289C454E038620354E9A7662D *, RuntimeObject *, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_4_t1FB292635292578289C454E038620354E9A7662D *)L_34, (RuntimeObject *)L_35, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_37, (RuntimeObject *)L_38, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
			V_2 = (RuntimeObject*)L_39;
			RuntimeObject* L_40 = V_2;
			if (!L_40)
			{
				goto IL_0124;
			}
		}

IL_00cf:
		{
			RuntimeObject* L_41 = V_2;
			NullCheck((RuntimeObject*)L_41);
			bool L_42 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
			if (!L_42)
			{
				goto IL_0124;
			}
		}

IL_00d7:
		{
			U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B * L_43 = V_1;
			NullCheck(L_43);
			AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E * L_44 = (AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_43->get_invoked_0();
			NullCheck((AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_44);
			bool L_45 = AtomicBoolean_TryRelaxedSet_m8C68BF84E34C9F0FFEC851A81453C0E1586837FD((AtomicBoolean_tF9325CA9AD434516AF1940D9607CB1009F48B97E *)L_44, /*hidden argument*/NULL);
			if (!L_45)
			{
				goto IL_0124;
			}
		}

IL_00e4:
		{
			RuntimeObject* L_46 = V_2;
			U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B * L_47 = V_1;
			NullCheck(L_47);
			U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_48 = (U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC *)L_47->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_48);
			Func_2_t93436DB66248BF735350EEC072257D84453153ED * L_49 = (Func_2_t93436DB66248BF735350EEC072257D84453153ED *)L_48->get_endFunction_0();
			U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B * L_50 = V_1;
			NullCheck(L_50);
			U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_51 = (U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC *)L_50->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_51);
			Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 * L_52 = (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_51->get_endAction_1();
			U3CU3Ec__DisplayClass38_1_1_t20E06C710F37BD41CD1CA608012530C2B0C6388B * L_53 = V_1;
			NullCheck(L_53);
			U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_54 = (U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC *)L_53->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_54);
			Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_55 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_54->get_promise_2();
			((  void (*) (RuntimeObject*, Func_2_t93436DB66248BF735350EEC072257D84453153ED *, Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *, Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)((RuntimeObject*)L_46, (Func_2_t93436DB66248BF735350EEC072257D84453153ED *)L_49, (Action_1_tA4ED4B57984FE5F6E13A416523D6DF1DD51BEB76 *)L_52, (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_55, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
			goto IL_0124;
		}

IL_010e:
		{
			Func_4_t1FB292635292578289C454E038620354E9A7662D * L_56 = ___beginMethod0;
			RuntimeObject * L_57 = ___arg13;
			U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_58 = V_0;
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_59 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_59, (RuntimeObject *)L_58, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)), /*hidden argument*/NULL);
			RuntimeObject * L_60 = ___state4;
			NullCheck((Func_4_t1FB292635292578289C454E038620354E9A7662D *)L_56);
			((  RuntimeObject* (*) (Func_4_t1FB292635292578289C454E038620354E9A7662D *, RuntimeObject *, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((Func_4_t1FB292635292578289C454E038620354E9A7662D *)L_56, (RuntimeObject *)L_57, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_59, (RuntimeObject *)L_60, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0124:
		{
			goto IL_016e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0126;
		throw e;
	}

CATCH_0126:
	{ // begin catch(System.Object)
		{
			bool L_61 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
			if (!L_61)
			{
				goto IL_0140;
			}
		}

IL_012e:
		{
			U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_62 = V_0;
			NullCheck(L_62);
			Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_63 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_62->get_promise_2();
			NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_63);
			int32_t L_64 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_63, /*hidden argument*/NULL);
			AsyncCausalityTracer_TraceOperationCompletion_m0C6FCD513830A060B436A11137CE4C7B114F26FC((int32_t)0, (int32_t)L_64, (int32_t)3, /*hidden argument*/NULL);
		}

IL_0140:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			bool L_65 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_12();
			if (!L_65)
			{
				goto IL_0157;
			}
		}

IL_0147:
		{
			U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_66 = V_0;
			NullCheck(L_66);
			Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_67 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_66->get_promise_2();
			NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_67);
			int32_t L_68 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_67, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_RemoveFromActiveTasks_m04918871919D56DC087D50937093E8FA992CAE3F((int32_t)L_68, /*hidden argument*/NULL);
		}

IL_0157:
		{
			U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_69 = V_0;
			NullCheck(L_69);
			Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_70 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_69->get_promise_2();
			il2cpp_codegen_initobj((&V_3), sizeof(VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 ));
			VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_71 = V_3;
			NullCheck((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_70);
			((  bool (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_70, (VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 )L_71, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m5AEB6DDB800286721FD02093457462E80EADE8CD_RuntimeMethod_var);
		}
	} // end catch (depth: 1)

IL_016e:
	{
		U3CU3Ec__DisplayClass38_0_1_tE7ED6F1FCDE685657830D5D8584FB9D3EF19C1DC * L_72 = V_0;
		NullCheck(L_72);
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_73 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_72->get_promise_2();
		return L_73;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>::FromAsyncTrim<System.Object,System.IO.Stream_ReadWriteParameters>(TInstance,TArgs,System.Func`5<TInstance,TArgs,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`3<TInstance,System.IAsyncResult,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * TaskFactory_1_FromAsyncTrim_TisRuntimeObject_TisReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_m5C922B333929EFDD969068043559BD32667E93A3_gshared (RuntimeObject * ___thisRef0, ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47  ___args1, Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5 * ___beginMethod2, Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 * ___endMethod3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory_1_FromAsyncTrim_TisRuntimeObject_TisReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47_m5C922B333929EFDD969068043559BD32667E93A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject * L_0 = ___thisRef0;
		Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 * L_1 = ___endMethod3;
		FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 * L_2 = (FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 *, RuntimeObject *, Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_2, (RuntimeObject *)L_0, (Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 *)L_2;
		Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5 * L_3 = ___beginMethod2;
		RuntimeObject * L_4 = ___thisRef0;
		ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47  L_5 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_6 = ((FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 2)))->get_s_completeFromAsyncResult_25();
		FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 * L_7 = V_0;
		NullCheck((Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5 *)L_3);
		RuntimeObject* L_8 = ((  RuntimeObject* (*) (Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5 *, RuntimeObject *, ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47 , AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((Func_5_t584314ADC77AADD2D4860D6AD947D27EC367BFD5 *)L_3, (RuntimeObject *)L_4, (ReadWriteParameters_tA71BF6299932C54DB368B7F5A9BDD9C70908BC47 )L_5, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		V_1 = (RuntimeObject*)L_8;
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck((RuntimeObject*)L_10);
		bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
		if (!L_11)
		{
			goto IL_002c;
		}
	}
	{
		FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 * L_12 = V_0;
		RuntimeObject * L_13 = ___thisRef0;
		Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 * L_14 = ___endMethod3;
		RuntimeObject* L_15 = V_1;
		NullCheck((FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 *)L_12);
		((  void (*) (FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 *, RuntimeObject *, Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 *, RuntimeObject*, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 *)L_12, (RuntimeObject *)L_13, (Func_3_t6BEC8BB244C203C42516FF41C35D7011B5F46354 *)L_14, (RuntimeObject*)L_15, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
	}

IL_002c:
	{
		FromAsyncTrimPromise_1_t52A439C966E495E2F21C9C6FFB8F9C1C897FEA10 * L_16 = V_0;
		return L_16;
	}
}
// System.Threading.Tasks.Task`1<TNewResult> System.Threading.Tasks.Task`1<System.Object>::ContinueWith<System.Object>(System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>,System.Threading.Tasks.TaskContinuationOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_1_ContinueWith_TisRuntimeObject_mD5CEC6CBA0EB70E1C3D7B04196B46C43703A88EF_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6 * ___continuationFunction0, int32_t ___continuationOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1_ContinueWith_TisRuntimeObject_mD5CEC6CBA0EB70E1C3D7B04196B46C43703A88EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (int32_t)1;
		Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6 * L_0 = ___continuationFunction0;
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_1 = TaskScheduler_get_Current_m9B2B54B9B43FC6E157E04ABE9151F6A0FF124C01(/*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = V_1;
		int32_t L_3 = ___continuationOptions1;
		NullCheck((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_4 = ((  Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6 *, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this, (Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6 *)L_0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_1, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_2, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TNewResult> System.Threading.Tasks.Task`1<System.Object>::ContinueWith<System.Object>(System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>,System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions,System.Threading.StackCrawlMark&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_1_ContinueWith_TisRuntimeObject_mDE5CD16304F994F11A35F60DD08F76F578F239FC_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6 * ___continuationFunction0, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___continuationOptions3, int32_t* ___stackMark4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1_ContinueWith_TisRuntimeObject_mDE5CD16304F994F11A35F60DD08F76F578F239FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * V_2 = NULL;
	{
		Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6 * L_0 = ___continuationFunction0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)_stringLiteral295C1C91484E27E03B860FDA8F1EE84730518E64, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Task_1_ContinueWith_TisRuntimeObject_mDE5CD16304F994F11A35F60DD08F76F578F239FC_RuntimeMethod_var);
	}

IL_000e:
	{
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_2 = ___scheduler1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, (String_t*)_stringLiteralA75CF6F408A626E601212712FB539C300D88CDBE, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Task_1_ContinueWith_TisRuntimeObject_mDE5CD16304F994F11A35F60DD08F76F578F239FC_RuntimeMethod_var);
	}

IL_001c:
	{
		int32_t L_4 = ___continuationOptions3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_CreationOptionsFromContinuationOptions_mB5865DC3CF441EE1681B47B49A747344FDD6631D((int32_t)L_4, (int32_t*)(int32_t*)(&V_0), (int32_t*)(int32_t*)(&V_1), /*hidden argument*/NULL);
		Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6 * L_5 = ___continuationFunction0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t* L_8 = ___stackMark4;
		ContinuationResultTaskFromResultTask_2_t04599255F5B221AF375C60B98DCCCA03183073B5 * L_9 = (ContinuationResultTaskFromResultTask_2_t04599255F5B221AF375C60B98DCCCA03183073B5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (ContinuationResultTaskFromResultTask_2_t04599255F5B221AF375C60B98DCCCA03183073B5 *, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, Delegate_t *, RuntimeObject *, int32_t, int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_9, (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this, (Delegate_t *)L_5, (RuntimeObject *)NULL, (int32_t)L_6, (int32_t)L_7, (int32_t*)(int32_t*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_9;
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_10 = V_2;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_11 = ___scheduler1;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_12 = ___cancellationToken2;
		int32_t L_13 = ___continuationOptions3;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_ContinueWithCore_m8C75A57E83C02512E15E4ED205F70EA555F16DDB((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_10, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_11, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_12, (int32_t)L_13, /*hidden argument*/NULL);
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_14 = V_2;
		return L_14;
	}
}
// System.Threading.Tasks.Task`1<TNewResult> System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>::ContinueWith<System.Nullable`1<System.Int32>>(System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>,System.Threading.Tasks.TaskContinuationOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m886398BE05C4ED256B86DABBB5CDE411B95E33A4_gshared (Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * __this, Func_2_tC0E769BCCC22A3633D57CDD9077B40CA1B1F24A2 * ___continuationFunction0, int32_t ___continuationOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m886398BE05C4ED256B86DABBB5CDE411B95E33A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (int32_t)1;
		Func_2_tC0E769BCCC22A3633D57CDD9077B40CA1B1F24A2 * L_0 = ___continuationFunction0;
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_1 = TaskScheduler_get_Current_m9B2B54B9B43FC6E157E04ABE9151F6A0FF124C01(/*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = V_1;
		int32_t L_3 = ___continuationOptions1;
		NullCheck((Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F *)__this);
		Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * L_4 = ((  Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * (*) (Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F *, Func_2_tC0E769BCCC22A3633D57CDD9077B40CA1B1F24A2 *, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F *)__this, (Func_2_tC0E769BCCC22A3633D57CDD9077B40CA1B1F24A2 *)L_0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_1, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_2, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TNewResult> System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>::ContinueWith<System.Nullable`1<System.Int32>>(System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>,System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions,System.Threading.StackCrawlMark&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m5C7EBEA544578715D4178889DC1825922ACBC76E_gshared (Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F * __this, Func_2_tC0E769BCCC22A3633D57CDD9077B40CA1B1F24A2 * ___continuationFunction0, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___continuationOptions3, int32_t* ___stackMark4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m5C7EBEA544578715D4178889DC1825922ACBC76E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * V_2 = NULL;
	{
		Func_2_tC0E769BCCC22A3633D57CDD9077B40CA1B1F24A2 * L_0 = ___continuationFunction0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)_stringLiteral295C1C91484E27E03B860FDA8F1EE84730518E64, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m5C7EBEA544578715D4178889DC1825922ACBC76E_RuntimeMethod_var);
	}

IL_000e:
	{
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_2 = ___scheduler1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, (String_t*)_stringLiteralA75CF6F408A626E601212712FB539C300D88CDBE, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m5C7EBEA544578715D4178889DC1825922ACBC76E_RuntimeMethod_var);
	}

IL_001c:
	{
		int32_t L_4 = ___continuationOptions3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_CreationOptionsFromContinuationOptions_mB5865DC3CF441EE1681B47B49A747344FDD6631D((int32_t)L_4, (int32_t*)(int32_t*)(&V_0), (int32_t*)(int32_t*)(&V_1), /*hidden argument*/NULL);
		Func_2_tC0E769BCCC22A3633D57CDD9077B40CA1B1F24A2 * L_5 = ___continuationFunction0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t* L_8 = ___stackMark4;
		ContinuationResultTaskFromResultTask_2_t978BBB17B79E82EF26D49614633F8F6A1BF4B632 * L_9 = (ContinuationResultTaskFromResultTask_2_t978BBB17B79E82EF26D49614633F8F6A1BF4B632 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (ContinuationResultTaskFromResultTask_2_t978BBB17B79E82EF26D49614633F8F6A1BF4B632 *, Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F *, Delegate_t *, RuntimeObject *, int32_t, int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_9, (Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F *)__this, (Delegate_t *)L_5, (RuntimeObject *)NULL, (int32_t)L_6, (int32_t)L_7, (int32_t*)(int32_t*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 *)L_9;
		Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * L_10 = V_2;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_11 = ___scheduler1;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_12 = ___cancellationToken2;
		int32_t L_13 = ___continuationOptions3;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_ContinueWithCore_m8C75A57E83C02512E15E4ED205F70EA555F16DDB((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_10, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_11, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_12, (int32_t)L_13, /*hidden argument*/NULL);
		Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * L_14 = V_2;
		return L_14;
	}
}
// System.Threading.Tasks.Task`1<TNewResult> System.Threading.Tasks.Task`1<System.Object>::ContinueWith<System.Nullable`1<System.Int32>>(System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>,System.Threading.Tasks.TaskContinuationOptions)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m849AA31EC773855DC22DE22FE9E1CDF41764F042_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Func_2_tC6816526F3327CB168F701FED02EB54522A97009 * ___continuationFunction0, int32_t ___continuationOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_m849AA31EC773855DC22DE22FE9E1CDF41764F042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (int32_t)1;
		Func_2_tC6816526F3327CB168F701FED02EB54522A97009 * L_0 = ___continuationFunction0;
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_1 = TaskScheduler_get_Current_m9B2B54B9B43FC6E157E04ABE9151F6A0FF124C01(/*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = V_1;
		int32_t L_3 = ___continuationOptions1;
		NullCheck((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this);
		Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * L_4 = ((  Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, Func_2_tC6816526F3327CB168F701FED02EB54522A97009 *, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this, (Func_2_tC6816526F3327CB168F701FED02EB54522A97009 *)L_0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_1, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_2, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TNewResult> System.Threading.Tasks.Task`1<System.Object>::ContinueWith<System.Nullable`1<System.Int32>>(System.Func`2<System.Threading.Tasks.Task`1<TResult>,TNewResult>,System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions,System.Threading.StackCrawlMark&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_mBA02015EB4C668DC7E4EB19F11011451DB565069_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Func_2_tC6816526F3327CB168F701FED02EB54522A97009 * ___continuationFunction0, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___continuationOptions3, int32_t* ___stackMark4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_mBA02015EB4C668DC7E4EB19F11011451DB565069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * V_2 = NULL;
	{
		Func_2_tC6816526F3327CB168F701FED02EB54522A97009 * L_0 = ___continuationFunction0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)_stringLiteral295C1C91484E27E03B860FDA8F1EE84730518E64, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_mBA02015EB4C668DC7E4EB19F11011451DB565069_RuntimeMethod_var);
	}

IL_000e:
	{
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_2 = ___scheduler1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, (String_t*)_stringLiteralA75CF6F408A626E601212712FB539C300D88CDBE, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Task_1_ContinueWith_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_mBA02015EB4C668DC7E4EB19F11011451DB565069_RuntimeMethod_var);
	}

IL_001c:
	{
		int32_t L_4 = ___continuationOptions3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_CreationOptionsFromContinuationOptions_mB5865DC3CF441EE1681B47B49A747344FDD6631D((int32_t)L_4, (int32_t*)(int32_t*)(&V_0), (int32_t*)(int32_t*)(&V_1), /*hidden argument*/NULL);
		Func_2_tC6816526F3327CB168F701FED02EB54522A97009 * L_5 = ___continuationFunction0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t* L_8 = ___stackMark4;
		ContinuationResultTaskFromResultTask_2_t824B34AB5675F06CE6CD82F26E6D26A806FBA67E * L_9 = (ContinuationResultTaskFromResultTask_2_t824B34AB5675F06CE6CD82F26E6D26A806FBA67E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (ContinuationResultTaskFromResultTask_2_t824B34AB5675F06CE6CD82F26E6D26A806FBA67E *, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, Delegate_t *, RuntimeObject *, int32_t, int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_9, (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this, (Delegate_t *)L_5, (RuntimeObject *)NULL, (int32_t)L_6, (int32_t)L_7, (int32_t*)(int32_t*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 *)L_9;
		Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * L_10 = V_2;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_11 = ___scheduler1;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_12 = ___cancellationToken2;
		int32_t L_13 = ___continuationOptions3;
		NullCheck((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this);
		Task_ContinueWithCore_m8C75A57E83C02512E15E4ED205F70EA555F16DDB((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)__this, (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_10, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_11, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_12, (int32_t)L_13, /*hidden argument*/NULL);
		Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581 * L_14 = V_2;
		return L_14;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereArrayIterator`1<System.Int32Enum>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Select_TisRuntimeObject_m431CCA1E5AE4D1948AFB489EAEBC0B96F130A9AE_gshared (WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 * __this, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector0, const RuntimeMethod* method)
{
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = ___selector0;
		WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 * L_3 = (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 *, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Select_TisRuntimeObject_m9504CE25C3E0E84756E6B355F52532D2A13D2664_gshared (WhereArrayIterator_1_tE3BAD7E34D2A9AA60EC802539AAC31FE19672C00 * __this, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * ___selector0, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_0 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = ___selector0;
		WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC * L_3 = (WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC *, KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereArrayIterator`1<System.Object>::Select<System.Int32>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEAD253DE8756C809D912F55437F9028D22A7FEAB_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = ___selector0;
		WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * L_3 = (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereArrayIterator`1<System.Object>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Select_TisRuntimeObject_m3F62D1BC0508A986BB7AFE1B34D82A3AE058BAEA_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector0;
		WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * L_3 = (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereEnumerableIterator`1<System.Int32Enum>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Select_TisRuntimeObject_mF0AAA3544D40844741BECC00ED5CC95197B95478_gshared (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 * __this, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = ___selector0;
		WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * L_3 = (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 *, RuntimeObject*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Select_TisRuntimeObject_m0E83EBCE96EE59BF7151CBA18EEEA4A867FD7E1B_gshared (WhereEnumerableIterator_1_tB56F0F39784A63CD77BFE9ADDA590B54FD4FF8C3 * __this, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = ___selector0;
		WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E * L_3 = (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E *, RuntimeObject*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereEnumerableIterator`1<System.Object>::Select<System.Int32>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m969BBA421D4D8A9DC634773E03E343F9332361F5_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = ___selector0;
		WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * L_3 = (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereEnumerableIterator`1<System.Object>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Select_TisRuntimeObject_m86824588E74E4D4FF560E2E0EF019C56C083890D_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector0;
		WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * L_3 = (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereListIterator`1<System.Int32Enum>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Select_TisRuntimeObject_m8B716F0ED6E4F0280AEE75C1EB6029B41E176CE8_gshared (WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B * __this, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = ___selector0;
		WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 * L_3 = (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 *, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Select_TisRuntimeObject_m1F74DB8854E0C990F975D74DFF48F56800EDD5F0_gshared (WhereListIterator_1_tFDC8088A74CE93C49617E637A8F7C3584CF3E55C * __this, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_0 = (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = ___selector0;
		WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 * L_3 = (WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 *, List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereListIterator`1<System.Object>::Select<System.Int32>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2A459A3F86259A6D54ECF62DB609EA327C7FEECE_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = ___selector0;
		WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * L_3 = (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable_WhereListIterator`1<System.Object>::Select<System.Object>(System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Select_TisRuntimeObject_m4531C1631D6A7374AE147B6A1A51D157BD6EA395_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector0;
		WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * L_3 = (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Int32Enum,System.Object>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4A09B750466011E17DD794D74483E0DC23AD168E_gshared (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___selector0;
		Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * L_4 = ((  Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * (*) (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170 * L_5 = (WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectArrayIterator_2_tC76AADC62595ECA1D6ABEEDDBE65F65DCCF32170 *, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Int32Enum,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Select_TisRuntimeObject_m919E581FAF37BAD4AB61672D52CAB36464844A3E_gshared (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_4 = ((  Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * (*) (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 * L_5 = (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectArrayIterator_2_tDD982E4C00D1EB1D48D724D9D548E16386295153 *, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD160769FEC604D4DF0F55775DFC2C8F4E7E597DE_gshared (WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_0 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)__this->get_selector_5();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___selector0;
		Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * L_4 = ((  Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * (*) (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3 * L_5 = (WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectArrayIterator_2_tDDEA569EA6C66C6A640C9E77C08BAD9F0EAD74E3 *, KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Select_TisRuntimeObject_mC5587966AC273F3FF0E11F1A435EA23E91468F39_gshared (WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1* L_0 = (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_4 = ((  Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * (*) (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC * L_5 = (WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectArrayIterator_2_t1A796593B625947F724C74E3B491CE4A38EA21FC *, KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (KeyValuePair_2U5BU5D_t40049C96CFB5BD5D137D1BE836DA259A0759B9F1*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Object,System.Object>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m11012E067634B3CA80A4AFE1ACB38D3EB66C8072_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___selector0;
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_4 = ((  Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * L_5 = (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectArrayIterator`2<System.Object,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Select_TisRuntimeObject_mD506A268CB28E27A66AF4279C67FF2A2FC60480F_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_4 = ((  Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * L_5 = (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m9CF022E0F5C40AA6620E2746A758BC9A398B97F1_gshared (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___selector0;
		Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * L_4 = ((  Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * (*) (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D * L_5 = (WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectEnumerableIterator_2_tA9B0AF285053CF798291D81596CBF7402E5DC83D *, RuntimeObject*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (RuntimeObject*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Int32Enum,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Select_TisRuntimeObject_mA7E0545CC3F9E46440B7DB4FB397389CBA86DA55_gshared (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_4 = ((  Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * (*) (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 * L_5 = (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectEnumerableIterator_2_tE7CB1EB0F91FF8330C8F18AFE379A77EDF9F91F6 *, RuntimeObject*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (RuntimeObject*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m81C03FC59BFE8AD89C567254B9EFC824946CB92A_gshared (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)__this->get_selector_5();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___selector0;
		Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * L_4 = ((  Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * (*) (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B * L_5 = (WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectEnumerableIterator_2_tCCE1DEEA796BDB2BBCB48A841D588ACABE70293B *, RuntimeObject*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (RuntimeObject*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Select_TisRuntimeObject_m84992DED5112A183AB6266267C1C4BE5F7CBB718_gshared (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_4 = ((  Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * (*) (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E * L_5 = (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectEnumerableIterator_2_tCC2B7B43ED8C156059ED24A029FFD747AB48B83E *, RuntimeObject*, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (RuntimeObject*)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Object,System.Object>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mD57F2888912DADAD5F373D04BB281F73504C38B6_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___selector0;
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_4 = ((  Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * L_5 = (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectEnumerableIterator`2<System.Object,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Select_TisRuntimeObject_m235EF3D30EA338CBBA7505DC21C0A5E844439E3E_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_4 = ((  Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * L_5 = (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectListIterator`2<System.Int32Enum,System.Object>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC1774D2A2D1C9EC6C4D7A0798D202BF4495F5D62_gshared (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___selector0;
		Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * L_4 = ((  Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F * (*) (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB * L_5 = (WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectListIterator_2_tDE3E77E7CCECD8BBCA59A7362558E7375B8BD9EB *, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tD04FB815631FDCAD604C98A824D9EAB26A1EDD6F *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectListIterator`2<System.Int32Enum,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Select_TisRuntimeObject_m5276F00B9A0656D99820C5DD7EBBEF6ADFA26372_gshared (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_2 = (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * L_4 = ((  Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB * (*) (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 * L_5 = (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectListIterator_2_t5F082584C1A03211ACA908D2D073C1D6149B14A8 *, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_tF916A06E36F9340A8A2E0053D6A8F0737C5FD2EB *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mEC72476AF8A6579198DD18B3E764EE8A1F62C156_gshared (WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_0 = (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)__this->get_selector_5();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___selector0;
		Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * L_4 = ((  Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A * (*) (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206 * L_5 = (WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectListIterator_2_t52A6A967C96870580E760C63CA865F752FC34206 *, List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t3015CFE760CBA407D2190A4AF387E62ADE46988A *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Select_TisRuntimeObject_m01711E7FC2BE92C53B4CD71A8486276E50C5E611_gshared (WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A * L_0 = (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)__this->get_source_3();
		Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF * L_1 = (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)__this->get_predicate_4();
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_2 = (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * L_4 = ((  Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 * (*) (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 * L_5 = (WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectListIterator_2_t08E0DE5B8AD49FF2B549CA3394B8E63383823CD5 *, List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *, Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *, Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (List_1_t599BCD8727FB82D15062F8EEAE30369200F21D4A *)L_0, (Func_2_tE09E4150C761F9D53A59A1E9C5DCAB08611BA0CF *)L_1, (Func_2_t072C682C4FCB76401344D9F229447B15D25B30C9 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectListIterator`2<System.Object,System.Object>::Select<System.Int32>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Select_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m58B06E021784D558536220688D35E8A6D2D95B3F_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_3 = ___selector0;
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_4 = ((  Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * L_5 = (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable_WhereSelectListIterator`2<System.Object,System.Object>::Select<System.Object>(System.Func`2<TResult,TResult2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Select_TisRuntimeObject_m57ACB6C6C928322059DE23054FABD1ED74869A58_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_3 = ___selector0;
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_4 = ((  Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * L_5 = (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		((  void (*) (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(L_5, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_5;
	}
}
