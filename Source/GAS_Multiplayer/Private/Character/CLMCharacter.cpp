// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/CLMCharacter.h"

// Sets default values
ACLMCharacter::ACLMCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	
}

// Called when the game starts or when spawned
void ACLMCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(AbilitySystemComponent))
	{
		ActorAttributes = AbilitySystemComponent->GetSet<UActorAttributes>();
        
		if (ActorAttributes)
		{
			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(ActorAttributes->GetHealthAttribute()).AddUObject(this, &ACLMCharacter::HealthChanged);
			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(ActorAttributes->GetEnergyAttribute()).AddUObject(this, &ACLMCharacter::EnergyChanged);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("ACLMCharacter::BeginPlay - ActorAttributes is null! Check if the Attribute Set is properly initialized."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("ACLMCharacter::BeginPlay - AbilitySystemComponent is not valid!"));
	}
}

void ACLMCharacter::HealthChanged(const FOnAttributeChangeData& Data)
{
	float Health = Data.NewValue;
	UpdateHealth(Health);
}

void ACLMCharacter::EnergyChanged(const FOnAttributeChangeData& Data)
{
	float Energy = Data.NewValue;
	UE_LOG(LogTemp, Warning, TEXT("EnergyChanged: New Energy = %f"), Energy);
	UpdateEnergy(Energy);
}

// Called every frame
void ACLMCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACLMCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACLMCharacter::UpdateHealth_Implementation(const float NewHealth)
{
	
}

void ACLMCharacter::UpdateEnergy_Implementation(const float NewEnergy)
{
	
}
