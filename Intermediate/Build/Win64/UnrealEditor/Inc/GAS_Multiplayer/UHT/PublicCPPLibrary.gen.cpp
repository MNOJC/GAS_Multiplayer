// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAS_Multiplayer/Public/Library/PublicCPPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePublicCPPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
GAS_MULTIPLAYER_API UClass* Z_Construct_UClass_UPublicCPPLibrary();
GAS_MULTIPLAYER_API UClass* Z_Construct_UClass_UPublicCPPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAS_Multiplayer();
// End Cross Module References

// Begin Class UPublicCPPLibrary Function CalculateNewPos
struct Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos_Statics
{
	struct PublicCPPLibrary_eventCalculateNewPos_Parms
	{
		float DefaultPos;
		float AxisValue;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Library/PublicCPPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultPos;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos_Statics::NewProp_DefaultPos = { "DefaultPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PublicCPPLibrary_eventCalculateNewPos_Parms, DefaultPos), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PublicCPPLibrary_eventCalculateNewPos_Parms, AxisValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PublicCPPLibrary_eventCalculateNewPos_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos_Statics::NewProp_DefaultPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos_Statics::NewProp_AxisValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPublicCPPLibrary, nullptr, "CalculateNewPos", nullptr, nullptr, Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos_Statics::PublicCPPLibrary_eventCalculateNewPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos_Statics::PublicCPPLibrary_eventCalculateNewPos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPublicCPPLibrary::execCalculateNewPos)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultPos);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UPublicCPPLibrary::CalculateNewPos(Z_Param_DefaultPos,Z_Param_AxisValue);
	P_NATIVE_END;
}
// End Class UPublicCPPLibrary Function CalculateNewPos

// Begin Class UPublicCPPLibrary Function GetDynamicAimOffset
struct Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics
{
	struct PublicCPPLibrary_eventGetDynamicAimOffset_Parms
	{
		APlayerController* PlayerController;
		USceneComponent* TargetActor;
		float DeltaSeconds;
		float PitchOffset;
		float YawOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Library/PublicCPPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PublicCPPLibrary_eventGetDynamicAimOffset_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PublicCPPLibrary_eventGetDynamicAimOffset_Parms, TargetActor), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PublicCPPLibrary_eventGetDynamicAimOffset_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::NewProp_PitchOffset = { "PitchOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PublicCPPLibrary_eventGetDynamicAimOffset_Parms, PitchOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::NewProp_YawOffset = { "YawOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PublicCPPLibrary_eventGetDynamicAimOffset_Parms, YawOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::NewProp_DeltaSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::NewProp_PitchOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::NewProp_YawOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPublicCPPLibrary, nullptr, "GetDynamicAimOffset", nullptr, nullptr, Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::PublicCPPLibrary_eventGetDynamicAimOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::PublicCPPLibrary_eventGetDynamicAimOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPublicCPPLibrary::execGetDynamicAimOffset)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_OBJECT(USceneComponent,Z_Param_TargetActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PitchOffset);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_YawOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPublicCPPLibrary::GetDynamicAimOffset(Z_Param_PlayerController,Z_Param_TargetActor,Z_Param_DeltaSeconds,Z_Param_Out_PitchOffset,Z_Param_Out_YawOffset);
	P_NATIVE_END;
}
// End Class UPublicCPPLibrary Function GetDynamicAimOffset

// Begin Class UPublicCPPLibrary
void UPublicCPPLibrary::StaticRegisterNativesUPublicCPPLibrary()
{
	UClass* Class = UPublicCPPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateNewPos", &UPublicCPPLibrary::execCalculateNewPos },
		{ "GetDynamicAimOffset", &UPublicCPPLibrary::execGetDynamicAimOffset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPublicCPPLibrary);
UClass* Z_Construct_UClass_UPublicCPPLibrary_NoRegister()
{
	return UPublicCPPLibrary::StaticClass();
}
struct Z_Construct_UClass_UPublicCPPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Library/PublicCPPLibrary.h" },
		{ "ModuleRelativePath", "Public/Library/PublicCPPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPublicCPPLibrary_CalculateNewPos, "CalculateNewPos" }, // 1150006086
		{ &Z_Construct_UFunction_UPublicCPPLibrary_GetDynamicAimOffset, "GetDynamicAimOffset" }, // 1361136965
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPublicCPPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPublicCPPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GAS_Multiplayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPublicCPPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPublicCPPLibrary_Statics::ClassParams = {
	&UPublicCPPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPublicCPPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPublicCPPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPublicCPPLibrary()
{
	if (!Z_Registration_Info_UClass_UPublicCPPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPublicCPPLibrary.OuterSingleton, Z_Construct_UClass_UPublicCPPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPublicCPPLibrary.OuterSingleton;
}
template<> GAS_MULTIPLAYER_API UClass* StaticClass<UPublicCPPLibrary>()
{
	return UPublicCPPLibrary::StaticClass();
}
UPublicCPPLibrary::UPublicCPPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPublicCPPLibrary);
UPublicCPPLibrary::~UPublicCPPLibrary() {}
// End Class UPublicCPPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Library_PublicCPPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPublicCPPLibrary, UPublicCPPLibrary::StaticClass, TEXT("UPublicCPPLibrary"), &Z_Registration_Info_UClass_UPublicCPPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPublicCPPLibrary), 175987622U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Library_PublicCPPLibrary_h_2889172543(TEXT("/Script/GAS_Multiplayer"),
	Z_CompiledInDeferFile_FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Library_PublicCPPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAS_Multiplayer_Source_GAS_Multiplayer_Public_Library_PublicCPPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
