// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GreyAnimeInstance.generated.h"

/**
 *
 */
UCLASS()
class DESERT_API UGreyAnimeInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;


	UPROPERTY(BlueprintReadOnly)
		class AGreyCharacter* GreyCharacter;

	UPROPERTY(BlueprintReadOnly)
		class UCharacterMovementComponent* GreyCharacterMovement;

	UPROPERTY(BlueprintReadOnly)
		class GroundSpeed;
};
