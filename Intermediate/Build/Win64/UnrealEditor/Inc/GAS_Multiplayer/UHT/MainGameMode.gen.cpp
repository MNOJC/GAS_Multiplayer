// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS_Multiplayer/Public/Core/MainGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
GAS_MULTIPLAYER_API UClass* Z_Construct_UClass_AMainGameMode();
GAS_MULTIPLAYER_API UClass* Z_Construct_UClass_AMainGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAS_Multiplayer();
// End Cross Module References

// Begin Class AMainGameMode Function DisconnectClient
struct Z_Construct_UFunction_AMainGameMode_DisconnectClient_Statics
{
	struct MainGameMode_eventDisconnectClient_Parms
	{
		APlayerController* PlayerController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/Core/MainGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainGameMode_DisconnectClient_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameMode_eventDisconnectClient_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGameMode_DisconnectClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameMode_DisconnectClient_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_DisconnectClient_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameMode_DisconnectClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameMode, nullptr, "DisconnectClient", nullptr, nullptr, Z_Construct_UFunction_AMainGameMode_DisconnectClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_DisconnectClient_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainGameMode_DisconnectClient_Statics::MainGameMode_eventDisconnectClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_DisconnectClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameMode_DisconnectClient_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainGameMode_DisconnectClient_Statics::MainGameMode_eventDisconnectClient_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainGameMode_DisconnectClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameMode_DisconnectClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainGameMode::execDisconnectClient)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisconnectClient(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class AMainGameMode Function DisconnectClient

// Begin Class AMainGameMode Function GetServerIP
struct Z_Construct_UFunction_AMainGameMode_GetServerIP_Statics
{
	struct MainGameMode_eventGetServerIP_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/Core/MainGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMainGameMode_GetServerIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainGameMode_eventGetServerIP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGameMode_GetServerIP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGameMode_GetServerIP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_GetServerIP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGameMode_GetServerIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGameMode, nullptr, "GetServerIP", nullptr, nullptr, Z_Construct_UFunction_AMainGameMode_GetServerIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_GetServerIP_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainGameMode_GetServerIP_Statics::MainGameMode_eventGetServerIP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGameMode_GetServerIP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainGameMode_GetServerIP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainGameMode_GetServerIP_Statics::MainGameMode_eventGetServerIP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainGameMode_GetServerIP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainGameMode_GetServerIP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainGameMode::execGetServerIP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetServerIP();
	P_NATIVE_END;
}
// End Class AMainGameMode Function GetServerIP

// Begin Class AMainGameMode
void AMainGameMode::StaticRegisterNativesAMainGameMode()
{
	UClass* Class = AMainGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisconnectClient", &AMainGameMode::execDisconnectClient },
		{ "GetServerIP", &AMainGameMode::execGetServerIP },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainGameMode);
UClass* Z_Construct_UClass_AMainGameMode_NoRegister()
{
	return AMainGameMode::StaticClass();
}
struct Z_Construct_UClass_AMainGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/MainGameMode.h" },
		{ "ModuleRelativePath", "Public/Core/MainGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerControllers_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/Core/MainGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerControllers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerControllers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainGameMode_DisconnectClient, "DisconnectClient" }, // 256988827
		{ &Z_Construct_UFunction_AMainGameMode_GetServerIP, "GetServerIP" }, // 624141073
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_PlayerControllers_Inner = { "PlayerControllers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_PlayerControllers = { "PlayerControllers", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainGameMode, PlayerControllers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerControllers_MetaData), NewProp_PlayerControllers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_PlayerControllers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_PlayerControllers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_GAS_Multiplayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainGameMode_Statics::ClassParams = {
	&AMainGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainGameMode()
{
	if (!Z_Registration_Info_UClass_AMainGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainGameMode.OuterSingleton, Z_Construct_UClass_AMainGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainGameMode.OuterSingleton;
}
template<> GAS_MULTIPLAYER_API UClass* StaticClass<AMainGameMode>()
{
	return AMainGameMode::StaticClass();
}
AMainGameMode::AMainGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGameMode);
AMainGameMode::~AMainGameMode() {}
// End Class AMainGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Core_MainGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainGameMode, AMainGameMode::StaticClass, TEXT("AMainGameMode"), &Z_Registration_Info_UClass_AMainGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainGameMode), 3776378523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Core_MainGameMode_h_99110448(TEXT("/Script/GAS_Multiplayer"),
	Z_CompiledInDeferFile_FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Core_MainGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Core_MainGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
