// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CLMCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAS_MULTIPLAYER_CLMCharacter_generated_h
#error "CLMCharacter.generated.h already included, missing '#pragma once' in CLMCharacter.h"
#endif
#define GAS_MULTIPLAYER_CLMCharacter_generated_h

#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Character_CLMCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateEnergy_Implementation(const float NewEnergy); \
	virtual void UpdateHealth_Implementation(const float NewHealth); \
	DECLARE_FUNCTION(execUpdateEnergy); \
	DECLARE_FUNCTION(execUpdateHealth);


#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Character_CLMCharacter_h_13_CALLBACK_WRAPPERS
#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Character_CLMCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACLMCharacter(); \
	friend struct Z_Construct_UClass_ACLMCharacter_Statics; \
public: \
	DECLARE_CLASS(ACLMCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GAS_Multiplayer"), NO_API) \
	DECLARE_SERIALIZER(ACLMCharacter)


#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Character_CLMCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACLMCharacter(ACLMCharacter&&); \
	ACLMCharacter(const ACLMCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACLMCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACLMCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACLMCharacter) \
	NO_API virtual ~ACLMCharacter();


#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Character_CLMCharacter_h_10_PROLOG
#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Character_CLMCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Character_CLMCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Character_CLMCharacter_h_13_CALLBACK_WRAPPERS \
	FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Character_CLMCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Character_CLMCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAS_MULTIPLAYER_API UClass* StaticClass<class ACLMCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Character_CLMCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
