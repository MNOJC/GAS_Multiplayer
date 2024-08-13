// Fill out your copyright notice in the Description page of Project Settings.


#include "Attributes/ActorAttributes.h"
#include "Net/UnrealNetwork.h"

void UActorAttributes::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UActorAttributes, Health, OldHealth);
}

void UActorAttributes::OnRep_Energy(const FGameplayAttributeData& OldEnergy)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UActorAttributes, Energy, OldEnergy);
}

void UActorAttributes::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UActorAttributes, Energy, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(UActorAttributes, Health, COND_None, REPNOTIFY_Always)
	
}

void UActorAttributes::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetEnergyAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, 100.0f);
	}

	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, 100.0f);
	}
}


