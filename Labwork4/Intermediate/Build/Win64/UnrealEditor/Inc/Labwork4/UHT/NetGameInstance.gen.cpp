// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Labwork4/Private/NetGameInstance.h"
#include "Labwork4/Private/NetBaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
LABWORK4_API UClass* Z_Construct_UClass_UNetGameInstance();
LABWORK4_API UClass* Z_Construct_UClass_UNetGameInstance_NoRegister();
LABWORK4_API UScriptStruct* Z_Construct_UScriptStruct_FSPlayerInfo();
UPackage* Z_Construct_UPackage__Script_Labwork4();
// End Cross Module References

// Begin Class UNetGameInstance Function Host
struct Z_Construct_UFunction_UNetGameInstance_Host_Statics
{
	struct NetGameInstance_eventHost_Parms
	{
		FString MapName;
		FSPlayerInfo PlayerInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetGameInstance_Host_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetGameInstance_eventHost_Parms, MapName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetGameInstance_Host_Statics::NewProp_PlayerInfo = { "PlayerInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetGameInstance_eventHost_Parms, PlayerInfo), Z_Construct_UScriptStruct_FSPlayerInfo, METADATA_PARAMS(0, nullptr) }; // 3242322112
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetGameInstance_Host_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetGameInstance_Host_Statics::NewProp_MapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetGameInstance_Host_Statics::NewProp_PlayerInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetGameInstance_Host_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetGameInstance_Host_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetGameInstance, nullptr, "Host", nullptr, nullptr, Z_Construct_UFunction_UNetGameInstance_Host_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetGameInstance_Host_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetGameInstance_Host_Statics::NetGameInstance_eventHost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetGameInstance_Host_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetGameInstance_Host_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetGameInstance_Host_Statics::NetGameInstance_eventHost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetGameInstance_Host()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetGameInstance_Host_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetGameInstance::execHost)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
	P_GET_STRUCT_REF(FSPlayerInfo,Z_Param_Out_PlayerInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Host(Z_Param_MapName,Z_Param_Out_PlayerInfo);
	P_NATIVE_END;
}
// End Class UNetGameInstance Function Host

// Begin Class UNetGameInstance Function Join
struct Z_Construct_UFunction_UNetGameInstance_Join_Statics
{
	struct NetGameInstance_eventJoin_Parms
	{
		FString Address;
		FSPlayerInfo PlayerInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetGameInstance_Join_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetGameInstance_eventJoin_Parms, Address), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetGameInstance_Join_Statics::NewProp_PlayerInfo = { "PlayerInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetGameInstance_eventJoin_Parms, PlayerInfo), Z_Construct_UScriptStruct_FSPlayerInfo, METADATA_PARAMS(0, nullptr) }; // 3242322112
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetGameInstance_Join_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetGameInstance_Join_Statics::NewProp_Address,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetGameInstance_Join_Statics::NewProp_PlayerInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetGameInstance_Join_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetGameInstance_Join_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetGameInstance, nullptr, "Join", nullptr, nullptr, Z_Construct_UFunction_UNetGameInstance_Join_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetGameInstance_Join_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetGameInstance_Join_Statics::NetGameInstance_eventJoin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetGameInstance_Join_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetGameInstance_Join_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetGameInstance_Join_Statics::NetGameInstance_eventJoin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetGameInstance_Join()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetGameInstance_Join_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetGameInstance::execJoin)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Address);
	P_GET_STRUCT_REF(FSPlayerInfo,Z_Param_Out_PlayerInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Join(Z_Param_Address,Z_Param_Out_PlayerInfo);
	P_NATIVE_END;
}
// End Class UNetGameInstance Function Join

// Begin Class UNetGameInstance
void UNetGameInstance::StaticRegisterNativesUNetGameInstance()
{
	UClass* Class = UNetGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Host", &UNetGameInstance::execHost },
		{ "Join", &UNetGameInstance::execJoin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetGameInstance);
UClass* Z_Construct_UClass_UNetGameInstance_NoRegister()
{
	return UNetGameInstance::StaticClass();
}
struct Z_Construct_UClass_UNetGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NetGameInstance.h" },
		{ "ModuleRelativePath", "Private/NetGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInfo_MetaData[] = {
		{ "Category", "NetGameInstance" },
		{ "ModuleRelativePath", "Private/NetGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNetGameInstance_Host, "Host" }, // 795961364
		{ &Z_Construct_UFunction_UNetGameInstance_Join, "Join" }, // 2789449606
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetGameInstance_Statics::NewProp_PlayerInfo = { "PlayerInfo", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetGameInstance, PlayerInfo), Z_Construct_UScriptStruct_FSPlayerInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInfo_MetaData), NewProp_PlayerInfo_MetaData) }; // 3242322112
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetGameInstance_Statics::NewProp_PlayerInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Labwork4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetGameInstance_Statics::ClassParams = {
	&UNetGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNetGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetGameInstance_Statics::PropPointers),
	0,
	0x008000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetGameInstance()
{
	if (!Z_Registration_Info_UClass_UNetGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetGameInstance.OuterSingleton, Z_Construct_UClass_UNetGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetGameInstance.OuterSingleton;
}
template<> LABWORK4_API UClass* StaticClass<UNetGameInstance>()
{
	return UNetGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetGameInstance);
UNetGameInstance::~UNetGameInstance() {}
// End Class UNetGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetGameInstance, UNetGameInstance::StaticClass, TEXT("UNetGameInstance"), &Z_Registration_Info_UClass_UNetGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetGameInstance), 1060877695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetGameInstance_h_4069695982(TEXT("/Script/Labwork4"),
	Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
