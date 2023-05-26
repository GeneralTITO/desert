// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/GreyAnimeInstance.h"
#include "Characters/GraystoneCharacter.h"

void UGreyAnimeInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	GreyCharacter = Cast<AGreyCharacter>(TryGetPawnOwner());
	if (GreyCharacter) {
		GreyCharacter->GetCharacterMovement();
	}


}

void UGreyAnimeInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);
}
