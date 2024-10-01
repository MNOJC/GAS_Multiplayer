// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/LobbyGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef GAS_MULTIPLAYER_LobbyGameMode_generated_h
#error "LobbyGameMode.generated.h already included, missing '#pragma once' in LobbyGameMode.h"
#endif
#define GAS_MULTIPLAYER_LobbyGameMode_generated_h

#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Core_LobbyGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReconnectClient);


#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Core_LobbyGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyGameMode(); \
	friend struct Z_Construct_UClass_ALobbyGameMode_Statics; \
public: \
	DECLARE_CLASS(ALobbyGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GAS_Multiplayer"), NO_API) \
	DECLARE_SERIALIZER(ALobbyGameMode)


#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Core_LobbyGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALobbyGameMode(ALobbyGameMode&&); \
	ALobbyGameMode(const ALobbyGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALobbyGameMode) \
	NO_API virtual ~ALobbyGameMode();


#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Core_LobbyGameMode_h_12_PROLOG
#define FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Core_LobbyGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Core_LobbyGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Core_LobbyGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Core_LobbyGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAS_MULTIPLAYER_API UClass* StaticClass<class ALobbyGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Core_LobbyGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
