// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/PublicCPPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class USceneComponent;
#ifdef GAS_MULTIPLAYER_PublicCPPLibrary_generated_h
#error "PublicCPPLibrary.generated.h already included, missing '#pragma once' in PublicCPPLibrary.h"
#endif
#define GAS_MULTIPLAYER_PublicCPPLibrary_generated_h

#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Library_PublicCPPLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCalculateNewPos); \
	DECLARE_FUNCTION(execGetDynamicAimOffset);


#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Library_PublicCPPLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPublicCPPLibrary(); \
	friend struct Z_Construct_UClass_UPublicCPPLibrary_Statics; \
public: \
	DECLARE_CLASS(UPublicCPPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAS_Multiplayer"), NO_API) \
	DECLARE_SERIALIZER(UPublicCPPLibrary)


#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Library_PublicCPPLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPublicCPPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPublicCPPLibrary(UPublicCPPLibrary&&); \
	UPublicCPPLibrary(const UPublicCPPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPublicCPPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPublicCPPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPublicCPPLibrary) \
	NO_API virtual ~UPublicCPPLibrary();


#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Library_PublicCPPLibrary_h_12_PROLOG
#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Library_PublicCPPLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Library_PublicCPPLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Library_PublicCPPLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Library_PublicCPPLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAS_MULTIPLAYER_API UClass* StaticClass<class UPublicCPPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Library_PublicCPPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
