// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Labwork4/Public/NetAvatar.h"
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

// Begin Class ANetAvatar
void ANetAvatar::StaticRegisterNativesANetAvatar()
{
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetAvatar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetAvatar_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetAvatar, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetAvatar_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetAvatar, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetAvatar_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetAvatar_Statics::NewProp_SpringArm,
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
	nullptr,
	Z_Construct_UClass_ANetAvatar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetAvatar);
ANetAvatar::~ANetAvatar() {}
// End Class ANetAvatar

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Public_NetAvatar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetAvatar, ANetAvatar::StaticClass, TEXT("ANetAvatar"), &Z_Registration_Info_UClass_ANetAvatar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetAvatar), 1635705710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Public_NetAvatar_h_2279461752(TEXT("/Script/Labwork4"),
	Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Public_NetAvatar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Public_NetAvatar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
