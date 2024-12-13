// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetBaseCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBodyPart : uint8;
struct FSPlayerInfo;
#ifdef LABWORK4_NetBaseCharacter_generated_h
#error "NetBaseCharacter.generated.h already included, missing '#pragma once' in NetBaseCharacter.h"
#endif
#define LABWORK4_NetBaseCharacter_generated_h

#define FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMeshAssetList_Statics; \
	LABWORK4_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> LABWORK4_API UScriptStruct* StaticStruct<struct FSMeshAssetList>();

#define FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSBodyPartSelection_Statics; \
	LABWORK4_API static class UScriptStruct* StaticStruct();


template<> LABWORK4_API UScriptStruct* StaticStruct<struct FSBodyPartSelection>();

#define FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSPlayerInfo_Statics; \
	LABWORK4_API static class UScriptStruct* StaticStruct();


template<> LABWORK4_API UScriptStruct* StaticStruct<struct FSPlayerInfo>();

#define FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SubmitPlayerInfoToServer_Implementation(FSPlayerInfo Info); \
	DECLARE_FUNCTION(execOnRep_PlayerInfoChanged); \
	DECLARE_FUNCTION(execSubmitPlayerInfoToServer); \
	DECLARE_FUNCTION(execChangeGender); \
	DECLARE_FUNCTION(execChangeBodyPart);


#define FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_65_CALLBACK_WRAPPERS
#define FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetBaseCharacter(); \
	friend struct Z_Construct_UClass_ANetBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ANetBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Labwork4"), NO_API) \
	DECLARE_SERIALIZER(ANetBaseCharacter) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PartSelection=NETFIELD_REP_START, \
		NETFIELD_REP_END=PartSelection	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_65_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANetBaseCharacter(ANetBaseCharacter&&); \
	ANetBaseCharacter(const ANetBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetBaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetBaseCharacter) \
	NO_API virtual ~ANetBaseCharacter();


#define FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_62_PROLOG
#define FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_65_CALLBACK_WRAPPERS \
	FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_65_INCLASS_NO_PURE_DECLS \
	FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABWORK4_API UClass* StaticClass<class ANetBaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetBaseCharacter_h


#define FOREACH_ENUM_EBODYPART(op) \
	op(EBodyPart::BP_Face) \
	op(EBodyPart::BP_Hair) \
	op(EBodyPart::BP_Chest) \
	op(EBodyPart::BP_Hands) \
	op(EBodyPart::BP_Legs) \
	op(EBodyPart::BP_Beard) \
	op(EBodyPart::BP_Eye) \
	op(EBodyPart::BP_COUNT) 

enum class EBodyPart : uint8;
template<> struct TIsUEnumClass<EBodyPart> { enum { Value = true }; };
template<> LABWORK4_API UEnum* StaticEnum<EBodyPart>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
