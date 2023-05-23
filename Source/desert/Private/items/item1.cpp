// Fill out your copyright notice in the Description page of Project Settings.


#include "items/item1.h"
#include "desert/DebugMacros.h"



// Sets default values
Aitem1::Aitem1()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	RootComponent = ItemMesh;
}

// Called when the game starts or when spawned
void Aitem1::BeginPlay()
{
	Super::BeginPlay();

	int32 Avgint = Avg<int32>(1, 3);
	UE_LOG(LogTemp, Warning, TEXT("Avg of 1 and 3: %d"), Avgint);

	float AvgFloat = Avg<float>(10.5f, 20.5f);
	UE_LOG(LogTemp, Warning, TEXT("Avg of 10.5 and 20.5: %f"), AvgFloat);

}

float Aitem1::TransformedSin()
{
	return  Amplitude * FMath::Sin(RunningTime * TimeConstant);
}

// Called every frame
void Aitem1::Tick(float DeltaTime)
{

	RunningTime += DeltaTime;

	//float DeltaZ = Amplitude * FMath::Sin(RunningTime * TimeConstant);

	//AddActorWorldOffset(FVector(0.f, 0.f, DeltaZ));


	// actor moviment (cm/s)
	float MovimentRate = 50.f;
	float RotationRate = 45.f;

	// actual moviment = cm/s * s/frame= cm/frame
	AddActorWorldOffset(FVector(MovimentRate * DeltaTime, 0.f, 0.f));
	AddActorWorldRotation(FRotator(0.f, TransformedSin(), 0.f));

	//DRAW_VECTOR_SingleFrame(GetActorLocation(), GetActorForwardVector() * 100 + GetActorLocation());
	//DRAW_SPHERE_SingleFrame(GetActorLocation());
	///*FVector Location = GetActorLocation();*/

	//FVector AvgVector = Avg<FVector>(GetActorLocation(), FVector::ZeroVector);
	//DrawDebugLine(GetWorld(), FVector::ZeroVector, GetActorLocation(), FColor::Yellow, false, -1.f,2,5.f );
}

