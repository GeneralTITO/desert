// Fill out your copyright notice in the Description page of Project Settings.


#include "items/item1.h"
#include "desert/DebugMacros.h"



// Sets default values
Aitem1::Aitem1()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aitem1::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void Aitem1::Tick(float DeltaTime)
{

	RunningTime += DeltaTime;

	float DeltaZ = Amplitude * FMath::Sin(RunningTime * TimeConstant);

	AddActorWorldOffset(FVector(0.f, 0.f, DeltaZ));


	// actor moviment (cm/s)
	float MovimentRate = 50.f;
	float RotationRate = 45.f;

	// actual moviment = cm/s * s/frame= cm/frame
	//AddActorWorldOffset(FVector(MovimentRate * DeltaTime, 0.f, 0.f));
	//AddActorWorldRotation(FRotator(0.f, RotationRate * DeltaTime, 0.f));

	DRAW_VECTOR_SingleFrame(GetActorLocation(), GetActorForwardVector() * 100 + GetActorLocation());
	DRAW_SPHERE_SingleFrame(GetActorLocation());
	FVector Location = GetActorLocation();
}

