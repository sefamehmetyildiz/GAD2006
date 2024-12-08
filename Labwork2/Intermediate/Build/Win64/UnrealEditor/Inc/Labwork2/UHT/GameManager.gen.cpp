// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Labwork2/Public/GameManager.h"
#include "Labwork2/Private/GameSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
LABWORK2_API UClass* Z_Construct_UClass_AGameGrid_NoRegister();
LABWORK2_API UClass* Z_Construct_UClass_AGameManager();
LABWORK2_API UClass* Z_Construct_UClass_AGameManager_NoRegister();
LABWORK2_API UClass* Z_Construct_UClass_AUnitBase_NoRegister();
LABWORK2_API UScriptStruct* Z_Construct_UScriptStruct_FSGridPosition();
LABWORK2_API UScriptStruct* Z_Construct_UScriptStruct_FSLevelInfo();
LABWORK2_API UScriptStruct* Z_Construct_UScriptStruct_FSUnitInfo();
UPackage* Z_Construct_UPackage__Script_Labwork2();
// End Cross Module References

// Begin ScriptStruct FSUnitInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SUnitInfo;
class UScriptStruct* FSUnitInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SUnitInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SUnitInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSUnitInfo, (UObject*)Z_Construct_UPackage__Script_Labwork2(), TEXT("SUnitInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SUnitInfo.OuterSingleton;
}
template<> LABWORK2_API UScriptStruct* StaticStruct<FSUnitInfo>()
{
	return FSUnitInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSUnitInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitClass_MetaData[] = {
		{ "Category", "SUnitInfo" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "Category", "SUnitInfo" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_UnitClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSUnitInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSUnitInfo_Statics::NewProp_UnitClass = { "UnitClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSUnitInfo, UnitClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitClass_MetaData), NewProp_UnitClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSUnitInfo_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSUnitInfo, StartPosition), Z_Construct_UScriptStruct_FSGridPosition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) }; // 1664211491
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSUnitInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUnitInfo_Statics::NewProp_UnitClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSUnitInfo_Statics::NewProp_StartPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUnitInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSUnitInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Labwork2,
	nullptr,
	&NewStructOps,
	"SUnitInfo",
	Z_Construct_UScriptStruct_FSUnitInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUnitInfo_Statics::PropPointers),
	sizeof(FSUnitInfo),
	alignof(FSUnitInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSUnitInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSUnitInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSUnitInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SUnitInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SUnitInfo.InnerSingleton, Z_Construct_UScriptStruct_FSUnitInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SUnitInfo.InnerSingleton;
}
// End ScriptStruct FSUnitInfo

// Begin ScriptStruct FSLevelInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SLevelInfo;
class UScriptStruct* FSLevelInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SLevelInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SLevelInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSLevelInfo, (UObject*)Z_Construct_UPackage__Script_Labwork2(), TEXT("SLevelInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SLevelInfo.OuterSingleton;
}
template<> LABWORK2_API UScriptStruct* StaticStruct<FSLevelInfo>()
{
	return FSLevelInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSLevelInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Units_MetaData[] = {
		{ "Category", "SLevelInfo" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Units_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Units;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSLevelInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSLevelInfo_Statics::NewProp_Units_Inner = { "Units", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSUnitInfo, METADATA_PARAMS(0, nullptr) }; // 1735138616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSLevelInfo_Statics::NewProp_Units = { "Units", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSLevelInfo, Units), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Units_MetaData), NewProp_Units_MetaData) }; // 1735138616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSLevelInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSLevelInfo_Statics::NewProp_Units_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSLevelInfo_Statics::NewProp_Units,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSLevelInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSLevelInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Labwork2,
	nullptr,
	&NewStructOps,
	"SLevelInfo",
	Z_Construct_UScriptStruct_FSLevelInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSLevelInfo_Statics::PropPointers),
	sizeof(FSLevelInfo),
	alignof(FSLevelInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSLevelInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSLevelInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSLevelInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SLevelInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SLevelInfo.InnerSingleton, Z_Construct_UScriptStruct_FSLevelInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SLevelInfo.InnerSingleton;
}
// End ScriptStruct FSLevelInfo

// Begin Class AGameManager
void AGameManager::StaticRegisterNativesAGameManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameManager);
UClass* Z_Construct_UClass_AGameManager_NoRegister()
{
	return AGameManager::StaticClass();
}
struct Z_Construct_UClass_AGameManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameManager.h" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "GameManager" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[] = {
		{ "Category", "GameManager" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameGrid_MetaData[] = {
		{ "Category", "GameManager" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Levels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Levels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameGrid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameManager, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_Levels_Inner = { "Levels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSLevelInfo, METADATA_PARAMS(0, nullptr) }; // 745969031
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_Levels = { "Levels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameManager, Levels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Levels_MetaData), NewProp_Levels_MetaData) }; // 745969031
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_GameGrid = { "GameGrid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameManager, GameGrid), Z_Construct_UClass_AGameGrid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameGrid_MetaData), NewProp_GameGrid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_Levels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_Levels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_GameGrid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Labwork2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameManager_Statics::ClassParams = {
	&AGameManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGameManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameManager()
{
	if (!Z_Registration_Info_UClass_AGameManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameManager.OuterSingleton, Z_Construct_UClass_AGameManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameManager.OuterSingleton;
}
template<> LABWORK2_API UClass* StaticClass<AGameManager>()
{
	return AGameManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameManager);
AGameManager::~AGameManager() {}
// End Class AGameManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork2_Source_Labwork2_Public_GameManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSUnitInfo::StaticStruct, Z_Construct_UScriptStruct_FSUnitInfo_Statics::NewStructOps, TEXT("SUnitInfo"), &Z_Registration_Info_UScriptStruct_SUnitInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSUnitInfo), 1735138616U) },
		{ FSLevelInfo::StaticStruct, Z_Construct_UScriptStruct_FSLevelInfo_Statics::NewStructOps, TEXT("SLevelInfo"), &Z_Registration_Info_UScriptStruct_SLevelInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSLevelInfo), 745969031U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameManager, AGameManager::StaticClass, TEXT("AGameManager"), &Z_Registration_Info_UClass_AGameManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameManager), 1921255845U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork2_Source_Labwork2_Public_GameManager_h_340382519(TEXT("/Script/Labwork2"),
	Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork2_Source_Labwork2_Public_GameManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork2_Source_Labwork2_Public_GameManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork2_Source_Labwork2_Public_GameManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork2_Source_Labwork2_Public_GameManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
