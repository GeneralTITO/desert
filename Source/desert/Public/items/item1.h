// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "item1.generated.h"

UCLASS()
class DESERT_API Aitem1 : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	Aitem1();
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sine Parameters")
		float Amplitude = 5.f;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Sine Parameters")
		float TimeConstant = 2.f;

	UFUNCTION(BlueprintPure)
		float TransformedSin();

	template<typename T>
	T Avg(T First, T Second);


private:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		float RunningTime;
};

template<typename T>
inline T Aitem1::Avg(T First, T Second)
{
	return (First + Second) / 2;
}
