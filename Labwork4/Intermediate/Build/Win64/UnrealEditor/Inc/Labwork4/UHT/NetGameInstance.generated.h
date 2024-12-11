// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSPlayerInfo;
#ifdef LABWORK4_NetGameInstance_generated_h
#error "NetGameInstance.generated.h already included, missing '#pragma once' in NetGameInstance.h"
#endif
#define LABWORK4_NetGameInstance_generated_h

#define FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execJoin); \
	DECLARE_FUNCTION(execHost);


#define FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetGameInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetGameInstance(); \
	friend struct Z_Construct_UClass_UNetGameInstance_Statics; \
public: \
	DECLARE_CLASS(UNetGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Labwork4"), NO_API) \
	DECLARE_SERIALIZER(UNetGameInstance)


#define FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetGameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetGameInstance(UNetGameInstance&&); \
	UNetGameInstance(const UNetGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetGameInstance) \
	NO_API virtual ~UNetGameInstance();


#define FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetGameInstance_h_14_PROLOG
#define FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetGameInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetGameInstance_h_17_INCLASS_NO_PURE_DECLS \
	FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetGameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LABWORK4_API UClass* StaticClass<class UNetGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GAD2006_GAD2006_Labwork4_Source_Labwork4_Private_NetGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
