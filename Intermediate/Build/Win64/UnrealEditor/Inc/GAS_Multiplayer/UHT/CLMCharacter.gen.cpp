// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS_Multiplayer/Public/Character/CLMCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCLMCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAS_MULTIPLAYER_API UClass* Z_Construct_UClass_ACLMCharacter();
GAS_MULTIPLAYER_API UClass* Z_Construct_UClass_ACLMCharacter_NoRegister();
GAS_MULTIPLAYER_API UClass* Z_Construct_UClass_UActorAttributes_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAS_Multiplayer();
// End Cross Module References

// Begin Class ACLMCharacter Function UpdateEnergy
struct CLMCharacter_eventUpdateEnergy_Parms
{
	float NewEnergy;
};
static FName NAME_ACLMCharacter_UpdateEnergy = FName(TEXT("UpdateEnergy"));
void ACLMCharacter::UpdateEnergy(const float NewEnergy)
{
	CLMCharacter_eventUpdateEnergy_Parms Parms;
	Parms.NewEnergy=NewEnergy;
	ProcessEvent(FindFunctionChecked(NAME_ACLMCharacter_UpdateEnergy),&Parms);
}
struct Z_Construct_UFunction_ACLMCharacter_UpdateEnergy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/CLMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewEnergy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewEnergy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACLMCharacter_UpdateEnergy_Statics::NewProp_NewEnergy = { "NewEnergy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CLMCharacter_eventUpdateEnergy_Parms, NewEnergy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewEnergy_MetaData), NewProp_NewEnergy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACLMCharacter_UpdateEnergy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACLMCharacter_UpdateEnergy_Statics::NewProp_NewEnergy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACLMCharacter_UpdateEnergy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACLMCharacter_UpdateEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACLMCharacter, nullptr, "UpdateEnergy", nullptr, nullptr, Z_Construct_UFunction_ACLMCharacter_UpdateEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACLMCharacter_UpdateEnergy_Statics::PropPointers), sizeof(CLMCharacter_eventUpdateEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACLMCharacter_UpdateEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACLMCharacter_UpdateEnergy_Statics::Function_MetaDataParams) };
static_assert(sizeof(CLMCharacter_eventUpdateEnergy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACLMCharacter_UpdateEnergy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACLMCharacter_UpdateEnergy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACLMCharacter::execUpdateEnergy)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewEnergy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateEnergy_Implementation(Z_Param_NewEnergy);
	P_NATIVE_END;
}
// End Class ACLMCharacter Function UpdateEnergy

// Begin Class ACLMCharacter Function UpdateHealth
struct CLMCharacter_eventUpdateHealth_Parms
{
	float NewHealth;
};
static FName NAME_ACLMCharacter_UpdateHealth = FName(TEXT("UpdateHealth"));
void ACLMCharacter::UpdateHealth(const float NewHealth)
{
	CLMCharacter_eventUpdateHealth_Parms Parms;
	Parms.NewHealth=NewHealth;
	ProcessEvent(FindFunctionChecked(NAME_ACLMCharacter_UpdateHealth),&Parms);
}
struct Z_Construct_UFunction_ACLMCharacter_UpdateHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/CLMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACLMCharacter_UpdateHealth_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CLMCharacter_eventUpdateHealth_Parms, NewHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewHealth_MetaData), NewProp_NewHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACLMCharacter_UpdateHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACLMCharacter_UpdateHealth_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACLMCharacter_UpdateHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACLMCharacter_UpdateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACLMCharacter, nullptr, "UpdateHealth", nullptr, nullptr, Z_Construct_UFunction_ACLMCharacter_UpdateHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACLMCharacter_UpdateHealth_Statics::PropPointers), sizeof(CLMCharacter_eventUpdateHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACLMCharacter_UpdateHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACLMCharacter_UpdateHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(CLMCharacter_eventUpdateHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACLMCharacter_UpdateHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACLMCharacter_UpdateHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACLMCharacter::execUpdateHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateHealth_Implementation(Z_Param_NewHealth);
	P_NATIVE_END;
}
// End Class ACLMCharacter Function UpdateHealth

// Begin Class ACLMCharacter
void ACLMCharacter::StaticRegisterNativesACLMCharacter()
{
	UClass* Class = ACLMCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateEnergy", &ACLMCharacter::execUpdateEnergy },
		{ "UpdateHealth", &ACLMCharacter::execUpdateHealth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACLMCharacter);
UClass* Z_Construct_UClass_ACLMCharacter_NoRegister()
{
	return ACLMCharacter::StaticClass();
}
struct Z_Construct_UClass_ACLMCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/CLMCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/CLMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorAttributes_MetaData[] = {
		{ "Category", "CLMCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/CLMCharacter.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "CLMCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/CLMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorAttributes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACLMCharacter_UpdateEnergy, "UpdateEnergy" }, // 1750654475
		{ &Z_Construct_UFunction_ACLMCharacter_UpdateHealth, "UpdateHealth" }, // 2789278992
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACLMCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACLMCharacter_Statics::NewProp_ActorAttributes = { "ActorAttributes", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACLMCharacter, ActorAttributes), Z_Construct_UClass_UActorAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorAttributes_MetaData), NewProp_ActorAttributes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACLMCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACLMCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACLMCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACLMCharacter_Statics::NewProp_ActorAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACLMCharacter_Statics::NewProp_AbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACLMCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACLMCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GAS_Multiplayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACLMCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACLMCharacter_Statics::ClassParams = {
	&ACLMCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACLMCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACLMCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACLMCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACLMCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACLMCharacter()
{
	if (!Z_Registration_Info_UClass_ACLMCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACLMCharacter.OuterSingleton, Z_Construct_UClass_ACLMCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACLMCharacter.OuterSingleton;
}
template<> GAS_MULTIPLAYER_API UClass* StaticClass<ACLMCharacter>()
{
	return ACLMCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACLMCharacter);
ACLMCharacter::~ACLMCharacter() {}
// End Class ACLMCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Character_CLMCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACLMCharacter, ACLMCharacter::StaticClass, TEXT("ACLMCharacter"), &Z_Registration_Info_UClass_ACLMCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACLMCharacter), 3719181873U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Character_CLMCharacter_h_738212228(TEXT("/Script/GAS_Multiplayer"),
	Z_CompiledInDeferFile_FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Character_CLMCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Character_CLMCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
