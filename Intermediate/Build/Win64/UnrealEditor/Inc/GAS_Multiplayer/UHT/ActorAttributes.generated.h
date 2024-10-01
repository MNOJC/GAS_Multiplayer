// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Attributes/ActorAttributes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef GAS_MULTIPLAYER_ActorAttributes_generated_h
#error "ActorAttributes.generated.h already included, missing '#pragma once' in ActorAttributes.h"
#endif
#define GAS_MULTIPLAYER_ActorAttributes_generated_h

#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Attributes_ActorAttributes_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Energy); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Attributes_ActorAttributes_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorAttributes(); \
	friend struct Z_Construct_UClass_UActorAttributes_Statics; \
public: \
	DECLARE_CLASS(UActorAttributes, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GAS_Multiplayer"), NO_API) \
	DECLARE_SERIALIZER(UActorAttributes) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Energy=NETFIELD_REP_START, \
		Health, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UActorAttributes) \
public:


#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Attributes_ActorAttributes_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActorAttributes(UActorAttributes&&); \
	UActorAttributes(const UActorAttributes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorAttributes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorAttributes) \
	NO_API virtual ~UActorAttributes();


#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Attributes_ActorAttributes_h_17_PROLOG
#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Attributes_ActorAttributes_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Attributes_ActorAttributes_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Attributes_ActorAttributes_h_20_INCLASS_NO_PURE_DECLS \
	FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Attributes_ActorAttributes_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAS_MULTIPLAYER_API UClass* StaticClass<class UActorAttributes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Attributes_ActorAttributes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
