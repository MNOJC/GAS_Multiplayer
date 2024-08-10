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
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(ActorAttributes->GetHealthAttribute()).AddUObject(this, &ACLMCharacter::HealthChanged);
	}

	
}

void ACLMCharacter::HealthChanged(const FOnAttributeChangeData& Data)
{
	float Health = Data.NewValue;
	UpdateHealth(Health);
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

