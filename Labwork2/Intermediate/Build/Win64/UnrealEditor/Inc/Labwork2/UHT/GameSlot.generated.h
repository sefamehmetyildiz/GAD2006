// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FKey;
#ifdef LABWORK2_GameSlot_generated_h
#error "GameSlot.generated.h already included, missing '#pragma once' in GameSlot.h"
#endif
#define LABWORK2_GameSlot_generated_h

#define FID_GAD2006_GAD2006_Labwork2_Source_Labwork2_Private_GameSlot_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSGridPosition_Statics; \
	LABWORK2_API static class UScriptStruct* StaticStruct();


template<> LABWORK2_API UScriptStruct* StaticStruct<struct FSGridPosition>();

#define FID_GAD2006_GAD2006_Labwork2_Source_Labwork2_Private_GameSlot_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execOnGridClicked);


#define FID_GAD2006_GAD2006_Labwork2_Source_Labwork2_Private_GameSlot_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameSlot(); \
	friend struct Z_Construct_UClass_AGameSlot_Statics; \
public: \
	DECLARE_CLASS(AGameSlot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Labwork2"), NO_API) \
	DECLARE_SERIALIZER(AGameSlot)


#define FID_GAD2006_GAD2006_Labwork2_Source_Labwork2_Private_GameSlot_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGameSlot(AGameSlot&&); \
	AGameSlot(const AGameSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameSlot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameSlot) \
	NO_API virtual ~AGameSlot();


#define FID_GAD2006_GAD2006_Labwork2_Source_Labwork2_Private_GameSlot_h_37_PROLOG
#define FID_GAD2006_GAD2006_Labwork2_Source_Labwork2_Private_GameSlot_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GAD2006_GAD2006_Labwork2_Source_Labwork2_Private_GameSlot_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GAD2006_GAD2006_Labwork2_Source_Labwork2_Private_GameSlot_h_40_INCLASS_NO_PURE_DECLS \
	FID_GAD2006_GAD2006_Labwork2_Source_Labwork2_Private_GameSlot_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABWORK2_API UClass* StaticClass<class AGameSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GAD2006_GAD2006_Labwork2_Source_Labwork2_Private_GameSlot_h


#define FOREACH_ENUM_EGRIDSTATE(op) \
	op(GS_Default) \
	op(GS_Highlighted) \
	op(GS_Offensive) \
	op(GS_Supportive) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
