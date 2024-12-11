// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Labwork4/Private/NetGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
LABWORK4_API UClass* Z_Construct_UClass_ANetGameMode();
LABWORK4_API UClass* Z_Construct_UClass_ANetGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Labwork4();
// End Cross Module References

// Begin Class ANetGameMode
void ANetGameMode::StaticRegisterNativesANetGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetGameMode);
UClass* Z_Construct_UClass_ANetGameMode_NoRegister()
{
	return ANetGameMode::StaticClass();
}
struct Z_Construct_UClass_ANetGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NetGameMode.h" },
		{ "ModuleRelativePath", "Private/NetGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANetGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Labwork4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetGameMode_Statics::ClassParams = {
	&ANetGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetGameMode()
{
	if (!Z_Registration_Info_UClass_ANetGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetGameMode.OuterSingleton, Z_Construct_UClass_ANetGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetGameMode.OuterSingleton;
}
template<> LABWORK4_API UClass* StaticClass<ANetGameMode>()
{
	return ANetGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetGameMode);
ANetGameMode::~ANetGameMode() {}
// End Class ANetGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetGameMode, ANetGameMode::StaticClass, TEXT("ANetGameMode"), &Z_Registration_Info_UClass_ANetGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetGameMode), 181259445U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetGameMode_h_3219724476(TEXT("/Script/Labwork4"),
	Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
