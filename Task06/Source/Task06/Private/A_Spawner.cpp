// Fill out your copyright notice in the Description page of Project Settings.

#include "A_Spawner.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/BoxComponent.h"

// Sets default values
AA_Spawner::AA_Spawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(RootComp);
	
	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	BoxComp->SetupAttachment(RootComp);
	BoxComp->SetCollisionProfileName(TEXT("NoCollision"));
}

// Called when the game starts or when spawned
void AA_Spawner::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < SpawnCount; ++i)
	{
		SpawnActor();
	}
}

// Called every frame
void AA_Spawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector AA_Spawner::GetRandomPoint() const
{
	const FVector Origin = BoxComp->GetComponentLocation();
	const FVector Extent = BoxComp->GetScaledBoxExtent();

	return UKismetMathLibrary::RandomPointInBoundingBox(Origin, Extent);
}

void AA_Spawner::SpawnActor()
{
	if(SpawnActorClass.Num() == 0) return;

	FVector SpawnLocation = GetRandomPoint();
	FRotator SpawnRotation = FRotator::ZeroRotator;

	int32 Index = FMath::RandRange(0, SpawnActorClass.Num() - 1);
	TSubclassOf<AActor> ChosenClass = SpawnActorClass[Index];


	GetWorld()->SpawnActor<AActor>(ChosenClass, SpawnLocation, SpawnRotation);
}