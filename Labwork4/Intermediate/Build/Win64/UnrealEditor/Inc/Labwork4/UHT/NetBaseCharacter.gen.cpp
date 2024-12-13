// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Labwork4/Private/NetBaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetBaseCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
LABWORK4_API UClass* Z_Construct_UClass_ANetBaseCharacter();
LABWORK4_API UClass* Z_Construct_UClass_ANetBaseCharacter_NoRegister();
LABWORK4_API UEnum* Z_Construct_UEnum_Labwork4_EBodyPart();
LABWORK4_API UScriptStruct* Z_Construct_UScriptStruct_FSBodyPartSelection();
LABWORK4_API UScriptStruct* Z_Construct_UScriptStruct_FSMeshAssetList();
LABWORK4_API UScriptStruct* Z_Construct_UScriptStruct_FSPlayerInfo();
UPackage* Z_Construct_UPackage__Script_Labwork4();
// End Cross Module References

// Begin Enum EBodyPart
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBodyPart;
static UEnum* EBodyPart_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBodyPart.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBodyPart.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Labwork4_EBodyPart, (UObject*)Z_Construct_UPackage__Script_Labwork4(), TEXT("EBodyPart"));
	}
	return Z_Registration_Info_UEnum_EBodyPart.OuterSingleton;
}
template<> LABWORK4_API UEnum* StaticEnum<EBodyPart>()
{
	return EBodyPart_StaticEnum();
}
struct Z_Construct_UEnum_Labwork4_EBodyPart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BP_Beard.Name", "EBodyPart::BP_Beard" },
		{ "BP_Chest.Name", "EBodyPart::BP_Chest" },
		{ "BP_COUNT.Name", "EBodyPart::BP_COUNT" },
		{ "BP_Eye.Name", "EBodyPart::BP_Eye" },
		{ "BP_Face.Name", "EBodyPart::BP_Face" },
		{ "BP_Hair.Name", "EBodyPart::BP_Hair" },
		{ "BP_Hands.Name", "EBodyPart::BP_Hands" },
		{ "BP_Legs.Name", "EBodyPart::BP_Legs" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBodyPart::BP_Face", (int64)EBodyPart::BP_Face },
		{ "EBodyPart::BP_Hair", (int64)EBodyPart::BP_Hair },
		{ "EBodyPart::BP_Chest", (int64)EBodyPart::BP_Chest },
		{ "EBodyPart::BP_Hands", (int64)EBodyPart::BP_Hands },
		{ "EBodyPart::BP_Legs", (int64)EBodyPart::BP_Legs },
		{ "EBodyPart::BP_Beard", (int64)EBodyPart::BP_Beard },
		{ "EBodyPart::BP_Eye", (int64)EBodyPart::BP_Eye },
		{ "EBodyPart::BP_COUNT", (int64)EBodyPart::BP_COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Labwork4_EBodyPart_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Labwork4,
	nullptr,
	"EBodyPart",
	"EBodyPart",
	Z_Construct_UEnum_Labwork4_EBodyPart_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Labwork4_EBodyPart_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Labwork4_EBodyPart_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Labwork4_EBodyPart_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Labwork4_EBodyPart()
{
	if (!Z_Registration_Info_UEnum_EBodyPart.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBodyPart.InnerSingleton, Z_Construct_UEnum_Labwork4_EBodyPart_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBodyPart.InnerSingleton;
}
// End Enum EBodyPart

// Begin ScriptStruct FSMeshAssetList
static_assert(std::is_polymorphic<FSMeshAssetList>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSMeshAssetList cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SMeshAssetList;
class UScriptStruct* FSMeshAssetList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SMeshAssetList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SMeshAssetList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMeshAssetList, (UObject*)Z_Construct_UPackage__Script_Labwork4(), TEXT("SMeshAssetList"));
	}
	return Z_Registration_Info_UScriptStruct_SMeshAssetList.OuterSingleton;
}
template<> LABWORK4_API UScriptStruct* StaticStruct<FSMeshAssetList>()
{
	return FSMeshAssetList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSMeshAssetList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListSkeletal_MetaData[] = {
		{ "Category", "SMeshAssetList" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListStatic_MetaData[] = {
		{ "Category", "SMeshAssetList" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ListSkeletal_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ListSkeletal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ListStatic_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ListStatic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMeshAssetList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSMeshAssetList_Statics::NewProp_ListSkeletal_Inner = { "ListSkeletal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMeshAssetList_Statics::NewProp_ListSkeletal = { "ListSkeletal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSMeshAssetList, ListSkeletal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListSkeletal_MetaData), NewProp_ListSkeletal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSMeshAssetList_Statics::NewProp_ListStatic_Inner = { "ListStatic", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMeshAssetList_Statics::NewProp_ListStatic = { "ListStatic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSMeshAssetList, ListStatic), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListStatic_MetaData), NewProp_ListStatic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMeshAssetList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMeshAssetList_Statics::NewProp_ListSkeletal_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMeshAssetList_Statics::NewProp_ListSkeletal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMeshAssetList_Statics::NewProp_ListStatic_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMeshAssetList_Statics::NewProp_ListStatic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMeshAssetList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMeshAssetList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Labwork4,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"SMeshAssetList",
	Z_Construct_UScriptStruct_FSMeshAssetList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMeshAssetList_Statics::PropPointers),
	sizeof(FSMeshAssetList),
	alignof(FSMeshAssetList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMeshAssetList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSMeshAssetList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSMeshAssetList()
{
	if (!Z_Registration_Info_UScriptStruct_SMeshAssetList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SMeshAssetList.InnerSingleton, Z_Construct_UScriptStruct_FSMeshAssetList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SMeshAssetList.InnerSingleton;
}
// End ScriptStruct FSMeshAssetList

// Begin ScriptStruct FSBodyPartSelection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SBodyPartSelection;
class UScriptStruct* FSBodyPartSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SBodyPartSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SBodyPartSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBodyPartSelection, (UObject*)Z_Construct_UPackage__Script_Labwork4(), TEXT("SBodyPartSelection"));
	}
	return Z_Registration_Info_UScriptStruct_SBodyPartSelection.OuterSingleton;
}
template<> LABWORK4_API UScriptStruct* StaticStruct<FSBodyPartSelection>()
{
	return FSBodyPartSelection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSBodyPartSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Labwork4.EBodyPart" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isFemale_MetaData[] = {
		{ "Category", "SBodyPartSelection" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Indices;
	static void NewProp_isFemale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isFemale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBodyPartSelection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBodyPartSelection_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Indices, FSBodyPartSelection), STRUCT_OFFSET(FSBodyPartSelection, Indices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indices_MetaData), NewProp_Indices_MetaData) };
void Z_Construct_UScriptStruct_FSBodyPartSelection_Statics::NewProp_isFemale_SetBit(void* Obj)
{
	((FSBodyPartSelection*)Obj)->isFemale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBodyPartSelection_Statics::NewProp_isFemale = { "isFemale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSBodyPartSelection), &Z_Construct_UScriptStruct_FSBodyPartSelection_Statics::NewProp_isFemale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isFemale_MetaData), NewProp_isFemale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBodyPartSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBodyPartSelection_Statics::NewProp_Indices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBodyPartSelection_Statics::NewProp_isFemale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBodyPartSelection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBodyPartSelection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Labwork4,
	nullptr,
	&NewStructOps,
	"SBodyPartSelection",
	Z_Construct_UScriptStruct_FSBodyPartSelection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBodyPartSelection_Statics::PropPointers),
	sizeof(FSBodyPartSelection),
	alignof(FSBodyPartSelection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBodyPartSelection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSBodyPartSelection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSBodyPartSelection()
{
	if (!Z_Registration_Info_UScriptStruct_SBodyPartSelection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SBodyPartSelection.InnerSingleton, Z_Construct_UScriptStruct_FSBodyPartSelection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SBodyPartSelection.InnerSingleton;
}
// End ScriptStruct FSBodyPartSelection

// Begin ScriptStruct FSPlayerInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SPlayerInfo;
class UScriptStruct* FSPlayerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SPlayerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SPlayerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSPlayerInfo, (UObject*)Z_Construct_UPackage__Script_Labwork4(), TEXT("SPlayerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SPlayerInfo.OuterSingleton;
}
template<> LABWORK4_API UScriptStruct* StaticStruct<FSPlayerInfo>()
{
	return FSPlayerInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSPlayerInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nickname_MetaData[] = {
		{ "Category", "SPlayerInfo" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyParts_MetaData[] = {
		{ "Category", "SPlayerInfo" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Nickname;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyParts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSPlayerInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSPlayerInfo_Statics::NewProp_Nickname = { "Nickname", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSPlayerInfo, Nickname), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nickname_MetaData), NewProp_Nickname_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSPlayerInfo_Statics::NewProp_BodyParts = { "BodyParts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSPlayerInfo, BodyParts), Z_Construct_UScriptStruct_FSBodyPartSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyParts_MetaData), NewProp_BodyParts_MetaData) }; // 1166118224
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSPlayerInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSPlayerInfo_Statics::NewProp_Nickname,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSPlayerInfo_Statics::NewProp_BodyParts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSPlayerInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSPlayerInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Labwork4,
	nullptr,
	&NewStructOps,
	"SPlayerInfo",
	Z_Construct_UScriptStruct_FSPlayerInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSPlayerInfo_Statics::PropPointers),
	sizeof(FSPlayerInfo),
	alignof(FSPlayerInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSPlayerInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSPlayerInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSPlayerInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SPlayerInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SPlayerInfo.InnerSingleton, Z_Construct_UScriptStruct_FSPlayerInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SPlayerInfo.InnerSingleton;
}
// End ScriptStruct FSPlayerInfo

// Begin Class ANetBaseCharacter Function ChangeBodyPart
struct Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics
{
	struct NetBaseCharacter_eventChangeBodyPart_Parms
	{
		EBodyPart index;
		int32 value;
		bool DirectSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_index_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_value;
	static void NewProp_DirectSet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DirectSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_index_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetBaseCharacter_eventChangeBodyPart_Parms, index), Z_Construct_UEnum_Labwork4_EBodyPart, METADATA_PARAMS(0, nullptr) }; // 3494318627
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetBaseCharacter_eventChangeBodyPart_Parms, value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_DirectSet_SetBit(void* Obj)
{
	((NetBaseCharacter_eventChangeBodyPart_Parms*)Obj)->DirectSet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_DirectSet = { "DirectSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NetBaseCharacter_eventChangeBodyPart_Parms), &Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_DirectSet_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_index_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NewProp_DirectSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetBaseCharacter, nullptr, "ChangeBodyPart", nullptr, nullptr, Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NetBaseCharacter_eventChangeBodyPart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::NetBaseCharacter_eventChangeBodyPart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetBaseCharacter::execChangeBodyPart)
{
	P_GET_ENUM(EBodyPart,Z_Param_index);
	P_GET_PROPERTY(FIntProperty,Z_Param_value);
	P_GET_UBOOL(Z_Param_DirectSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeBodyPart(EBodyPart(Z_Param_index),Z_Param_value,Z_Param_DirectSet);
	P_NATIVE_END;
}
// End Class ANetBaseCharacter Function ChangeBodyPart

// Begin Class ANetBaseCharacter Function ChangeGender
struct Z_Construct_UFunction_ANetBaseCharacter_ChangeGender_Statics
{
	struct NetBaseCharacter_eventChangeGender_Parms
	{
		bool isFemale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isFemale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isFemale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANetBaseCharacter_ChangeGender_Statics::NewProp_isFemale_SetBit(void* Obj)
{
	((NetBaseCharacter_eventChangeGender_Parms*)Obj)->isFemale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANetBaseCharacter_ChangeGender_Statics::NewProp_isFemale = { "isFemale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NetBaseCharacter_eventChangeGender_Parms), &Z_Construct_UFunction_ANetBaseCharacter_ChangeGender_Statics::NewProp_isFemale_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetBaseCharacter_ChangeGender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetBaseCharacter_ChangeGender_Statics::NewProp_isFemale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_ChangeGender_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetBaseCharacter_ChangeGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetBaseCharacter, nullptr, "ChangeGender", nullptr, nullptr, Z_Construct_UFunction_ANetBaseCharacter_ChangeGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_ChangeGender_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANetBaseCharacter_ChangeGender_Statics::NetBaseCharacter_eventChangeGender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_ChangeGender_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetBaseCharacter_ChangeGender_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANetBaseCharacter_ChangeGender_Statics::NetBaseCharacter_eventChangeGender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANetBaseCharacter_ChangeGender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetBaseCharacter_ChangeGender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetBaseCharacter::execChangeGender)
{
	P_GET_UBOOL(Z_Param_isFemale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeGender(Z_Param_isFemale);
	P_NATIVE_END;
}
// End Class ANetBaseCharacter Function ChangeGender

// Begin Class ANetBaseCharacter Function OnRep_PlayerInfoChanged
struct Z_Construct_UFunction_ANetBaseCharacter_OnRep_PlayerInfoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetBaseCharacter_OnRep_PlayerInfoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetBaseCharacter, nullptr, "OnRep_PlayerInfoChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_OnRep_PlayerInfoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetBaseCharacter_OnRep_PlayerInfoChanged_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANetBaseCharacter_OnRep_PlayerInfoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetBaseCharacter_OnRep_PlayerInfoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetBaseCharacter::execOnRep_PlayerInfoChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PlayerInfoChanged();
	P_NATIVE_END;
}
// End Class ANetBaseCharacter Function OnRep_PlayerInfoChanged

// Begin Class ANetBaseCharacter Function SubmitPlayerInfoToServer
struct NetBaseCharacter_eventSubmitPlayerInfoToServer_Parms
{
	FSPlayerInfo Info;
};
static FName NAME_ANetBaseCharacter_SubmitPlayerInfoToServer = FName(TEXT("SubmitPlayerInfoToServer"));
void ANetBaseCharacter::SubmitPlayerInfoToServer(FSPlayerInfo Info)
{
	NetBaseCharacter_eventSubmitPlayerInfoToServer_Parms Parms;
	Parms.Info=Info;
	ProcessEvent(FindFunctionChecked(NAME_ANetBaseCharacter_SubmitPlayerInfoToServer),&Parms);
}
struct Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetBaseCharacter_eventSubmitPlayerInfoToServer_Parms, Info), Z_Construct_UScriptStruct_FSPlayerInfo, METADATA_PARAMS(0, nullptr) }; // 3242322112
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::NewProp_Info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetBaseCharacter, nullptr, "SubmitPlayerInfoToServer", nullptr, nullptr, Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::PropPointers), sizeof(NetBaseCharacter_eventSubmitPlayerInfoToServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(NetBaseCharacter_eventSubmitPlayerInfoToServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANetBaseCharacter::execSubmitPlayerInfoToServer)
{
	P_GET_STRUCT(FSPlayerInfo,Z_Param_Info);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SubmitPlayerInfoToServer_Implementation(Z_Param_Info);
	P_NATIVE_END;
}
// End Class ANetBaseCharacter Function SubmitPlayerInfoToServer

// Begin Class ANetBaseCharacter
void ANetBaseCharacter::StaticRegisterNativesANetBaseCharacter()
{
	UClass* Class = ANetBaseCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeBodyPart", &ANetBaseCharacter::execChangeBodyPart },
		{ "ChangeGender", &ANetBaseCharacter::execChangeGender },
		{ "OnRep_PlayerInfoChanged", &ANetBaseCharacter::execOnRep_PlayerInfoChanged },
		{ "SubmitPlayerInfoToServer", &ANetBaseCharacter::execSubmitPlayerInfoToServer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetBaseCharacter);
UClass* Z_Construct_UClass_ANetBaseCharacter_NoRegister()
{
	return ANetBaseCharacter::StaticClass();
}
struct Z_Construct_UClass_ANetBaseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NetBaseCharacter.h" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartSelection_MetaData[] = {
		{ "Category", "NetBaseCharacter" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartFace_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartHair_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartBeard_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartEyes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartHands_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartLegs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/NetBaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PartSelection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartFace;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartHair;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartBeard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartEyes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartHands;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartLegs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetBaseCharacter_ChangeBodyPart, "ChangeBodyPart" }, // 1978405503
		{ &Z_Construct_UFunction_ANetBaseCharacter_ChangeGender, "ChangeGender" }, // 1981528768
		{ &Z_Construct_UFunction_ANetBaseCharacter_OnRep_PlayerInfoChanged, "OnRep_PlayerInfoChanged" }, // 1909635686
		{ &Z_Construct_UFunction_ANetBaseCharacter_SubmitPlayerInfoToServer, "SubmitPlayerInfoToServer" }, // 3485851590
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetBaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartSelection = { "PartSelection", "OnRep_PlayerInfoChanged", (EPropertyFlags)0x0010000100000024, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetBaseCharacter, PartSelection), Z_Construct_UScriptStruct_FSBodyPartSelection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartSelection_MetaData), NewProp_PartSelection_MetaData) }; // 1166118224
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartFace = { "PartFace", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetBaseCharacter, PartFace), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartFace_MetaData), NewProp_PartFace_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartHair = { "PartHair", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetBaseCharacter, PartHair), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartHair_MetaData), NewProp_PartHair_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartBeard = { "PartBeard", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetBaseCharacter, PartBeard), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartBeard_MetaData), NewProp_PartBeard_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartEyes = { "PartEyes", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetBaseCharacter, PartEyes), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartEyes_MetaData), NewProp_PartEyes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartHands = { "PartHands", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetBaseCharacter, PartHands), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartHands_MetaData), NewProp_PartHands_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartLegs = { "PartLegs", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetBaseCharacter, PartLegs), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartLegs_MetaData), NewProp_PartLegs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetBaseCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartFace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartHair,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartBeard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartEyes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartHands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetBaseCharacter_Statics::NewProp_PartLegs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetBaseCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANetBaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Labwork4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetBaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetBaseCharacter_Statics::ClassParams = {
	&ANetBaseCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANetBaseCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANetBaseCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetBaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetBaseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANetBaseCharacter()
{
	if (!Z_Registration_Info_UClass_ANetBaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetBaseCharacter.OuterSingleton, Z_Construct_UClass_ANetBaseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANetBaseCharacter.OuterSingleton;
}
template<> LABWORK4_API UClass* StaticClass<ANetBaseCharacter>()
{
	return ANetBaseCharacter::StaticClass();
}
void ANetBaseCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PartSelection(TEXT("PartSelection"));
	const bool bIsValid = true
		&& Name_PartSelection == ClassReps[(int32)ENetFields_Private::PartSelection].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANetBaseCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANetBaseCharacter);
ANetBaseCharacter::~ANetBaseCharacter() {}
// End Class ANetBaseCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBodyPart_StaticEnum, TEXT("EBodyPart"), &Z_Registration_Info_UEnum_EBodyPart, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3494318627U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSMeshAssetList::StaticStruct, Z_Construct_UScriptStruct_FSMeshAssetList_Statics::NewStructOps, TEXT("SMeshAssetList"), &Z_Registration_Info_UScriptStruct_SMeshAssetList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSMeshAssetList), 3726270267U) },
		{ FSBodyPartSelection::StaticStruct, Z_Construct_UScriptStruct_FSBodyPartSelection_Statics::NewStructOps, TEXT("SBodyPartSelection"), &Z_Registration_Info_UScriptStruct_SBodyPartSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSBodyPartSelection), 1166118224U) },
		{ FSPlayerInfo::StaticStruct, Z_Construct_UScriptStruct_FSPlayerInfo_Statics::NewStructOps, TEXT("SPlayerInfo"), &Z_Registration_Info_UScriptStruct_SPlayerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSPlayerInfo), 3242322112U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANetBaseCharacter, ANetBaseCharacter::StaticClass, TEXT("ANetBaseCharacter"), &Z_Registration_Info_UClass_ANetBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetBaseCharacter), 1846449613U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_378633445(TEXT("/Script/Labwork4"),
	Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
