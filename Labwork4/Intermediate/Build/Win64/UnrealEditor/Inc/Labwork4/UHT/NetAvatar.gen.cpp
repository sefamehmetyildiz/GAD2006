// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Labwork4/Public/NetAvatar.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetAvatar() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
LABWORK4_API UClass* Z_Construct_UClass_ANetAvatar();
LABWORK4_API UClass* Z_Construct_UClass_ANetAvatar_NoRegister();
LABWORK4_API UClass* Z_Construct_UClass_ANetBaseCharacter();
UPackage* Z_Construct_UPackage__Script_Labwork4();
// End Cross Module References

// Begin Class ANetAvatar Function OnRep_IsRunning
struct Z_Construct_UFunction_ANetAvatar_OnRep_IsRunning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetAvatar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetAvatar_OnRep_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetAvatar, nullptr, "OnRep_IsRunning", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetAvatar_OnRep_IsRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetAvatar_OnRep_IsRunning_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetAvatar_OnRep_IsRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetAvatar_OnRep_IsRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetAvatar::execOnRep_IsRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsRunning();
	P_NATIVE_END;
}
// End Class ANetAvatar Function OnRep_IsRunning

// Begin Class ANetAvatar Function ServerSetRunning
struct NetAvatar_eventServerSetRunning_Parms
{
	bool bNewRunning;
};
static FName NAME_ANetAvatar_ServerSetRunning = FName(TEXT("ServerSetRunning"));
void ANetAvatar::ServerSetRunning(bool bNewRunning)
{
	NetAvatar_eventServerSetRunning_Parms Parms;
	Parms.bNewRunning=bNewRunning ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_ANetAvatar_ServerSetRunning),&Parms);
}
struct Z_Construct_UFunction_ANetAvatar_ServerSetRunning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetAvatar.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewRunning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANetAvatar_ServerSetRunning_Statics::NewProp_bNewRunning_SetBit(void* Obj)
{
	((NetAvatar_eventServerSetRunning_Parms*)Obj)->bNewRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANetAvatar_ServerSetRunning_Statics::NewProp_bNewRunning = { "bNewRunning", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NetAvatar_eventServerSetRunning_Parms), &Z_Construct_UFunction_ANetAvatar_ServerSetRunning_Statics::NewProp_bNewRunning_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetAvatar_ServerSetRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetAvatar_ServerSetRunning_Statics::NewProp_bNewRunning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetAvatar_ServerSetRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetAvatar_ServerSetRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetAvatar, nullptr, "ServerSetRunning", nullptr, nullptr, Z_Construct_UFunction_ANetAvatar_ServerSetRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetAvatar_ServerSetRunning_Statics::PropPointers), sizeof(NetAvatar_eventServerSetRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetAvatar_ServerSetRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetAvatar_ServerSetRunning_Statics::Function_MetaDataParams) };
static_assert(sizeof(NetAvatar_eventServerSetRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANetAvatar_ServerSetRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetAvatar_ServerSetRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetAvatar::execServerSetRunning)
{
	P_GET_UBOOL(Z_Param_bNewRunning);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetRunning_Validate(Z_Param_bNewRunning))
	{
		RPC_ValidateFailed(TEXT("ServerSetRunning_Validate"));
		return;
	}
	P_THIS->ServerSetRunning_Implementation(Z_Param_bNewRunning);
	P_NATIVE_END;
}
// End Class ANetAvatar Function ServerSetRunning

// Begin Class ANetAvatar
void ANetAvatar::StaticRegisterNativesANetAvatar()
{
	UClass* Class = ANetAvatar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_IsRunning", &ANetAvatar::execOnRep_IsRunning },
		{ "ServerSetRunning", &ANetAvatar::execServerSetRunning },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetAvatar);
UClass* Z_Construct_UClass_ANetAvatar_NoRegister()
{
	return ANetAvatar::StaticClass();
}
struct Z_Construct_UClass_ANetAvatar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NetAvatar.h" },
		{ "ModuleRelativePath", "Public/NetAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "NetAvatar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NetAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "NetAvatar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NetAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRunning_MetaData[] = {
		{ "ModuleRelativePath", "Public/NetAvatar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static void NewProp_bIsRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRunning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetAvatar_OnRep_IsRunning, "OnRep_IsRunning" }, // 3493525002
		{ &Z_Construct_UFunction_ANetAvatar_ServerSetRunning, "ServerSetRunning" }, // 459259551
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetAvatar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetAvatar_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetAvatar, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetAvatar_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetAvatar, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
void Z_Construct_UClass_ANetAvatar_Statics::NewProp_bIsRunning_SetBit(void* Obj)
{
	((ANetAvatar*)Obj)->bIsRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANetAvatar_Statics::NewProp_bIsRunning = { "bIsRunning", "OnRep_IsRunning", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANetAvatar), &Z_Construct_UClass_ANetAvatar_Statics::NewProp_bIsRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRunning_MetaData), NewProp_bIsRunning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetAvatar_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetAvatar_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetAvatar_Statics::NewProp_bIsRunning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetAvatar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANetAvatar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANetBaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Labwork4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetAvatar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetAvatar_Statics::ClassParams = {
	&ANetAvatar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANetAvatar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANetAvatar_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetAvatar_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetAvatar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetAvatar()
{
	if (!Z_Registration_Info_UClass_ANetAvatar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetAvatar.OuterSingleton, Z_Construct_UClass_ANetAvatar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetAvatar.OuterSingleton;
}
template<> LABWORK4_API UClass* StaticClass<ANetAvatar>()
{
	return ANetAvatar::StaticClass();
}
void ANetAvatar::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bIsRunning(TEXT("bIsRunning"));
	const bool bIsValid = true
		&& Name_bIsRunning == ClassReps[(int32)ENetFields_Private::bIsRunning].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANetAvatar"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetAvatar);
ANetAvatar::~ANetAvatar() {}
// End Class ANetAvatar

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Public_NetAvatar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetAvatar, ANetAvatar::StaticClass, TEXT("ANetAvatar"), &Z_Registration_Info_UClass_ANetAvatar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetAvatar), 4289263436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Public_NetAvatar_h_3808258208(TEXT("/Script/Labwork4"),
	Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Public_NetAvatar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Public_NetAvatar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
