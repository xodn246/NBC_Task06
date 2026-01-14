// Fill out your copyright notice in the Description page of Project Settings.


#include "A_RotationActor.h"

// Sets default values
AA_RotationActor::AA_RotationActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(SceneRoot);

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	MeshComp->SetupAttachment(SceneRoot);
}

// Called when the game starts or when spawned
void AA_RotationActor::BeginPlay()
{
	Super::BeginPlay();

	CurrentRotate = GetActorQuat();
	
	if (RandomActor)
	{
		SetRandomParameters();
	}
}

// Called every frame
void AA_RotationActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Rotate(DeltaTime);
}

void  AA_RotationActor::Rotate(float deltaTime) 
{
	FQuat deltaQuat = FQuat::Identity;

	if (ActiveRoll) {
		deltaQuat *= FQuat(FVector::RightVector, FMath::DegreesToRadians(RollSpeed*deltaTime));
	}
	if (ActivePitch) {
		deltaQuat *= FQuat(FVector::UpVector, FMath::DegreesToRadians(PitchSpeed * deltaTime));
	}
	if (ActiveYaw) {
		deltaQuat *= FQuat(FVector::ForwardVector, FMath::DegreesToRadians(YawSpeed * deltaTime));
	}

	CurrentRotate = deltaQuat * CurrentRotate;
	CurrentRotate.Normalize();

	SetActorRotation(CurrentRotate);
}

void AA_RotationActor::SetRandomParameters() 
{
	ActiveRoll = FMath::RandBool();
	ActivePitch = FMath::RandBool();
	ActiveYaw = FMath::RandBool();

	RollSpeed = FMath::RandRange(Random_MinSpeed, Random_MaxSpeed);
	PitchSpeed = FMath::RandRange(Random_MinSpeed, Random_MaxSpeed);
	YawSpeed = FMath::RandRange(Random_MinSpeed, Random_MaxSpeed);
}