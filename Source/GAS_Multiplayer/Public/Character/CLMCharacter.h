// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Attributes/ActorAttributes.h"
#include "CLMCharacter.generated.h"

UCLASS()
class GAS_MULTIPLAYER_API ACLMCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACLMCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	const UActorAttributes* ActorAttributes;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UAbilitySystemComponent* AbilitySystemComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
