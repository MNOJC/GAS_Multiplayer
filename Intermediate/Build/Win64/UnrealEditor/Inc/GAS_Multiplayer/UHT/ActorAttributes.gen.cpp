// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS_Multiplayer/Public/Attributes/ActorAttributes.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorAttributes() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
GAS_MULTIPLAYER_API UClass* Z_Construct_UClass_UActorAttributes();
GAS_MULTIPLAYER_API UClass* Z_Construct_UClass_UActorAttributes_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAS_Multiplayer();
// End Cross Module References

// Begin Class UActorAttributes Function OnRep_Energy
struct Z_Construct_UFunction_UActorAttributes_OnRep_Energy_Statics
{
	struct ActorAttributes_eventOnRep_Energy_Parms
	{
		FGameplayAttributeData OldEnergy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/ActorAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldEnergy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldEnergy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorAttributes_OnRep_Energy_Statics::NewProp_OldEnergy = { "OldEnergy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorAttributes_eventOnRep_Energy_Parms, OldEnergy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldEnergy_MetaData), NewProp_OldEnergy_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorAttributes_OnRep_Energy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorAttributes_OnRep_Energy_Statics::NewProp_OldEnergy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorAttributes_OnRep_Energy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorAttributes_OnRep_Energy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorAttributes, nullptr, "OnRep_Energy", nullptr, nullptr, Z_Construct_UFunction_UActorAttributes_OnRep_Energy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorAttributes_OnRep_Energy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorAttributes_OnRep_Energy_Statics::ActorAttributes_eventOnRep_Energy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorAttributes_OnRep_Energy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorAttributes_OnRep_Energy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UActorAttributes_OnRep_Energy_Statics::ActorAttributes_eventOnRep_Energy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorAttributes_OnRep_Energy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorAttributes_OnRep_Energy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorAttributes::execOnRep_Energy)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldEnergy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Energy(Z_Param_Out_OldEnergy);
	P_NATIVE_END;
}
// End Class UActorAttributes Function OnRep_Energy

// Begin Class UActorAttributes Function OnRep_Health
struct Z_Construct_UFunction_UActorAttributes_OnRep_Health_Statics
{
	struct ActorAttributes_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Attributes/ActorAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorAttributes_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorAttributes_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorAttributes_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorAttributes_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorAttributes_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorAttributes_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorAttributes, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UActorAttributes_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorAttributes_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorAttributes_OnRep_Health_Statics::ActorAttributes_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorAttributes_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorAttributes_OnRep_Health_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UActorAttributes_OnRep_Health_Statics::ActorAttributes_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorAttributes_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorAttributes_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorAttributes::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// End Class UActorAttributes Function OnRep_Health

// Begin Class UActorAttributes
void UActorAttributes::StaticRegisterNativesUActorAttributes()
{
	UClass* Class = UActorAttributes::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Energy", &UActorAttributes::execOnRep_Energy },
		{ "OnRep_Health", &UActorAttributes::execOnRep_Health },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorAttributes);
UClass* Z_Construct_UClass_UActorAttributes_NoRegister()
{
	return UActorAttributes::StaticClass();
}
struct Z_Construct_UClass_UActorAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Attributes/ActorAttributes.h" },
		{ "ModuleRelativePath", "Public/Attributes/ActorAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Energy_MetaData[] = {
		{ "Category", "ActorAttributes" },
		{ "ModuleRelativePath", "Public/Attributes/ActorAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "ActorAttributes" },
		{ "ModuleRelativePath", "Public/Attributes/ActorAttributes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Energy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorAttributes_OnRep_Energy, "OnRep_Energy" }, // 3298654929
		{ &Z_Construct_UFunction_UActorAttributes_OnRep_Health, "OnRep_Health" }, // 667444497
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorAttributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorAttributes_Statics::NewProp_Energy = { "Energy", "OnRep_Energy", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorAttributes, Energy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Energy_MetaData), NewProp_Energy_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorAttributes_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorAttributes, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorAttributes_Statics::NewProp_Energy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorAttributes_Statics::NewProp_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorAttributes_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActorAttributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_GAS_Multiplayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorAttributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorAttributes_Statics::ClassParams = {
	&UActorAttributes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UActorAttributes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UActorAttributes_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorAttributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorAttributes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorAttributes()
{
	if (!Z_Registration_Info_UClass_UActorAttributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorAttributes.OuterSingleton, Z_Construct_UClass_UActorAttributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorAttributes.OuterSingleton;
}
template<> GAS_MULTIPLAYER_API UClass* StaticClass<UActorAttributes>()
{
	return UActorAttributes::StaticClass();
}
void UActorAttributes::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Energy(TEXT("Energy"));
	static const FName Name_Health(TEXT("Health"));
	const bool bIsValid = true
		&& Name_Energy == ClassReps[(int32)ENetFields_Private::Energy].Property->GetFName()
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UActorAttributes"));
}
UActorAttributes::UActorAttributes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorAttributes);
UActorAttributes::~UActorAttributes() {}
// End Class UActorAttributes

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Attributes_ActorAttributes_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorAttributes, UActorAttributes::StaticClass, TEXT("UActorAttributes"), &Z_Registration_Info_UClass_UActorAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorAttributes), 2560430874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Attributes_ActorAttributes_h_1526302311(TEXT("/Script/GAS_Multiplayer"),
	Z_CompiledInDeferFile_FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Attributes_ActorAttributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Attributes_ActorAttributes_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
